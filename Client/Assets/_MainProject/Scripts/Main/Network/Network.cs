using Cysharp.Threading.Tasks;
using Nino.Serialization;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Net.Sockets;
using System.Reflection;
using System.Text;
using UnityEngine;

namespace PostMainland
{
    public class ServerConfig
    {
        public static string Host => "localhost";
        public static int Port => 40001;
    }
    public class Network : Singleton<Network>
    {
        private TcpClient _tcpClient;
        private NetworkStream _stream;
        private byte[] _buffer = new byte[8192];
        List<(ProtocalId id, UniTask<IResponse>)> _waittingTasks = new List<(ProtocalId id, UniTask<IResponse>)>();

        #region Initialize
        protected override async void Initialize()
        {
            base.Initialize();
            ReceiveLoop().Forget();
        }
        private async UniTask ReceiveLoop()
        {
            while (true)
            {
                if (_tcpClient == null || !_tcpClient.Connected)
                {
                    await UniTask.NextFrame();
                }
                int len = await _stream.ReadAsync(_buffer);
                if (len == 0)
                {
                    await UniTask.NextFrame();
                }
                else
                {
                    await UniTask.NextFrame();
                }
            }
        }
        #endregion

        #region Apis
        public async UniTask Connect(string host, int port)
        {
            if (_tcpClient != null && _tcpClient.Connected)
            {
                return;
            }
            _tcpClient = new TcpClient();
            await _tcpClient.ConnectAsync(host, port);
            _stream = _tcpClient.GetStream();
        }
        public async UniTask Send(IMessage message)
        {
            await SendMessageAsync(ProtocalType.Message, message);
        }
        public async UniTask<TRes> Request<TReq, TRes>(TReq message) where TReq : IRequest
        {
            await SendMessageAsync(ProtocalType.Request, message);
        }
        #endregion

        #region Logics

        private async UniTask SendMessageAsync(ProtocalType pType, IProtocal protocal)
        {
            ProtocalId id = GetProtocalId(protocal);
            if (id == ProtocalId.InvalidId)
            {
                throw new Exception($"{protocal.GetType()}µÄ ´íÎó");
            }

            var proto = Serializer.Serialize(protocal);
            var head = BitConverter.GetBytes((uint)id);
            var buffer = head.Concat(proto).ToArray();
            await _stream.WriteAsync(buffer);
        }

        private ProtocalId GetProtocalId(IProtocal protocal)
        {
            ProtocalAttribute protocalAttr = protocal.GetType().GetCustomAttribute<ProtocalAttribute>();
            if (protocalAttr != null)
            {
                return protocalAttr.Id;
            }
            return ProtocalId.InvalidId;
        }
        #endregion
    }

}
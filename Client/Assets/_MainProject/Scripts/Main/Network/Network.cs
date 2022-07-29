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
        Dictionary<long, UniTaskCompletionSource<IResponse>> _waittingRequests = new Dictionary<long, UniTaskCompletionSource<IResponse>>();

        #region Initialize
        protected override void Initialize()
        {
            base.Initialize();
            ReceiveLoop().Forget();
        }
        private async UniTask ReceiveLoop()
        {
            while (true)
            {
                if (_stream == null || _tcpClient == null || !_tcpClient.Connected)
                {
                    await UniTask.NextFrame();
                    continue;
                }
                int len = await _stream.ReadAsync(_buffer);
                if (len == 0)
                {
                    //Do something if need
                }
                else
                {
                    void Reply(byte[] resp)
                    {
                        SendAsync(resp).Forget();
                    }
                    void ResponseCallback(long msgId, IResponse response)
                    {
                        if (_waittingRequests.TryGetValue(msgId, out var source))
                        {
                            source.TrySetResult(response);
                        }
                    }
                    ProtocalHelper.Handle(_buffer.AsSpan().Slice(0, len).ToArray(), Reply, ResponseCallback);
                }
                await UniTask.NextFrame();
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
        public async UniTask SendMessage(IMessage message)
        {
            byte[] buffer = ProtocalHelper.SerializeProtocal(message, 0);
            await SendAsync(buffer);
        }
        public async UniTask<TRes> RequestAsync<TRes>(IRequest request) where TRes : class, IResponse
        {
            long msgId = DateTime.UtcNow.Ticks;//¡Ÿ ±
            byte[] buffer = ProtocalHelper.SerializeProtocal(request, msgId);
            await SendAsync(buffer);
            UniTaskCompletionSource<IResponse> source = new UniTaskCompletionSource<IResponse>();
            _waittingRequests.Add(msgId, source);
            await source.Task;
            _waittingRequests.Remove(msgId);
            return source.GetResult(0) as TRes;
        }
        #endregion

        #region Logics

        private async UniTask SendAsync(byte[] bytes)
        {
            await _stream.WriteAsync(bytes);
        }
        #endregion
    }

}
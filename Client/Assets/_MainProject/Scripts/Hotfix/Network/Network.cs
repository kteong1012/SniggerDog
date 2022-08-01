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
    public class Network : Service, IServiceOnInitNonArgs, INetContext
    {
        private TcpClient _tcpClient;
        private NetworkStream _Stream => _tcpClient.GetStream();
        private byte[] _buffer = new byte[8192];
        private int reconnectTimes = 10;
        Dictionary<long, UniTaskCompletionSource<IResponse>> _waittingRequests = new Dictionary<long, UniTaskCompletionSource<IResponse>>();

        #region Initialize
        public void OnInit()
        {
            ReceiveLoop().Forget();
        }
        private async UniTask ReceiveLoop()
        {
            while (true)
            {
                if (!Connected(false))
                {
                    await UniTask.Yield();
                    continue;
                }
                int len = await _Stream.ReadAsync(_buffer, 0, _buffer.Length);
                if (len == 0)
                {
                    //Do something if need
                }
                else
                {
                    void ResponseCallback(long msgId, IResponse response)
                    {
                        if (_waittingRequests.TryGetValue(msgId, out var source))
                        {
                            source.TrySetResult(response);
                        }
                    }
                    ProtocalHelper.Handle(this, _buffer.AsSpan().Slice(0, len), ResponseCallback);
                }
                await UniTask.Yield();

            }
        }
        #endregion

        #region Apis
        public async UniTask Connect()
        {
            if (Connected(false))
            {
                return;
            }
            _tcpClient = new TcpClient();
            await _tcpClient.ConnectAsync(ServerConfig.Host, ServerConfig.Port);
            var ack = await RequestAsync<S2C_ConnectAck>(new C2S_Connect());
            if (ack.Status == 0)
            {
                Debug.Log(ack.Message);
            }
        }
        public void Disconnect()
        {
            if (Connected())
            {
                _tcpClient.Close();
                _tcpClient.Dispose();
                _tcpClient = null;
                _waittingRequests.Clear();
            }
        }
        public async UniTask SendMessage(IMessage message)
        {
            if (!Connected())
            {
                return;
            }
            byte[] buffer = ProtocalHelper.SerializeProtocal(message, 0);
            await SendAsync(buffer);
        }
        public async UniTask<TRes> RequestAsync<TRes>(IRequest request, float timeout = 200f) where TRes : class, IResponse, new()
        {
            if (!Connected())
            {
                return new TRes() { Error = -404 };
            }
            long msgId = DateTime.UtcNow.Ticks;//临时
            byte[] buffer = ProtocalHelper.SerializeProtocal(request, msgId);
            await SendAsync(buffer);
            UniTaskCompletionSource<IResponse> source = new UniTaskCompletionSource<IResponse>();
            _waittingRequests.Add(msgId, source);
            int index = await UniTask.WhenAny(UniTask.Delay((int)(timeout * 1000)), source.Task);
            _waittingRequests.Remove(msgId);
            if (index == 0)
            {
                //以后换成弹窗
                throw new Exception("请求超时");
                //return new TRes() { Error = -100 };
            }
            return source.GetResult(0) as TRes;
        }
        #endregion

        #region Logics
        private bool Connected(bool logError = true)
        {
            bool result = _tcpClient != null && _tcpClient.Connected;
            if (!result && logError)
            {
                Debug.LogError("未连接");
            }
            return result;
        }

        private async UniTask SendAsync(byte[] data)
        {
            await _Stream.WriteAsync(data);
        }
        #endregion
        #region Interface derive   
        async UniTask INetContext.SendAsync(byte[] data)
        {
            if (!Connected())
            {
                return;
            }
            await SendAsync(data);
        }
        async UniTask INetContext.DisconnectAsync()
        {
            Disconnect();
            await UniTask.CompletedTask;
        }
        #endregion
    }

}
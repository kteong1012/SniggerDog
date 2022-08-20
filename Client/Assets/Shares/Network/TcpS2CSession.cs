using Cysharp.Threading.Tasks;
using System;
using TouchSocket.Sockets;

namespace PostMainland
{
    public class TcpS2CSession : INetworkSession
    {
        private SocketClient _client;

        public TcpS2CSession(SocketClient client)
        {
            _client = client;
        }

        public UniTask<TRes> Request<TRes, TReq>(TReq request, bool check = false)
            where TRes : IResponse
            where TReq : IRequest<TRes>
        {
            //回复消息不会用到Request
            throw new NotImplementedException();
        }

        public void Send<T>(T protocal, bool check = false) where T : IProtocal
        {
            _client.Send(ProtocalRequest.FromProtocal(protocal, check).ToBytes());
        }
    }
}
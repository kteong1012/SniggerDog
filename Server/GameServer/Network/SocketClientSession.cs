using Cysharp.Threading.Tasks;
using TouchSocket.Sockets;

namespace PostMainland
{
    public class SocketClientSession : INetworkSession
    {
        private SocketClient _client;

        public SocketClientSession(SocketClient client)
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
            long msgId = MessageIdGenerator.NextID();
            _client.Send(ProtocalRequest.FromProtocal(protocal, msgId, check).ToBytes());
        }
        public void Send<T>(T protocal, long msgId, bool check = false) where T : IProtocal
        {
            _client.Send(ProtocalRequest.FromProtocal(protocal, msgId, check).ToBytes());
        }
    }
}
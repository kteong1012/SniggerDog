using Cysharp.Threading.Tasks;

namespace PostMainland
{
    public class ServerSocketSession : INetworkSession
    {
        private readonly INetworkSender _sender;

        public ServerSocketSession(INetworkSender sender)
        {
            this._sender = sender;
        }
        public async UniTask<T> Request<T>(IRequest request, int milliTimeout = 2000) where T : IResponse
        {
            await UniTask.CompletedTask;
            return default;
        }

        public void Send<T>(T protocal) where T : IProtocal
        {
            long msgId = MessageIdGenerator.NextID();
            this._sender.Send(protocal, msgId);
        }

        public void Send<T>(T protocal, long msgId) where T : IProtocal
        {
            this._sender.Send(protocal, msgId);
        }
    }
}
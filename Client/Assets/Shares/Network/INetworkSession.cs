using Cysharp.Threading.Tasks;
using TouchSocket.Core.ByteManager;
using TouchSocket.Sockets;

namespace PostMainland
{
    public delegate void ReceiveRequestInfoDelegate(INetworkSender sender, ByteBlock byteBlock, RequestInfo requestInfo);
    public interface INetworkSession
    {
        void Send<T>(T protocal) where T : IProtocal;
        void Send<T>(T protocal,long msgId) where T : IProtocal;
        UniTask<T> Request<T>(IRequest request,int milliTimeout = 2000) where T : IResponse;
    }
}
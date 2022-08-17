using Cysharp.Threading.Tasks;

namespace PostMainland
{
    public interface INetworkService
    {
        UniTask<T> Request<T>(IRequest request, int milliTimeout) where T : IResponse;
        public void Send<T>(T protocal, long msgId) where T : IProtocal;
    }
}
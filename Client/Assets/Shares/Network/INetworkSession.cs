using Cysharp.Threading.Tasks;

namespace PostMainland
{
    public interface INetworkSession
    {
        void Send<T>(T message, bool check = false) where T : IProtocal;
        UniTask<TRes> Request<TRes, TReq>(TReq request, bool check = false, float timeout = 2f) where TRes : IResponse where TReq : IRequest<TRes>;
    }
}
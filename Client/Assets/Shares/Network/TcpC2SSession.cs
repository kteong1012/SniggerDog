using Cysharp.Threading.Tasks;
using PostMainland;
using TouchSocket.Sockets;

namespace PostMainland
{
    public class TcpC2SSession : INetworkSession
    {
        private readonly TcpClientService _service;
        private readonly TcpClient _tcp;

        public TcpC2SSession(TcpClient tcp)
        {
            _tcp = tcp;
        }
        public TcpC2SSession(IPHost host)
        {
            if (!TcpClientServiceManager.Instance.TryGetValue(host.Host, out _service))
            {
                _service = new TcpClientService(host);
                TcpClientServiceManager.Instance.TryAdd(host.Host, _service);
            }
            _tcp = _service.TcpClient;
        }

        public async UniTask<TRes> Request<TRes, TReq>(TReq request, bool check = false, float timeout = 2f) where TRes : IResponse where TReq : IRequest<TRes>
        {
            return await _service.Request<TRes, TReq>(_tcp, request, check, timeout);
        }

        public void Send<T>(T message, bool check = false) where T : IProtocal
        {
            _service.Send(_tcp, message, check);
        }
    }
}

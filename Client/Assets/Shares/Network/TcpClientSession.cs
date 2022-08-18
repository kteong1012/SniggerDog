using Cysharp.Threading.Tasks;
using PostMainland;
using TouchSocket.Sockets;

namespace PostMainland
{
    public class TcpClientSession : INetworkSession
    {
        private readonly ClientTcpService _service;
        private readonly TcpClient _tcp;

        public TcpClientSession(TcpClient tcp)
        {
            _tcp = tcp;
        }
        public TcpClientSession(IPHost host)
        {
            if (!ClientServiceManager.Instance.TryGetValue(host.Host, out _service))
            {
                _service = new ClientTcpService(host);
                ClientServiceManager.Instance.TryAdd(host.Host, _service);
            }
            _tcp = _service.TcpClient;
        }

        public async UniTask<TRes> Request<TRes, TReq>(TReq request, bool check = false) where TRes : IResponse where TReq : IRequest<TRes>
        {
            return await _service.Request<TRes, TReq>(_tcp, request, check);
        }

        public void Send<T>(T message, bool check = false) where T : IProtocal
        {
            _service.Send(_tcp, message, check);
        }

        void INetworkSession.Send<T>(T message, long msgId, bool check)
        {
            _service.Send(_tcp, message, msgId, check);
        }
    }
}

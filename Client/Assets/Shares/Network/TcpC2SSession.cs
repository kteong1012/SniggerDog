using Cysharp.Threading.Tasks;
using PostMainland;
using System;
using TouchSocket.Sockets;

namespace PostMainland
{
    public class TcpC2SSession : INetworkSession, IDisposable
    {
        private readonly TcpClientService _service;
        private readonly TcpClient _tcp;
        public bool IsConnected
        {
            get
            {
                if (_service == null)
                {
                    return false;
                }
                return _service.IsConnected;
            }
        }
        public static async UniTask<TcpC2SSession> GetSession(IPHost host)
        {
            var session = new TcpC2SSession(host);
            if (!session.IsConnected)
            {
                await session._service.ConnectAsync();
            }
            return session;
        }

        public TcpC2SSession(TcpClient tcp)
        {
            _tcp = tcp;
        }
        private TcpC2SSession(IPHost host)
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
        public void Dispose()
        {
            _service.Dispose();
        }
    }
}

using Cysharp.Threading.Tasks;
using TouchSocket.Core.ByteManager;
using TouchSocket.Core.Dependency;
using TouchSocket.Sockets;

namespace PostMainland
{
    public class TcpServerReceiver : INetworkService
    {
        private readonly IContainer _container;
        private readonly INetworkSession _service;
        public ReceiveRequestInfoDelegate ReceiveRequestInfo { get; set; }
        public TcpServerReceiver(IContainer container, TouchSocket.Sockets.TcpService tcpClient, INetworkSession service)
        {
            tcpClient.Received += OnReceived;
            this._container = container;
            this._service = service;
        }
    }
}
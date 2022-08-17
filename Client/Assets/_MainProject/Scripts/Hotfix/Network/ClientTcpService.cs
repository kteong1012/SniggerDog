using Cysharp.Threading.Tasks;
using System;
using System.Collections.Generic;
using TouchSocket.Core.Config;
using TouchSocket.Core.Dependency;
using TouchSocket.Sockets;

namespace PostMainland
{
    public class ClientTcpService : INetworkSession
    {
        private TcpClient _tcpClient;
        private IContainer _container;
        private INetworkSender _sender;
        private INetworkService _receiver;

        public ClientTcpService(IContainer container)
        {
            _container = container;
            _tcpClient = new TcpClient();
            _tcpClient.Connecting += OnConnecting;
            _tcpClient.Connected += OnConnected;
            _tcpClient.Disconnected += OnDisConnected;

            TouchSocketConfig config = new TouchSocketConfig();
            config
                .SetRemoteIPHost(new IPHost("127.0.0.1:10005"))
                .SetDataHandlingAdapter(() => new RequestInfoHeaderHandlingAdapter());
            _tcpClient.Setup(config);
            _sender = new TcpService(_tcpClient);
            _receiver = new TcpClientReceiver(_container, _tcpClient, this);
        }

        private void OnDisConnected(ITcpClientBase client, ClientDisconnectedEventArgs e)
        {
        }

        private void OnConnected(ITcpClient client, MsgEventArgs e)
        {
        }

        private void OnConnecting(ITcpClient client, ClientConnectingEventArgs e)
        {
        }

        public void Connect()
        {
            _tcpClient.Connect();
        }
        public void Disconnect()
        {
            _tcpClient.Dispose();
        }
        public void Send<T>(T protocal) where T : IProtocal
        {
            long msgId = MessageIdGenerator.NextID();
            _sender.Send(protocal, msgId);
        }
        public async UniTask<T> Request<T>(IRequest request, int milliTimeout = 2000) where T : IResponse
        {
            return await _receiver.Request<T>(request, milliTimeout);
        }

        public void Send<T>(T protocal, long msgId) where T : IProtocal
        {
            _sender.Send(protocal, msgId);
        }
    }
}
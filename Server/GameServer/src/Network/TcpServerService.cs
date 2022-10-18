using System;
using System.Net;
using TouchSocket.Core;
using TouchSocket.Core.ByteManager;
using TouchSocket.Core.Config;
using TouchSocket.Core.Dependency;
using TouchSocket.Sockets;

namespace PostMainland
{
    public class TcpServerService
    {
        public bool HasStarted { get; private set; }
        private TcpService _service;
        private IProtocalManagerService _protocalManager;
        private readonly ServerType _serverType;

        public TcpServerService(IProtocalManagerService protocalMgr, ServerType serverType)
        {
            _service = new TcpService();
            _service.Received += OnReceived;
            _service.Connecting += OnConnecting;//有客户端正在连接
            _service.Connected += OnConnected;//有客户端连接
            _service.Disconnected += OnDisconnected;//有客户端断开连接
            _protocalManager = protocalMgr;
            _serverType = serverType;
            HasStarted = false;
        }
        public void Start(string host, int port)
        {
            TouchSocketConfig config = new TouchSocketConfig();
            string hostString = StringUtils.ToIPAddress(host, port);
            Log.Info($"{_serverType}  {host}  {port}");
            config.SetListenIPHosts(new IPHost[] { new IPHost(hostString) })
                .SetDataHandlingAdapter(() => new ProtocalRequestHeaderHandlingAdapter())
                .SetMaxCount(10000)
                .SetThreadCount(10)
                .ConfigurePlugins(a =>
                {

                })
                .ConfigureContainer(a =>
                {

                });
            _service.Setup(config);
            _service.Start();
            HasStarted = true;
            Log.Info($"{_serverType}服务器开始监听{hostString}");
        }

        private void OnReceived(SocketClient client, ByteBlock byteBlock, IRequestInfo requestInfo)
        {
            if (requestInfo is ProtocalRequest pr)
            {
                Type type = _protocalManager.GetProtocalType(pr.Id);
                IProtocal protocal = ProtocalHelper.DeserializeProtocal(type, pr.Body);
                Log.Info($"ServTcpRecv: [{_serverType}] {protocal}");
                switch (pr.Type)
                {
                    case ProtocalType.Request:
                        {
                            var handler = _protocalManager.GetRequestHandler(pr.Id);
                            if (handler != null)
                            {
                                var session = new TcpS2CSession(client);
                                IRequest request = protocal as IRequest;
                                IResponse response = _protocalManager.CreateProtocal(handler.GetResponseId()) as IResponse;
                                ThreadSynchronizationContext.Instance.PostNext(() => handler.Handle(session, ServerCollection.Servers.GetContainer(_serverType), request, response, pr.UseCrc16));
                            }
                        }
                        break;
                    case ProtocalType.Response:
                    case ProtocalType.Protocal:
                    default:
                        {
                            var handler = _protocalManager.GetMessageHandler(pr.Id);
                            if (handler != null)
                            {
                                ThreadSynchronizationContext.Instance.PostNext(() => handler.Handle(new TcpS2CSession(client), pr.Body));
                            }
                        }
                        break;
                }
            }
        }
        private void OnDisconnected(SocketClient client, ClientDisconnectedEventArgs e)
        {
            Log.Info($"{client.ID} 断开连接");
        }

        private void OnConnected(SocketClient client, TouchSocketEventArgs e)
        {
            Log.Info($"{client.ID} 连接成功");
        }

        private void OnConnecting(SocketClient client, ClientOperationEventArgs e)
        {
            Log.Info($"{client.ID} 正在连接");
        }
    }
}
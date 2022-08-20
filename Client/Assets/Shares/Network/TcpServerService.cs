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
        private TcpService _service;
        private IProtocalManagerService _protocalManager;

        public TcpServerService(IProtocalManagerService protocalMgr)
        {
            _service = new TouchSocket.Sockets.TcpService();
            _service.Received += OnReceived;
            _service.Connecting += OnConnecting;//有客户端正在连接
            _service.Connected += OnConnected;//有客户端连接
            _service.Disconnected += OnDisconnected;//有客户端断开连接
            _protocalManager = protocalMgr;
            TouchSocketConfig config = new TouchSocketConfig();
            config.SetListenIPHosts(new IPHost[] { new IPHost("127.0.0.1:10005") })
                .SetDataHandlingAdapter(() => new ProtocalRequestHeaderHandlingAdapter())
                .SetMaxCount(10000)
                .SetThreadCount(10)
                .ConfigurePlugins(a =>
                {

                })
                .ConfigureContainer(a =>
                {

                });
            _service.Setup(config).Start();
        }


        private void OnReceived(SocketClient client, ByteBlock byteBlock, IRequestInfo requestInfo)
        {
            if (requestInfo is ProtocalRequest pr)
            {
                switch (pr.Type)
                {
                    case ProtocalType.Request:
                        {
                            var handler = _protocalManager.GetRequestHandler(pr.Id);
                            if (handler != null)
                            {
                                var session = new TcpS2CSession(client);
                                Type type = _protocalManager.GetProtocalType(pr.Id);
                                IRequest request = ProtocalHelper.DeserializeProtocal(type, pr.Body) as IRequest;
                                IResponse response = _protocalManager.CreateProtocal(handler.GetResponseId()) as IResponse;
                                handler.Handle(session, request, response, pr.UseCrc16);
                            }
                        }
                        break;
                    case ProtocalType.Response:
                        {
                            //DO NOTHING 服务器不会收到Response
                            break;
                        }
                    case ProtocalType.Protocal:
                        {
                            var handler = _protocalManager.GetMessageHandler(pr.Id);
                            if (handler != null)
                            {
                                handler.Handle(new TcpS2CSession(client), pr.Body);
                            }
                        }
                        break;
                    default:
                        break;
                }
            }
        }
        private void OnDisconnected(SocketClient client, ClientDisconnectedEventArgs e)
        {
        }

        private void OnConnected(SocketClient client, TouchSocketEventArgs e)
        {
        }

        private void OnConnecting(SocketClient client, ClientOperationEventArgs e)
        {
        }
    }
}
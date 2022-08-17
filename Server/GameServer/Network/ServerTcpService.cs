using TouchSocket.Core;
using TouchSocket.Core.ByteManager;
using TouchSocket.Core.Config;
using TouchSocket.Core.Dependency;
using TouchSocket.Sockets;

namespace PostMainland
{
    public class ServerTcpService : INetworkService
    {
        private IContainer _container;
        private TouchSocket.Sockets.TcpService _service;

        private INetworkService _receiver;
        public ServerTcpService(IContainer container)
        {
            _service = new TouchSocket.Sockets.TcpService();
            _service.Received += OnReceived;
            _service.Connecting += OnConnecting;//有客户端正在连接
            _service.Connected += OnConnected;//有客户端连接
            _service.Disconnected += OnDisconnected;//有客户端断开连接

            TouchSocketConfig config = new TouchSocketConfig();
            config.SetListenIPHosts(new IPHost[] { new IPHost("127.0.0.1:10005") })
                .SetDataHandlingAdapter(() => new RequestInfoHeaderHandlingAdapter())
                .SetMaxCount(10000)
                .SetThreadCount(10)
                .ConfigurePlugins(a =>
                {

                })
                .ConfigureContainer(a =>
                {

                });
            _service.Setup(config).Start();

            new ServerSocketSession(,)
            TcpServerReceiver tcpServerReceiver = new TcpServerReceiver(_container, _service,)
        }


        private void OnReceived(SocketClient client, ByteBlock byteBlock, IRequestInfo requestInfo)
        {
            if (requestInfo is RequestInfo info)
            {
                switch (info.Type)
                {
                    case ProtocalType.Request:
                        {
                            var handler = _container.Resolve<IProtocalHandlerCollector>().GetRequestHandler(info.Id);
                            ProtocalId respId = handler.GetResponseId();
                            Type reqType = _container.Resolve<IProtocalCollector>().GetProtocalTypeById(info.Id);
                            IRequest request = ProtocalHelper.DeserializeProtocal(reqType, info.Body) as IRequest;

                            Type respType = _container.Resolve<IProtocalCollector>().GetProtocalTypeById(respId);
                            IResponse response = Activator.CreateInstance(respType) as IResponse;
                            handler.Handle(_service, request, response, Reply).Forget();
                            void Reply()
                            {
                                _service.Send(response, info.MessageId);
                            }
                        }
                        break;
                    case ProtocalType.Response:
                        {
                            if (_requestTasks.TryGetValue(info.MessageId, out var tcs))
                            {
                                Type respType = _container.Resolve<IProtocalCollector>().GetProtocalTypeById(info.Id);
                                IResponse response = Activator.CreateInstance(respType) as IResponse;
                                tcs.TrySetResult(response);
                                _requestTasks.Remove(info.MessageId);
                            }
                            else
                            {
                                //DO NOTHING
                            }
                            break;
                        }
                    case ProtocalType.Protocal:
                        {
                            var handler = _container.Resolve<IProtocalHandlerCollector>().GetMessageHandler(info.Id);
                            Type protoType = _container.Resolve<IProtocalCollector>().GetProtocalTypeById(info.Id);
                            IProtocal protocal = Activator.CreateInstance(protoType) as IProtocal;
                            handler.Handle(_service, protocal).Forget();
                        }
                        break;
                    default:
                        break;
                }
            }
        }

        public void Start()
        {
            _service.Start();
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
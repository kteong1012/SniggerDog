using Cysharp.Threading.Tasks;
using System;
using System.Collections.Generic;
using TouchSocket.Core.ByteManager;
using TouchSocket.Core.Dependency;
using TouchSocket.Sockets;

namespace PostMainland
{
    public class TcpClientReceiver : INetworkService
    {
        private readonly IContainer _container;
        private readonly INetworkSession _service;

        private Dictionary<long, UniTaskCompletionSourceCore<IResponse>> _requestTasks;
        public TcpClientReceiver(IContainer container, TcpClient tcpClient, INetworkSession service)
        {
            tcpClient.Received += OnReceived;
            this._container = container;
            this._service = service;
            _requestTasks = new Dictionary<long, UniTaskCompletionSourceCore<IResponse>>();
        }

        private void OnReceived(TcpClient client, ByteBlock byteBlock, IRequestInfo requestInfo)
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

        public void Send<T>(T protocal, long msgId) where T : IProtocal
        {
            var ri = RequestInfo.FromProtocal(protocal, msgId);
            sender.Send(ri.ToBytes());
        }

        public async UniTask<T> Request<T>(IRequest request, int milliTimeout) where T : IResponse
        {
            UniTaskCompletionSourceCore<IResponse> tcs = new UniTaskCompletionSourceCore<IResponse>();
            long msgId = MessageIdGenerator.NextID();
            _service.Send(request, msgId);
            _requestTasks.Add(msgId, tcs);

            UniTask requestTask = UniTaskHelper.WaitUntil(() => tcs.GetStatus(0) != UniTaskStatus.Pending);
            UniTask timeoutTask = UniTaskHelper.Wait(milliTimeout);
            int index = await UniTask.WhenAny(requestTask, timeoutTask);

            if (index == 0)
            {
                return (T)tcs.GetResult(0);
            }
            else if (index == 1)
            {
                //TODO log timeout;
            }
            return default(T);
        }
    }
}
using Cysharp.Threading.Tasks;
using System.Collections.Generic;
using System.Linq;
using TouchSocket.Core.ByteManager;
using TouchSocket.Core.Config;
using TouchSocket.Core.Dependency;
using TouchSocket.Core.Pool;
using TouchSocket.Sockets;

namespace PostMainland
{
    public class ClientTcpService
    {
        public TcpClient TcpClient { get; private set; }
        private ObjectPool<RequestAwaiter> _awaiterPool = new ObjectPool<RequestAwaiter>();
        private List<RequestAwaiter> _awatingRequests = new List<RequestAwaiter>();
        private IProtocalManagerService _protocalManager;
        public ClientTcpService(IPHost remote)
        {
            TcpClient = new TcpClient();
            _protocalManager = Global.Container.Resolve<IProtocalManagerService>();
            TcpClient.Setup(new TouchSocketConfig()
                .SetRemoteIPHost(remote)
                .SetDataHandlingAdapter(() => new ProtocalRequestHeaderHandlingAdapter()));
            TcpClient.Received += OnReceived;
            TcpClient.Connect();
        }
        private void OnReceived(TcpClient client, ByteBlock byteBlock, IRequestInfo requestInfo)
        {
            if (requestInfo is ProtocalRequest pr)
            {
                switch (pr.Type)
                {
                    case ProtocalType.Request:
                        //客户端不处理请求
                        break;
                    case ProtocalType.Response:
                        var request = _awatingRequests.FirstOrDefault(x => x.MessageId == pr.MessageId);
                        if (request != null)
                        {
                            request.SetCompleted(pr.Body);
                        }
                        break;
                    case ProtocalType.Protocal:
                        var handler = _protocalManager.GetMessageHandler(pr.Id);
                        if (handler != null)
                        {
                            handler.Handle(new TcpClientSession(client), pr.Body);
                        }
                        break;
                    default:
                        break;
                }
            }
        }

        public void Send<T>(TcpClient client, T protocal, long msgId, bool check = false) where T : IProtocal
        {
            client.Send(ProtocalRequest.FromProtocal(protocal, msgId, check).ToBytes());
        }
        public void Send<T>(TcpClient client, T protocal, bool check = false) where T : IProtocal
        {
            long msgId = MessageIdGenerator.NextID();
            Send(client, protocal, msgId, check);
        }
        public async UniTask<TRes> Request<TRes, TReq>(TcpClient client, TReq request, bool check = false)
              where TRes : IResponse
              where TReq : IRequest
        {
            long msgId = MessageIdGenerator.NextID();
            Send(client, request, msgId, check);
            var awaiter = _awaiterPool.GetObject();
            awaiter.Init(msgId, new UniTaskCompletionSource<byte[]>(), _awatingRequests);
            await awaiter.TCS.Task;
            TRes response = ProtocalHelper.DeserializeProtocal<TRes>(awaiter.TCS.GetResult(0));
            return response;
        }
    }
}

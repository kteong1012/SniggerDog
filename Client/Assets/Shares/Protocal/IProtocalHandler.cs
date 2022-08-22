using Cysharp.Threading.Tasks;
using System;
using System.Reflection;
using TouchSocket.Sockets;

namespace PostMainland
{
    public class ProtocalHandlerAttribute : Attribute
    {

    }
    public interface IProtocalHandler
    {
        uint GetProtocalId();
    }
    public interface IMessageHandler : IProtocalHandler
    {
        UniTask Handle(INetworkSession session, byte[] body);
        uint GetMessageId();
    }
    [ProtocalHandler]
    public abstract class MessageHandler<TM> : IMessageHandler where TM : IProtocal
    {
        public abstract UniTask Execute(INetworkSession sender, TM message);

        public uint GetMessageId()
        {
            ProtocalAttribute protocalAttr = this.GetType().BaseType.GenericTypeArguments[0].GetCustomAttribute<ProtocalAttribute>(false);
            return protocalAttr.Id;
        }

        public uint GetProtocalId()
        {
            return GetMessageId();
        }

        public async UniTask Handle(INetworkSession session, byte[] body)
        {
            TM protocal = ProtocalHelper.DeserializeProtocal<TM>(body);
            await Execute(session, protocal);
        }
    }

    public interface IRequestHandler : IProtocalHandler
    {
        UniTask Handle(INetworkSession session, IRequest request, IResponse response, bool check);
        uint GetRequestId();
        uint GetResponseId();
    }
    [ProtocalHandler]
    public abstract class RequestHandler<TReq, TRes> : IRequestHandler where TRes : IResponse where TReq : IRequest<TRes>
    {
        public abstract UniTask Execute(INetworkSession session, TReq request, TRes response, Action reply);

        public uint GetProtocalId()
        {
            return GetRequestId();
        }

        public uint GetRequestId()
        {

            ProtocalAttribute protocalAttr = this.GetType().BaseType.GenericTypeArguments[0].GetCustomAttribute<ProtocalAttribute>(false);
            return protocalAttr.Id;
        }

        public uint GetResponseId()
        {
            ProtocalAttribute protocalAttr = this.GetType().BaseType.GenericTypeArguments[1].GetCustomAttribute<ProtocalAttribute>(false);
            return protocalAttr.Id;
        }
        public async UniTask Handle(INetworkSession session, IRequest request, IResponse response, bool check)
        {
            await Execute(session, (TReq)request, (TRes)response, Reply);
            void Reply()
            {
                response.RpcId = request.RpcId;
                session.Send((TRes)response, check);
            }
        }
    }
}
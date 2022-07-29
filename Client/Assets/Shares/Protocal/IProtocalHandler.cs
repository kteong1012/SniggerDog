using Cysharp.Threading.Tasks;
using System;
using System.Reflection;

namespace PostMainland
{
    public class ProtocalHandlerAttribute : Attribute
    {

    }
    public interface IProtocalHandler
    {
        ProtocalId GetProtocalId();
    }
    public interface IMessageHandler : IProtocalHandler
    {
        UniTask Handle(IMessage message);
        ProtocalId GetMessageId();
    }
    [ProtocalHandler]
    public abstract class MessageHandler<TM> : IMessageHandler where TM : class, IMessage
    {
        public abstract UniTask Execute(TM message);

        public ProtocalId GetMessageId()
        {
            ProtocalAttribute protocalAttr = this.GetType().BaseType.GenericTypeArguments[0].GetCustomAttribute<ProtocalAttribute>(false);
            return protocalAttr.Id;
        }

        public ProtocalId GetProtocalId()
        {
            return GetMessageId();
        }

        public async UniTask Handle(IMessage message)
        {
            await Execute(message as TM);
        }
    }

    public interface IRequestHandler : IProtocalHandler
    {
        UniTask Handle(IRequest req, IResponse res, Action reply);
        ProtocalId GetRequestId();
        ProtocalId GetResponseId();
    }
    [ProtocalHandler]
    public abstract class RequestHandler<TReq, TRes> : IRequestHandler where TRes : class, IResponse where TReq : class, IRequest
    {
        public abstract UniTask Execute(TReq request, TRes response, Action reply);

        public ProtocalId GetProtocalId()
        {
            return GetRequestId();
        }

        public ProtocalId GetRequestId()
        {
            
            ProtocalAttribute protocalAttr = this.GetType().BaseType.GenericTypeArguments[0].GetCustomAttribute<ProtocalAttribute>(false);
            return protocalAttr.Id;
        }

        public ProtocalId GetResponseId()
        {
            ProtocalAttribute protocalAttr = this.GetType().BaseType.GenericTypeArguments[1].GetCustomAttribute<ProtocalAttribute>(false);
            return protocalAttr.Id;
        }
        public async UniTask Handle(IRequest req, IResponse res, Action reply)
        {
            await Execute(req as TReq, res as TRes, reply);
        }
    }
}
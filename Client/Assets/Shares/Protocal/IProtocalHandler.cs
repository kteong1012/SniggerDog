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
        UniTask Handle(INetContext context, IMessage message);
        ProtocalId GetMessageId();
    }
    [ProtocalHandler]
    public abstract class MessageHandler<TM> : IMessageHandler where TM : class, IMessage
    {
        public abstract UniTask Execute(INetContext context, TM message);

        public ProtocalId GetMessageId()
        {
            ProtocalAttribute protocalAttr = this.GetType().BaseType.GenericTypeArguments[0].GetCustomAttribute<ProtocalAttribute>(false);
            return protocalAttr.Id;
        }

        public ProtocalId GetProtocalId()
        {
            return GetMessageId();
        }

        public async UniTask Handle(INetContext context, IMessage message)
        {
            await Execute(context, message as TM);
        }
    }

    public interface IRequestHandler : IProtocalHandler
    {
        UniTask Handle(INetContext context, IRequest req, IResponse res, Func<UniTask> reply);
        ProtocalId GetRequestId();
        ProtocalId GetResponseId();
    }
    [ProtocalHandler]
    public abstract class RequestHandler<TReq, TRes> : IRequestHandler where TRes : class, IResponse where TReq : class, IRequest
    {
        public abstract UniTask Execute(INetContext context, TReq request, TRes response, Func<UniTask> reply);

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
        public async UniTask Handle(INetContext context, IRequest req, IResponse res, Func<UniTask> reply)
        {
            await Execute(context, req as TReq, res as TRes, reply);
        }
    }
}
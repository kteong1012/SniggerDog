using Cysharp.Threading.Tasks;
using System;
using System.Reflection;

namespace PostMainland
{
    public interface IProtocalHandler
    {
    }
    public interface IMessageHandler : IProtocalHandler
    {
        UniTask Handle(IMessage message);
        ProtocalId GetMessageId();
    }
    public abstract class MessageHandler<TM> : IMessageHandler where TM : class, IMessage
    {
        public abstract UniTask Execute(TM message);

        public ProtocalId GetMessageId()
        {
            ProtocalAttribute protocalAttr = typeof(TM).GetType().GetCustomAttribute<ProtocalAttribute>(false);
            return protocalAttr.Id;
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
    public abstract class RequestHandler<TReq, TRes> : IRequestHandler where TRes : class, IResponse where TReq : class, IRequest
    {
        public abstract UniTask<TRes> Execute(TReq request, TRes resonse, Action reply);

        public ProtocalId GetRequestId()
        {
            ProtocalAttribute protocalAttr = typeof(TReq).GetType().GetCustomAttribute<ProtocalAttribute>(false);
            return protocalAttr.Id;
        }

        public ProtocalId GetResponseId()
        {
            ProtocalAttribute protocalAttr = typeof(TRes).GetType().GetCustomAttribute<ProtocalAttribute>(false);
            return protocalAttr.Id;
        }
        public async UniTask Handle(IRequest req, IResponse res, Action reply)
        {
            await Execute(req as TReq, res as TRes, reply);
        }
    }
}
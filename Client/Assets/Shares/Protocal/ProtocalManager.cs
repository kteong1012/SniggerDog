using PostMainland;
using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using TouchSocket.Core.Dependency;

namespace PostMainland
{
    public class ProtocalManager : IProtocalManagerService
    {
        public ConcurrentDictionary<ProtocalId, IMessageHandler> MessageHandlers { get; private set; }
        public ConcurrentDictionary<ProtocalId, IRequestHandler> RequestHandlers { get; private set; }
        public ConcurrentDictionary<ProtocalId, Type> ProtocalTypes { get; private set; }

        public ProtocalManager(IAssemblyManager _assMgr)
        {
            var handlerImplTypes = _assMgr.Types.Where(x => !x.IsInterface && !x.IsAbstract && x.IsDefined(typeof(ProtocalHandlerAttribute), true));
            MessageHandlers = new ConcurrentDictionary<ProtocalId, IMessageHandler>();
            RequestHandlers = new ConcurrentDictionary<ProtocalId, IRequestHandler>();
            foreach (var type in handlerImplTypes)
            {
                IProtocalHandler handler = Activator.CreateInstance(type) as IProtocalHandler;
                ProtocalId id = handler.GetProtocalId();
                if (handler is IRequestHandler)
                {
                    RequestHandlers.TryAdd(id, handler as IRequestHandler);
                }
                if (handler is IMessageHandler)
                {
                    MessageHandlers.TryAdd(id, handler as IMessageHandler);
                }
            }
            var protocalImplTypes = _assMgr.Types.Where(x => !x.IsInterface && !x.IsAbstract && x.IsDefined(typeof(ProtocalAttribute), true));
            ProtocalTypes = new ConcurrentDictionary<ProtocalId, Type>();
            foreach (var type in protocalImplTypes)
            {
                ProtocalId id = type.GetCustomAttribute<ProtocalAttribute>().Id;
                ProtocalTypes.TryAdd(id, type);
            }
        }

        public IMessageHandler GetMessageHandler(ProtocalId protcalId)
        {
            if (MessageHandlers.TryGetValue(protcalId, out var result))
            {
                return result;
            }
            return null;
        }
        public IRequestHandler GetRequestHandler(ProtocalId protcalId)
        {
            if (RequestHandlers.TryGetValue(protcalId, out var result))
            {
                return result;
            }
            return null;
        }

        public IProtocal CreateProtocal(ProtocalId protcalId)
        {
            if (ProtocalTypes.TryGetValue(protcalId, out var result))
            {
                return Activator.CreateInstance(result) as IProtocal;
            }
            return null;
        }

        public Type GetProtocalType(ProtocalId protcalId)
        {
            if (ProtocalTypes.TryGetValue(protcalId, out var result))
            {
                return result;
            }
            return null;
        }
    }
}
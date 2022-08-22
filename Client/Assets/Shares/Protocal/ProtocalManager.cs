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
        public ConcurrentDictionary<uint, IMessageHandler> MessageHandlers { get; private set; }
        public ConcurrentDictionary<uint, IRequestHandler> RequestHandlers { get; private set; }
        public ConcurrentDictionary<uint, Type> ProtocalTypes { get; private set; }

        public ProtocalManager(IAssemblyManager _assMgr)
        {
            var handlerImplTypes = _assMgr.Types.Where(x => !x.IsInterface && !x.IsAbstract && x.IsDefined(typeof(ProtocalHandlerAttribute), true));
            MessageHandlers = new ConcurrentDictionary<uint, IMessageHandler>();
            RequestHandlers = new ConcurrentDictionary<uint, IRequestHandler>();
            foreach (var type in handlerImplTypes)
            {
                IProtocalHandler handler = Activator.CreateInstance(type) as IProtocalHandler;
                uint id = handler.GetProtocalId();
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
            ProtocalTypes = new ConcurrentDictionary<uint, Type>();
            foreach (var type in protocalImplTypes)
            {
                uint id = type.GetCustomAttribute<ProtocalAttribute>().Id;
                ProtocalTypes.TryAdd(id, type);
            }
        }

        public IMessageHandler GetMessageHandler(uint protcalId)
        {
            if (MessageHandlers.TryGetValue(protcalId, out var result))
            {
                return result;
            }
            return null;
        }
        public IRequestHandler GetRequestHandler(uint protcalId)
        {
            if (RequestHandlers.TryGetValue(protcalId, out var result))
            {
                return result;
            }
            return null;
        }

        public IProtocal CreateProtocal(uint protcalId)
        {
            if (ProtocalTypes.TryGetValue(protcalId, out var result))
            {
                return Activator.CreateInstance(result) as IProtocal;
            }
            return null;
        }

        public Type GetProtocalType(uint protcalId)
        {
            if (ProtocalTypes.TryGetValue(protcalId, out var result))
            {
                return result;
            }
            return null;
        }
    }
}
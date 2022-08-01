using Cysharp.Threading.Tasks;
using Nino.Serialization;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;

namespace PostMainland
{
    public class ProtocalHandlerCollector : Service, IServiceOnInit<Assembly>, IAssemblyCollector
    {
        private Assembly _assembly;
        private Dictionary<ProtocalId, Type> _protocalHandlerTypes = new Dictionary<ProtocalId, Type>();
        private Dictionary<ProtocalId, IMessageHandler> _messageHandlers = new Dictionary<ProtocalId, IMessageHandler>();
        private Dictionary<ProtocalId, IRequestHandler> _requestHandlers = new Dictionary<ProtocalId, IRequestHandler>();

        void IServiceOnInit<Assembly>.OnInit(Assembly assembly)
        {
            _assembly = assembly;
            foreach (var type in _assembly.GetTypes())
            {

                if (type.IsAbstract || type.IsInterface)
                {
                    continue;
                }
                ProtocalHandlerAttribute protocalHandlerAttribute = type.GetCustomAttribute<ProtocalHandlerAttribute>();
                if (protocalHandlerAttribute != null)
                {
                    IProtocalHandler handler = Activator.CreateInstance(type) as IProtocalHandler;
                    ProtocalId id = handler.GetProtocalId();
                    _protocalHandlerTypes.Add(id, type);
                    if (handler is IRequestHandler)
                    {
                        _requestHandlers.Add(id, handler as IRequestHandler);
                    }
                    if (handler is IMessageHandler)
                    {
                        _messageHandlers.Add(id, handler as IMessageHandler);
                    }
                }
            }
            AssemblyCollection collection = Container as AssemblyCollection;
            collection.RegisterCollector(this);
        }
        List<Type> IAssemblyCollector.Collect()
        {
            return _protocalHandlerTypes.Values.ToList();
        }
        public IRequestHandler GetRequestHandler(ProtocalId protocalId)
        {
            if (_requestHandlers.TryGetValue(protocalId, out IRequestHandler handler))
            {
                return handler;
            }
            return null;
        }
        public IMessageHandler GetMessageHandler(ProtocalId protocalId)
        {
            if (_messageHandlers.TryGetValue(protocalId, out IMessageHandler handler))
            {
                return handler;
            }
            return null;
        }
    }
}
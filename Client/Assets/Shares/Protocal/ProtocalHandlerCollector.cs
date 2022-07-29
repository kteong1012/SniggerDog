using Cysharp.Threading.Tasks;
using Nino.Serialization;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;

namespace PostMainland
{
    public class ProtocalHandlerCollector : Singleton<ProtocalHandlerCollector>, IAssemblyCollector
    {
        private readonly Type _pivotClass;
        private Assembly _assembly;
        private Dictionary<ProtocalId, Type> _protocalHandlerTypes = new Dictionary<ProtocalId, Type>();
        private Dictionary<ProtocalId, IMessageHandler> _messageHandlers = new Dictionary<ProtocalId, IMessageHandler>();
        private Dictionary<ProtocalId, IRequestHandler> _requestHandlers = new Dictionary<ProtocalId, IRequestHandler>();

        public ProtocalHandlerCollector LoadAssemblies(Type pivotClass)
        {
            _assembly = pivotClass.Assembly;
            foreach (var type in _assembly.GetTypes())
            {
                if (type.IsAssignableFrom(typeof(IRequestHandler)))
                {
                    IRequestHandler handler = Activator.CreateInstance(type) as IRequestHandler;
                    ProtocalId id = handler.GetRequestId();
                    _requestHandlers.Add(id, handler);
                    _protocalHandlerTypes.Add(id, type);
                }
                else if (type.IsAssignableFrom(typeof(IMessageHandler)))
                {
                    IMessageHandler handler = Activator.CreateInstance(type) as IMessageHandler;
                    ProtocalId id = handler.GetMessageId();
                    _messageHandlers.Add(id, handler);
                    _protocalHandlerTypes.Add(id, type);
                }
            }
            return this;
        }
        public List<Type> Collect()
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
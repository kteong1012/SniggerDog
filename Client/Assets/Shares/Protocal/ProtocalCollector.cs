using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;

namespace PostMainland
{
    public class ProtocalCollector : Singleton<ProtocalCollector>, IAssemblyCollector
    {
        private Assembly _assembly;
        private Dictionary<ProtocalId, Type> _protocals = new Dictionary<ProtocalId, Type>();

        protected override void Initialize()
        {
            base.Initialize();
            _assembly = typeof(ProtocalAssemblyPivotClass).Assembly;
            foreach (var type in _assembly.GetTypes())
            {
                if (type.IsAssignableFrom(typeof(IProtocal)))
                {
                    ProtocalAttribute protocalAttr = type.GetCustomAttribute<ProtocalAttribute>(false);
                    if (protocalAttr != null)
                    {
                        _protocals[protocalAttr.Id] = type;
                    }
                }
            }
        }

        public List<Type> Collect()
        {
            return _protocals.Values.ToList();
        }
        public Type GetProtocalTypeById(ProtocalId id)
        {
            return _protocals[id];
        }
        public Type GetProtocalTypeById(uint id)
        {
            return _protocals[(ProtocalId)id];
        }
    }
}
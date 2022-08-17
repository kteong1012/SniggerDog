﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;

namespace PostMainland
{
    public interface IProtocalCollector
    {
        public List<Type> Collect();
        public Type GetProtocalTypeById(ProtocalId id);
        public Type GetProtocalTypeById(uint id);
    }
    public class ProtocalCollector : IProtocalCollector
    {
        private Assembly _assembly;
        private Dictionary<ProtocalId, Type> _protocals = new Dictionary<ProtocalId, Type>();

        public ProtocalCollector(Assembly assembly)
        {
            _assembly = assembly;
            foreach (var type in _assembly.GetTypes())
            {
                if (type.IsAbstract || type.IsInterface)
                {
                    continue;
                }
                ProtocalAttribute protocalAttr = type.GetCustomAttribute<ProtocalAttribute>(false);
                if (protocalAttr != null)
                {
                    _protocals[protocalAttr.Id] = type;
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
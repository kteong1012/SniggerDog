using System;
using System.Collections.Generic;
using System.Reflection;

namespace PostMainland
{
    public class AssemblyManager : IAssemblyManager
    {
        private Assembly _ass;
        public List<Type> Types { get; private set; }
        public AssemblyManager()
        {
            _ass = Assembly.GetExecutingAssembly();
            Types = new List<Type>(_ass.GetTypes());
        }
        public void AddTypes(Type[] types)
        {
            Types.AddRange(types);
        }
    }
}
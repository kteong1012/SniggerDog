using System;
using System.Collections.Generic;

namespace PostMainland
{
    public interface IAssemblyCollector
    {
        List<Type> Collect();
    }
    public class AssemblyCollection : Singleton<AssemblyCollection>
    {
        private Dictionary<string, Type> _allTypes = new Dictionary<string, Type>();
        public Dictionary<string, Type> AllTypes => _allTypes;

        public AssemblyCollection RegisterCollector(IAssemblyCollector collector)
        {
            if (collector == null)
            {
                throw new ArgumentNullException(nameof(collector));
            }
            var types = collector.Collect();
            AddTypes(types);
            return this;
        }
        private void AddTypes(List<Type> types)
        {
            foreach (Type type in types)
            {
                _allTypes[type.FullName] = type;
            }
        }
    }
}
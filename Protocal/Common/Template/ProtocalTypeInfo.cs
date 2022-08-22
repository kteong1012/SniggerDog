using System.Collections.Generic;

namespace PostMainland
{
    public class ProtocalTypeInfo
    {
        public string Name { get; set; }
        public string BaseTypeName { get; set; }
        public List<ProtocalFieldInfo> Fields { get; set; }
    }
}

using System;
using System.Collections.Generic;

namespace PostMainland
{
    public interface IAssemblyManager
    {
        List<Type> Types { get; }
        void AddTypes(Type[] types);
    }
}
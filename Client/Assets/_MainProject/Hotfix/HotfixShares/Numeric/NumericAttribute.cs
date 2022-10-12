using Cfg;
using System;

namespace PostMainland
{
    public class NumericAttribute : Attribute
    {
        public NumericAttribute(string name, string desc = "", TypeOfValue typeOfValue = TypeOfValue.Permillage, bool isCoefficient = false)
        {
            Name = name;
            Desc = desc;
            TypeOfValue = typeOfValue;
            IsCoefficient = isCoefficient;
        }

        public string Name { get; }
        public string Desc { get; }
        public TypeOfValue TypeOfValue { get; }
        public bool IsCoefficient { get; }
    }
}
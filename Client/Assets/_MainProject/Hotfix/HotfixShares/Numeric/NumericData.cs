using Cfg;
using System;
using System.Collections;
using System.Collections.Generic;

namespace PostMainland
{
    public struct NumericData
    {
        public Numeric NumericId { get; }
        public string Name { get; }
        public string Desc { get; }
        public TypeOfValue TypeOfValue { get; }
        public bool IsCoefficient { get; }
        private long RawValue { get; set; }
        public int BalanceNumber => TypeOfValue switch
        {
            TypeOfValue.Percentage => 100,
            TypeOfValue.Permillage => 1000,
            TypeOfValue.Pertenthousandage => 10000,
            _ => 1
        };
        public long BalanceNumberL => TypeOfValue switch
        {
            TypeOfValue.Percentage => 100L,
            TypeOfValue.Permillage => 1000L,
            TypeOfValue.Pertenthousandage => 10000L,
            _ => 1L
        };
        public float BalanceNumberF => TypeOfValue switch
        {
            TypeOfValue.Percentage => 100f,
            TypeOfValue.Permillage => 1000f,
            TypeOfValue.Pertenthousandage => 10000f,
            _ => 1f
        };
        public float FloatValue => RawValue / BalanceNumberF;
        public long Value
        {
            get
            {
                switch (TypeOfValue)
                {
                    case TypeOfValue.Percentage:
                    case TypeOfValue.Permillage:
                    case TypeOfValue.Pertenthousandage:
                        return (long)FloatValue;
                    default:
                        return RawValue;
                }
            }
        }
        public int IntValue => (int)Value;//使用的时候注意数值溢出
        public NumericData(Numeric numericId)
        {
            RawValue = 0;
            NumericId = numericId;
            var attr = numericId.GetAttribute<NumericAttribute>();
            Name = attr.Name;
            Desc = attr.Desc;
            TypeOfValue = attr.TypeOfValue;
            IsCoefficient = attr.IsCoefficient;

        }
        public NumericData(NumericData target) : this(target.NumericId)
        {
            RawValue = target.RawValue;
        }
        public static NumericData operator +(NumericData a, NumericData b)
        {
            if (a.NumericId != b.NumericId)
            {
                throw new System.InvalidOperationException("NumericData加减运算中的数值类型不匹配");
            }
            return new NumericData(a) { RawValue = a.RawValue + b.RawValue };
        }
        public static NumericData operator -(NumericData a, NumericData b)
        {
            if (a.NumericId != b.NumericId)
            {
                throw new System.InvalidOperationException("NumericData加减运算中的数值类型不匹配");
            }
            return new NumericData(a) { RawValue = a.RawValue - b.RawValue };
        }
        public static NumericData operator *(NumericData a, NumericData b)
        {
            if (a.IsCoefficient == b.IsCoefficient)
            {
                if (a.IsCoefficient)
                {
                    throw new System.Exception("NumericData乘除运算两个操作数必须有且只有一个是系数(IsCoefficient)");
                }
                else
                {
                    throw new System.Exception("NumericData乘除运算两个操作数必须有且只有一个是系数(IsCoefficient)");
                }
            }
            if (a.IsCoefficient)
            {
                return new NumericData(a) { RawValue = (long)(a.RawValue * b.RawValue / b.BalanceNumberF) };
            }
            else
            {
                return new NumericData(b) { RawValue = (long)(b.RawValue * a.BalanceNumberF / a.RawValue) };
            }
        }
        public static NumericData operator /(NumericData a, NumericData b)
        {
            if (a.IsCoefficient == b.IsCoefficient)
            {
                if (a.IsCoefficient)
                {
                    throw new System.Exception("NumericData乘除运算两个操作数必须有且只有一个是系数(IsCoefficient)");
                }
                else
                {
                    throw new System.Exception("NumericData乘除运算两个操作数必须有且只有一个是系数(IsCoefficient)");
                }
            }
            if (a.IsCoefficient)
            {
                return new NumericData(a) { RawValue = (long)(a.RawValue * b.BalanceNumberF / b.RawValue) };
            }
            else
            {
                return new NumericData(b) { RawValue = (long)(b.RawValue * a.BalanceNumberF / a.RawValue) };
            }
        }
        public static explicit operator float(NumericData ob)
        {
            return ob.FloatValue;
        }
        public static explicit operator long(NumericData ob)
        {
            return ob.Value;
        }
        public static explicit operator int(NumericData ob)
        {
            return ob.IntValue;
        }
        public static NumericData operator +(NumericData a, long b)
        {
            return new NumericData(a) { RawValue = a.RawValue + b };
        }
        public static NumericData operator -(NumericData a, long b)
        {
            return new NumericData(a) { RawValue = a.RawValue - b };
        }
        public static NumericData operator *(NumericData a, float b)
        {
            return new NumericData(a) { RawValue = (long)(a.RawValue * b) };
        }
        public static NumericData operator /(NumericData a, float b)
        {
            return new NumericData(a) { RawValue = (long)(a.RawValue / b) };
        }
        public override string ToString()
        {
            return $"{NumericId} {Value}";
        }
    }
}
using Cfg;
using System.Collections.Generic;

namespace PostMainland
{
    public class NumericComponent : Component
    {
        private Dictionary<Numeric, NumericData> _dict = new Dictionary<Numeric, NumericData>();
        public NumericData this[Numeric numeric]
        {
            get
            {
                if (_dict.TryGetValue(numeric, out NumericData data))
                {
                    return data;
                }
                throw new System.Exception($"数值组件未添加类型{numeric}");
            }
            set
            {
                _dict[numeric] = value;
            }
        }
        public bool ContainsNumeric(Numeric numeric)
        {
            return _dict.ContainsKey(numeric);
        }
        public void Add(Numeric numeric, NumericData data)
        {
            if(data.NumericId == Numeric.None)
            {
                Log.Error($"添加numeric失败,data的NumericId为None，{numeric}");
                return;
            }
            _dict.SafelyAdd(numeric, data);
        }
    }
}
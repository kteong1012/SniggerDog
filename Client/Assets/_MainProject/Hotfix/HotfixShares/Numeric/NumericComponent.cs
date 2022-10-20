using Cfg;
using Leopotam.EcsLite;
using System.Collections.Generic;

namespace PostMainland
{
    public struct NumericComponent : IEcsAutoReset<NumericComponent>
    {
        public Dictionary<Numeric, NumericData> Dict { get; set; }
        public NumericData this[Numeric id]
        {
            get
            {
                if (!Dict.TryGetValue(id, out var numericData))
                {
                    numericData = new NumericData(id);
                    Dict[id] = numericData;
                }
                return numericData;
            }
            set
            {
                Dict[id] = value;
            }
        }

        public void AutoReset(ref NumericComponent c)
        {
            if (c.Dict == null)
            {
                c.Dict = new Dictionary<Numeric, NumericData>();
            }
            c.Dict.Clear();
        }
    }
    public struct AT_SetNumericData
    {
        public int Entity { get; set; }
        public Numeric NumericId { get; set; }
        public long AddValue { get; set; }
    }
}
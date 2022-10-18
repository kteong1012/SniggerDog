using Cfg;
using Leopotam.EcsLite;
using System.Collections.Generic;

namespace PostMainland
{
    public struct NumericComponent : IEcsAutoReset<NumericComponent>
    {
        public Dictionary<Numeric, NumericData> Dict { get; set; }

        public void AutoReset(ref NumericComponent c)
        {
            if (c.Dict == null)
            {
                c.Dict = new Dictionary<Numeric, NumericData>();
            }
            c.Dict.Clear();
        }
    }
    public struct SetNumericDataEvent : IEvent
    {
        public int Entity { get; set; }
        public Numeric NumericId { get; set; }
        public NumericData Data { get; set; }
    }
}
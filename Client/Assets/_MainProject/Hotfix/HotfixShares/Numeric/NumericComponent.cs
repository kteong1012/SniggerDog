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
    public struct SetNumericDataCommand : IEcsAutoReset<SetNumericDataCommand>
    {
        public Queue<(Numeric NumericId, NumericData Data)> Commands { get; set; }

        public void AutoReset(ref SetNumericDataCommand c)
        {
            if (Commands == null)
            {
                Commands = new Queue<(Numeric, NumericData)>();
            }
            Commands.Clear();
        }
    }
    public struct DelNumericDataCommand : IEcsAutoReset<DelNumericDataCommand>
    {
        public Queue<Numeric> Commands { get; set; }

        public void AutoReset(ref DelNumericDataCommand c)
        {
            if (Commands == null)
            {
                Commands = new Queue<Numeric>();
            }
            Commands.Clear();
        }
    }
}
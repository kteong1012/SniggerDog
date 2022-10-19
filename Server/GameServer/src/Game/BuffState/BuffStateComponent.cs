using Cfg;
using Leopotam.EcsLite;
using System.Collections.Generic;

namespace PostMainland
{
    public struct BuffStatesComponent : IEcsAutoReset<BuffStatesComponent>
    {
        public Dictionary<BuffState, int> BuffStates { get; set; }
        public void AutoReset(ref BuffStatesComponent c)
        {
            c.BuffStates = new Dictionary<BuffState, int>();
        }
    }
    public struct BuffStatesChangeEvent: IEvent
    {
        public BuffState BuffState { get; set; }
        public int Entity { get; set; }
        public bool Attach { get; set; }
    }
}

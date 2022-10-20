using Leopotam.EcsLite;
using System.Collections.Generic;

namespace PostMainland
{
    public struct BuffComponent : IEcsAutoReset<BuffComponent>
    {
        public int CasterEntity { get; set; }
        public int TargetEntity { get; set; }
        public Buff Buff { get; set; }

        public void AutoReset(ref BuffComponent c)
        {
            c.Buff = null;
        }
    }
    public struct AT_AttachBuff
    {
        public int CfgId { get; set; }
        public int CasterEntity { get; set; }
        public int TargetEntity { get; set; }
    }
    public struct AT_DetachBuff 
    {
    }
    public struct BuffTickComponent
    {
        public long TimerMS { get; set; }
    }
}

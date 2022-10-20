using Leopotam.EcsLite;
using PostMainland;
using System;

namespace Cfg.MetaBuffEffect
{
    public partial class Damage
    {
        public override void Activate(EcsWorld world, int casterEntity, int targetEntity)
        {
            Log.Info($"{DateTime.Now:mm:ss.fff} {casterEntity} 对 {targetEntity} 造成了{Type}伤害 {NumericFormula}");
        }
    }
    public partial class AttachState
    {
        public override void Activate(EcsWorld world, int casterEntity, int targetEntity)
        {
            BuffStateHelper.AttachBuffState(world, State, casterEntity, targetEntity);
        }
    }
    public partial class DetachState
    {
        public override void Activate(EcsWorld world, int casterEntity, int targetEntity)
        {
            BuffStateHelper.DetachBuffState(world, State, casterEntity, targetEntity);
        }
    }
}

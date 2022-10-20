using Leopotam.EcsLite;
using PostMainland;
using System;

namespace Cfg.MetaBuffEffect
{
    public partial class Damage
    {
        public override void Activate(EcsWorld world, int casterEntity, int targetEntity)
        {
            float value = GetFormulaValue(world, casterEntity, targetEntity, NumericFormula);
            Log.Info($"{casterEntity} 对 {targetEntity} 造成了{Type}伤害{value}");
        }
    }
    public partial class AttachState
    {
        public override void Activate(EcsWorld world, int casterEntity, int targetEntity)
        {
            BuffStateHelper.AttachBuffState(world, State, casterEntity, targetEntity);
            world.NewEntityWith<AT_SetNumericData>(out _) = new AT_SetNumericData() { Entity = targetEntity, NumericId = Numeric.HP, AddValue = 1000 };
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

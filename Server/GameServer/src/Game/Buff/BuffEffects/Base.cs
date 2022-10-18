using Leopotam.EcsLite;
using PostMainland;

namespace Cfg.MetaBuffEffect
{
    public partial class Base
    {
        public abstract void Activate(EcsWorld world,int casterEntity,int targetEntity);
    }
    public partial class Damage
    {
        public override void Activate(EcsWorld world, int casterEntity, int targetEntity)
        {
            Log.Message($"{casterEntity} 对 {targetEntity} 造成了{Type}伤害 {NumericFormula}");
        }
    }
}

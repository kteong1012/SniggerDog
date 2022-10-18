using Leopotam.EcsLite;
using PostMainland;

namespace Cfg.MetaBuffEffect
{
    public partial class Damage
    {
        public override void Activate(EcsWorld world, int casterEntity, int targetEntity)
        {
            Log.Info($"{casterEntity} 对 {targetEntity} 造成了{Type}伤害 {NumericFormula}");
        }
    }
}

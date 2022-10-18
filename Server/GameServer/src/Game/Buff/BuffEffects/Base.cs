using Leopotam.EcsLite;

namespace Cfg.MetaBuffEffect
{
    public partial class Base
    {
        public abstract void Activate(EcsWorld world, int casterEntity, int targetEntity);
    }
}

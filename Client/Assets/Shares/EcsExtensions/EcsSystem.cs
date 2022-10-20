using Leopotam.EcsLite;

namespace PostMainland
{
    public abstract class EcsSystem : IEcsInitSystem
    {
#pragma warning disable IDE1006
        protected EcsWorld _world;
#pragma warning restore IDE1006
        public void Init(IEcsSystems systems)
        {
            _world = systems.GetWorld();
            OnInit(systems);
        }
        protected virtual void OnInit(IEcsSystems systems) { }
    }
}

using Leopotam.EcsLite;

namespace PostMainland
{
    public abstract class EcsSystem : IEcsInitSystem
    {
#pragma warning disable IDE1006
        protected EcsWorld _world;
        protected GameEvent _gameEvent;
#pragma warning restore IDE1006
        public void Init(IEcsSystems systems)
        {
            _world = systems.GetWorld();
            _gameEvent = systems.GetShared<GameEvent>();
            OnInit(systems);
        }
        protected virtual void OnInit(IEcsSystems systems) { }
    }
}

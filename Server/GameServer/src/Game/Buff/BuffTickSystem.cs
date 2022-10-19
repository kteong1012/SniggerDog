using Leopotam.EcsLite;
using System.Collections.Generic;
using TouchSocket.Core.Pool;

namespace PostMainland
{
    public class BuffTickSystem : EcsSystem, IEcsRunSystem
    {
        private EcsFilter _tickFilter;
        protected override void OnInit(IEcsSystems systems)
        {
            _tickFilter = _world.Filter<BuffTickComponent>().End();
        }
        public void Run(IEcsSystems systems)
        {
            var tickPool = _world.GetPool<BuffTickComponent>();

            foreach (var entity in _tickFilter)
            {
                if (tickPool.Has(entity))
                {
                    ref var tick = ref tickPool.Get(entity);

                    tick.TimerMS -= TimeHelper.DeltaTimeMS;
                    if (tick.TimerMS <= 0)
                    {
                        ref var buffComponent = ref _world.Get<BuffComponent>(entity);
                        _gameEvent.Publish(new BuffDettachEvent() { CfgId = buffComponent.Buff.CfgId, TargetEntity = buffComponent.TargetEntity });
                    }
                }
            }
        }
    }
}

using Leopotam.EcsLite;
using System;

namespace PostMainland
{
    public class BuffStatesComponentSystem : EcsSystem, IEcsDestroySystem
    {

        protected override void OnInit(IEcsSystems systems)
        {
            base.OnInit(systems);
            _gameEvent.AddEvent<BuffStatesChangeEvent>(OnBuffStatesChangeEvent);
        }
        public void Destroy(IEcsSystems systems)
        {
            _gameEvent.RemoveEvent<BuffStatesChangeEvent>(OnBuffStatesChangeEvent);
        }

        private void OnBuffStatesChangeEvent(BuffStatesChangeEvent e)
        {
            ref var buffStatesComponent = ref _world.Get<BuffStatesComponent>(e.Entity);
            if (e.Attach)
            {
                if (!buffStatesComponent.BuffStates.ContainsKey(e.BuffState))
                {
                    buffStatesComponent.BuffStates[e.BuffState] = 1;
                }
                else
                {
                    buffStatesComponent.BuffStates[e.BuffState]++;
                }
                Log.Info($"{e.Entity}附加了{e.BuffState}");
            }
            else
            {
                if (!buffStatesComponent.BuffStates.ContainsKey(e.BuffState) || buffStatesComponent.BuffStates[e.BuffState] == 0)
                {
                    throw new Exception($"移除buffstate异常，{e.Entity} 身上没有 {e.BuffState} 状态");
                }
                else
                {
                    buffStatesComponent.BuffStates[e.BuffState]--;
                }
                if (buffStatesComponent.BuffStates[e.BuffState] == 0)
                {
                    buffStatesComponent.BuffStates.SafelyRemove(e.BuffState);
                }
                Log.Info($"{e.Entity}移除了{e.BuffState}");
            }
        }
    }
}

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

            ref var buffStatesComponent = ref world.Get<BuffStatesComponent>(targetEntity);
            if (!buffStatesComponent.BuffStates.ContainsKey(State))
            {
                buffStatesComponent.BuffStates[State] = 1;
                Log.Info($"{DateTime.Now:mm:ss.fff} {targetEntity} 新增 {State} 状态");
            }
            else
            {
                buffStatesComponent.BuffStates[State]++;
            }
            Log.Info($"{DateTime.Now:mm:ss.fff} {casterEntity} 对 {targetEntity} 附加了{State} 状态");
        }
    }
    public partial class DetachState
    {
        public override void Activate(EcsWorld world, int casterEntity, int targetEntity)
        {
            ref var buffStatesComponent = ref world.Get<BuffStatesComponent>(targetEntity);

            if (!buffStatesComponent.BuffStates.ContainsKey(State) || buffStatesComponent.BuffStates[State] == 0)
            {
                throw new Exception($"{DateTime.Now:mm:ss.fff} 移除buffstate异常，{targetEntity} 身上没有 {State} 状态");
            }
            else
            {
                buffStatesComponent.BuffStates[State]--;
            }
            Log.Info($"{DateTime.Now:mm:ss.fff} {targetEntity}移除了来自 {casterEntity} 的 {State} 状态");
            if (buffStatesComponent.BuffStates[State] == 0)
            {
                buffStatesComponent.BuffStates.SafelyRemove(State);
                Log.Info($"{DateTime.Now:mm:ss.fff} {targetEntity} 移除 {State} 状态");
            }
        }
    }
}

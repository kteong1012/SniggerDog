using Cfg;
using Leopotam.EcsLite;
using System;

namespace PostMainland
{
    public class BuffStateHelper
    {
        public static void AttachBuffState(EcsWorld world,BuffState buffState,int caster,int target)
        {
            ref var buffStatesComponent = ref world.Get<BuffStatesComponent>(target);
            if (!buffStatesComponent.BuffStates.ContainsKey(buffState))
            {
                buffStatesComponent.BuffStates[buffState] = 0;
                Log.Info($"{DateTime.Now:mm:ss.fff} {target} 新增 {buffState} 状态");
            }
            buffStatesComponent.BuffStates[buffState]++;
            Log.Info($"【新增状态层({buffStatesComponent.BuffStates[buffState] - 1} -> {buffStatesComponent.BuffStates[buffState]})】{DateTime.Now:mm:ss.fff} {caster} 对 {target} 附加了{buffState} 状态");
        }
        public static void DetachBuffState(EcsWorld world,BuffState buffState,int caster,int target)
        {
            ref var buffStatesComponent = ref world.Get<BuffStatesComponent>(target);

            if (!buffStatesComponent.BuffStates.ContainsKey(buffState) || buffStatesComponent.BuffStates[buffState] == 0)
            {
                throw new Exception($"{DateTime.Now:mm:ss.fff} 移除buffstate异常，{target} 身上没有 {buffState} 状态");
            }
            else
            {
                buffStatesComponent.BuffStates[buffState]--;
                Log.Info($"【移除状态层({buffStatesComponent.BuffStates[buffState] + 1} -> {buffStatesComponent.BuffStates[buffState]})】{DateTime.Now:mm:ss.fff} {target}移除了来自 {caster} 的 {buffState} 状态");
            }
            if (buffStatesComponent.BuffStates[buffState] == 0)
            {
                buffStatesComponent.BuffStates.SafelyRemove(buffState);
                Log.Info($"{DateTime.Now:mm:ss.fff} {target} 移除 {buffState} 状态");
            }
        }
    }
}

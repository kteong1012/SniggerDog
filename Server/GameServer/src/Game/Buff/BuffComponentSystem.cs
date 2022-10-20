using Cfg;
using Leopotam.EcsLite;
using SharpCompress.Common;
using System;
using System.Collections.Generic;

namespace PostMainland
{
    public class BuffComponentSystem : EcsSystem, IEcsRunSystem
    {
        public void Run(IEcsSystems systems)
        {
            RunBuffDettach();
            RunBuffAttach();
        }
        private void RunBuffAttach()
        {
            var attachFilter = _world.Filter<AT_AttachBuff>().End();
            foreach (var attachEntity in attachFilter)
            {
                ref var attach = ref _world.Get<AT_AttachBuff>(attachEntity);
                var copy = attach;
                _world.DelEntity(attachEntity);
                var buffEntity = _world.NewEntity();
                ref var buffComponent = ref _world.Add<BuffComponent>(buffEntity);
                buffComponent.TargetEntity = copy.TargetEntity;
                buffComponent.CasterEntity = copy.CasterEntity;
                buffComponent.Buff = new Buff(copy.CfgId);
                var buff = buffComponent.Buff;
                HandleOnAttach(buffComponent);
                var addTimerMs = buff.GetDurationMs();
                if (addTimerMs > 0)
                {
                    ref var tick = ref _world.GetOrAdd<BuffTickComponent>(buffEntity);
                    tick.TimerMS = addTimerMs;
                    Log.Info($"{buffEntity} 更新时间 {tick.TimerMS}");
                }
            }
        }


        private void RunBuffDettach()
        {
            var detachFilter = _world.Filter<AT_DetachBuff>().Inc<BuffComponent>().End();
            foreach (var detachEntity in detachFilter)
            {
                ref var buffComponent = ref _world.Get<BuffComponent>(detachEntity);
                HandleOnDetach(buffComponent);
                _world.DelEntity(detachEntity);
            }
        }

        private void HandleOnAttach(BuffComponent buffComponent)
        {
            var buff = buffComponent.Buff;
            foreach (var metaBuff in buff.Config.MetaBuffs)
            {
                if (metaBuff.Trigger is Cfg.MetaBuffTrigger.Event eventTrigger)
                {
                    if (eventTrigger.BuffEvent == BuffEvent.OnAttach)
                    {
                        metaBuff.Effect.Activate(_world, buffComponent.CasterEntity, buffComponent.TargetEntity);
                    }
                }
            }
        }
        private void HandleOnDetach(BuffComponent buffComponent)
        {
            var buff = buffComponent.Buff;
            foreach (var metaBuff in buff.Config.MetaBuffs)
            {
                if (metaBuff.Trigger is Cfg.MetaBuffTrigger.Event eventTrigger)
                {
                    if (eventTrigger.BuffEvent == BuffEvent.OnDettach)
                    {
                        metaBuff.Effect.Activate(_world, buffComponent.CasterEntity, buffComponent.TargetEntity);
                    }
                }
            }
        }
    }
}

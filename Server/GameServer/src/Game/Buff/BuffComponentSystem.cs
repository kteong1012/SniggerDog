﻿using Cfg;
using Leopotam.EcsLite;
using System;
using System.Collections.Generic;

namespace PostMainland
{
    public class BuffComponentSystem : EcsSystem, IEcsDestroySystem
    {
        protected override void OnInit(IEcsSystems systems)
        {
            _gameEvent.AddEvent<BuffAttachEvent>(OnBuffAttach);
            _gameEvent.AddEvent<BuffDettachEvent>(OnBuffDettach);
        }

        public void Destroy(IEcsSystems systems)
        {
            _gameEvent.RemoveEvent<BuffAttachEvent>(OnBuffAttach);
            _gameEvent.RemoveEvent<BuffDettachEvent>(OnBuffDettach);
        }
        private void OnBuffAttach(BuffAttachEvent e)
        {
            var buffFilter = _world.Filter<BuffComponent>().End();
            var buffEntity = -1;
            foreach (var entity in buffFilter)
            {
                ref var b = ref _world.Get<BuffComponent>(entity);
                if (b.TargetEntity == e.TargetEntity && b.Buff.CfgId == e.CfgId)
                {
                    buffEntity = b.TargetEntity;
                    break;
                }
            }
            if (buffEntity == -1)
            {
                buffEntity = _world.NewEntity();
            }
            ref var buffComponent = ref _world.GetOrAdd<BuffComponent>(buffEntity);
            buffComponent.TargetEntity = e.TargetEntity;
            buffComponent.CasterEntity = e.CasterEntity;
            buffComponent.Buff = new Buff(e.CfgId);
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
            var (replaceTime, addTimerMs) = buff.AddUp();
            if (replaceTime)
            {
                ref var tick = ref _world.GetOrAdd<BuffTickComponent>(buffEntity);
                tick.TimerMS = addTimerMs;
                Log.Info($"{buffEntity} 更新时间 {tick.TimerMS}");
            }
            else if (addTimerMs > 0)
            {
                ref var tick = ref _world.GetOrAdd<BuffTickComponent>(buffEntity);
                tick.TimerMS += addTimerMs;
            }
        }


        private void OnBuffDettach(BuffDettachEvent e)
        {
            var buffFilter = _world.Filter<BuffComponent>().End();
            foreach (var entity in buffFilter)
            {
                ref var buffComponent = ref _world.Get<BuffComponent>(entity);
                if (buffComponent.TargetEntity == e.TargetEntity && buffComponent.Buff.CfgId == e.CfgId)
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
                    _world.DelEntity(entity);
                    break;
                }
            }
        }
    }
}

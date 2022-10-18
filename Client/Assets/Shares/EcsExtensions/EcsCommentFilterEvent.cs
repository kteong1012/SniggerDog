//using Leopotam.EcsLite;
//using System.Collections.Generic;

//namespace PostMainland
//{
//    public abstract class EcsCommentFilterEvent<TEvent> : IEcsFilterEventListener  where TEvent : struct
//    {
//        protected readonly EcsWorld world;

//        public EcsCommentFilterEvent(EcsWorld world)
//        {
//            this.world = world;
//        }

//        protected abstract void OnEventAdd(int entity, TEvent e);

//        void IEcsFilterEventListener.OnEntityAdded(int entity)
//        {
//            var eventPool = world.GetPool<TEvent>();
//            var e = eventPool.GetAndDel(entity);
//            OnEventAdd(entity, e);
//        }

//        void IEcsFilterEventListener.OnEntityRemoved(int entity)
//        {
//        }
//    }
//}

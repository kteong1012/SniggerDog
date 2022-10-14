using System;
using Leopotam.EcsLite;

namespace JimboA.EcsLite.ECB
{
    internal class EcbPool<TComponent> : IEcbPool where TComponent : struct
    {
        public EcsPool<TComponent> SourcePool;
        public EcsPool<TComponent> BufferPool;

        public EcbPool(EcsWorld sourceWorld, EcsWorld bufferWorld)
        {
            SourcePool = sourceWorld.GetPool<TComponent>();
            BufferPool = bufferWorld.GetPool<TComponent>();
        }
        
        public EcbPool(EcsWorld bufferWorld, EcsPool<TComponent> sourcePool)
        {
            SourcePool = sourcePool;
            BufferPool = bufferWorld.GetPool<TComponent>();
        }

        public void AddToSourceEntity(int bufferEntity, int sourceEntity)
        {
            ref var sourceComponent = ref SourcePool.Add(sourceEntity);
            ref var bufferComponent = ref BufferPool.Get(bufferEntity);
            sourceComponent = bufferComponent;
        }
        
        public void SetToSourceEntity(int bufferEntity, int sourceEntity)
        {
            ref var sourceComponent = ref SourcePool.Get(sourceEntity);
            ref var bufferComponent = ref BufferPool.Get(bufferEntity);
            sourceComponent = bufferComponent;
        }
        
        public void SetOrAddToSourceEntity(int bufferEntity, int sourceEntity)
        {
            ref var sourceComponent = ref SourcePool.GetOrAdd(sourceEntity);
            ref var bufferComponent = ref BufferPool.Get(bufferEntity);
            sourceComponent = bufferComponent;
        }

        public void Del(int sourceEntity)
        {
            SourcePool.Del(sourceEntity);
        }
    }
}
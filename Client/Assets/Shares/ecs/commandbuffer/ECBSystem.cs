using System;
using System.Runtime.CompilerServices;
using Leopotam.EcsLite;

namespace JimboA.EcsLite.ECB
{
    public abstract class EcbSystem : IEcsPostDestroySystem
    {
        protected EntityCommandBuffer CommandBuffer;
        private Type _cachedType;
        
        protected EcbSystem(EcsWorld sourceWorld, EcsWorld.Config config = default)
        {
            CommandBuffer = new EntityCommandBuffer(sourceWorld, config);
            _cachedType = GetType();
            if (EntityCommandBuffer.Map.TryGetValue(_cachedType, out var list))
                list.Add(CommandBuffer);
            else
                EntityCommandBuffer.Map.Add(_cachedType, new FastList<EntityCommandBuffer> {CommandBuffer});
        }
        
        /// <summary>
        /// Execute all commands that belong to the entity.
        /// </summary>
        /// <param name="entity"></param>
        /// <param name="autoClear"> Set false if you want to clear Command Buffer manually. True by default </param>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        protected void ExecuteCommandsOnEntity(int entity, bool autoClear = true) => CommandBuffer.ExecuteCommandsOnEntity(entity, autoClear);
        
        /// <summary>
        /// Execute concrete packed command.
        /// </summary>
        /// <param name="sequence"></param>
        /// <param name="autoClear"> Set false if you want to clear Command Buffer manually. True by default</param>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        protected void ExecutePackedCommand(ref EcsPackedEntity sequence, bool autoClear = true) => CommandBuffer.ExecutePackedCommandEntity(ref sequence, autoClear);
        
        /// <summary>
        /// Execute one Command Buffer step at index. You can use it in for loop with your custom logic.
        /// </summary>
        /// <param name="index"></param>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        protected void ExecuteStep(int index) => CommandBuffer.ExecuteStep(index);
        
        /// <summary>
        /// Execute one custom sequences step in Command Buffer at index. You can use it in for loop with your custom logic
        /// </summary>
        /// <param name="index"></param>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        protected void ExecuteSequenceStep(int index) => CommandBuffer.ExecuteSequenceStep(index);
        
        /// <summary>
        /// Execute all commands
        /// </summary>
        /// <param name="autoClear"></param>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        protected void ExecuteAll(bool autoClear = true) => CommandBuffer.ExecuteAll(autoClear);
        
        /// <summary>
        /// Manually clear Command Buffer
        /// </summary>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        protected void ClearCommandBuffer() => CommandBuffer.ClearAll();

        public void PostDestroy(IEcsSystems systems)
        {
            CommandBuffer.Destroy(_cachedType);
            CommandBuffer = null;
            _cachedType = null;
        }
    }
}

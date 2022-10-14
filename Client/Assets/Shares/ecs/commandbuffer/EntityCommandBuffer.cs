using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Leopotam.EcsLite;

namespace JimboA.EcsLite.ECB
{
    public class EntityCommandBuffer
    {
        internal static Dictionary<Type, FastList<EntityCommandBuffer>> Map = new Dictionary<Type, FastList<EntityCommandBuffer>>();

        internal EcsPool<CommandsSequenceComponent> CommandsSequencePool;
        internal EcsPool<CommandComponent> CommandPool;
        internal IEcbPool[] Pools;
        internal FastList<int> Sequences;
        internal FastList<int> Commands;

        internal EcsWorld GetBufferWorld => _bufferWorld;
        public EcsWorld GetWorld => _sourceWorld;
        public int Length => Commands.Length;

        private EcsWorld _sourceWorld;
        private EcsWorld _bufferWorld;
        private int[] _sparseEntities;

        internal EntityCommandBuffer(EcsWorld sourceWorld, EcsWorld.Config config = default)
        {
            _sourceWorld = sourceWorld;
            _bufferWorld = new EcsWorld(config);
            var poolsCap = config.Pools > 0 ? config.Pools : 512;
            var entitiesCap = config.Entities > 0 ? config.Entities : 512;
            Pools = new IEcbPool[poolsCap];
            CommandsSequencePool = _bufferWorld.GetPool<CommandsSequenceComponent>();
            CommandPool = _bufferWorld.GetPool<CommandComponent>();
            Sequences = new FastList<int>(entitiesCap);
            Commands = new FastList<int>(entitiesCap);
            _sparseEntities = new int[entitiesCap];
        }

        [MethodImpl (MethodImplOptions.AggressiveInlining)]
        internal void ExecuteCommandsOnEntity(int entity, bool autoClear = true)
        {
            if (entity >= _sparseEntities.Length || entity < 0)
                return;
            
            var commandsEntity = _sparseEntities[entity];
            if(commandsEntity == 0) 
                return;
            
            ref var commands = ref CommandsSequencePool.Get(commandsEntity + 1);
            if (autoClear)
            {
                foreach (var cmdEntity in commands.Commands)
                {
                    ref var command = ref CommandPool.Get(cmdEntity);
                    command.ExecuteCommand(cmdEntity, this, out _);
                    _bufferWorld.DelEntity(cmdEntity);
                }
                _sparseEntities[entity] = 0;
            }
            else
            {
                foreach (var cmdEntity in commands.Commands)
                {
                    ref var command = ref CommandPool.Get(cmdEntity);
                    command.ExecuteCommand(cmdEntity, this, out _);
                }
            }
        }
        
        [MethodImpl (MethodImplOptions.AggressiveInlining)]
        internal void ExecutePackedCommandEntity(ref EcsPackedEntity packedEntity, bool autoClear = true)
        {
            if(!packedEntity.Unpack(_bufferWorld, out var entity)) 
                return;

            if (CommandsSequencePool.TryGet(entity, out var sequence))
            {
                if (autoClear)
                {
                    foreach (var cmdEntity in sequence.Commands)
                    {
                        ref var cmd = ref CommandPool.Get(cmdEntity);
                        cmd.ExecuteCommand(cmdEntity, this, out var sourceEntity);
                        _sparseEntities[sourceEntity] = 0;
                        _bufferWorld.DelEntity(cmdEntity);
                    }
                    _bufferWorld.DelEntity(entity);
                    return;
                }
                foreach (var cmdEntity in sequence.Commands)
                {
                    ref var cmd = ref CommandPool.Get(cmdEntity);
                    cmd.ExecuteCommand(cmdEntity, this, out _);
                }
                return;
            }

            if (CommandPool.TryGet(entity, out var command))
            {
                command.ExecuteCommand(entity, this, out var sourceEntity);
                if (autoClear)
                {
                    _bufferWorld.DelEntity(entity);
                    _sparseEntities[sourceEntity] = 0;
                }
            }
        }
        

        [MethodImpl (MethodImplOptions.AggressiveInlining)]
        internal void ExecuteStep(int index)
        {
            if(index < 0 || index >= Commands.Length)
                return;
            
            var cmdEntity = Commands[index];
            ref var command = ref CommandPool.Get(cmdEntity);
            command.ExecuteCommand(cmdEntity, this, out _);
        }
        
        [MethodImpl (MethodImplOptions.AggressiveInlining)]
        internal void ExecuteSequenceStep(int index)
        {
            if(index < 0 || index >= Sequences.Length)
                return;
            
            var seqEntity = Sequences[index];
            ref var sequence = ref CommandsSequencePool.Get(seqEntity);
            foreach (var cmdEntity in sequence.Commands)
            {
                ref var command = ref CommandPool.Get(cmdEntity);
                command.ExecuteCommand(cmdEntity, this, out _);
            }
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        internal void ExecuteAll(bool autoClear = true)
        {
            if (autoClear)
            {
                foreach (var cmdEntity in Commands)
                {
                    ref var command = ref CommandPool.Get(cmdEntity);
                    command.ExecuteCommand(cmdEntity, this, out var sourceEntity);
                    _bufferWorld.DelEntity(cmdEntity);
                    _sparseEntities[sourceEntity] = 0;
                }
                Commands.Clear();
                Sequences.Clear();
            }
            else
            {
                foreach (var cmdEntity in Commands)
                {
                    ref var command = ref CommandPool.Get(cmdEntity);
                    command.ExecuteCommand(cmdEntity, this, out _);
                }
            }
        }

        internal void ClearAll()
        {
            foreach (var seqEntity in Sequences)
            {
                _bufferWorld.DelEntity(seqEntity);
            }
            
            foreach (var cmdEntity in Commands)
            {
                _bufferWorld.DelEntity(cmdEntity);
            }
            
            Array.Clear(_sparseEntities, 0, _sparseEntities.Length);
            Commands.Clear();
            Sequences.Clear();
        }

        internal void Destroy(Type key)
        {
            ClearAll();
            _sourceWorld = null;
            _bufferWorld = null;
            Commands = null;
            Pools = null;
            _sparseEntities = null;
            CommandsSequencePool = null;
            CommandPool = null;
            if (Map.TryGetValue(key, out var list))
                list.Remove(this);
        }

        internal int CreateCommand<TComponent>(int entity, CommandType type, out EcbPool<TComponent> ecbPool) where TComponent : struct
        {
            var sourcePool = _sourceWorld.GetPool<TComponent>();
            return CreateCommand(entity, type, sourcePool, out ecbPool);
        }
        
        [MethodImpl (MethodImplOptions.AggressiveInlining)]
        internal int CreateCommand<TComponent>(int entity, CommandType type, EcsPool<TComponent> sourcePool, out EcbPool<TComponent> ecbPool) where TComponent : struct
        {
            var typeIndex = sourcePool.GetId();
            ecbPool = GetEcbPool(typeIndex, sourcePool);
            var commandsEntity = GetCommandsEntity(entity);
            ref var commands = ref CommandsSequencePool.GetOrAdd(commandsEntity);
            var cmdEntity = CreateCommandEntity(type, entity, typeIndex);
            commands.Commands.Add(cmdEntity);
            Commands.Add(cmdEntity);
            return cmdEntity;
        }

        [MethodImpl (MethodImplOptions.AggressiveInlining)]
        private EcbPool<TComponent> GetEcbPool<TComponent>(int poolId, EcsPool<TComponent> sourcePool) where TComponent : struct
        {
            if(poolId >= Pools.Length)
                Array.Resize(ref Pools, poolId << 1);
            
            var ecbPool = (EcbPool<TComponent>)Pools[poolId];
            if (ecbPool == null)
            {
                ecbPool = new EcbPool<TComponent>(_bufferWorld, sourcePool);
                Pools[poolId] = ecbPool;
            }

            return ecbPool;
        }

        [MethodImpl (MethodImplOptions.AggressiveInlining)]
        private int GetCommandsEntity(int entity)
        {
            if(entity >= _sparseEntities.Length)
                Array.Resize(ref _sparseEntities, entity << 1);
            
            var commandsEntity = _sparseEntities[entity];
            if (commandsEntity == 0)
            {
                commandsEntity = _bufferWorld.NewEntity();
                _sparseEntities[entity] = commandsEntity + 1;
            }
            else
            {
                commandsEntity--;
            }

            return commandsEntity;
        }

        [MethodImpl (MethodImplOptions.AggressiveInlining)]
        private int CreateCommandEntity(CommandType type, int entity, int ecbPoolId)
        {
            var commandEntity = _bufferWorld.NewEntity();
            CommandPool.Add(commandEntity) = new CommandComponent
            {
                PackedEntity = _sourceWorld.PackEntity(entity),
                Type = type,
                EcbPoolId = ecbPoolId,
                IsNew = entity == -1
            };
            return commandEntity;
        }
    }

    public static class EcbExtensions
    {
        public static EntityCommandBuffer GetCommandBufferFrom<TEcbSystem>(this EcsWorld world) where TEcbSystem : EcbSystem
        {
            var key = typeof(TEcbSystem);
            if (EntityCommandBuffer.Map.TryGetValue(key, out var buffers))
            {
                foreach (var buffer in buffers)
                {
                    if (buffer.GetWorld == world)
                        return buffer;
                }
            }
            
#if DEBUG && !LEOECSLITE_NO_SANITIZE_CHECKS
            throw new NullReferenceException($"EntityCommandBuffer from {nameof(TEcbSystem)} doesn't exist.");
#endif
            return null;
        }

        #region PublicAPI

        public static ref TComponent Add<TComponent>(this EntityCommandBuffer buffer, int entity, out EcsPackedEntity packedCommand) where TComponent : struct
        {
            var cmdEntity = buffer.CreateCommand<TComponent>(entity, CommandType.Add, out var ecbPool);
            packedCommand = buffer.GetBufferWorld.PackEntity(cmdEntity);
            return ref ecbPool.BufferPool.Add(cmdEntity);
        }

        public static ref TComponent Add<TComponent>(this EntityCommandBuffer buffer, int entity, EcsPool<TComponent> sourcePool, out EcsPackedEntity packedCommand) where TComponent : struct
        {
            var cmdEntity = buffer.CreateCommand<TComponent>(entity, CommandType.Add, sourcePool, out var ecbPool);
            packedCommand = buffer.GetBufferWorld.PackEntity(cmdEntity);
            return ref ecbPool.BufferPool.Add(cmdEntity);
        }

        public static ref TComponent Set<TComponent>(this EntityCommandBuffer buffer, int entity, out EcsPackedEntity packedCommand) where TComponent : struct
        {
            var cmdEntity = buffer.CreateCommand<TComponent>(entity, CommandType.Set, out var ecbPool);
            packedCommand = buffer.GetBufferWorld.PackEntity(cmdEntity);
            return ref ecbPool.BufferPool.Add(cmdEntity);
        }
        
        public static ref TComponent Set<TComponent>(this EntityCommandBuffer buffer, int entity, EcsPool<TComponent> sourcePool, out EcsPackedEntity packedCommand) where TComponent : struct
        {
            var cmdEntity = buffer.CreateCommand<TComponent>(entity, CommandType.Set, sourcePool, out var ecbPool);
            packedCommand = buffer.GetBufferWorld.PackEntity(cmdEntity);
            return ref ecbPool.BufferPool.Add(cmdEntity);
        }

        public static ref TComponent SetOrAdd<TComponent>(this EntityCommandBuffer buffer, int entity, out EcsPackedEntity packedCommand) where TComponent : struct
        {
            var cmdEntity = buffer.CreateCommand<TComponent>(entity, CommandType.SetOrAdd, out var ecbPool);
            packedCommand = buffer.GetBufferWorld.PackEntity(cmdEntity);
            return ref ecbPool.BufferPool.Add(cmdEntity);
        }
        
        public static ref TComponent SetOrAdd<TComponent>(this EntityCommandBuffer buffer, int entity, EcsPool<TComponent> sourcePool, out EcsPackedEntity packedCommand) where TComponent : struct
        {
            var cmdEntity = buffer.CreateCommand<TComponent>(entity, CommandType.SetOrAdd, sourcePool, out var ecbPool);
            packedCommand = buffer.GetBufferWorld.PackEntity(cmdEntity);
            return ref ecbPool.BufferPool.Add(cmdEntity);
        }
        
        public static void Del<TComponent>(this EntityCommandBuffer buffer, int entity, out EcsPackedEntity packedCommand) where TComponent : struct
        {
            var cmdEntity = buffer.CreateCommand<TComponent>(entity, CommandType.Del, out _);
            packedCommand = buffer.GetBufferWorld.PackEntity(cmdEntity);
        }
        
        public static void Del<TComponent>(this EntityCommandBuffer buffer, int entity, EcsPool<TComponent> sourcePool, out EcsPackedEntity packedCommand) where TComponent : struct
        {
            var cmdEntity = buffer.CreateCommand<TComponent>(entity, CommandType.Del, sourcePool, out _);
            packedCommand = buffer.GetBufferWorld.PackEntity(cmdEntity);
        }

        #endregion
        
        [MethodImpl (MethodImplOptions.AggressiveInlining)]
        internal static ref T GetOrAdd<T>(this EcsPool<T> pool, int entity) where T : struct
        {
            if (pool.Has(entity))
                return ref pool.Get(entity);
            
            return ref pool.Add(entity);
        }
        
        [MethodImpl (MethodImplOptions.AggressiveInlining)]
        internal static bool TryGet<T>(this EcsPool<T> pool, int entity, out T component) where T : struct
        {
            if (pool.Has(entity))
            {
                component = pool.Get(entity);
                return true;
            }
            component = default;
            return false;
        }
    }
}

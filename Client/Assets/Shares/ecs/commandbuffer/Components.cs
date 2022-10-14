using System;
using System.Runtime.CompilerServices;
using Leopotam.EcsLite;

namespace JimboA.EcsLite.ECB
{
    // Why enums, custom lists etc? Why not just use components as commands and process them through filters?
    // Well, because of order. The correct and deterministic execution order of commands is important to us.
    // Since filters can't guarantee this, component-commands do not make sense.  
    internal enum CommandType
    {
        Add,
        Del,
        Set,
        SetOrAdd
    }

    public struct CommandsSequenceComponent : IEcsAutoReset<CommandsSequenceComponent>
    {
        internal FastList<int> Commands;
        internal EntityCommandBuffer Buffer;

        public void AutoReset(ref CommandsSequenceComponent c)
        {
            if (c.Commands == null)
                c.Commands = new FastList<int>();
            else
                c.Commands.Clear();
        }
    }

    internal struct CommandComponent
    {
        public EcsPackedEntity PackedEntity;
        public CommandType Type;
        public int EcbPoolId;
        public bool IsNew;
    }

    public static class EcbComponentsExtensions
    {
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        internal static bool CheckSourceEntityIsAlive(in this CommandComponent command, EntityCommandBuffer buffer, out int sourceEntity)
        {
            var sourceWorld = buffer.GetWorld;
            if (command.IsNew)
            {
                sourceEntity = sourceWorld.NewEntity();
                return true;
            }
            
            return command.PackedEntity.Unpack(sourceWorld, out sourceEntity);
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        internal static bool ExecuteAdd(ref this CommandComponent cmd, int commandEntity, EntityCommandBuffer buffer, out int sourceEntity)
        {
            if (!cmd.CheckSourceEntityIsAlive(buffer, out sourceEntity))
                return false;

            var pool = buffer.Pools[cmd.EcbPoolId];
            pool.AddToSourceEntity(commandEntity, sourceEntity);
            return true;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        internal static bool ExecuteSet(ref this CommandComponent cmd, int commandEntity, EntityCommandBuffer buffer, out int sourceEntity)
        {
            if (!cmd.CheckSourceEntityIsAlive(buffer, out sourceEntity))
                return false;

            var pool = buffer.Pools[cmd.EcbPoolId];
            pool.SetToSourceEntity(commandEntity, sourceEntity);
            return true;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        internal static bool ExecuteSetOrAdd(ref this CommandComponent cmd, int commandEntity, EntityCommandBuffer buffer, out int sourceEntity)
        {
            if (!cmd.CheckSourceEntityIsAlive(buffer, out sourceEntity))
                return false;

            var pool = buffer.Pools[cmd.EcbPoolId];
            pool.SetOrAddToSourceEntity(commandEntity, sourceEntity);
            return true;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        internal static bool ExecuteDel(ref this CommandComponent cmd, EntityCommandBuffer buffer, out int sourceEntity)
        {
            if (!cmd.CheckSourceEntityIsAlive(buffer, out sourceEntity))
                return false;

            var pool = buffer.Pools[cmd.EcbPoolId];
            pool.Del(sourceEntity);
            return true;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        internal static bool ExecuteCommand(this ref CommandComponent command, int cmdEntity, EntityCommandBuffer buffer, out int sourceEntity)
        {
            switch (command.Type)
            {
                case CommandType.Add:
                    return command.ExecuteAdd(cmdEntity, buffer, out sourceEntity);
                case CommandType.Set:
                    return command.ExecuteSet(cmdEntity, buffer, out sourceEntity);
                case CommandType.SetOrAdd:
                    return command.ExecuteSetOrAdd(cmdEntity, buffer, out sourceEntity);
                case CommandType.Del:
                    return command.ExecuteDel(buffer, out sourceEntity);
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }

        // #region EcbSequence
        //
        // public static ref CommandsSequenceComponent Sequence(this EntityCommandBuffer buffer)
        // {
        //     var seqEntity = buffer.GetBufferWorld.NewEntity();
        //     ref var sequence = ref buffer.CommandsSequencePool.Add(seqEntity);
        //     sequence.Buffer = buffer;
        //     sequence.SequenceEntity = seqEntity;
        //     return ref sequence;
        // }
        //
        // public static ref CommandsSequenceComponent Add<TComponent>(ref this CommandsSequenceComponent sequence, int entity, TComponent value) where TComponent : struct
        // {
        //     var cmdEntity = sequence.Buffer.CreateCommand<TComponent>(entity, CommandType.Add, out var ecbPool);
        //     sequence.Commands.Add(cmdEntity);
        //     ecbPool.BufferPool.Add(cmdEntity) = value;
        //     return ref sequence;
        // }
        //
        // public static ref CommandsSequenceComponent Add<TComponent>(ref this CommandsSequenceComponent sequence, int entity, EcsPool<TComponent> sourcePool, TComponent value) where TComponent : struct
        // {
        //     var cmdEntity = sequence.Buffer.CreateCommand<TComponent>(entity, CommandType.Add, out var ecbPool);
        //     sequence.Commands.Add(cmdEntity);
        //     ecbPool.BufferPool.Add(cmdEntity) = value;
        //     return ref sequence;
        // }
        //
        //
        // public static ref CommandsSequenceComponent Set<TComponent>(ref this CommandsSequenceComponent sequence, int entity, TComponent value) where TComponent : struct
        // {
        //     var cmdEntity = sequence.Buffer.CreateCommand<TComponent>(entity, CommandType.Set, out var ecbPool);
        //     sequence.Commands.Add(cmdEntity);
        //     ecbPool.BufferPool.Add(cmdEntity) = value;
        //     return ref sequence;
        // }
        //
        // public static ref CommandsSequenceComponent Set<TComponent>(ref this CommandsSequenceComponent sequence, int entity, EcsPool<TComponent> sourcePool, TComponent value) where TComponent : struct
        // {
        //     var cmdEntity = sequence.Buffer.CreateCommand<TComponent>(entity, CommandType.Set, out var ecbPool);
        //     sequence.Commands.Add(cmdEntity);
        //     ecbPool.BufferPool.Add(cmdEntity) = value;
        //     return ref sequence;
        // }
        //
        // public static ref CommandsSequenceComponent SetOrAdd<TComponent>(ref this CommandsSequenceComponent sequence, int entity, TComponent value) where TComponent : struct
        // {
        //     var cmdEntity = sequence.Buffer.CreateCommand<TComponent>(entity, CommandType.SetOrAdd, out var ecbPool);
        //     sequence.Commands.Add(cmdEntity);
        //     ecbPool.BufferPool.Add(cmdEntity) = value;
        //     return ref sequence;
        // }
        //
        // public static ref CommandsSequenceComponent SetOrAdd<TComponent>(ref this CommandsSequenceComponent sequence, int entity, EcsPool<TComponent> sourcePool, TComponent value) where TComponent : struct
        // {
        //     var cmdEntity = sequence.Buffer.CreateCommand<TComponent>(entity, CommandType.SetOrAdd, out var ecbPool);
        //     sequence.Commands.Add(cmdEntity);
        //     ecbPool.BufferPool.Add(cmdEntity) = value;
        //     return ref sequence;
        // }
        //
        // public static ref CommandsSequenceComponent Del<TComponent>(ref this CommandsSequenceComponent sequence, int entity) where TComponent : struct
        // {
        //     var cmdEntity = sequence.Buffer.CreateCommand<TComponent>(entity, CommandType.Del, out var ecbPool);
        //     sequence.Commands.Add(cmdEntity);
        //     return ref sequence;
        // }
        //
        // public static EcsPackedEntity End(this ref CommandsSequenceComponent sequence)
        // {
        //     return sequence.Buffer.GetWorld.PackEntity(sequence.SequenceEntity);
        // }
        //
        // #endregion

        #region ecbSequence
        
        public static ref CommandsSequenceComponent Sequence(this EntityCommandBuffer buffer, out EcsPackedEntity packedSeqEntity)
        {
            var world = buffer.GetBufferWorld;
            var seqEntity = world.NewEntity();
            ref var sequence = ref buffer.CommandsSequencePool.GetOrAdd(seqEntity);
            sequence.Buffer = buffer;
            packedSeqEntity = world.PackEntity(seqEntity);
            buffer.Sequences.Add(seqEntity);
            return ref sequence;
        }

        public static ref TComponent Add<TComponent>(ref this CommandsSequenceComponent sequence, int entity) where TComponent : struct
        {
            var cmdEntity = sequence.Buffer.CreateCommand<TComponent>(entity, CommandType.Add, out var ecbPool);
            sequence.Commands.Add(cmdEntity);
            return ref ecbPool.BufferPool.Add(cmdEntity);
        }
        
        public static ref TComponent Add<TComponent>(ref this CommandsSequenceComponent sequence, int entity, EcsPool<TComponent> sourcePool) where TComponent : struct
        {
            var cmdEntity = sequence.Buffer.CreateCommand<TComponent>(entity, CommandType.Add, out var ecbPool);
            sequence.Commands.Add(cmdEntity);
            return ref ecbPool.BufferPool.Add(cmdEntity);
        }

        public static ref TComponent Set<TComponent>(ref this CommandsSequenceComponent sequence, int entity) where TComponent : struct
        {
            var cmdEntity = sequence.Buffer.CreateCommand<TComponent>(entity, CommandType.Set, out var ecbPool);
            sequence.Commands.Add(cmdEntity);
            return ref ecbPool.BufferPool.Add(cmdEntity);
        }
        
        public static ref TComponent Set<TComponent>(ref this CommandsSequenceComponent sequence, int entity, EcsPool<TComponent> sourcePool) where TComponent : struct
        {
            var cmdEntity = sequence.Buffer.CreateCommand<TComponent>(entity, CommandType.Set, out var ecbPool);
            sequence.Commands.Add(cmdEntity);
            return ref ecbPool.BufferPool.Add(cmdEntity);
        }

        public static ref TComponent SetOrAdd<TComponent>(ref this CommandsSequenceComponent sequence, int entity) where TComponent : struct
        {
            var cmdEntity = sequence.Buffer.CreateCommand<TComponent>(entity, CommandType.SetOrAdd, out var ecbPool);
            sequence.Commands.Add(cmdEntity);
            return ref ecbPool.BufferPool.Add(cmdEntity);
        }
        
        public static ref TComponent SetOrAdd<TComponent>(ref this CommandsSequenceComponent sequence, int entity, EcsPool<TComponent> sourcePool) where TComponent : struct
        {
            var cmdEntity = sequence.Buffer.CreateCommand<TComponent>(entity, CommandType.SetOrAdd, out var ecbPool);
            sequence.Commands.Add(cmdEntity);
            return ref ecbPool.BufferPool.Add(cmdEntity);
        }
        
        public static void Del<TComponent>(ref this CommandsSequenceComponent sequence, int entity) where TComponent : struct
        {
            var cmdEntity = sequence.Buffer.CreateCommand<TComponent>(entity, CommandType.Add, out _);
            sequence.Commands.Add(cmdEntity);
        }

        #endregion
    }
}
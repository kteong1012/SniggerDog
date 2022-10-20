using Leopotam.EcsLite;
using System;

namespace PostMainland
{
    public delegate void EntityTask(int entity);
    public static class EcsExtension
    {
        public static bool Has(this EcsFilter filter, int entity)
        {
            foreach (var e in filter)
            {
                if (e == entity)
                {
                    return true;
                }
            }
            return false;
        }
        public static void DoTask(this EcsFilter filter, int entity, EntityTask task)
        {
            if (filter.Has(entity))
            {
                task?.Invoke(entity);
            }
        }
        public static ref T GetOrAdd<T>(this EcsPool<T> pool, int entity) where T : struct
        {
            if (pool.Has(entity))
            {
                return ref pool.Get(entity);
            }
            else
            {
                return ref pool.Add(entity);
            }
        }
        public static ref T Get<T>(this EcsWorld world, int entity) where T : struct
        {
            var pool = world.GetPool<T>();
            return ref pool.Get(entity);
        }
        public static ref T Add<T>(this EcsWorld world, int entity) where T : struct
        {
            var pool = world.GetPool<T>();
            return ref pool.Add(entity);
        }
        public static ref T GetOrAdd<T>(this EcsWorld world, int entity) where T : struct
        {
            var pool = world.GetPool<T>();
            return ref pool.GetOrAdd(entity);
        }
        public static bool Has<T>(this EcsWorld world, int entity) where T : struct
        {
            var pool = world.GetPool<T>();
            return pool.Has(entity);
        }
        public static void Del<T>(this EcsWorld world, int entity) where T : struct
        {
            var pool = world.GetPool<T>();
            pool.Del(entity);
        }
        public static ref T NewEntityWith<T>(this EcsWorld world, out int entity) where T : struct
        {
            entity = world.NewEntity();
            return ref world.Add<T>(entity);
        }

        public static ref T FromFilterOrNew<T>(this EcsFilter filter, out (bool isNew, int entity) result, Func<T, bool> predicate) where T : struct
        {
            foreach (var e in filter)
            {
                ref T component = ref filter.GetWorld().Get<T>(e);
                if (predicate(component))
                {
                    result = (false, e);
                    return ref component;
                }
            }
            result = (true, filter.GetWorld().NewEntity());
            return ref filter.GetWorld().Add<T>(result.entity);
        }
    }
}

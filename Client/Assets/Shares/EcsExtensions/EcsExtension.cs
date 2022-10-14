using Leopotam.EcsLite;

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
        public static T GetAndDel<T>(this EcsPool<T> pool,int entity) where T : struct
        {
            T result = pool.Get(entity);
            pool.Del(entity);
            return result;
        }
    }
}

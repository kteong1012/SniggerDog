using Cysharp.Threading.Tasks;
using System;
using System.Collections.Generic;
using System.Linq;

namespace PostMainland
{
    public static class GameEvent
    {
        public delegate UniTask Callback<T>(T e) where T : IEvent;

        private static Dictionary<Type, List<Delegate>> _callbacks = new Dictionary<Type, List<Delegate>>();
        public static void AddEvent<T>(Callback<T> callback) where T : IEvent
        {
            if (!_callbacks.TryGetValue(typeof(T), out var callbacks))
            {
                callbacks = new List<Delegate>();
                _callbacks.Add(typeof(T), callbacks);
            }
            callbacks.Add(callback);
        }
        public static void RemoveEvent<T>(Callback<T> callback) where T : IEvent
        {
            if (_callbacks.TryGetValue(typeof(T), out var callbacks))
            {
                callbacks.SavelyRemove(callback);
            }
        }
        public static async UniTask PublishAsync<T>(T e) where T : IEvent
        {
            if (_callbacks.TryGetValue(typeof(T), out var callbacks))
            {
                var allTasks = callbacks.Cast<Callback<T>>().Select(cb => cb.Invoke(e));
                if (allTasks.Any())
                {
                    await UniTask.WhenAll(allTasks);
                }
            }
        }
        public static void Publish<T>(T e) where T : IEvent
        {
            if (_callbacks.TryGetValue(typeof(T), out var callbacks))
            {
                var allTasks = callbacks.Cast<Callback<T>>();
                foreach (var task in allTasks)
                {
                    ThreadSynchronizationContext.Instance.PostNext(() => task.Invoke(e).Forget());
                }
            }
        }
    }
}

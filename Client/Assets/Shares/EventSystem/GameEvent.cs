using Cysharp.Threading.Tasks;
using System;
using System.Collections.Generic;
using System.Linq;

namespace PostMainland
{
    public class GameEvent
    {
        public delegate void Callback<T>(T e) where T : IEvent;

        private Dictionary<Type, List<Delegate>> _callbacks = new Dictionary<Type, List<Delegate>>();
        public void AddEvent<T>(Callback<T> callback) where T : IEvent
        {
            if (!_callbacks.TryGetValue(typeof(T), out var callbacks))
            {
                callbacks = new List<Delegate>();
                _callbacks.Add(typeof(T), callbacks);
            }
            callbacks.Add(callback);
        }
        public void RemoveEvent<T>(Callback<T> callback) where T : IEvent
        {
            if (_callbacks.TryGetValue(typeof(T), out var callbacks))
            {
                callbacks.SafelyRemove(callback);
            }
        }
        public void Publish<T>(T e) where T : IEvent
        {
            if (_callbacks.TryGetValue(typeof(T), out var callbacks))
            {
                var allTasks = callbacks.Cast<Callback<T>>();
                foreach (var task in allTasks)
                {
                    try
                    {
                        task.Invoke(e);
                    }
                    catch (Exception exception)
                    {
                        Log.Error("", exception);
                    }
                }
            }
        }
    }
}

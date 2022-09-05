using System;
using System.Collections.Concurrent;
using TouchSocket.Core.Dependency;

namespace PostMainland
{
    public class DictionaryCollection<K, V> : IDisposable
    {
        public ConcurrentDictionary<K, V> Dict { get; } = new ConcurrentDictionary<K, V>();
        public int Count => Dict.Count;

        public bool TryAdd(K key, V value)
        {
            return Dict.TryAdd(key, value);
        }
        public bool Remove(K key, out V value)
        {
            return Dict.TryRemove(key, out value);
        }
        public bool TryGetValue(K key, out V value)
        {
            return Dict.TryGetValue(key, out value);
        }
        public void Dispose()
        {
            foreach (var kvp in Dict)
            {
                if (kvp.Key is IDisposable key)
                {
                    key?.Dispose();
                }
                if (kvp.Value is IDisposable value)
                {
                    value?.Dispose();
                }
            }
            Dict.Clear();
        }
    }
}
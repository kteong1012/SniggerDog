using System;
using System.Collections.Generic;

namespace PostMainland
{
    public class ListCollection<T> : IDisposable
    {
        public List<T> List { get; } = new List<T>();
        public int Count => List.Count;
        public void Add(T e)
        {
            List.Add(e);
        }
        public void Remove(T e)
        {
            if (List.Contains(e))
            {
                List.Remove(e);
            }
        }
        public T Get(int index)
        {
            return List[index];
        }
        public int IndexOf(T e)
        {
            return List.IndexOf(e);
        }
        public void Dispose()
        {
            foreach (var e in List)
            {
                if (e is IDisposable disposable)
                {
                    disposable?.Dispose();
                }
            }
            List.Clear();
        }
    }
}
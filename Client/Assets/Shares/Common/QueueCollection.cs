using System;
using System.Collections.Generic;

namespace PostMainland
{
    public class QueueCollection<T> : IDisposable
    {
        public Queue<T> Queue { get; } = new Queue<T>();
        public int Count => Queue.Count;
        public void Enqueue(T e)
        {
            Queue.Enqueue(e);
        }
        public T Dequeue(int index)
        {
            return Queue.SafelyDequeue();
        }
        public void Dispose()
        {
            foreach (var e in Queue)
            {
                if (e is IDisposable disposable)
                {
                    disposable?.Dispose();
                }
            }
            Queue.Clear();
        }
    }
}
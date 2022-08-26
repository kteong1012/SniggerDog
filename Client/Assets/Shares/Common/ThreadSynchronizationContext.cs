using System;
using System.Collections.Concurrent;
using System.Threading;

namespace PostMainland
{
    public class ThreadSynchronizationContext : SynchronizationContext
    {
        public static ThreadSynchronizationContext Instance { get; } = new ThreadSynchronizationContext(Thread.CurrentThread.ManagedThreadId);

        private readonly int _threadId;

        // 线程同步队列,发送接收socket回调都放到该队列,由poll线程统一执行
        private readonly ConcurrentQueue<Action> _queue = new ConcurrentQueue<Action>();

        private Action _a;

        public ThreadSynchronizationContext(int threadId)
        {
            this._threadId = threadId;
        }

        public void Update()
        {
            while (true)
            {
                if (!this._queue.TryDequeue(out _a))
                {
                    return;
                }

                try
                {
                    _a();
                }
                catch (Exception e)
                {
                    Log.Error(e);
                }
            }
        }

        public override void Post(SendOrPostCallback callback, object state)
        {
            this.Post(() => callback(state));
        }

        public void Post(Action action)
        {
            if (Thread.CurrentThread.ManagedThreadId == this._threadId)
            {
                try
                {
                    action();
                }
                catch (Exception e)
                {
                    Log.Error(e);
                }

                return;
            }

            this._queue.Enqueue(action);
        }

        public void PostNext(Action action)
        {
            this._queue.Enqueue(action);
        }
    }
}
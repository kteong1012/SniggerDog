using Cysharp.Threading.Tasks;
using System;
using System.Collections;
using System.Collections.Generic;

namespace PostMainland
{
    public enum AsyncLockState
    {
        None,
        Waiting,
        Executing,
        Disposed,
    }
    public class AsyncLock : IDisposable
    {
        public AsyncLockState State { get; private set; }
        public AsyncLockType Type { get; set; }
        public long Id { get; set; }
        public int Timeout { get; set; }
        public UniTaskCompletionSource WaitTcs { get; private set; }

        public void Wait()
        {
            WaitTcs = new UniTaskCompletionSource();
            State = AsyncLockState.Waiting;
        }
        public void Execute()
        {
            if (State != AsyncLockState.Executing)
            {
                WaitTcs?.TrySetResult();
                State = AsyncLockState.Executing;
            }
        }
        public virtual void Dispose()
        {
            State = AsyncLockState.Disposed;
        }
    }
}
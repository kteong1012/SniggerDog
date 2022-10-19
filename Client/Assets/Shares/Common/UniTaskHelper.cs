using Cysharp.Threading.Tasks;
using System;
using System.Collections.Concurrent;
using System.Threading;
using System.Threading.Tasks;

namespace PostMainland
{
    public class UniTaskHelper
    {
        public static UniTask Wait(int milliSeconds, CancellationToken cancellationToken = default)
        {
#if NOT_UNITY
            return Task.Delay(milliSeconds, cancellationToken).AsUniTask();
#else
            return UniTask.Delay(milliSeconds, false, PlayerLoopTiming.Update, cancellationToken);
#endif
        }
        public static async UniTaskVoid Wait(int milliSeconds, Action action, CancellationToken cancellationToken = default)
        {
            await Wait(milliSeconds, cancellationToken);
            action?.Invoke();
        }
        public static UniTask WaitUntil(Func<bool> predicate, CancellationToken cancellationToken = default)
        {
#if NOT_UNITY
            DateTime start = DateTime.Now;
            UniTask timeout = UniTask.Create(async () =>
            {
                while (!predicate() && !cancellationToken.IsCancellationRequested)
                {
                    await UniTask.Yield();
                }
            });
            return timeout;
#else
            return UniTask.WaitUntil(predicate, PlayerLoopTiming.Update, cancellationToken);
#endif
        }
    }
}
using Cysharp.Threading.Tasks;
using System;
using System.Collections.Concurrent;
using System.Threading;

namespace PostMainland
{
    public class UniTaskHelper
    {
        public static UniTask Wait(int milliSeconds, CancellationToken cancellationToken = default)
        {
#if NOT_UNITY
            DateTime start = DateTime.Now;
            UniTask timeout = UniTask.Create(async () =>
            {
                while ((DateTime.Now - start).TotalMilliseconds < milliSeconds && !cancellationToken.IsCancellationRequested)
                {
                    await UniTask.Yield();
                }
            });
            return timeout;
#else
            return UniTask.Delay(milliSeconds, false, PlayerLoopTiming.Update, cancellationToken);
#endif
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
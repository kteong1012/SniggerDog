using Cysharp.Threading.Tasks;
using System.Collections.Generic;

namespace PostMainland
{
    public class AsyncLockManager
    {
        private static AsyncLockManager _instance = new AsyncLockManager();
        public static AsyncLockManager Instance => _instance;

        private Queue<AsyncLock> _waiting = new Queue<AsyncLock>();
        private Dictionary<(AsyncLockType type, long id), AsyncLock> _executingLock = new Dictionary<(AsyncLockType type, long id), AsyncLock>();
        public async UniTask<AsyncLock> Wait(AsyncLockType type, long id, int timeoutMilliseconds = 60000)
        {
            var key = (type, id);
            AsyncLock res = null;
            if (!_executingLock.ContainsKey(key))
            {
                res = CreateAsyncLock(type, id, timeoutMilliseconds);
                _executingLock[(type, id)] = res;
                return res;
            }
            res = CreateAsyncLock(type, id, timeoutMilliseconds);
            res.Wait();
            _waiting.Enqueue(res);
            await res.WaitTcs.Task;
            return res;
        }

        public void Update()
        {
            //检查超时
            //检查有等待队列
            var temp = new List<AsyncLock>(_waiting.Count);
            while (_waiting.Count > 0)
            {
                var waiting = _waiting.Dequeue();
                if (waiting == null)
                {
                    continue;
                }
                var key = (waiting.Type, waiting.Id);
                _executingLock.TryGetValue(key, out var executing);
                if (executing != null && executing.State == AsyncLockState.Executing)
                {
                    temp.Add(waiting);
                    continue;
                }
                _executingLock[key] = waiting;
                waiting.Execute();
            }
            foreach (var waiting in temp)
            {
                _waiting.Enqueue(waiting);
            }
        }

        private AsyncLock CreateAsyncLock(AsyncLockType type, long id, int timeoutMilliseconds)
        {
            AsyncLock al = new AsyncLock();
            al.Type = type;
            al.Id = id;
            al.Timeout = timeoutMilliseconds;
            return al;
        }
    }
}
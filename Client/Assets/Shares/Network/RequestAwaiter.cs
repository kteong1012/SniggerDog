using Cysharp.Threading.Tasks;
using System.Collections.Generic;
using TouchSocket.Core.Pool;

namespace PostMainland
{
    public class RequestAwaiter : IPoolObject
    {
        public bool IsCompleted { get; private set; }
        public bool NewCreate { get; set; }
        public long MessageId { get; private set; }
        public List<RequestAwaiter> Collection { get; private set; }
        public UniTaskCompletionSource<byte[]> TCS { get; private set; }
        public void Create()
        {
            IsCompleted = false;
        }

        public void Destroy()
        {
            IsCompleted = false;
            Collection.Remove(this);
            Collection = null;
            TCS = null;
        }

        public void Recreate()
        {
            IsCompleted = false;
        }
        public void SetCompleted(byte[] responseBytes)
        {
            IsCompleted = true;
            TCS.TrySetResult(responseBytes);
        }
        public void Init(long msgId, UniTaskCompletionSource<byte[]> tcs, List<RequestAwaiter> collection)
        {
            MessageId = msgId;
            Collection = collection;
            TCS = tcs;
            Collection.Add(this);
        }
    }
}
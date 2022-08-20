using Cysharp.Threading.Tasks;
using System.Collections.Generic;
using TouchSocket.Core.Pool;

namespace PostMainland
{
    public class RequestAwaiter : IPoolObject
    {
        public bool IsCompleted { get; private set; }
        public bool NewCreate { get; set; }
        public long RpcId { get; private set; }
        public List<RequestAwaiter> Collection { get; private set; }
        public UniTaskCompletionSource<IResponse> TCS { get; private set; }
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
        public void SetCompleted(IResponse response)
        {
            IsCompleted = true;
            TCS.TrySetResult(response);
        }
        public void Init(int rpcId, UniTaskCompletionSource<IResponse> tcs, List<RequestAwaiter> collection)
        {
            RpcId = rpcId;
            Collection = collection;
            TCS = tcs;
            Collection.Add(this);
        }
    }
}
using Cysharp.Threading.Tasks;
using UnityEngine;

namespace PostMainland
{
    public class TestMessageHandler : IMessageHandler<SC_Notify>
    {
        public async UniTaskVoid Handle(SC_Notify protocal)
        {
            Debug.Log(protocal.Message);
            await UniTask.CompletedTask;
        }
    }
}

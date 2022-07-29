using Cysharp.Threading.Tasks;
using UnityEngine;

namespace PostMainland
{
    public class TestMessageHandler : MessageHandler<SC_Notify>
    {
        public async override UniTask Execute(SC_Notify message)
        {
            Debug.Log(message.Message);
            await UniTask.CompletedTask;
        }
    }
}

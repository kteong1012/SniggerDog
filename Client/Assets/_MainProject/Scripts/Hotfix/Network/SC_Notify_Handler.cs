using Cysharp.Threading.Tasks;
using UnityEngine;

namespace PostMainland
{
    public class SC_Notify_Handler : MessageHandler<SC_Notify>
    {
        public override async UniTask Execute(INetContext context, SC_Notify message)
        {
            Debug.Log($"【服务器消息】:   {message.Message}");
            await UniTask.CompletedTask;
        }
    }

}
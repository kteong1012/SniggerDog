using Cysharp.Threading.Tasks;
using UnityEngine;

namespace PostMainland
{
    public class SC_Notify_Handler : MessageHandler<S2C_Notify>
    {
        public override async UniTask Execute(INetworkSession service, S2C_Notify message)
        {
            Log.LogByType(message.MessageType, $"【服务器消息】:   {message.Message}");
            await UniTask.CompletedTask;
        }
    }

}
/** This is an automatically generated class by FairyGUI. Please do not modify it. **/

using Cysharp.Threading.Tasks;
using FairyGUI;
using System;

namespace PostMainland
{
    public partial class UILoginPanel : UIWrapper
    {
        protected override void OnCreate()
        {
            base.OnCreate();
            btnLoginAsync.SetOnClickAsync(OnClickBtnLoginAsync);
        }

        private async UniTask OnClickBtnLoginAsync()
        {
            await Login.StartLogin(inputAccount.text, inputPassword.text);
            Log.Message("µÇÂ½³É¹¦£¡£¡");
        }
    }
}
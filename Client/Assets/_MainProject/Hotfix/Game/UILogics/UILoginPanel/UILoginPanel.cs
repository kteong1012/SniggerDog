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
            var result = await MessageBox.ShowConfirm("≤‚ ‘ƒ⁄»›", "≤‚ ‘");
            Log.Message(result);

           //await Login.StartLogin(inputAccount.text, inputPassword.text);
           // Log.Message("µ«¬Ω≥…π¶£°£°");
        }
    }
}
/** This is an automatically generated class by FairyGUI. Please do not modify it. **/

using Cysharp.Threading.Tasks;
using FairyGUI;
using System;
using UnityEngine;

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
            var result = await MessageBox.ShowConfirm("测试内容", "测试");
            Log.Message(result);
            using (var loginProcess = new LoginProcess())
            {
                txtTips.text = "正在连接登陆服务器...";
                await UniTask.Yield();
                var (connected,resultStr) = await loginProcess.ConnectLoginServer();
                if (connected)
                {
                    txtTips.text = "连接登陆服务器成功,正在请求登陆...";
                    await UniTask.Yield();
                    var errorCode = await loginProcess.StartLogin(inputAccount.text, inputPassword.text);
                    if (errorCode != Cfg.ErrorCode.Success)
                    {
                        txtTips.text = errorCode.ToString();
                    }
                    Log.Assert("登陆成功！！");
                }
                else
                {
                    txtTips.text = resultStr;
                }
            }
        }
    }
}
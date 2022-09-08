/** This is an automatically generated class by FairyGUI. Please do not modify it. **/

using Cysharp.Threading.Tasks;
using FairyGUI;
using System;

namespace PostMainland
{
    public enum MessageBoxResult
    {
        OK,
        Cancel,
    }
    public class MessageBox
    {
        public static async UniTask<MessageBoxResult> ShowConfirm(string content, string title, string confirmText = "确定", string cancelText = "取消")
        {
            var messageBox = await FGUI.Instance.OpenAsync<UIMessageBoxPopup>(FGUILayer.Popup);
            var tcs = new UniTaskCompletionSource<MessageBoxResult>();
            messageBox.Init(tcs, 0, content, title, confirmText, cancelText);
            return await tcs.Task;
        }
        public static async UniTask<MessageBoxResult> ShowConfirmAndCancel(string content, string title, string confirmText = "确定", string cancelText = "取消")
        {
            var messageBox = await FGUI.Instance.OpenAsync<UIMessageBoxPopup>(FGUILayer.Popup);
            var tcs = new UniTaskCompletionSource<MessageBoxResult>();
            messageBox.Init(tcs, 1, content, title, confirmText, cancelText);
            return await tcs.Task;
        }
    }
    public partial class UIMessageBoxPopup : UIWrapper
    {
        private UniTaskCompletionSource<MessageBoxResult> _tcs;
        public void Init(UniTaskCompletionSource<MessageBoxResult> tcs, int mode, string content, string title, string confirmText, string cancelText)
        {
            _tcs = tcs;
            txtContent.text = content;
            txtTitle.text = title;
            btnConfirm.text = confirmText;
            btnCancel.text = cancelText;
        }
        partial void OnClickBtnConfirm()
        {
            _tcs?.TrySetResult(MessageBoxResult.OK);
            CloseSelf();
        }
        partial void OnClickBtnCancel()
        {
            _tcs.TrySetResult(MessageBoxResult.Cancel);
            CloseSelf();
        }
    }
}
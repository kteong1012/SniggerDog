/** This is an automatically generated class by FairyGUI. Please do not modify it. **/

using Cysharp.Threading.Tasks;
using FairyGUI;
using System;
using System.Collections;
using System.Collections.Generic;

namespace PostMainland
{
    public enum MessageBoxResult
    {
        OK,
        Cancel,
    }
    public class MessageBox
    {
        public static async UniTask<MessageBoxResult> ShowConfirm(string content, string title, string confirmText = "确定")
        {
            var tcs = new UniTaskCompletionSource<MessageBoxResult>();
            var message = new UIMessageBoxPopup.MessageBoxParams()
            {
                content = content,
                mode = 0,
                tcs = tcs,
                title = title,
                confirmText = confirmText
            };
            UIQueueManager.Instance.DequeueUI<UIMessageBoxPopup>(FGUILayer.Popup, UIQueuePriority.P2, message);
            return await tcs.Task;
        }
        public static async UniTask<MessageBoxResult> ShowConfirmAndCancel(string content, string title, string confirmText = "确定", string cancelText = "取消")
        {
            var tcs = new UniTaskCompletionSource<MessageBoxResult>();
            var message = new UIMessageBoxPopup.MessageBoxParams()
            {
                content = content,
                mode = 1,
                tcs = tcs,
                title = title,
                confirmText = confirmText,
                cancelText = cancelText
            };
            UIQueueManager.Instance.DequeueUI<UIMessageBoxPopup>(FGUILayer.Popup, UIQueuePriority.P2, message);
            return await tcs.Task;
        }
    }
    public partial class UIMessageBoxPopup : UIWrapper
    {
        private UniTaskCompletionSource<MessageBoxResult> _tcs;
        protected override void OnShow()
        {
            base.OnShow();
            if (Params != null && Params is MessageBoxParams p)
            {
                _tcs = p.tcs;
                mode.selectedIndex = p.mode;
                txtContent.text = p.content;
                txtTitle.text = p.title;
                btnConfirm.text = p.confirmText;
                btnCancel.text = p.cancelText;
            }
        }
        partial void OnClickBtnConfirm()
        {
            _tcs?.TrySetResult(MessageBoxResult.OK);
            CloseSelf().Forget();
        }
        partial void OnClickBtnCancel()
        {
            _tcs.TrySetResult(MessageBoxResult.Cancel);
            CloseSelf().Forget();
        }
        public class MessageBoxParams : IWrapperParams
        {
            public UniTaskCompletionSource<MessageBoxResult> tcs;
            public int mode;
            public string content;
            public string title;
            public string confirmText;
            public string cancelText;
        }
    }
}
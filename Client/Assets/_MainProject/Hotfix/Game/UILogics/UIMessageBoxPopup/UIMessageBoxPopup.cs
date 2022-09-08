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
        static MessageBox()
        {
            StartUpdate().Forget();
        }

        private static async UniTask StartUpdate()
        {
            while (true)
            {
                if (!FGUI.Instance.IsOpen<UIMessageBoxPopup>())
                {
                    if (_msgInfos.TryDequeue(out var messageInfo))
                    {
                        Open(messageInfo).Forget();
                    }
                }
                await UniTask.Yield();
            }
        }

        private static Queue<MessageInfo> _msgInfos = new Queue<MessageInfo>();
        public static async UniTask<MessageBoxResult> ShowConfirm(string content, string title, string confirmText = "确定")
        {
            var tcs = new UniTaskCompletionSource<MessageBoxResult>();
            var message = new MessageInfo()
            {
                content = content,
                mode = 0,
                tcs = tcs,
                title = title,
                confirmText = confirmText
            };
            _msgInfos.Enqueue(message);
            return await tcs.Task;
        }
        public static async UniTask<MessageBoxResult> ShowConfirmAndCancel(string content, string title, string confirmText = "确定", string cancelText = "取消")
        {
            var tcs = new UniTaskCompletionSource<MessageBoxResult>();
            var message = new MessageInfo()
            {
                content = content,
                mode = 1,
                tcs = tcs,
                title = title,
                confirmText = confirmText,
                cancelText = cancelText
            };
            _msgInfos.Enqueue(message);
            return await tcs.Task;
        }
        private static async UniTask Open(MessageInfo info)
        {
            var messageBox = await FGUI.Instance.OpenAsync<UIMessageBoxPopup>(FGUILayer.Popup);
            messageBox.Init(info.tcs, info.mode, info.content, info.title, info.confirmText, info.cancelText);
        }
        private class MessageInfo
        {
            public UniTaskCompletionSource<MessageBoxResult> tcs;
            public int mode;
            public string content;
            public string title;
            public string confirmText;
            public string cancelText;
        }
    }
    public partial class UIMessageBoxPopup : UIWrapper
    {
        private UniTaskCompletionSource<MessageBoxResult> _tcs;
        public void Init(UniTaskCompletionSource<MessageBoxResult> tcs, int mode, string content, string title, string confirmText, string cancelText)
        {
            _tcs = tcs;
            this.mode.selectedIndex = mode;
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
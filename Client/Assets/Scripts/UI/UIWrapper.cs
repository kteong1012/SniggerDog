using Cysharp.Threading.Tasks;
using FairyGUI;
using System.Collections.Generic;
using UnityEngine;

namespace PostMainland
{
    public enum FGUILayer
    {
        Background = 0,
        Panel = 10,
        Popup = 20,
        Tips = 30,
        Loading = 40,
    }
    public class AsyncGButton
    {
        public bool isLocking = false;
        public GButton Button { get; }
        public AsyncGButton(GButton button)
        {
            Button = button;
        }
    }
    public interface IWrapperParams { }
    public abstract class UIWrapper : MonoBehaviour
    {
        #region Fields
        private bool _initialize = false;
        public GComponent Root { get; set; }
        public string Name
        {
            get
            {
                return Root?.name ?? name;
            }
            set
            {
                if (Root.name != null)
                {
                    Root.name = value;
                }
                name = value;
            }
        }
        private List<UIWrapper> _children = new List<UIWrapper>();
        public List<UIWrapper> Children => _children;
        public UIWrapper Parent { get; private set; }
        public IWrapperParams Params { get; private set; }

        private UniTaskCompletionSource _tcsClose;
        protected IFGUIShowOnHandler showOnHandler = new FadeInShowOnHandler();
        protected IFGUIShowOffHandler showOffHandler = new FadeOutShowOnHandler();
        #endregion

        #region Apis
        public abstract void Bind(GComponent com, int sortingOrder);
        public void Show()
        {
            if (!_initialize)
            {
                Initialize();
            }
            SetActiveWithScale(true);
            OnShow();
            showOnHandler.ShowOn(Root).Forget();
        }
        public async UniTask Hide()
        {
            await showOffHandler.ShowOff(Root);
            OnHide();
            SetActiveWithScale(false);
        }
        public async UniTask<T> AddChild<T>() where T : UIWrapper
        {
            T ui = await FGUI.Instance.CreateAsync<T>(null, Root);
            _children.SavelyAdd(ui);
            ui.Parent = this;
            return ui;
        }
        public void RemoveChild(UIWrapper ui)
        {
            if (ui != null)
            {
                _children.SavelyRemove(ui);
                ui.Dispose();
            }
        }
        public async UniTask WaitClose()
        {
            _tcsClose = new UniTaskCompletionSource();
            await _tcsClose.Task;
        }
        public void SetParams(IWrapperParams args)
        {
            Params = args;
        }
        #endregion

        #region Life Cycle
        /// <summary>
        /// 不要使用此接口，用FGUI.Instance.Close
        /// </summary>
        public async UniTask Close()
        {
            await Hide();
            Dispose();
        }
        protected void Initialize()
        {
            if (!_initialize)
            {
                _initialize = true;
                OnCreate();
            }
        }
        protected virtual void OnCreate()
        {

        }

        protected virtual void OnShow()
        {

        }
        protected virtual void OnHide()
        {

        }
        protected virtual void OnDispose()
        {

        }
        protected async UniTask CloseSelf()
        {
            await FGUI.Instance.Close(GetType());
        }
        #endregion

        #region Private Methods
        private void Dispose(bool removeFromParent = true)
        {
            if (removeFromParent)
            {
                if (Parent != null)
                {
                    Parent.Children.Remove(this);
                }
            }
            foreach (var child in _children)
            {
                child.Dispose(false);
            }
            _tcsClose.TrySetResult();
            _children.Clear();
            Root?.Dispose();
        }
        private void SetActiveWithScale(bool active)
        {
            Root.scale = active ? Vector2.one : Vector2.zero;
        }
        #endregion

        #region Extensions
        #endregion
    }
}

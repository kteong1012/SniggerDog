using Cysharp.Threading.Tasks;
using FairyGUI;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
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
        }
        public void Hide()
        {
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
        #endregion

        #region Life Cycle
        /// <summary>
        /// 不要使用此接口，用FGUI.Instance.Close
        /// </summary>
        public void Close()
        {
            Hide();
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
            _children.Clear();
            Root?.Dispose();
            FGUI.Instance.ReleaseAssest(GetType());
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

using Cysharp.Threading.Tasks;
using FairyGUI;
using System;
using System.Reflection;
using UnityEngine;

namespace PostMainland
{
    public enum FGUILayer { Main }
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
        #endregion

        #region Apis
        public abstract void Bind(GComponent com, int sortingOrder);
        public void Show()
        {
            if (!_initialize)
            {
                Initialize();
            }
            OnShow();
        }
        #endregion

        #region Life Cycle
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
    }
}

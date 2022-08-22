using Cysharp.Threading.Tasks;
using FairyGUI;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using TouchSocket.Core.Dependency;
using UnityEngine;

namespace PostMainland
{
    public class FGUI
    {
        private static FGUI _ins;
        private IAssemblyManager _assemblyManager;
        private Dictionary<Type, (string packageName, string resName, string url)> _uiInfos = new Dictionary<Type, (string packageName, string resName, string url)>();

        public static FGUI Instance
        {
            get
            {
                if (_ins == null)
                {
                    _ins = Global.Container.Resolve<FGUI>();
                }
                return _ins;
            }
        }
        public FGUI(IAssemblyManager assemblyManager)
        {
            AddPackage("AACommon");
            GRoot.inst.Center();
            GRoot.inst.SetContentScaleFactor(1280, 640, UIContentScaler.ScreenMatchMode.MatchWidthOrHeight);
            this._assemblyManager = assemblyManager;
            UpdateUIInfos();
        }

        private void UpdateUIInfos()
        {
            _uiInfos.Clear();
            var types = _assemblyManager.Types.Where(t => t.IsDefined(typeof(FGUIWrapperAttribute)));
            foreach (var type in types)
            {
                FGUIWrapperAttribute attr = type.GetCustomAttribute<FGUIWrapperAttribute>();
                _uiInfos.SavelyAdd(type, (attr.packageName, attr.resName, attr.url));
            }
        }
        #region Api

        public UIPackage AddPackage(string packageName)
        {
            var bytes = YooAssetsManager.Instance.Load<TextAsset>($"Fgui_{packageName}_fui").bytes;
            return UIPackage.AddPackage(bytes, packageName, OnLoadResourceFinished);
        }
        public async UniTask<T> OpenAsync<T>(FGUILayer layer = FGUILayer.Main, string name = null, bool createNew = false) where T : UIWrapper
        {
            if (!GetNameInfo<T>(out var nameInfo))
            {
                return null;
            }
            if (name.IsNullOrEmpty())
            {
                name = nameInfo.resName;
            }
            GComponent com = await GetOrCreateAsync(name, nameInfo.packageName, nameInfo.resName, GRoot.inst, createNew);
            T wrapper = GetWrapper<T>(com, name, 10 * (int)layer);
            wrapper.Show();
            return wrapper;
        }
        public async UniTask<T> CreateAsync<T>(string name = null, GComponent parent = null, bool createNew = true) where T : UIWrapper
        {
            if (!GetNameInfo<T>(out var nameInfo))
            {
                return null;
            }
            if (parent == null)
            {
                parent = GRoot.inst;
            }
            if (name.IsNullOrEmpty())
            {
                name = nameInfo.resName;
            }
            GComponent com = await GetOrCreateAsync(name, nameInfo.packageName, nameInfo.resName, parent, createNew);
            T view = GetWrapper<T>(com, name, parent.sortingOrder);
            view.Show();
            return view;
        }
        public T GetWrapper<T>(GComponent root, string name, int sortingOrder) where T : UIWrapper
        {
            T view = root.displayObject.gameObject.GetOrAddComponent<T>();
            view.Bind(root, sortingOrder);
            view.Name = name;
            view.Show();
            return view;
        }
        #endregion

        #region Logics

        private bool GetNameInfo<T>(out (string packageName, string resName, string url) nameInfo) where T : UIWrapper
        {
            return _uiInfos.TryGetValue(typeof(T), out nameInfo);
        }
        private async UniTask<GComponent> GetOrCreateAsync(string name, string packageName, string resName, GComponent parent = null, bool createNew = false)
        {
            var objs = parent.GetChildren().Where(x => x.name == name && !x.visible);
            GObject obj = objs.FirstOrDefault();
            if (createNew || obj == null)
            {
                UniTaskCompletionSource<GObject> tcs = new UniTaskCompletionSource<GObject>();
                AddPackage(packageName);
                UIPackage.CreateObjectAsync(packageName, resName, (o) =>
                {
                    tcs.TrySetResult(o);
                });
                await tcs.Task;
                obj = tcs.GetResult(0);
            }
            obj.name = name;
            parent.AddChild(obj);
            return obj as GComponent;
        }
        #endregion

        #region Callbacks
        private void OnLoadResourceFinished(string name, string extension, Type type, PackageItem item)
        {
            Log.Message($"{name}, {extension}, {type}, {item}");

            if (type == typeof(Texture))
            {
                Texture t = YooAssetsManager.Instance.Load<Texture>(name);
                item.owner.SetItemAsset(item, t, DestroyMethod.Custom);
            }
        }
        #endregion
    }
}

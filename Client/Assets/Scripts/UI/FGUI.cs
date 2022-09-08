using Cysharp.Threading.Tasks;
using FairyGUI;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using TouchSocket.Core.Dependency;
using UnityEngine;
using YooAsset;

namespace PostMainland
{
    public class AssetOperationHandleCounter
    {
        public string packageName;
        public int count;
        public AssetOperationHandle handle;
        public AssetOperationHandleCounter(AssetOperationHandle handle, string packageName)
        {
            this.handle = handle;
            this.packageName = packageName;
        }
    }
    public class FGUI
    {
        private static FGUI _ins;
        private IAssemblyManager _assemblyManager;
        private Dictionary<Type, (string packageName, string resName, string url)> _uiInfos = new Dictionary<Type, (string packageName, string resName, string url)>();
        private List<AssetOperationHandleCounter> _counters = new List<AssetOperationHandleCounter>(100);
        private Dictionary<Type, UIWrapper> _uiWrappers = new Dictionary<Type, UIWrapper>();

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
            GRoot.inst.Center();
            GRoot.inst.SetContentScaleFactor(1280, 640, UIContentScaler.ScreenMatchMode.MatchWidthOrHeight);
            this._assemblyManager = assemblyManager;
            UpdateUIInfos();
        }

        public void UpdateUIInfos()
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

        public UIPackage AddPackage(string packageName, bool localLoad, bool checkAACommon = true)
        {
            var package = UIPackage.GetByName(packageName);
            if (package != null)
            {
                return package;
            }
            if (localLoad)
            {
                return UIPackage.AddPackage($"FGUI/{packageName}");
            }
            else
            {
                if (checkAACommon)
                {
                    AddPackage("AACommon", false, false);
                }
                var bytes = YooAssetsManager.Instance.Load<TextAsset>($"Fgui_{packageName}_fui").bytes;
                return UIPackage.AddPackage(bytes, packageName, OnLoadResourceFinished);
            }
        }
        public async UniTask<T> OpenAsync<T>(FGUILayer layer = FGUILayer.Panel, string name = null, bool createNew = false) where T : UIWrapper
        {
            T wrapper = null;
            if (_uiWrappers.TryGetValue(typeof(T), out var ui))
            {
                wrapper = ui as T;
            }
            else
            {
                if (!GetNameInfo<T>(out var nameInfo))
                {
                    return null;
                }
                if (name.IsNullOrEmpty())
                {
                    name = nameInfo.resName;
                }
                bool localLoad = typeof(T).IsDefined(typeof(FGUILocalLoadAttribute), false);
                GComponent com = await GetOrCreateAsync(name, nameInfo.packageName, nameInfo.resName, localLoad, GRoot.inst, createNew);
                wrapper = GetWrapper<T>(com, name, 10 * (int)layer);
                _uiWrappers.SavelyAdd(typeof(T), wrapper);
            }
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
            bool localLoad = typeof(T).IsDefined(typeof(FGUILocalLoadAttribute), false);
            GComponent com = await GetOrCreateAsync(name, nameInfo.packageName, nameInfo.resName, localLoad, parent, createNew);
            T view = GetWrapper<T>(com, name, parent.sortingOrder);
            view.Show();
            return view;
        }
        public bool IsOpen<T>() where T : UIWrapper
        {
            return IsOpen(typeof(T));
        }
        public bool IsOpen(Type type)
        {
            return _uiWrappers.ContainsKey(type);
        }
        public void Close<T>() where T : UIWrapper
        {
            Close(typeof(T));
        }
        public void Close(Type type)
        {
            if (_uiWrappers.TryGetValue(type, out var wrapper))
            {
                wrapper.Close();
            }
            _uiWrappers.Remove(type);
            ReleaseAssest(type);
        }
        private void ReleaseAssest(Type type)
        {
            if (GetNameInfo(type, out var nameInfo))
            {
                var counter = _counters.FirstOrDefault(x => x.packageName == nameInfo.packageName);
                if (counter != null)
                {
                    counter.count--;
                    if (counter.count == 0)
                    {
                        _counters.Remove(counter);
                        counter.handle.Release();
                        counter.handle = null;
                    }
                }
            }
        }
        #endregion

        #region Logics
        private T GetWrapper<T>(GComponent root, string name, int sortingOrder) where T : UIWrapper
        {
            T view = root.displayObject.gameObject.GetOrAddComponent<T>();
            view.Bind(root, sortingOrder);
            view.Name = name;
            view.Show();
            return view;
        }

        private bool GetNameInfo<T>(out (string packageName, string resName, string url) nameInfo) where T : UIWrapper
        {
            return GetNameInfo(typeof(T), out nameInfo);
        }
        private bool GetNameInfo(Type type, out (string packageName, string resName, string url) nameInfo)
        {
            return _uiInfos.TryGetValue(type, out nameInfo);
        }
        private async UniTask<GComponent> GetOrCreateAsync(string name, string packageName, string resName, bool localLoad, GComponent parent = null, bool createNew = false)
        {
            var objs = parent.GetChildren().Where(x => x.name == name && !x.visible);
            GObject obj = objs.FirstOrDefault();
            if (createNew || obj == null)
            {
                UniTaskCompletionSource<GObject> tcs = new UniTaskCompletionSource<GObject>();
                AddPackage(packageName, localLoad);
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
        private object OnLoadResourceFinished(string name, string extension, System.Type type, out DestroyMethod method)
        {
            method = DestroyMethod.None; //注意：这里一定要设置为None
            string location = $"Fgui_{name}{extension}";
            var handle = YooAssets.LoadAssetAsync(location, type);
            var counter = _counters.FirstOrDefault(x => x.packageName == name);
            if (counter != null)
            {
                counter.count++;
            }
            else
            {
                counter = new AssetOperationHandleCounter(handle, name);
                _counters.Add(counter);
            }
            return handle.AssetObject;
        }
        #endregion
    }
}

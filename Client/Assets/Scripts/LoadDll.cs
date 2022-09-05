using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using UnityEngine;
using UnityEngine.Networking;
using YooAsset;

namespace PostMainland
{
    public enum YooAssetPlayMode
    {
        EditorSimulateMode,
        OfflinePlayMode,
        HostPlayMode
    }
    public class LoadDll : MonoBehaviour
    {
        public YooAssets.EPlayMode playMode;
        public static YooAssetPlayMode PlayMode { get; private set; }
        private Assembly _gameAss;
        private static Dictionary<string, byte[]> _abBytes = new Dictionary<string, byte[]>();

        public static event Action update;
        public static event Action fixedUpdate;
        public static event Action lateUpdate;
        void Start()
        {
            DontDestroyOnLoad(gameObject);
            PlayMode = (YooAssetPlayMode)playMode;
            Application.runInBackground = true;
            StartCoroutine(DownLoadDlls(this.StartGame));
        }


        public static byte[] GetAbBytes(string dllName)
        {
            return _abBytes[dllName];
        }

        private string GetWebRequestPath(string asset)
        {
            var path = $"{Application.streamingAssetsPath}/{asset}";
            if (!path.Contains("://"))
            {
                path = "file://" + path;
            }
            return path;
        }

        IEnumerator DownLoadDlls(Action onDownloadComplete)
        {
            var abs = new string[]
            {
                "common",
            };
            foreach (var ab in abs)
            {
                string dllPath = GetWebRequestPath(ab);
                Debug.Log($"start download ab:{ab}");
                UnityWebRequest www = UnityWebRequest.Get(dllPath);
                yield return www.SendWebRequest();

#if UNITY_2020_1_OR_NEWER
                if (www.result != UnityWebRequest.Result.Success)
                {
                    Debug.Log(www.error);
                }
#else
            if (www.isHttpError || www.isNetworkError)
            {
                Debug.Log(www.error);
            }
#endif
                else
                {
                    //Or retrieve results as binary data
                    byte[] abBytes = www.downloadHandler.data;
                    Debug.Log($"dll:{ab}  size:{abBytes.Length}");
                    _abBytes[ab] = abBytes;
                }
            }

            onDownloadComplete();
        }


        void StartGame()
        {
            LoadGameDll();
            RunMain();
        }


        public static AssetBundle AssemblyAssetBundle { get; private set; }

        private void LoadGameDll()
        {
            AssetBundle dllAB = AssemblyAssetBundle = AssetBundle.LoadFromMemory(GetAbBytes("common"));
#if !UNITY_EDITOR
            TextAsset dllBytes = dllAB.LoadAsset<TextAsset>("Hotfix.dll.bytes");
            _gameAss = System.Reflection.Assembly.Load(dllBytes.bytes);
#else
            Debug.Log(AppDomain.CurrentDomain.GetAssemblies().Count());
            _gameAss = AppDomain.CurrentDomain.GetAssemblies().First(assembly => assembly.GetName().Name == "Hotfix");
#endif
        }

        public void RunMain()
        {
            if (_gameAss == null)
            {
                UnityEngine.Debug.LogError("dll未加载");
                return;
            }
            var appType = _gameAss.GetType("App");
            var mainMethod = appType.GetMethod("Main");
            mainMethod.Invoke(null, null);
        }

        private void Update()
        {
            update?.Invoke();
        }
        private void FixedUpdate()
        {
            fixedUpdate?.Invoke();
        }
        private void LateUpdate()
        {
            lateUpdate?.Invoke();
        }
    }
}
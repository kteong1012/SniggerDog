using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using UnityEngine;
using UnityEngine.Networking;

namespace PostMainland
{
    public class LoadDll : MonoBehaviour
    {
        private Assembly _gameAss;
        private static Dictionary<string, byte[]> _abBytes = new Dictionary<string, byte[]>();
        private Action _game_Update;
        private Action _game_FixedUpdate;
        private Action _game_LateUpdate;
        private Action _game_OnApplicationQuit;
        void Start()
        {
            Application.runInBackground = true;
            //await YooAssetsManager.Instance.Initialize();
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
            Debug.Log("===========================1");
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

                Debug.Log("===========================2");
#if UNITY_2020_1_OR_NEWER
                if (www.result != UnityWebRequest.Result.Success)
                {
                    Debug.Log("===========================-1");
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
                    Debug.Log("===========================3");
                    // Or retrieve results as binary data
                    byte[] abBytes = www.downloadHandler.data;
                    Debug.Log($"dll:{ab}  size:{abBytes.Length}");
                    Debug.Log("===========================4");
                    _abBytes[ab] = abBytes;
                    Debug.Log("===========================5");
                }
            }

            Debug.Log("===========================1");
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
            TextAsset dllBytes1 = dllAB.LoadAsset<TextAsset>("Hotfix.dll.bytes");
            Assembly.Load(dllBytes1.bytes);
#else
            Debug.Log(AppDomain.CurrentDomain.GetAssemblies().Count());
            foreach (var ass in AppDomain.CurrentDomain.GetAssemblies())
            {
                Debug.Log("---------------------" + ass.GetName().Name);
            }
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
            var game = _gameAss.GetType("PostMainland.Game");
            MethodInfo miStart = game.GetMethod("Start");
            MethodInfo miUpdate = game.GetMethod("Update");
            MethodInfo miFixedUpdate = game.GetMethod("FixedUpdate");
            MethodInfo miLateUpdate = game.GetMethod("LateUpdate");
            MethodInfo miOnApplicationQuit = game.GetMethod("OnApplicationQuit");

            Action start = (Action)miStart?.CreateDelegate(typeof(Action));
            _game_Update = (Action)miUpdate?.CreateDelegate(typeof(Action));
            _game_FixedUpdate = (Action)miFixedUpdate?.CreateDelegate(typeof(Action));
            _game_LateUpdate = (Action)miLateUpdate?.CreateDelegate(typeof(Action));
            _game_OnApplicationQuit = (Action)miOnApplicationQuit?.CreateDelegate(typeof(Action));

            start();
        }

        private void Update()
        {
            //_game_Update?.Invoke();
        }
        private void FixedUpdate()
        {
            //_game_FixedUpdate?.Invoke();
        }
        private void LateUpdate()
        {
            //_game_LateUpdate?.Invoke();
        }
        private void OnApplicationQuit()
        {
            //_game_OnApplicationQuit?.Invoke();
        }
    }
}
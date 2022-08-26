using PostMainland;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using UnityEngine;
using YooAsset;

namespace PostMainland
{
    public class Main : MonoBehaviour
    {
        private Action _game_Update;
        private Action _game_FixedUpdate;
        private Action _game_LateUpdate;
        private Action _game_OnApplicationQuit;
        async void Start()
        {
            Application.runInBackground = true;
            await YooAssetsManager.Instance.Initialize();
            var dll = await YooAssetsManager.Instance.LoadAsync<TextAsset>("HotfixDll_Code.dll");
            var pdb = await YooAssetsManager.Instance.LoadAsync<TextAsset>("HotfixDll_Code.pdb");

            Assembly ass = Assembly.Load(dll.bytes, pdb.bytes);
            Type game = ass.GetType("PostMainland.Game");
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
            _game_Update?.Invoke();
        }
        private void FixedUpdate()
        {
            _game_FixedUpdate?.Invoke();
        }
        private void LateUpdate()
        {
            _game_LateUpdate?.Invoke();
        }
        private void OnApplicationQuit()
        {
            _game_OnApplicationQuit?.Invoke();
        }
    }
}

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
        private Action game_Update;
        private Action game_FixedUpdate;
        private Action game_LateUpdate;
        private Action game_OnApplicationQuit;
        async void Start()
        {
            Application.runInBackground = true;
            await YooAssetsManager.Instace.Initialize();
            var dll = await YooAssetsManager.Instace.LoadAsync<TextAsset>("HotfixDll_Code.dll");
            var pdb = await YooAssetsManager.Instace.LoadAsync<TextAsset>("HotfixDll_Code.pdb");

            Assembly ass = Assembly.Load(dll.bytes, pdb.bytes);
            Type game = ass.GetType("PostMainland.Game");
            MethodInfo miStart = game.GetMethod("Start");
            MethodInfo miUpdate = game.GetMethod("Update");
            MethodInfo miFixedUpdate = game.GetMethod("FixedUpdate");
            MethodInfo miLateUpdate = game.GetMethod("LateUpdate");
            MethodInfo miOnApplicationQuit = game.GetMethod("OnApplicationQuit");

            Action start = (Action)miStart?.CreateDelegate(typeof(Action));
            game_Update = (Action)miUpdate?.CreateDelegate(typeof(Action));
            game_FixedUpdate = (Action)miFixedUpdate?.CreateDelegate(typeof(Action));
            game_LateUpdate = (Action)miLateUpdate?.CreateDelegate(typeof(Action));
            game_OnApplicationQuit = (Action)miOnApplicationQuit?.CreateDelegate(typeof(Action));

            start();
        }

        private void Update()
        {
            game_Update?.Invoke();
        }
        private void FixedUpdate()
        {
            game_FixedUpdate?.Invoke();
        }
        private void LateUpdate()
        {
            game_LateUpdate?.Invoke();
        }
        private void OnApplicationQuit()
        {
            game_OnApplicationQuit?.Invoke();
        }
    }
}

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
        async void Start()
        {
            await YooAssetsManager.Instace.Initialize();
            var dll = await YooAssetsManager.Instace.LoadAsync<TextAsset>("HotfixDll_Code.dll");
            var pdb = await YooAssetsManager.Instace.LoadAsync<TextAsset>("HotfixDll_Code.pdb");

            Assembly ass = Assembly.Load(dll.bytes, pdb.bytes);
            Type game = ass.GetType("PostMainland.Game");
            MethodInfo mi = game.GetMethod("Start");
            mi.Invoke(null, null);
        }
    }
}

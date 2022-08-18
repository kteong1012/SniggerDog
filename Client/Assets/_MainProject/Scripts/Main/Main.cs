using PostMainland;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using UnityEngine;

public class Main : MonoBehaviour
{
    void Start()
    {
        //TEMP
        string dllPath = @"D:\Github\AntiMage\Client\Temp\Bin\Debug\Hotfix.dll";
        string pdbPath = @"D:\Github\AntiMage\Client\Temp\Bin\Debug\Hotfix.pdb";
        byte[] dll = File.ReadAllBytes(dllPath);
        byte[] pdb = File.ReadAllBytes(pdbPath);
        Assembly ass = Assembly.Load(dll, pdb);
        Type game = ass.GetType("PostMainland.Game");
        MethodInfo mi = game.GetMethod("Start");
        mi.Invoke(null, null);
    }
}

using Nino.Serialization;
using System.Collections.Generic;
using UnityEngine;

namespace SniggerDog
{
    public static class AppConst
    {
        public static CompressOption AotDllCompressOption => CompressOption.Zlib;
        public static readonly IReadOnlyList<string> PatchedAOTAssemblyList = new List<string>
        {
            "Main.dll",
            "System.Core.dll",
            "UnityEngine.CoreModule.dll",
            "mscorlib.dll",
        };
        public static string AotDllsPackagePath => $"{Application.streamingAssetsPath}/Dlls/.AotDllsPackage.bytes";
        public static string GameCodeDllPath => $"{Application.streamingAssetsPath}/GameCode.dll.bytes";
    }
}
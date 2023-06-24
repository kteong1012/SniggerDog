using HybridCLR.Editor;
using HybridCLR.Editor.Commands;
using Nino.Serialization;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

namespace SniggerDog.Editor.BuildPipeline
{
    public partial class BuildPipeline
    {
        private static string _AotDllsDir => SettingsUtil.GetAssembliesPostIl2CppStripDir(EditorUserBuildSettings.activeBuildTarget);
        private static string _packedFileName = "AotDllsPackage.bytes";


        [MenuItem("HCLRExtTools/PackAotDlls", false, 100)]
        public static void PackAotDlls()
        {
            var writer = new Writer(AppConst.AotDllCompressOption);
            var aotDllNames = new List<string>();
            aotDllNames.AddRange(AOTGenericReferences.PatchedAOTAssemblyList);
            aotDllNames.AddRange(AppConst.PatchedAOTAssemblyList);
            aotDllNames = aotDllNames.Distinct().ToList();

            var dllCount = aotDllNames.Count;
            //写入dllCount
            writer.Write(dllCount);
            foreach (var dllName in aotDllNames)
            {
                var dllPath = Path.Combine(_AotDllsDir, dllName);
                var bytes = File.ReadAllBytes(dllPath);
                //写入bytes
                writer.Write(bytes);
            }

            var outputPath = AppConst.AotDllsPackagePath;
            FileUtil.WriteFileSafely(outputPath, writer.ToBytes());

            Debug.Log($"生成文件成功：{outputPath}");
        }
        [MenuItem("HCLRExtTools/GenerateGameCodeToStreamingAssets", false, 100)]
        public static void GenerateGameCodeToStreamingAssets()
        {
            CompileDllCommand.CompileDllActiveBuildTarget();
            var dir = SettingsUtil.GetHotUpdateDllsOutputDirByTarget(EditorUserBuildSettings.activeBuildTarget);
            var fromPath = Path.Combine(dir, "GameCode.dll");

            var toPath = AppConst.GameCodeDllPath;
            FileUtil.CopySafely(fromPath, toPath, true);
            Debug.Log($"生成文件成功：{toPath}");
        }
    }
}
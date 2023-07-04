
using HybridCLR;
using Nino.Serialization;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using UnityEngine;

namespace SniggerDog
{
    public class Main : MonoBehaviour
    {
        void Start()
        {
            InitServiceCollection();

            LoadGameCode();
        }

        private static void InitServiceCollection()
        {
            var assemblies = System.AppDomain.CurrentDomain.GetAssemblies();

            foreach (var assembly in assemblies)
            {
                ServiceCollection.Instance.LoadAssembly(assembly);
            }

            ServiceCollection.Instance.ResolveAllServices();
        }

        private static void LoadGameCode()
        {
            // Editor环境下，GameCode.dll.bytes已经被自动加载，不需要加载，重复加载反而会出问题。
#if !UNITY_EDITOR
            // 先补充元数据
            LoadMetadataForAOTAssemblies();
            Assembly hotUpdateAss = Assembly.Load(File.ReadAllBytes(AppConst.GameCodeDllPath));
#else
            // Editor下无需加载，直接查找获得HotUpdate程序集
            Assembly hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "GameCode");
#endif

            Type type = hotUpdateAss.GetType("SniggerDog.GameEntry");
            type.GetMethod("StartGame").Invoke(null, null);

            ServiceCollection.Instance.LoadAssembly(hotUpdateAss);
            ServiceCollection.Instance.ResolveAllServices();
        }

        private static void LoadMetadataForAOTAssemblies()
        {
            //解析规则：dll数量(4)+（长度+dll本体(压缩)）
            var bytes = File.ReadAllBytes(AppConst.AotDllsPackagePath);
            if (bytes == null || bytes.Length == 0)
            {
                return;
            }
            var reader = new Reader(bytes, bytes.Length, AppConst.AotDllCompressOption);

            var dllCount = reader.ReadInt32();
            for (int i = 0; i < dllCount; i++)
            {
                var length = reader.ReadLength();
                var dllBytes = reader.ReadBytes(length);
                var err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, HomologousImageMode.SuperSet);
                Debug.Log($"LoadMetadataForAOTAssembly:第{i}个. ret:{err}");
            }
        }
    }
}
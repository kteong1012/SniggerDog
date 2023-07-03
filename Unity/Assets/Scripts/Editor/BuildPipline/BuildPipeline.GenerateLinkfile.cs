using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using System.Text;
using HybridCLR.Editor;
using UnityEditor;
using UnityEngine;

namespace SniggerDog.Editor.BuildPipeline
{
    public partial class BuildPipeline
    {
        private static string _il2cppManagedPath = string.Empty;

        private static string il2cppManagedPath
        {
            get
            {
                if (string.IsNullOrEmpty(_il2cppManagedPath))
                {
                    var contentsPath = EditorApplication.applicationContentsPath;
                    var extendPath = "";

                    var buildTarget = EditorUserBuildSettings.activeBuildTarget;
#if UNITY_EDITOR_WIN
                    switch (buildTarget)
                    {
                        case BuildTarget.StandaloneWindows64:
                        case BuildTarget.StandaloneWindows:
                            extendPath = "PlaybackEngines/windowsstandalonesupport/Variations/il2cpp/Managed/";
                            break;
                        case BuildTarget.iOS:
                            extendPath = "PlaybackEngines/iOSSupport/Variations/il2cpp/Managed/";
                            break;
                        case BuildTarget.Android:
                            extendPath = "PlaybackEngines/AndroidPlayer/Variations/il2cpp/Managed/";
                            break;
                        default:
                            throw new Exception($"[BuildPipeline::GenerateLinkfile] 请选择合适的平台, 目前是:{buildTarget}");
                    }
#elif UNITY_EDITOR_OSX
                switch (buildTarget)
                {
                    case BuildTarget.StandaloneOSX:
                        extendPath = "PlaybackEngines/MacStandaloneSupport/Variations/il2cpp/Managed/";
                        break;
                    case BuildTarget.iOS:
                        extendPath = "../../PlaybackEngines/iOSSupport/Variations/il2cpp/Managed/";
                        break;
                    case BuildTarget.Android:
                        extendPath = "../../PlaybackEngines/AndroidPlayer/Variations/il2cpp/Managed/";
                        break;
                    default:
                        throw new Exception($"[BuildPipeline::GenerateLinkfile] 请选择合适的平台, 目前是:{buildTarget}");
                }
#endif
                    if (string.IsNullOrEmpty(extendPath))
                    {
                        throw new Exception($"[BuildPipeline::GenerateLinkfile] 请选择合适的平台, 目前是:{buildTarget}");
                    }

                    _il2cppManagedPath = Path.Combine(contentsPath, extendPath).Replace('\\', '/');
                }

                return _il2cppManagedPath;
            }
        }

        private static List<string> IgnoreClass = new()
        {
            "editor", "netstandard", "Bee.", "dnlib", ".framework", "Mono.", "Test", "plastic", "Gradle", "log4net", "Analytics", "System.Drawing",
            "NVIDIA", "VisualScripting", "UIElements", "IMGUIModule", ".Cecil", "GIModule", "GridModule", "HotReloadModule", "StreamingModule", "TLSModule",
            "XRModule", "WindModule", "VRModule", "PlayerBuildProgram", "VirtualTexturingModule", "compiler"
        };
        private static bool IsIngoreClass(string classFullName)
        {
            var tmpName = classFullName.ToLower();
            foreach (var ic in IgnoreClass)
            {
                if (tmpName.Contains(ic.ToLower()))
                {
                    return true;
                }
            }

            return false;
        }

        private static List<string> IgnoreType = new()
        {
            "jetbrain", "editor", "PrivateImplementationDetails", "experimental", "microsoft.", "compiler"
        };
        private static bool IsIgnoreType(string typeFullName)
        {
            var tmpName = typeFullName.ToLower();
            foreach (var ic in IgnoreType)
            {
                if (tmpName.Contains(ic.ToLower()))
                {
                    return true;
                }
            }

            return false;
        }

        [MenuItem("HCLRExtTools/GenerateLinkFile", false, 100)]
        private static void GenerateLinkfile()
        {
            var basePath = il2cppManagedPath;
            if (!Directory.Exists(basePath))
            {
                Debug.LogWarning($"[BuildPipeline::GenerateLinkfile] can't find il2cpp's dlls [{basePath}]");
                basePath = basePath.Replace("/il2cpp/", "/mono/");
            }

            if (!Directory.Exists(basePath))
            {
                Debug.LogWarning($"[BuildPipeline::GenerateLinkfile] can't find il2cpp's dlls [{basePath}]");
                return;
            }

            LinkedList<string> Assemblies;
            Dictionary<string, Assembly> AllAssemblies = new();

            var hashAss = new HashSet<string>();
            var files = new List<string>(Directory.GetFiles(basePath, "*.dll"));
            foreach (var file in files)
            {
                var ass = Assembly.LoadFile(file);
                if (ass != null)
                {
                    var name = ass.GetName().Name;
                    if (!hashAss.Contains(name))
                    {
                        hashAss.Add(name);

                        AllAssemblies[name] = ass;
                    }
                }
            }

            var names = SettingsUtil.HotUpdateAssemblyNamesExcludePreserved;
            foreach (var ass in AppDomain.CurrentDomain.GetAssemblies())
            {
                var name = ass.GetName().Name;
                var ignore = false;
                foreach (var n in names)
                {
                    if (name.Contains(n))
                    {
                        ignore = true;
                        break;
                    }
                }

                if (ignore)
                {
                    continue;
                }

                if (!hashAss.Contains(name))
                {
                    hashAss.Add(name);

                    AllAssemblies[name] = ass;
                }
            }

            Assemblies = new LinkedList<string>(hashAss);
            var first = Assemblies.First;
            while (first != null)
            {
                var name = first.Value;
                if (IsIngoreClass(name))
                {
                    first = first.Next;
                    Assemblies.Remove(name);
                }
                else
                {
                    first = first.Next;
                }
            }

            var dstList = new List<string>(Assemblies);
            dstList.Sort();

            var fileName = Path.GetFullPath(Path.Combine(Application.dataPath, "link.xml")).Replace('\\', '/');
            var writer = System.Xml.XmlWriter.Create(fileName, new()
            {
                Encoding = new UTF8Encoding(false),
                Indent = true
            });

            writer.WriteStartDocument();
            writer.WriteStartElement("linker");

            foreach (var assembly in dstList)
            {
                var ass = AllAssemblies[assembly];
                if (ass != null)
                {
                    writer.WriteStartElement("assembly");
                    writer.WriteAttributeString("fullname", assembly);
                    var types = ass.GetTypes();
                    var allTypeName = new List<string>();
                    foreach (var type in types)
                    {
                        if (IsIgnoreType(type.FullName))
                        {
                            continue;
                        }

                        allTypeName.Add(type.FullName);
                    }
                    allTypeName.Sort();

                    foreach (var type in allTypeName)
                    {
                        writer.WriteStartElement("type");
                        writer.WriteAttributeString("fullname", type);
                        writer.WriteAttributeString("preserve", "all");
                        writer.WriteEndElement();
                    }
                    writer.WriteEndElement();
                }
            }
            writer.WriteEndElement();
            writer.WriteEndDocument();
            writer.Close();
        }
    }
}

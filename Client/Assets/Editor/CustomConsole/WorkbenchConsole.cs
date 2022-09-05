using Nino.Editor;
using Sirenix.OdinInspector;
using Sirenix.OdinInspector.Editor;
using UnityEditor;
using UnityEngine;

namespace PostMainland
{
    public class WorkbenchConsole : OdinEditorWindow
    {
        [MenuItem("PostMainland/工作台")]
        public static void Open()
        {
            WorkbenchConsole workbenchConsole = GetWindow<WorkbenchConsole>(false, "工作台");
            workbenchConsole.Show();
        }


        [VerticalGroup("生成"), Button("生成Hotfix_Debug并启动")]
        public void BuildDebugAndPlay()
        {
            HotfixCodeBuilder.BuildDebugAndPlay();
        }
        [VerticalGroup("生成"), Button("生成Hotfix_Release并启动")]
        public void BuildReleaseAndPlay()
        {
            HotfixCodeBuilder.BuildReleaseAndPlay();
        }
        [VerticalGroup("生成"), Button("生成协议")]
        public void BuildProtocals()
        {
            System.Diagnostics.Process process = new System.Diagnostics.Process();
            process.StartInfo.FileName = @"..\Protocal\gen_protocal.bat";
            process.StartInfo.WorkingDirectory = @"..\Protocal";
            process.StartInfo.UseShellExecute = false;
            process.StartInfo.CreateNoWindow = true;
            process.StartInfo.RedirectStandardOutput = true;
            process.Start();
            process.WaitForExit();//等待程序执行完退出进程
            string output = process.StandardOutput.ReadToEnd();
            process.Close();
            Debug.Log(output.Replace("\n", "  "));
            AssetDatabase.Refresh();
        }
        [VerticalGroup("生成"), Button("生成协议静态脚本")]
        public void BuildProtocalHelpers()
        {
            SerializationHelper.GenerateSerializationCode();
        }
        [VerticalGroup("生成"), Button("生成配置")]
        public void GenerateConfig()
        {
            System.Diagnostics.Process process = new System.Diagnostics.Process();
            process.StartInfo.FileName = @"..\Config\gen_configs.bat";
            process.StartInfo.WorkingDirectory = @"..\Config";
            process.StartInfo.UseShellExecute = false;
            process.StartInfo.CreateNoWindow = true;
            process.StartInfo.RedirectStandardOutput = true;
            process.Start();
            process.WaitForExit();//等待程序执行完退出进程
            string output = process.StandardOutput.ReadToEnd();
            process.Close();
            if (output.Contains("exception", System.StringComparison.OrdinalIgnoreCase))
            {
                Debug.LogError("生成配置失败\r\n" + output);
            }
            else
            {
                Debug.Log("生成配置成功!!");
                AssetDatabase.Refresh();
            }
        }
    }

}
using UnityEditor;
using UnityEngine;

namespace PostMainland
{
    public class WorkbenchConsole : EditorWindow
    {
        [MenuItem("PostMainland/工作台")]
        public static void Open()
        {
            WorkbenchConsole workbenchConsole = GetWindow<WorkbenchConsole>(false, "工作台");
            workbenchConsole.Show();
        }

        private void OnGUI()
        {
            if (GUILayout.Button("生成Hotfix_Debug并启动"))
            {
                HotfixCodeBuilder.BuildDebugAndPlay();
            }
            if (GUILayout.Button("生成Hotfix_Release并启动"))
            {
                HotfixCodeBuilder.BuildReleaseAndPlay();
            }
        }
    }

}
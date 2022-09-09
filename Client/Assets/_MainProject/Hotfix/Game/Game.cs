using Cysharp.Threading.Tasks;
using TouchSocket.Core.Dependency;

namespace PostMainland
{
    public static class Game
    {
        public static void Start()
        {
            Log.AppendExtendLogs(new MessageBoxLogger());
            FGUI.Instance.Close<UIResUpdatePanel>().Forget();
            Global.Container
                .RegisterSingleton<IProtocalManagerService, ProtocalManager>()
                .RegisterSingleton<IConfigLoader, Luban>();


            Global.Container.Resolve<IConfigLoader>();
            var assMgr = Global.Container.Resolve<IAssemblyManager>();
            assMgr.AddTypes(typeof(Game).Assembly.GetTypes());


            FGUI.Instance.UpdateUIInfos();
            FGUI.Instance.OpenAsync<UILoginPanel>().Forget();
        }
    }
}
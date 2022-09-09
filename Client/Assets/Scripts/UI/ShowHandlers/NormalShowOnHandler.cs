using Cysharp.Threading.Tasks;
using FairyGUI;

namespace PostMainland
{
    public class NormalShowOnHandler : IFGUIShowOnHandler
    {
        public UniTask ShowOn(GComponent component)
        {
            component.visible = true;
            return UniTask.CompletedTask;
        }
    }
}

using Cysharp.Threading.Tasks;
using FairyGUI;

namespace PostMainland
{
    public class NormalShowOffHandler : IFGUIShowOffHandler
    {
        public UniTask ShowOff(GComponent component)
        {
            component.visible = false;
            return UniTask.CompletedTask;
        }
    }
}

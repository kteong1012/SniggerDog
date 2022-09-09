using Cysharp.Threading.Tasks;
using FairyGUI;

namespace PostMainland
{
    public interface IFGUIShowOnHandler
    {
        UniTask ShowOn(GComponent component);
    }
    public interface IFGUIShowOffHandler
    {
        UniTask ShowOff(GComponent component);
    }
}

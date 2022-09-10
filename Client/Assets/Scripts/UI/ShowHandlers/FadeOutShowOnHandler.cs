using Cysharp.Threading.Tasks;
using DG.Tweening;
using FairyGUI;

namespace PostMainland
{
    public class FadeOutShowOnHandler : IFGUIShowOffHandler
    {
        private readonly float _duration;
        private readonly float _target;

        public FadeOutShowOnHandler(float duration = 0.2f,float target = 0f)
        {
            _duration = duration;
            _target = target;
        }
        public async UniTask ShowOff(GComponent component)
        {
            await component.DoFade(_target, _duration);
        }
    }
}

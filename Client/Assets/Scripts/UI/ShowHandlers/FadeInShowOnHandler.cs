using Cysharp.Threading.Tasks;
using DG.Tweening;
using FairyGUI;

namespace PostMainland
{
    public class FadeInShowOnHandler : IFGUIShowOnHandler
    {
        private readonly float _duration;
        private readonly float _target;

        public FadeInShowOnHandler(float duration = 0.2f, float target = 1f)
        {
            _duration = duration;
            _target = target;
        }
        public async UniTask ShowOn(GComponent component)
        {
            component.alpha = 0f;
            await component.DoFade(_target, _duration);
        }
    }
}

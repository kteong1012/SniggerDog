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
            var tcs = new UniTaskCompletionSource();
            var t = DOTween.To(() => component.alpha, (a) => component.alpha = a, _target, _duration)
                .OnComplete(() =>
                {
                    tcs.TrySetResult();
                });
            t.SetTarget(component);
            await tcs.Task;
        }
    }
}

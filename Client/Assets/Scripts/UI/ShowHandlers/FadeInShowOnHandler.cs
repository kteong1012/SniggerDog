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

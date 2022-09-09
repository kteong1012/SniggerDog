using Cysharp.Threading.Tasks;
using DG.Tweening;
using FairyGUI;

namespace PostMainland
{
    public class FadeOutShowOnHandler : IFGUIShowOffHandler
    {
        public async UniTask ShowOff(GComponent component)
        {
            var tcs = new UniTaskCompletionSource();
            var t = DOTween.To(() => component.alpha, (a) => component.alpha = a, 0, 0.5f)
                .OnComplete(() =>
                {
                    tcs.TrySetResult();
                });
            t.SetTarget(component);
            await tcs.Task;
        }
    }
}

using Cysharp.Threading.Tasks;
using DG.Tweening;
using FairyGUI;

namespace PostMainland
{
    public class FadeInShowOnHandler : IFGUIShowOnHandler
    {
        public async UniTask ShowOn(GComponent component)
        {
            component.alpha = 0f;
            var tcs = new UniTaskCompletionSource();
            var t =DOTween.To(() => component.alpha, (a) => component.alpha = a, 1, 0.5f)
                .OnComplete(() =>
                {
                    tcs.TrySetResult();
                });
            t.SetTarget(component);
            await tcs.Task;
        }
    }
}

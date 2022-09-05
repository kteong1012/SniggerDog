using Cysharp.Threading.Tasks;
using FairyGUI;

namespace PostMainland
{
    public static class FGUIExtensions
    {
        public delegate void ButtonOnClickDelegate();
        public static void SetOnClick(this GButton button, ButtonOnClickDelegate callback)
        {
            button.onClick.Set(() => callback?.Invoke());
        }
        public delegate UniTask ButtonOnClickAsync();
        public static void SetOnClickAsync(this AsyncGButton button, ButtonOnClickAsync onClickAsync, int timeoutMilli = 2000)
        {
            async UniTask OnClick()
            {
                if (button.isLocking)
                {
                    Log.Error("操作频繁");
                    return;
                }
                if (onClickAsync != null)
                {
                    button.isLocking = true;
                    try
                    {
                        int index = await UniTask.WhenAny(UniTask.Delay(timeoutMilli), onClickAsync());
                        if (index == 0)
                        {
                            Log.Error("超时");
                        }
                    }
                    finally
                    {
                        if (button != null)
                        {
                            button.isLocking = false;
                        }
                    }
                }
            }
            button.isLocking = false;
            button.Button.onClick.Set(() =>
            {
                OnClick().Forget();
            });
        }
    }
}

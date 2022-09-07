using System.Collections;
using Cysharp.Threading.Tasks;
using YooAsset;

public class FsmDownloadWebFiles : IFsmNode
{
    public string Name { private set; get; } = nameof(FsmDownloadWebFiles);

    void IFsmNode.OnEnter()
    {
        PatchEventDispatcher.SendPatchStepsChangeMsg(EPatchStates.DownloadWebFiles);
        BeginDownload().Forget();
    }

    void IFsmNode.OnUpdate()
    {
    }

    void IFsmNode.OnExit()
    {
    }

    private async UniTaskVoid BeginDownload()
    {
        var downloader = PatchUpdater.Downloader;

        UniTaskCompletionSource uniTaskCompletionSource = new UniTaskCompletionSource();

        // 注册下载回调
        downloader.OnDownloadErrorCallback = PatchEventDispatcher.SendWebFileDownloadFailedMsg;
        downloader.OnDownloadProgressCallback = PatchEventDispatcher.SendDownloadProgressUpdateMsg;
        downloader.BeginDownload();
        
        downloader.Completed += _ => { uniTaskCompletionSource.TrySetResult(); };
        
        await uniTaskCompletionSource.Task;

        // 检测下载结果
        if (downloader.Status != EOperationStatus.Succeed)
            return;

        FsmManager.Transition(nameof(FsmPatchDone));
    }
}
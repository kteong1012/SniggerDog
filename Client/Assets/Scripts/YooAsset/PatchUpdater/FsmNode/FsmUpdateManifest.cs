using System.Collections;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;
using YooAsset;

public class FsmUpdateManifest : IFsmNode
{
    public string Name { private set; get; } = nameof(FsmUpdateManifest);

    void IFsmNode.OnEnter()
    {
        PatchEventDispatcher.SendPatchStepsChangeMsg(EPatchStates.UpdateManifest);
        UpdateManifest().Forget();
    }

    void IFsmNode.OnUpdate()
    {
    }

    void IFsmNode.OnExit()
    {
    }

    private async UniTaskVoid UpdateManifest()
    {
        // 更新补丁清单
        UniTaskCompletionSource uniTaskCompletionSource = new UniTaskCompletionSource();

        var operation = YooAssets.UpdateManifestAsync(PatchUpdater.ResourceVersion, 30);
        operation.Completed += _ => { uniTaskCompletionSource.TrySetResult(); };
        
        await uniTaskCompletionSource.Task;

        if (operation.Status == EOperationStatus.Succeed)
        {
            FsmManager.Transition(nameof(FsmCreateDownloader));
        }
        else
        {
            Debug.LogWarning(operation.Error);
            PatchEventDispatcher.SendPatchManifestUpdateFailedMsg();
        }
    }
}
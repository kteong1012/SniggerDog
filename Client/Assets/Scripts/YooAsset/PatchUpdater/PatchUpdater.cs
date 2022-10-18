using System;
using System.Collections;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;
using YooAsset;
using PostMainland;

public static class PatchUpdater
{
    private static bool _isRun = false;

    /// <summary>
    /// 下载器
    /// </summary>
    public static PatchDownloaderOperation Downloader { set; get; }

    /// <summary>
    /// 资源版本
    /// </summary>
    public static int ResourceVersion { set; get; }

    private static readonly EventGroup _eventGroup = new EventGroup();

    public static Action<PatchEventMessageDefine.PatchStatesChange> OnStateUpdate;
    public static Action<PatchEventMessageDefine.DownloadProgressUpdate> OnDownLoadProgressUpdate;
    private static UniTaskCompletionSource s_UniTaskCompletionSource;

    public static void InitCallback(Action<PatchEventMessageDefine.PatchStatesChange> onStateUpdate,
        Action<PatchEventMessageDefine.DownloadProgressUpdate> onDownLoadProgressUpdate)
    {
        OnStateUpdate += onStateUpdate;
        OnDownLoadProgressUpdate += onDownLoadProgressUpdate;
    }

    /// <summary>
    /// 开启初始化流程
    /// </summary>
    public static void Run(UniTaskCompletionSource uniTaskCompletionSource)
    {
        s_UniTaskCompletionSource = uniTaskCompletionSource;
        if (_isRun == false)
        {
            _isRun = true;

            _eventGroup.AddListener<PatchEventMessageDefine.PatchStatesChange>(OnHandleEvent);
            _eventGroup.AddListener<PatchEventMessageDefine.FoundUpdateFiles>(OnHandleEvent);
            _eventGroup.AddListener<PatchEventMessageDefine.DownloadProgressUpdate>(OnHandleEvent);
            _eventGroup.AddListener<PatchEventMessageDefine.StaticVersionUpdateFailed>(OnHandleEvent);
            _eventGroup.AddListener<PatchEventMessageDefine.PatchManifestUpdateFailed>(OnHandleEvent);
            _eventGroup.AddListener<PatchEventMessageDefine.WebFileDownloadFailed>(OnHandleEvent);

            // 注意：按照先后顺序添加流程节点
            if(Main.Instance.playMode == YooAssets.EPlayMode.HostPlayMode)
            {
                FsmManager.AddNode(new FsmPatchInit());
                FsmManager.AddNode(new FsmUpdateStaticVersion());
                FsmManager.AddNode(new FsmUpdateManifest());
                FsmManager.AddNode(new FsmCreateDownloader());
                FsmManager.AddNode(new FsmDownloadWebFiles());
            }
            FsmManager.AddNode(new FsmPatchDone());

            FsmManager.Run(nameof(FsmPatchInit));
        }
        else
        {
            Debug.LogWarning("补丁更新已经正在进行中!");
        }
    }

    /// <summary>
    /// 处理请求操作
    /// </summary>
    private static void HandleOperation(EPatchOperation operation)
    {
        if (operation == EPatchOperation.BeginDownloadWebFiles)
        {
            FsmManager.Transition(nameof(FsmDownloadWebFiles));
        }
        else if (operation == EPatchOperation.TryUpdateStaticVersion)
        {
            FsmManager.Transition(nameof(FsmUpdateStaticVersion));
        }
        else if (operation == EPatchOperation.TryUpdatePatchManifest)
        {
            FsmManager.Transition(nameof(FsmUpdateManifest));
        }
        else if (operation == EPatchOperation.TryDownloadWebFiles)
        {
            FsmManager.Transition(nameof(FsmCreateDownloader));
        }
        else
        {
            throw new NotImplementedException($"{operation}");
        }
    }

    /// <summary>
    /// 接收事件
    /// </summary>
    private static void OnHandleEvent(IEventMessage msg)
    {
        if (msg is PatchEventMessageDefine.PatchStatesChange patchStatesChange)
        {
            if (patchStatesChange.CurrentStates == EPatchStates.UpdateStaticVersion)
                Log.Info("Update static version.");
            else if (patchStatesChange.CurrentStates == EPatchStates.UpdateManifest)
                Log.Info("Update patch manifest.");
            else if (patchStatesChange.CurrentStates == EPatchStates.CreateDownloader)
                Log.Info("Check download contents.");
            else if (patchStatesChange.CurrentStates == EPatchStates.DownloadWebFiles)
                Log.Info("Downloading patch files.");
            else if (patchStatesChange.CurrentStates == EPatchStates.PatchDone)
            {
                s_UniTaskCompletionSource?.TrySetResult();
                Log.Info("PatchDone. ");
            }
            else
                throw new NotImplementedException(patchStatesChange.CurrentStates.ToString());

            OnStateUpdate?.Invoke(patchStatesChange);
        }
        else if (msg is PatchEventMessageDefine.FoundUpdateFiles)
        {
            var message = msg as PatchEventMessageDefine.FoundUpdateFiles;

            float sizeMB = message.TotalSizeBytes / 1048576f;
            sizeMB = Mathf.Clamp(sizeMB, 0.1f, float.MaxValue);
            string totalSizeMB = sizeMB.ToString("f1");
            Log.Info($"Found update patch files, Total count {message.TotalCount} Total szie {totalSizeMB}MB");

            PatchUpdater.HandleOperation(EPatchOperation.BeginDownloadWebFiles);
        }
        else if (msg is PatchEventMessageDefine.DownloadProgressUpdate downloadProgressUpdate)
        {
            OnDownLoadProgressUpdate?.Invoke(downloadProgressUpdate);
        }
        else if (msg is PatchEventMessageDefine.StaticVersionUpdateFailed)
        {
            System.Action callback = () => { PatchUpdater.HandleOperation(EPatchOperation.TryUpdateStaticVersion); };
            Log.Info($"Failed to update static version, please check the network status.  {callback}");
        }
        else if (msg is PatchEventMessageDefine.PatchManifestUpdateFailed)
        {
            System.Action callback = () => { PatchUpdater.HandleOperation(EPatchOperation.TryUpdatePatchManifest); };
            Log.Info($"Failed to update patch manifest, please check the network status.  {callback}");
        }
        else if (msg is PatchEventMessageDefine.WebFileDownloadFailed)
        {
            var message = msg as PatchEventMessageDefine.WebFileDownloadFailed;
            System.Action callback = () => { PatchUpdater.HandleOperation(EPatchOperation.TryDownloadWebFiles); };
            Log.Info($"Failed to download file : {message.FileName}  {callback}");
        }
        else
        {
            throw new System.NotImplementedException($"{msg.GetType()}");
        }
    }
}
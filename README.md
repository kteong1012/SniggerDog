# 宝鱼的游戏框架
## 特点
  - 包含Unity客户端与服务端代码，服务端支持单机分布式多进程运行。
  - 无回调网络请求，使用async/await即可接收response。
     ```csharp
    public static async UniTask<ErrorCode> StartLogin(string accountName, string password)
    {
        TcpC2SSession session = new TcpC2SSession(_loginIpHost);
        var response = await session.Request<L2C_Login, C2L_Login>(new C2L_Login() { Account = accountName, Password = password });
        if(!response.Success(out var errorCode))
        {
            return errorCode;
        }
        return ErrorCode.Success;
    }
     ```
  - 自动化生成UI界面代码、协议代码、配置代码，解放大部分的繁杂工作量。
  - 使用IOC容器、依赖注入管理运行时的各种服务和实例。
## 使用的开源库
  - 配置模块([Luban](https://github.com/focus-creative-games/luban)) : 强大的配置工具。你的最佳游戏配置解决方案。
  - 资源加载([YooAssets](https://github.com/tuyoogame/YooAsset)) : YooAsset是一套用于Unity3D的资源管理系统，用于帮助研发团队快速部署和交付游戏。它可以满足商业化游戏的各类需求，并且经历多款百万DAU游戏产品的验证。
  - 网络模块（[TouchSocket](https://github.com/RRQM/TouchSocket)）: 这是一个轻量级的、支持插件的综合网络通信库。基础通信功能包含Tcp、Udp、Ssl、Rpc、Http等。其中http服务器支持WebSocket、静态网页、XmlRpc、WebApi、JsonRpc等扩展插件。和自定义协议的TouchRpc，支持Ssl加密、异步调用、权限管理、错误状态返回、服务回调、分布式调用等。在空载函数执行时，10万次调用仅3.8秒，在不返回状态时，仅0.9秒。
  - UI模块([Fairy-GUI](https://www.fairygui.com/)) : 非常优秀的专业游戏UI解决方案
  - 代码热更([HybridCLR](https://github.com/focus-creative-games/hybridclr)) : HybridCLR(代号wolong)是一个特性完整、零成本、高性能、低内存的近乎完美的Unity全平台原生c#热更方案。
  - 序列化([Nino](https://github.com/JasonXuDeveloper/Nino)) : 实用的高性能C#模块，尤其在Unity平台能带来令人难以置信的效益。Definite useful and high performance modules for C# projects, especially for Unity.
## 其它插件
  - [UniTask](https://github.com/Cysharp/UniTask) : 为Unity提高一个高效无GC的async/await解决方案。 Provides an efficient allocation free async/await integration for Unity.

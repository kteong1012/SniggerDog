namespace PostMainland
{
    public enum ServerType
    {
        Main,       //入口，用来启动服务器进程的
        Login,      //登陆服务器，登陆、账号管理相关
        Realm,      //负载均衡服务器
        Gate,       //网关，和客户端保持联系
        World,      //主世界服务器
        Solcial,    //社交、匹配服务器
        Battle,     //战斗服务器
        GM,         //GM服务器
    }
}
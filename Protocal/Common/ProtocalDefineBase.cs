using System;

namespace PostMainland
{
    public class ProtocalDefineAttribute : Attribute
    {

    }
    public abstract class ProtocalDefineBase
    {
        public abstract string GetInterfaceName();
    }
    public abstract class Protocal : ProtocalDefineBase
    {
        public override string GetInterfaceName()
        {
            return "IProtocal";
        }
    }
    public abstract class Request<TRes> : ProtocalDefineBase where TRes : Response
    {
        public int RpcId { get; set; }
        public override string GetInterfaceName()
        {
            return $"IRequest<{typeof(TRes).Name}>";
        }
    }
    public abstract class Response : ProtocalDefineBase
    {
        public int RpcId { get; set; }
        public int Error { get; set; }
        public string Message { get; set; }
        public override string GetInterfaceName()
        {
            return "IResponse";
        }
    }
}
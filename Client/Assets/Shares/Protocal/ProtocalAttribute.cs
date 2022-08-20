using System;

namespace PostMainland
{
    public enum ProtocalType : byte
    {
        InValid = 0,
        Protocal = 1,
        Request = 2,
        Response = 3
    }
    public class ProtocalAttribute : Attribute
    {
        public ProtocalId Id { get; }
        public ProtocalAttribute(ProtocalId id)
        {
            Id = id;
        }
    }
    public interface IProtocal { } //Message
    public interface IRequest : IProtocal 
    {
        int RpcId { get; set; }
    }
    public interface IRequest<TRes> : IRequest where TRes : IResponse { }
    public interface IResponse : IProtocal
    {
        int RpcId { get; set; }
        int Error { get; set; }
        string Message { get; set; }
    }
}
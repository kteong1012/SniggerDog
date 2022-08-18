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
    public interface IRequest : IProtocal { }
    public interface IRequest<TRes> : IRequest where TRes : IResponse { }
    public interface IResponse : IProtocal
    {
        int Status { get; set; }
        int Error { get; set; }
        string Message { get; set; }
    }
}
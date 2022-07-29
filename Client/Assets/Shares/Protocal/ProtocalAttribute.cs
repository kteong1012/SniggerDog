using System;

namespace PostMainland
{
    public enum ProtocalType : byte
    {
        InValid = 0,
        Message = 1,
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
    public interface IProtocal { }
    public interface IMessage : IProtocal { }
    public interface IRequest : IProtocal { }
    public interface IResponse : IProtocal { }
}
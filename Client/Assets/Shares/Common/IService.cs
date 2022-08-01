using System;

namespace PostMainland
{
    public abstract class Service : IService
    {
        public ServicesContainer Container { get; set; }
    }
    public interface IService
    {
        ServicesContainer Container { get; set; }
    }
    public interface IServiceOnInitNonArgs : IService
    {
        void OnInit();
    }
    public interface IServiceOnInit<A> : IService
    {
        void OnInit(A arg1);
    }
    public interface IServiceOnInit<A, B> : IService
    {
        void OnInit(A arg1, B arg2);
    }
    public interface IServiceOnInit<A, B, C> : IService
    {
        void OnInit(A arg1, B arg2, C arg3);
    }
    public interface IServiceOnInit<A, B, C, D> : IService
    {
        void OnInit(A arg1, B arg2, C arg3, D arg4);
    }
    public interface IServiceOnGet : IService
    {
        void OnGet();
    }
    public interface IServiceOnDispose : IService, IDisposable
    {
    }
}
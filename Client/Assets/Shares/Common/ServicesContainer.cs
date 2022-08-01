using System;
using System.Collections.Concurrent;

namespace PostMainland
{
    public static class Services
    {
        private static ServicesContainer _services = new ServicesContainer();
        public static T AddWithouInit<T>(T service) where T : IService
        {
            return _services.AddWithouInit(service);
        }
        public static T Add<T>(T service) where T : IServiceOnInitNonArgs
        {
            return _services.Add(service);
        }
        public static T Add<T, A>(T service, A arg1) where T : IServiceOnInit<A>
        {
            return _services.Add(service, arg1);
        }

        public static T Add<T, A, B>(T service, A arg1, B arg2) where T : IServiceOnInit<A, B>
        {
            return _services.Add(service, arg1, arg2);
        }

        public static T Add<T, A, B, C>(T service, A arg1, B arg2, C arg3) where T : IServiceOnInit<A, B, C>
        {
            return _services.Add(service, arg1, arg2, arg3);
        }

        public static T Add<T, A, B, C, D>(T service, A arg1, B arg2, C arg3, D arg4) where T : IServiceOnInit<A, B, C, D>
        {
            return _services.Add(service, arg1, arg2, arg3, arg4);
        }


        public static T Get<T>() where T : IService
        {
            return _services.Get<T>();
        }
    }
    public class ServicesContainer : Service, IServiceOnDispose
    {
        private ConcurrentDictionary<Type, IService> _services = new ConcurrentDictionary<Type, IService>();
        public T AddWithouInit<T>(T service) where T : IService
        {
            TryAdd(service.GetType(), service);
            return service;
        }
        public T Add<T>(T service) where T : IServiceOnInitNonArgs
        {
            TryAdd(service.GetType(), service);
            if (service is IServiceOnInitNonArgs init)
            {
                init.OnInit();
            }
            return service;
        }
        public T Add<T, A>(T service, A arg1) where T : IServiceOnInit<A>
        {
            TryAdd(service.GetType(), service);
            if (service is IServiceOnInit<A> init)
            {
                init.OnInit(arg1);
            }
            return service;
        }
        public T Add<T, A, B>(T service, A arg1, B arg2) where T : IServiceOnInit<A, B>
        {
            TryAdd(service.GetType(), service);
            if (service is IServiceOnInit<A, B> init)
            {
                init.OnInit(arg1, arg2);
            }
            return service;
        }
        public T Add<T, A, B, C>(T service, A arg1, B arg2, C arg3) where T : IServiceOnInit<A, B, C>
        {
            TryAdd(service.GetType(), service);
            if (service is IServiceOnInit<A, B, C> init)
            {
                init.OnInit(arg1, arg2, arg3);
            }
            return service;
        }
        public T Add<T, A, B, C, D>(T service, A arg1, B arg2, C arg3, D arg4) where T : IServiceOnInit<A, B, C, D>
        {
            TryAdd(service.GetType(), service);
            if (service is IServiceOnInit<A, B, C, D> init)
            {
                init.OnInit(arg1, arg2, arg3, arg4);
            }
            return service;
        }

        public T Get<T>() where T : IService
        {
            Type type = typeof(T);
            if (_services.TryGetValue(typeof(T), out var service))
            {
                if (service is IServiceOnGet get)
                {
                    get.OnGet();
                }
                return (T)service;
            }
            return default(T);
        }

        public void Dispose()
        {
            foreach (var service in _services.Values)
            {
                if (service is IServiceOnDispose dispose)
                {
                    dispose.Dispose();
                }
            }
        }
        private void TryAdd(Type type, IService service)
        {
            if (_services.TryAdd(type, service))
            {
                service.Container = this;
            }
            else
            {
                if(service is IServiceOnDispose dispose)
                {
                    dispose.Dispose();
                }
            }
        }
    }
}
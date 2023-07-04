using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

namespace SniggerDog
{
    public class ServiceCollection : ASingleton<ServiceCollection>
    {
        private Dictionary<Type, IService> _services;
        private Dictionary<Type, IUpdateService> _updateServices;
        private Dictionary<Type, ILateUpdateService> _lateUpdates;
        private Dictionary<Type, IFixedUpdateService> _fixedUpdates;

        public ServiceCollection()
        {
            _services = new Dictionary<Type, IService>();
            _updateServices = new Dictionary<Type, IUpdateService>();
            _lateUpdates = new Dictionary<Type, ILateUpdateService>();
            _fixedUpdates = new Dictionary<Type, IFixedUpdateService>();
        }

        public void LoadAssembly(Assembly assembly)
        {
            AddServices(assembly.GetTypes());
        }

        public void LoadTypes() { }

        public T Access<T>() where T : class, IService
        {
            _services.TryGetValue(typeof(T), out var service);
            return service as T;
        }

        public void AddServices(IEnumerable<Type> types)
        {
            var serviceType = typeof(IService);
            foreach (var type in types)
            {
                if (serviceType.IsAssignableFrom(type) && !type.IsInterface && !type.IsAbstract)
                {
                    AddService(type);
                }
            }
        }

        public void AddService(Type type)
        {
            if (_services.ContainsKey(type))
            {
                throw new Exception($"Service {type.FullName} already exists.");
            }
            IService service = Activator.CreateInstance(type) as IService;
            if (service != null)
            {
                service.Resolved = false;
                _services.Add(type, service);
                //判断type是否继承自接口IUpdateService
                if (service is IUpdateService update)
                {
                    _updateServices.Add(type, update);
                }
                //判断type是否继承自接口ILateUpdateService
                if (service is ILateUpdateService lateUpdate)
                {
                    _lateUpdates.Add(type, lateUpdate);
                }
                //判断type是否继承自接口IFixedUpdateService
                if (service is IFixedUpdateService fixedUpdate)
                {
                    _fixedUpdates.Add(type, fixedUpdate);
                }

            }
        }

        public void ResolveAllServices()
        {
            var dependencyChain = new List<Type>();
            var serviceType = typeof(IService);
            void ResolveService(Type type, IService service)
            {
                if (dependencyChain.Contains(type))
                {
                    throw new Exception($"Circular dependency detected: {string.Join(" -> ", dependencyChain)} -> {type}");
                }
                dependencyChain.Add(type);
                foreach (var fieldInfo in type.GetFields(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance))
                {
                    var dependencyType = fieldInfo.FieldType;
                    if (serviceType.IsAssignableFrom(dependencyType))
                    {
                        if (_services.TryGetValue(dependencyType, out var dependency))
                        {
                            if (!dependency.Resolved)
                            {
                                ResolveService(dependencyType, dependency);
                            }
                            fieldInfo.SetValue(service, dependency);
                        }
                        else
                        {
                            throw new Exception($"Service {type.FullName} has unregiestered dependency {dependencyType.FullName}");
                        }
                    }
                }
                foreach (var propertyInfo in type.GetProperties(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance))
                {
                    var dependencyType = propertyInfo.PropertyType;
                    if (serviceType.IsAssignableFrom(dependencyType))
                    {
                        if (_services.TryGetValue(dependencyType, out var dependency))
                        {
                            if (!dependency.Resolved)
                            {
                                ResolveService(dependencyType, dependency);
                            }
                            propertyInfo.SetValue(service, dependency);
                        }
                        else
                        {
                            throw new Exception($"Service {type.FullName} has unregiestered dependency {dependencyType.FullName}");
                        }
                    }
                }
                service.Resolved = true;

                service.Start();
            }

            foreach (var (type, service) in _services)
            {
                if (service.Resolved)
                {
                    continue;
                }
                dependencyChain.Clear();
                ResolveService(type, service);
            }
        }
    }
}
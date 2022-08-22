using System;
using UnityEngine;

namespace PostMainland
{
    public static class UnityExtensions
    {
        public static T GetOrAddComponent<T>(this GameObject go) where T : Component
        {
            return go.GetComponent<T>() ?? go.AddComponent<T>();
        }
        public static Component GetOrAddComponent(this GameObject go, Type type)
        {
            return go.GetComponent(type) ?? go.AddComponent(type);
        }
    }
}

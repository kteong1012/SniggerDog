using System.Collections;
using System.Collections.Generic;
using TouchSocket.Core.Dependency;

namespace PostMainland
{
    public static class Extensions
    {
        public static bool IsNullOrEmpty(this string str)
        {
            return string.IsNullOrEmpty(str);
        }
        public static bool IsNullOrEmpty(this ICollection collection)
        {
            return collection == null || collection.Count == 0;
        }
        public static bool NotEmpty(this string str)
        {
            return !string.IsNullOrEmpty(str);
        }
        public static bool SavelyAdd<K, V>(this Dictionary<K, V> dic, K key, V value, bool replace = true)
        {
            if (replace)
            {
                dic[key] = value;
                return true;
            }
            if (dic.ContainsKey(key))
            {
                return false;
            }
            else
            {
                dic.Add(key, value);
                return true;
            }
        }
        public static bool SavelyRemove<K, V>(this Dictionary<K, V> dic, K key)
        {
            if (dic.ContainsKey(key))
            {
                dic.Remove(key);
                return true;
            }
            else
            {
                return false;
            }
        }
        public static void SavelyAdd<T>(this List<T> list, T element)
        {
            if (!list.Contains(element))
            {
                list.Add(element);
            }
        }
        public static void SavelyRemove<T>(this List<T> list, T element)
        {
            if (list.Contains(element))
            {
                list.Remove(element);
            }
        }
    }
}

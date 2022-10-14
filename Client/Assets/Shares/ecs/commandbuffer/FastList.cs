using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;

namespace JimboA.EcsLite.ECB
{
    [System.Serializable]
    public class FastList<T> : IEnumerable<T>
    {
        public T[] Items;
        public ref T this[int index] => ref Items[index];
        public int Length => _length;

        private int _length;
        private IEqualityComparer<T> _comparer;

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public FastList()
        {
            Items = new T[6];
            _length = 0;
            _comparer = EqualityComparer<T>.Default;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public FastList(int cap = 0)
        {
            Items = new T[cap > 0 ? cap : 6];
            _length = 0;
            _comparer = EqualityComparer<T>.Default;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public FastList(IEqualityComparer<T> comparer, int cap = 0)
        {
            Items = new T[cap > 0 ? cap : 6];
            _length = 0;
            _comparer = comparer;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Add(T item)
        {
            if (_length >= Items.Length)
            {
                var arr = new T[_length << 1];
                Array.Copy(Items, arr, _length);
                Items = arr;
            }

            Items[_length++] = item;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Add(T item, out int index)
        {
            if (_length >= Items.Length)
            {
                var arr = new T[_length << 1];
                Array.Copy(Items, arr, _length);
                Items = arr;
            }

            Items[_length++] = item;
            index = _length - 1;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void AddRange(params T[] items)
        {
            for (int i = 0; i < items.Length; i++)
            {
                if (_length >= Items.Length)
                {
                    var arr = new T[_length << 1];
                    Array.Copy(Items, arr, _length);
                    Items = arr;
                }

                Items[_length++] = items[i];
            }
        }
        
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Insert(T item, int index)
        {
            if(index >= Items.Length || index < 0)
                return;
            
            if (_length >= Items.Length)
            {
                var arr = new T[_length << 1];
                Array.Copy(Items, arr, _length);
                Items = arr;
            }
            
            Array.Copy(Items, index, Items, index + 1, _length++);
            Items[index] = item;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public bool Remove(T item)
        {
            int index = IndexOf(ref item);
            var removed = index > -1;
            if (removed && index < --_length)
                Array.Copy(Items, index + 1, Items, index, _length - index);
            return removed;
        }
        
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public bool Remove(ref T item)
        {
            int index = IndexOf(ref item);
            var removed = index > -1;
            if (removed && index < --_length)
                Array.Copy(Items, index + 1, Items, index, _length - index);
            return removed;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public bool Remove(T item, out int index)
        {
            index = IndexOf(ref item);
            var removed = index > -1;
            if (removed && index < --_length)
                Array.Copy(Items, index + 1, Items, index, _length - index);
            return removed;
        }
        
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public bool Remove(ref T item, out int index)
        {
            index = IndexOf(ref item);
            var removed = index > -1;
            if (removed && index < --_length)
                Array.Copy(Items, index + 1, Items, index, _length - index);
            return removed;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void RemoveAt(int index)
        {
            Array.Copy(Items, index + 1, Items, index, --_length - index);
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void ClearAt(int index)
        {
            if (index <= 0)
            {
                Clear();
                return;
            }
            _length = index;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public int IndexOf(ref T item)
        {
            for (int i = _length - 1; i >= 0; i--)
            {
                if (_comparer.Equals(Items[i], item))
                    return i;
            }

            return -1;
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public void Clear()
        {
            _length = 0;
        }

        public T[] ToArray()
        {
            var arr = new T[_length];
            Array.Copy(Items, arr, _length);
            return arr;
        }

        public void Sort(int index, int length)
        {
            Array.Sort(Items, index, length);
        }

        public void Sort<TKeys>(TKeys[] keys, int index, int length)
        {
            Array.Sort(keys, Items, index, length);
        }

        IEnumerator<T> IEnumerable<T>.GetEnumerator() => GetEnumerator();

        IEnumerator IEnumerable.GetEnumerator() => GetEnumerator();

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public Enumerator GetEnumerator()
        {
            return new Enumerator(this);
        }

        [System.Serializable]
        public struct Enumerator : IEnumerator<T>
        {
            public FastList<T> List;
            public int Index;

            public T Current => List.Items[Index];

            object IEnumerator.Current => Current;

            internal Enumerator(FastList<T> list)
            {
                List = list;
                Index = list._length;
            }

            [MethodImpl (MethodImplOptions.AggressiveInlining)]
            public bool MoveNext()
            {
                return --Index >= 0;
            }

            [MethodImpl (MethodImplOptions.AggressiveInlining)]
            public void Reset()
            {
                Index = List._length;
            }

            [MethodImpl (MethodImplOptions.AggressiveInlining)]
            public void Dispose()
            {
                List = null;
            }
        }
    }
}
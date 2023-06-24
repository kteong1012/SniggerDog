using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace SniggerDog
{
    public struct MyStruct
    {
        public int a;

        public MyStruct(int a)
        {
            this.a = a;
        }
    }

    public class GameEntry
    {
        public static void StartGame()
        {
            List<MyStruct> list = new List<MyStruct>();
            //Ìî³älist£¬´Ó0µ½9
            list.Add(new MyStruct(0));
            list.Add(new MyStruct(1));
            list.Add(new MyStruct(2));
            list.Add(new MyStruct(3));
            list.Add(new MyStruct(4));


            Debug.Log("Hello, SniggerDog");

            foreach (var item in list)
            {
                Debug.Log(item.a);
            }
        }
    }
}
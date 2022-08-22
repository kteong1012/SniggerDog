using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;

namespace PostMainland
{
    public static class CodeGenerater
    {
        public static List<ProtocalTypeInfo> GetProtocalTypeInfos(Assembly ass)
        {
            List<ProtocalTypeInfo> types = new List<ProtocalTypeInfo>();
            foreach (var type in ass.GetTypes().Where(x => x.IsDefined(typeof(ProtocalDefineAttribute))))
            {
                int id = 1;
                ProtocalTypeInfo typeInfo = new ProtocalTypeInfo();
                var instance = Activator.CreateInstance(type) as ProtocalDefineBase;
                typeInfo.Name = type.Name;
                typeInfo.BaseTypeName = instance.GetInterfaceName();
                typeInfo.Fields = new List<ProtocalFieldInfo>();
                foreach (var memberInfo in type.GetProperties())
                {
                    ProtocalFieldInfo field = new ProtocalFieldInfo();
                    field.Name = memberInfo.Name;
                    field.NinoId = GetNinoId(field.Name, ref id);
                    field.TypeName = memberInfo.PropertyType.GetFullName();
                    typeInfo.Fields.Add(field);
                }
                if (!typeInfo.Fields.Any())
                {
                    typeInfo.Fields.Add(new ProtocalFieldInfo()
                    {
                        Name = "Message",
                        NinoId = 92,
                        TypeName = "string",
                    });
                }
                types.Add(typeInfo);
            }
            return types;
        }
        private static int GetNinoId(string name, ref int id)
        {
            switch (name)
            {
                case "RpcId":
                    return 90;
                case "Error":
                    return 91;
                case "Message":
                    return 92;
            }
            if (id == 90 || id == 91 || id == 92)
            {
                id = 93;
            }
            return id++;
        }
        public static string GetFullName(this Type type)
        {
            var str = string.Empty;
            if (type.IsGenericType)
            {
                //获取泛型定义
                //FullName:System.Collections.Generic.List`1
                str = type.GetGenericTypeDefinition().FullName;
                //获取所有泛型类型的数组
                var args = type.GetGenericArguments();
                //泛型类型的数组索引
                int argIndex = 0;
                while (true)
                {
                    var startIndex = str.IndexOf('`');
                    if (startIndex < 0) break;
                    //获取外部类的泛型数量
                    var argNum = System.Convert.ToInt32(str.Substring(startIndex + 1, 1));
                    string tmp = string.Empty;
                    tmp += "<";
                    for (int i = 0; i < argNum; i++, argIndex++)
                    {
                        if (i < argNum - 1)
                            tmp += $"{args[argIndex].GetFullName()},";
                        else
                            tmp += $"{args[argIndex].GetFullName()}";
                    }
                    tmp += ">";
                    str = str.Remove(startIndex, 2);
                    str = str.Insert(startIndex, tmp);
                }
            }
            else
            {
                str = type.FullName ?? string.Empty;
            }

            if (type.IsNested)
            {
                //替换嵌套类的+
                str = str.Replace('+', '.');
            }
            return str;
        }
    }
}
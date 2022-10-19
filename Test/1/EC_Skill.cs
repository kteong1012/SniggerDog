//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
using Bright.Serialization;
using System.Collections.Generic;
using SimpleJSON;



namespace Cfg
{ 

public sealed partial class EC_Skill :  Bright.Config.BeanBase 
{
    public EC_Skill(JSONNode _json) 
    {
        { if(!_json["id"].IsNumber) { throw new SerializationException(); }  Id = _json["id"]; }
        { if(!_json["name"].IsString) { throw new SerializationException(); }  Name = _json["name"]; }
        { if(!_json["desc"].IsString) { throw new SerializationException(); }  Desc = _json["desc"]; }
        { var __json0 = _json["buffs"]; if(!__json0.IsArray) { throw new SerializationException(); } Buffs = new System.Collections.Generic.List<int>(__json0.Count); foreach(JSONNode __e0 in __json0.Children) { int __v0;  { if(!__e0.IsNumber) { throw new SerializationException(); }  __v0 = __e0; }  Buffs.Add(__v0); }   }
        PostInit();
    }

    public EC_Skill(int id, string name, string desc, System.Collections.Generic.List<int> buffs ) 
    {
        this.Id = id;
        this.Name = name;
        this.Desc = desc;
        this.Buffs = buffs;
        PostInit();
    }

    public static EC_Skill DeserializeEC_Skill(JSONNode _json)
    {
        return new EC_Skill(_json);
    }

    /// <summary>
    /// id，5+2位
    /// </summary>
    public int Id { get; private set; }
    /// <summary>
    /// 名字
    /// </summary>
    public string Name { get; private set; }
    /// <summary>
    /// 描述
    /// </summary>
    public string Desc { get; private set; }
    /// <summary>
    /// buff引用
    /// </summary>
    public System.Collections.Generic.List<int> Buffs { get; private set; }
    public System.Collections.Generic.List<EC_Buff> Buffs_Ref { get; private set; }

    public const int __ID__ = 2127746896;
    public override int GetTypeId() => __ID__;

    public  void Resolve(Dictionary<string, object> _tables)
    {
        { TbBuff __table = (TbBuff)_tables["TbBuff"]; this.Buffs_Ref = new System.Collections.Generic.List<EC_Buff>(); foreach(var __e in Buffs) { this.Buffs_Ref.Add(__table.GetOrDefault(__e)); } }
        PostResolve();
    }

    public  void TranslateText(System.Func<string, string, string> translator)
    {
    }

    public override string ToString()
    {
        return "{ "
        + "Id:" + Id + ","
        + "Name:" + Name + ","
        + "Desc:" + Desc + ","
        + "Buffs:" + Bright.Common.StringUtil.CollectionToString(Buffs) + ","
        + "}";
    }
    
    partial void PostInit();
    partial void PostResolve();
}
}

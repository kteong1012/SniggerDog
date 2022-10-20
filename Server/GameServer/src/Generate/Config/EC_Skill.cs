//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
using Bright.Serialization;
using System.Collections.Generic;


namespace Cfg
{
public sealed partial class EC_Skill :  Bright.Config.BeanBase 
{
    public EC_Skill(ByteBuf _buf) 
    {
        Id = _buf.ReadInt();
        Name = _buf.ReadString();
        Desc = _buf.ReadString();
        CostMana = _buf.ReadInt();
        {int n0 = System.Math.Min(_buf.ReadSize(), _buf.Size);Buffs = new System.Collections.Generic.List<int>(n0);for(var i0 = 0 ; i0 < n0 ; i0++) { int _e0;  _e0 = _buf.ReadInt(); Buffs.Add(_e0);}}
        PostInit();
    }

    public static EC_Skill DeserializeEC_Skill(ByteBuf _buf)
    {
        return new EC_Skill(_buf);
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
    public int CostMana { get; private set; }
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
        + "CostMana:" + CostMana + ","
        + "Buffs:" + Bright.Common.StringUtil.CollectionToString(Buffs) + ","
        + "}";
    }
    
    partial void PostInit();
    partial void PostResolve();
}

}
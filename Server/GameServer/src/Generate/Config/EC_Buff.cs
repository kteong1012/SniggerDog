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
public sealed partial class EC_Buff :  Bright.Config.BeanBase 
{
    public EC_Buff(ByteBuf _buf) 
    {
        Id = _buf.ReadInt();
        Name = _buf.ReadString();
        Desc = _buf.ReadString();
        DispelLevel = (DispelLevel)_buf.ReadInt();
        DurationMs = _buf.ReadInt();
        AddType = (BuffAddType)_buf.ReadInt();
        AddLayer = _buf.ReadInt();
        Trigger = MetaBuffTrigger.Base.DeserializeBase(_buf);
        Effect = MetaBuffEffect.Base.DeserializeBase(_buf);
        PostInit();
    }

    public static EC_Buff DeserializeEC_Buff(ByteBuf _buf)
    {
        return new EC_Buff(_buf);
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
    /// 驱散等级
    /// </summary>
    public DispelLevel DispelLevel { get; private set; }
    /// <summary>
    /// 持续时间_毫秒,0就是瞬时
    /// </summary>
    public int DurationMs { get; private set; }
    /// <summary>
    /// 叠加方式
    /// </summary>
    public BuffAddType AddType { get; private set; }
    /// <summary>
    /// 叠加层数
    /// </summary>
    public int AddLayer { get; private set; }
    /// <summary>
    /// 触发器
    /// </summary>
    public MetaBuffTrigger.Base Trigger { get; private set; }
    /// <summary>
    /// 效果
    /// </summary>
    public MetaBuffEffect.Base Effect { get; private set; }

    public const int __ID__ = -1178785932;
    public override int GetTypeId() => __ID__;

    public  void Resolve(Dictionary<string, object> _tables)
    {
        Trigger?.Resolve(_tables);
        Effect?.Resolve(_tables);
        PostResolve();
    }

    public  void TranslateText(System.Func<string, string, string> translator)
    {
        Trigger?.TranslateText(translator);
        Effect?.TranslateText(translator);
    }

    public override string ToString()
    {
        return "{ "
        + "Id:" + Id + ","
        + "Name:" + Name + ","
        + "Desc:" + Desc + ","
        + "DispelLevel:" + DispelLevel + ","
        + "DurationMs:" + DurationMs + ","
        + "AddType:" + AddType + ","
        + "AddLayer:" + AddLayer + ","
        + "Trigger:" + Trigger + ","
        + "Effect:" + Effect + ","
        + "}";
    }
    
    partial void PostInit();
    partial void PostResolve();
}

}
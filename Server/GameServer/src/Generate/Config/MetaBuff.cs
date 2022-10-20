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
public sealed partial class MetaBuff :  Bright.Config.BeanBase 
{
    public MetaBuff(ByteBuf _buf) 
    {
        Trigger = MetaBuffTrigger.Base.DeserializeBase(_buf);
        Effect = MetaBuffEffect.Base.DeserializeBase(_buf);
        PostInit();
    }

    public static MetaBuff DeserializeMetaBuff(ByteBuf _buf)
    {
        return new MetaBuff(_buf);
    }

    public MetaBuffTrigger.Base Trigger { get; private set; }
    public MetaBuffEffect.Base Effect { get; private set; }

    public const int __ID__ = -386354152;
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
        + "Trigger:" + Trigger + ","
        + "Effect:" + Effect + ","
        + "}";
    }
    
    partial void PostInit();
    partial void PostResolve();
}

}
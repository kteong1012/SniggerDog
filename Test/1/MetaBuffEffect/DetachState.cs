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



namespace Cfg.MetaBuffEffect
{ 

/// <summary>
/// 移除状态
/// </summary>
public sealed partial class DetachState :  Base 
{
    public DetachState(JSONNode _json)  : base(_json) 
    {
        { if(!_json["state"].IsNumber) { throw new SerializationException(); }  State = (BuffState)_json["state"].AsInt; }
        PostInit();
    }

    public DetachState(int temp, BuffState state )  : base(temp) 
    {
        this.State = state;
        PostInit();
    }

    public static DetachState DeserializeDetachState(JSONNode _json)
    {
        return new MetaBuffEffect.DetachState(_json);
    }

    public BuffState State { get; private set; }

    public const int __ID__ = -1799200263;
    public override int GetTypeId() => __ID__;

    public override void Resolve(Dictionary<string, object> _tables)
    {
        base.Resolve(_tables);
        PostResolve();
    }

    public override void TranslateText(System.Func<string, string, string> translator)
    {
        base.TranslateText(translator);
    }

    public override string ToString()
    {
        return "{ "
        + "Temp:" + Temp + ","
        + "State:" + State + ","
        + "}";
    }
    
    partial void PostInit();
    partial void PostResolve();
}
}

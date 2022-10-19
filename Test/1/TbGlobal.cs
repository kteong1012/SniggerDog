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

public sealed partial class TbGlobal
{

     private readonly Global _data;

    public TbGlobal(JSONNode _json)
    {
        if(!_json.IsArray)
        {
            throw new SerializationException();
        }
        if (_json.Count != 1) throw new SerializationException("table mode=one, but size != 1");
        _data = Global.DeserializeGlobal(_json[0]);
        PostInit();
    }

     public string LoginServerAddress => _data.LoginServerAddress;

    public void Resolve(Dictionary<string, object> _tables)
    {
        _data.Resolve(_tables);
        PostResolve();
    }

    public void TranslateText(System.Func<string, string, string> translator)
    {
        _data.TranslateText(translator);
    }

    
    partial void PostInit();
    partial void PostResolve();
}

}
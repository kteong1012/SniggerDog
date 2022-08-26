//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
using Bright.Serialization;


namespace Cfg
{
   
public partial class Tables
{
    public TbGlobal TbGlobal {get; }
    public TbStartProcess TbStartProcess {get; }
    public TbDatabase TbDatabase {get; }

    public Tables(System.Func<string, ByteBuf> idxLoader,System.Func<string, ByteBuf> dataLoader)
    {
        var tables = new System.Collections.Generic.Dictionary<string, object>();
        TbGlobal = new TbGlobal(idxLoader("tbglobal"),"tbglobal",dataLoader); 
        tables.Add("TbGlobal", TbGlobal);
        TbStartProcess = new TbStartProcess(idxLoader("tbstartprocess"),"tbstartprocess",dataLoader); 
        tables.Add("TbStartProcess", TbStartProcess);
        TbDatabase = new TbDatabase(idxLoader("tbdatabase"),"tbdatabase",dataLoader); 
        tables.Add("TbDatabase", TbDatabase);

        PostInit();
        TbGlobal.CacheTables(tables); 
        TbStartProcess.CacheTables(tables); 
        TbDatabase.CacheTables(tables); 
    }
    
    partial void PostInit();
}

}
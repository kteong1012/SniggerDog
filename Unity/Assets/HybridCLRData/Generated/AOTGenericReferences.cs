using System.Collections.Generic;
public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	public static readonly IReadOnlyList<string> PatchedAOTAssemblyList = new List<string>
	{
        "Main.dll",
        "System.Core.dll",
        "UnityEngine.CoreModule.dll",
        "mscorlib.dll",
    };
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// System.Collections.Generic.List<SniggerDog.MyStruct>
	// System.Collections.Generic.List.Enumerator<SniggerDog.MyStruct>
	// }}

	public void RefMethods()
	{
	}
}
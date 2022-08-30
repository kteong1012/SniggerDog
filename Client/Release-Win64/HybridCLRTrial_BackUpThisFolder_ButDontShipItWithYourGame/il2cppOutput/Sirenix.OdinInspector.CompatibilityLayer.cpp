#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Type,Sirenix.Serialization.Serializer>
struct Dictionary_2_tFC542F52AF721FEF237136A160FE0EBB15A771CA;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0;
// Sirenix.Serialization.MinimalBaseFormatter`1<UnityEngine.Vector2Int>
struct MinimalBaseFormatter_1_t87F8D1C5819F8EA5BD3C5019051708F82EC26300;
// Sirenix.Serialization.MinimalBaseFormatter`1<UnityEngine.Vector3Int>
struct MinimalBaseFormatter_1_tC944D6D3C47A8F528C1BD2372B2BAA1C8A0FBAC0;
// Sirenix.Serialization.Serializer`1<System.Int32>
struct Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07;
// Sirenix.Serialization.IDataReader
struct IDataReader_t387D8EF56B60D4587344CF62EFED4C811EC91816;
// Sirenix.Serialization.IDataWriter
struct IDataWriter_t54F3756A26CA3F366434D96287930E867B999653;
// Sirenix.Serialization.Vector2IntFormatter
struct Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4;
// Sirenix.Serialization.Vector3IntFormatter
struct Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3;

IL2CPP_EXTERN_C RuntimeClass* MinimalBaseFormatter_1_t87F8D1C5819F8EA5BD3C5019051708F82EC26300_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinimalBaseFormatter_1_tC944D6D3C47A8F528C1BD2372B2BAA1C8A0FBAC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinimalBaseFormatter_1__ctor_m8C2D9FE25ECB5325D1AE51DE589E1438534C0A94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinimalBaseFormatter_1__ctor_mC51B22C45BF89C0055307A1199B6BDAC69B0B606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Serializer_1_WriteValue_m05D504C2E5F6FBA3FA6B32CEF11CFB45D8AE4E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Serializer_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37CDAE0AF045B869F68D40C80B7F1B9E3239B69A_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t396F2EEE6F5912B9325EEB17C627C53B9D625771 
{
};

// Sirenix.Serialization.MinimalBaseFormatter`1<UnityEngine.Vector2Int>
struct MinimalBaseFormatter_1_t87F8D1C5819F8EA5BD3C5019051708F82EC26300  : public RuntimeObject
{
};

struct MinimalBaseFormatter_1_t87F8D1C5819F8EA5BD3C5019051708F82EC26300_StaticFields
{
	// System.Boolean Sirenix.Serialization.MinimalBaseFormatter`1::IsValueType
	bool ___IsValueType_0;
};

// Sirenix.Serialization.MinimalBaseFormatter`1<UnityEngine.Vector3Int>
struct MinimalBaseFormatter_1_tC944D6D3C47A8F528C1BD2372B2BAA1C8A0FBAC0  : public RuntimeObject
{
};

struct MinimalBaseFormatter_1_tC944D6D3C47A8F528C1BD2372B2BAA1C8A0FBAC0_StaticFields
{
	// System.Boolean Sirenix.Serialization.MinimalBaseFormatter`1::IsValueType
	bool ___IsValueType_0;
};
struct Il2CppArrayBounds;

// Sirenix.Serialization.Serializer
struct Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA  : public RuntimeObject
{
};

struct Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> Sirenix.Serialization.Serializer::PrimitiveReaderWriterTypes
	Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* ___PrimitiveReaderWriterTypes_0;
	// System.Object Sirenix.Serialization.Serializer::LOCK
	RuntimeObject* ___LOCK_1;
	// System.Collections.Generic.Dictionary`2<System.Type,Sirenix.Serialization.Serializer> Sirenix.Serialization.Serializer::ReaderWriterCache
	Dictionary_2_tFC542F52AF721FEF237136A160FE0EBB15A771CA* ___ReaderWriterCache_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Sirenix.Serialization.Serializer`1<System.Int32>
struct Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// Sirenix.Serialization.Vector2IntFormatter
struct Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4  : public MinimalBaseFormatter_1_t87F8D1C5819F8EA5BD3C5019051708F82EC26300
{
};

struct Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_StaticFields
{
	// Sirenix.Serialization.Serializer`1<System.Int32> Sirenix.Serialization.Vector2IntFormatter::Serializer
	Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* ___Serializer_1;
};

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
};

struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};

// Sirenix.Serialization.Vector3IntFormatter
struct Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3  : public MinimalBaseFormatter_1_tC944D6D3C47A8F528C1BD2372B2BAA1C8A0FBAC0
{
};

struct Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_StaticFields
{
	// Sirenix.Serialization.Serializer`1<System.Int32> Sirenix.Serialization.Vector3IntFormatter::Serializer
	Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* ___Serializer_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Sirenix.Serialization.Serializer`1<System.Int32>::WriteValue(T,Sirenix.Serialization.IDataWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_1_WriteValue_m05D504C2E5F6FBA3FA6B32CEF11CFB45D8AE4E40_gshared (Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* __this, int32_t ___value0, RuntimeObject* ___writer1, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.MinimalBaseFormatter`1<UnityEngine.Vector2Int>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimalBaseFormatter_1__ctor_mC51B22C45BF89C0055307A1199B6BDAC69B0B606_gshared (MinimalBaseFormatter_1_t87F8D1C5819F8EA5BD3C5019051708F82EC26300* __this, const RuntimeMethod* method) ;
// Sirenix.Serialization.Serializer`1<T> Sirenix.Serialization.Serializer::Get<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* Serializer_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37CDAE0AF045B869F68D40C80B7F1B9E3239B69A_gshared (const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.MinimalBaseFormatter`1<UnityEngine.Vector3Int>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimalBaseFormatter_1__ctor_m8C2D9FE25ECB5325D1AE51DE589E1438534C0A94_gshared (MinimalBaseFormatter_1_tC944D6D3C47A8F528C1BD2372B2BAA1C8A0FBAC0* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Vector2Int::set_x(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::set_y(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Serializer`1<System.Int32>::WriteValue(T,Sirenix.Serialization.IDataWriter)
inline void Serializer_1_WriteValue_m05D504C2E5F6FBA3FA6B32CEF11CFB45D8AE4E40 (Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* __this, int32_t ___value0, RuntimeObject* ___writer1, const RuntimeMethod* method)
{
	((  void (*) (Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07*, int32_t, RuntimeObject*, const RuntimeMethod*))Serializer_1_WriteValue_m05D504C2E5F6FBA3FA6B32CEF11CFB45D8AE4E40_gshared)(__this, ___value0, ___writer1, method);
}
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.MinimalBaseFormatter`1<UnityEngine.Vector2Int>::.ctor()
inline void MinimalBaseFormatter_1__ctor_mC51B22C45BF89C0055307A1199B6BDAC69B0B606 (MinimalBaseFormatter_1_t87F8D1C5819F8EA5BD3C5019051708F82EC26300* __this, const RuntimeMethod* method)
{
	((  void (*) (MinimalBaseFormatter_1_t87F8D1C5819F8EA5BD3C5019051708F82EC26300*, const RuntimeMethod*))MinimalBaseFormatter_1__ctor_mC51B22C45BF89C0055307A1199B6BDAC69B0B606_gshared)(__this, method);
}
// Sirenix.Serialization.Serializer`1<T> Sirenix.Serialization.Serializer::Get<System.Int32>()
inline Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* Serializer_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37CDAE0AF045B869F68D40C80B7F1B9E3239B69A (const RuntimeMethod* method)
{
	return ((  Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* (*) (const RuntimeMethod*))Serializer_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37CDAE0AF045B869F68D40C80B7F1B9E3239B69A_gshared)(method);
}
// System.Void UnityEngine.Vector3Int::set_x(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int_set_x_m8745C5976D035EBBAC6F6191B5838D58631D8685_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3Int::set_y(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int_set_y_mA856F32D1BF187BD4091DDF3C6872FD01F7D3377_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3Int::set_z(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int_set_z_m5782180F67C4257C505F124971985D99C3422F74_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.MinimalBaseFormatter`1<UnityEngine.Vector3Int>::.ctor()
inline void MinimalBaseFormatter_1__ctor_m8C2D9FE25ECB5325D1AE51DE589E1438534C0A94 (MinimalBaseFormatter_1_tC944D6D3C47A8F528C1BD2372B2BAA1C8A0FBAC0* __this, const RuntimeMethod* method)
{
	((  void (*) (MinimalBaseFormatter_1_tC944D6D3C47A8F528C1BD2372B2BAA1C8A0FBAC0*, const RuntimeMethod*))MinimalBaseFormatter_1__ctor_m8C2D9FE25ECB5325D1AE51DE589E1438534C0A94_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.Serialization.Vector2IntFormatter::Read(UnityEngine.Vector2Int&,Sirenix.Serialization.IDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntFormatter_Read_m48A58FBF61EEC83DC4E44E2DB856BE154E4DDF2B (Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___value0, RuntimeObject* ___reader1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// value.x = Vector2IntFormatter.Serializer.ReadValue(reader);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_il2cpp_TypeInfo_var);
		Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* L_1 = ((Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_StaticFields*)il2cpp_codegen_static_fields_for(Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_il2cpp_TypeInfo_var))->___Serializer_1;
		RuntimeObject* L_2 = ___reader1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(6 /* T Sirenix.Serialization.Serializer`1<System.Int32>::ReadValue(Sirenix.Serialization.IDataReader) */, L_1, L_2);
		Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline(L_0, L_3, NULL);
		// value.y = Vector2IntFormatter.Serializer.ReadValue(reader);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_4 = ___value0;
		Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* L_5 = ((Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_StaticFields*)il2cpp_codegen_static_fields_for(Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_il2cpp_TypeInfo_var))->___Serializer_1;
		RuntimeObject* L_6 = ___reader1;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(6 /* T Sirenix.Serialization.Serializer`1<System.Int32>::ReadValue(Sirenix.Serialization.IDataReader) */, L_5, L_6);
		Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline(L_4, L_7, NULL);
		// }
		return;
	}
}
// System.Void Sirenix.Serialization.Vector2IntFormatter::Write(UnityEngine.Vector2Int&,Sirenix.Serialization.IDataWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntFormatter_Write_mB7EDA68C3A9E742CDF4D79163FA29162944846A5 (Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___value0, RuntimeObject* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_1_WriteValue_m05D504C2E5F6FBA3FA6B32CEF11CFB45D8AE4E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector2IntFormatter.Serializer.WriteValue(value.x, writer);
		il2cpp_codegen_runtime_class_init_inline(Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_il2cpp_TypeInfo_var);
		Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* L_0 = ((Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_StaticFields*)il2cpp_codegen_static_fields_for(Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_il2cpp_TypeInfo_var))->___Serializer_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_1 = ___value0;
		int32_t L_2;
		L_2 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(L_1, NULL);
		RuntimeObject* L_3 = ___writer1;
		NullCheck(L_0);
		Serializer_1_WriteValue_m05D504C2E5F6FBA3FA6B32CEF11CFB45D8AE4E40(L_0, L_2, L_3, Serializer_1_WriteValue_m05D504C2E5F6FBA3FA6B32CEF11CFB45D8AE4E40_RuntimeMethod_var);
		// Vector2IntFormatter.Serializer.WriteValue(value.y, writer);
		Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* L_4 = ((Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_StaticFields*)il2cpp_codegen_static_fields_for(Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_il2cpp_TypeInfo_var))->___Serializer_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_5 = ___value0;
		int32_t L_6;
		L_6 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(L_5, NULL);
		RuntimeObject* L_7 = ___writer1;
		NullCheck(L_4);
		Serializer_1_WriteValue_m05D504C2E5F6FBA3FA6B32CEF11CFB45D8AE4E40(L_4, L_6, L_7, Serializer_1_WriteValue_m05D504C2E5F6FBA3FA6B32CEF11CFB45D8AE4E40_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Sirenix.Serialization.Vector2IntFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntFormatter__ctor_mC3DA35F6D8E18B993743A6749E41C1DB8ACF0A72 (Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimalBaseFormatter_1__ctor_mC51B22C45BF89C0055307A1199B6BDAC69B0B606_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimalBaseFormatter_1_t87F8D1C5819F8EA5BD3C5019051708F82EC26300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MinimalBaseFormatter_1_t87F8D1C5819F8EA5BD3C5019051708F82EC26300_il2cpp_TypeInfo_var);
		MinimalBaseFormatter_1__ctor_mC51B22C45BF89C0055307A1199B6BDAC69B0B606(__this, MinimalBaseFormatter_1__ctor_mC51B22C45BF89C0055307A1199B6BDAC69B0B606_RuntimeMethod_var);
		return;
	}
}
// System.Void Sirenix.Serialization.Vector2IntFormatter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntFormatter__cctor_mF8F7D4D3479219BB7F42388B3C61F63344966C45 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37CDAE0AF045B869F68D40C80B7F1B9E3239B69A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Serializer<int> Serializer = Serialization.Serializer.Get<int>();
		il2cpp_codegen_runtime_class_init_inline(Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA_il2cpp_TypeInfo_var);
		Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* L_0;
		L_0 = Serializer_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37CDAE0AF045B869F68D40C80B7F1B9E3239B69A(Serializer_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37CDAE0AF045B869F68D40C80B7F1B9E3239B69A_RuntimeMethod_var);
		((Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_StaticFields*)il2cpp_codegen_static_fields_for(Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_il2cpp_TypeInfo_var))->___Serializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_StaticFields*)il2cpp_codegen_static_fields_for(Vector2IntFormatter_t274C091C42BF3AF805015EF5D28CC6320F8BFCE4_il2cpp_TypeInfo_var))->___Serializer_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.Serialization.Vector3IntFormatter::Read(UnityEngine.Vector3Int&,Sirenix.Serialization.IDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntFormatter_Read_m696883CE95F0404FA7D746D22C6BDEF19A9E3EF9 (Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___value0, RuntimeObject* ___reader1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// value.x = Vector3IntFormatter.Serializer.ReadValue(reader);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_il2cpp_TypeInfo_var);
		Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* L_1 = ((Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_il2cpp_TypeInfo_var))->___Serializer_1;
		RuntimeObject* L_2 = ___reader1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(6 /* T Sirenix.Serialization.Serializer`1<System.Int32>::ReadValue(Sirenix.Serialization.IDataReader) */, L_1, L_2);
		Vector3Int_set_x_m8745C5976D035EBBAC6F6191B5838D58631D8685_inline(L_0, L_3, NULL);
		// value.y = Vector3IntFormatter.Serializer.ReadValue(reader);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_4 = ___value0;
		Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* L_5 = ((Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_il2cpp_TypeInfo_var))->___Serializer_1;
		RuntimeObject* L_6 = ___reader1;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(6 /* T Sirenix.Serialization.Serializer`1<System.Int32>::ReadValue(Sirenix.Serialization.IDataReader) */, L_5, L_6);
		Vector3Int_set_y_mA856F32D1BF187BD4091DDF3C6872FD01F7D3377_inline(L_4, L_7, NULL);
		// value.z = Vector3IntFormatter.Serializer.ReadValue(reader);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_8 = ___value0;
		Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* L_9 = ((Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_il2cpp_TypeInfo_var))->___Serializer_1;
		RuntimeObject* L_10 = ___reader1;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(6 /* T Sirenix.Serialization.Serializer`1<System.Int32>::ReadValue(Sirenix.Serialization.IDataReader) */, L_9, L_10);
		Vector3Int_set_z_m5782180F67C4257C505F124971985D99C3422F74_inline(L_8, L_11, NULL);
		// }
		return;
	}
}
// System.Void Sirenix.Serialization.Vector3IntFormatter::Write(UnityEngine.Vector3Int&,Sirenix.Serialization.IDataWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntFormatter_Write_m260812CC744867FED31E17C4B123562CDC019302 (Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___value0, RuntimeObject* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_1_WriteValue_m05D504C2E5F6FBA3FA6B32CEF11CFB45D8AE4E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector3IntFormatter.Serializer.WriteValue(value.x, writer);
		il2cpp_codegen_runtime_class_init_inline(Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_il2cpp_TypeInfo_var);
		Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* L_0 = ((Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_il2cpp_TypeInfo_var))->___Serializer_1;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_1 = ___value0;
		int32_t L_2;
		L_2 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline(L_1, NULL);
		RuntimeObject* L_3 = ___writer1;
		NullCheck(L_0);
		Serializer_1_WriteValue_m05D504C2E5F6FBA3FA6B32CEF11CFB45D8AE4E40(L_0, L_2, L_3, Serializer_1_WriteValue_m05D504C2E5F6FBA3FA6B32CEF11CFB45D8AE4E40_RuntimeMethod_var);
		// Vector3IntFormatter.Serializer.WriteValue(value.y, writer);
		Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* L_4 = ((Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_il2cpp_TypeInfo_var))->___Serializer_1;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_5 = ___value0;
		int32_t L_6;
		L_6 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline(L_5, NULL);
		RuntimeObject* L_7 = ___writer1;
		NullCheck(L_4);
		Serializer_1_WriteValue_m05D504C2E5F6FBA3FA6B32CEF11CFB45D8AE4E40(L_4, L_6, L_7, Serializer_1_WriteValue_m05D504C2E5F6FBA3FA6B32CEF11CFB45D8AE4E40_RuntimeMethod_var);
		// Vector3IntFormatter.Serializer.WriteValue(value.z, writer);
		Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* L_8 = ((Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_il2cpp_TypeInfo_var))->___Serializer_1;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_9 = ___value0;
		int32_t L_10;
		L_10 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline(L_9, NULL);
		RuntimeObject* L_11 = ___writer1;
		NullCheck(L_8);
		Serializer_1_WriteValue_m05D504C2E5F6FBA3FA6B32CEF11CFB45D8AE4E40(L_8, L_10, L_11, Serializer_1_WriteValue_m05D504C2E5F6FBA3FA6B32CEF11CFB45D8AE4E40_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Sirenix.Serialization.Vector3IntFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntFormatter__ctor_m0BE06B4346F6644F0C1FD27D910C721320180CED (Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimalBaseFormatter_1__ctor_m8C2D9FE25ECB5325D1AE51DE589E1438534C0A94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimalBaseFormatter_1_tC944D6D3C47A8F528C1BD2372B2BAA1C8A0FBAC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MinimalBaseFormatter_1_tC944D6D3C47A8F528C1BD2372B2BAA1C8A0FBAC0_il2cpp_TypeInfo_var);
		MinimalBaseFormatter_1__ctor_m8C2D9FE25ECB5325D1AE51DE589E1438534C0A94(__this, MinimalBaseFormatter_1__ctor_m8C2D9FE25ECB5325D1AE51DE589E1438534C0A94_RuntimeMethod_var);
		return;
	}
}
// System.Void Sirenix.Serialization.Vector3IntFormatter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntFormatter__cctor_m5C1E9572A5C3A8ABD6404B219A3F8081F65B82BC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37CDAE0AF045B869F68D40C80B7F1B9E3239B69A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Serializer<int> Serializer = Serialization.Serializer.Get<int>();
		il2cpp_codegen_runtime_class_init_inline(Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA_il2cpp_TypeInfo_var);
		Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07* L_0;
		L_0 = Serializer_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37CDAE0AF045B869F68D40C80B7F1B9E3239B69A(Serializer_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37CDAE0AF045B869F68D40C80B7F1B9E3239B69A_RuntimeMethod_var);
		((Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_il2cpp_TypeInfo_var))->___Serializer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntFormatter_tBBA4FC20BFCE2E0D842B31499D8DA4567E2710D3_il2cpp_TypeInfo_var))->___Serializer_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m291ECF246536852F0B8EE049C4A3768E4999CDC8_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_X_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_mF81881204EEE272BA409728C7EBFDE3A979DDF6A_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Y_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int_set_x_m8745C5976D035EBBAC6F6191B5838D58631D8685_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_X_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int_set_y_mA856F32D1BF187BD4091DDF3C6872FD01F7D3377_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Y_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int_set_z_m5782180F67C4257C505F124971985D99C3422F74_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Z_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}

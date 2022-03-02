#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// UnityEngine.CreateAssetMenuAttribute
struct CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// UnityEngine.RangeAttribute
struct RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25;
// System.String
struct String_t;
// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.CreateAssetMenuAttribute
struct CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.RangeAttribute
struct RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};


// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tooltip_0), (void*)value);
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SerializeField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3 (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CreateAssetMenuAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateAssetMenuAttribute__ctor_mF4754D0F74BACF7BB7DAC67F46690A69256D2D65 (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000 (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * __this, float ___min0, float ___max1, const RuntimeMethod* method);
// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042 (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * __this, String_t* ___tooltip0, const RuntimeMethod* method);
static void AssemblyU2DCSharp_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[0];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[1];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[2];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
}
static void IGoalReacher_tD5B5B38678D26D3D95DD9AF83D7A66B3D94BAC05_CustomAttributesCacheGenerator_IGoalReacher_add_OnGoalReached_m0E8B58908805A4645455BC576B0C233471DA08B8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IGoalReacher_tD5B5B38678D26D3D95DD9AF83D7A66B3D94BAC05_CustomAttributesCacheGenerator_IGoalReacher_remove_OnGoalReached_m8A8A0EF550A76E0C3B360B1C249B0143E000C3AB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IValue_1_t93FB89FD3B006357649988C54EA3E388F9C987FA_CustomAttributesCacheGenerator_IValue_1_add_OnValueChanged_mBC77145532BA37B8E4CF1C667031C560116EA7C3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IValue_1_t93FB89FD3B006357649988C54EA3E388F9C987FA_CustomAttributesCacheGenerator_IValue_1_remove_OnValueChanged_m796450740B051D038F29D532A495736021C7FE15(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87_CustomAttributesCacheGenerator_spawner(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void RandomListSpawner_tC63BE818CD5B94E1116A4831FDD5EAB8B6DA3321_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * tmp = (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C *)cache->attributes[0];
		CreateAssetMenuAttribute__ctor_mF4754D0F74BACF7BB7DAC67F46690A69256D2D65(tmp, NULL);
	}
}
static void RandomListSpawner_tC63BE818CD5B94E1116A4831FDD5EAB8B6DA3321_CustomAttributesCacheGenerator__spawnableGameObjects(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void RandomListSpawner_tC63BE818CD5B94E1116A4831FDD5EAB8B6DA3321_CustomAttributesCacheGenerator__desiredAmount(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[1];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 1.0f, 20.0f, NULL);
	}
}
static void RandomListSpawner_tC63BE818CD5B94E1116A4831FDD5EAB8B6DA3321_CustomAttributesCacheGenerator__minDistance(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[1];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 1.0f, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[2];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x41\x73\x20\x61\x20\x66\x72\x61\x63\x74\x69\x6F\x6E\x20\x6F\x66\x20\x74\x68\x65\x20\x68\x65\x69\x67\x68\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x73\x63\x72\x65\x65\x6E\x2E"), NULL);
	}
}
static void RandomListSpawner_tC63BE818CD5B94E1116A4831FDD5EAB8B6DA3321_CustomAttributesCacheGenerator__objectsCollected(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void SingleObjectSpawner_t6F298AA07C111B7B396790ACB2EC0491CE1C27AE_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * tmp = (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C *)cache->attributes[0];
		CreateAssetMenuAttribute__ctor_mF4754D0F74BACF7BB7DAC67F46690A69256D2D65(tmp, NULL);
	}
}
static void SingleObjectSpawner_t6F298AA07C111B7B396790ACB2EC0491CE1C27AE_CustomAttributesCacheGenerator__spawnableGameObject(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ObjectsCollected_tBCC3D39778A8766E5066D0635DF7A7DDBCBF410A_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * tmp = (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C *)cache->attributes[0];
		CreateAssetMenuAttribute__ctor_mF4754D0F74BACF7BB7DAC67F46690A69256D2D65(tmp, NULL);
	}
}
static void ObjectsCollected_tBCC3D39778A8766E5066D0635DF7A7DDBCBF410A_CustomAttributesCacheGenerator__value(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ObjectsCollected_tBCC3D39778A8766E5066D0635DF7A7DDBCBF410A_CustomAttributesCacheGenerator__goal(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ObjectsCollected_tBCC3D39778A8766E5066D0635DF7A7DDBCBF410A_CustomAttributesCacheGenerator_OnValueChanged(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ObjectsCollected_tBCC3D39778A8766E5066D0635DF7A7DDBCBF410A_CustomAttributesCacheGenerator_OnGoalReached(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ObjectsCollected_tBCC3D39778A8766E5066D0635DF7A7DDBCBF410A_CustomAttributesCacheGenerator_ObjectsCollected_add_OnValueChanged_m3191E159B77664528F03D7D977DD189FD41BE0F5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ObjectsCollected_tBCC3D39778A8766E5066D0635DF7A7DDBCBF410A_CustomAttributesCacheGenerator_ObjectsCollected_remove_OnValueChanged_mB11AAB0380B77C3E7A15926D178EC5102D5E5D72(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ObjectsCollected_tBCC3D39778A8766E5066D0635DF7A7DDBCBF410A_CustomAttributesCacheGenerator_ObjectsCollected_add_OnGoalReached_mE566F7979FDAF87BF0527E2864476B168F9E6748(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ObjectsCollected_tBCC3D39778A8766E5066D0635DF7A7DDBCBF410A_CustomAttributesCacheGenerator_ObjectsCollected_remove_OnGoalReached_m48D006496AC1E64A8B7076A85A577A9789693B48(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ValueDisplayInt_tE901CFF78B1A8FCD12F13EE9C913E22DFFF6D72A_CustomAttributesCacheGenerator__label(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ValueDisplayInt_tE901CFF78B1A8FCD12F13EE9C913E22DFFF6D72A_CustomAttributesCacheGenerator__scriptableObject(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void OnGoalReachedTimeStopper_tF0F13BABD01BB4AE9452A9ED19C0D1D2AF1D35C7_CustomAttributesCacheGenerator__scriptableObject(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void OnGoalReachedChildrenEnabler_t579C15C164B8B0D550D241CEF7C0F5329EBBC499_CustomAttributesCacheGenerator__scriptableObject(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Collectable_t8F11A9ED48A81E7E78DF629DB8AF2A918564DFA2_CustomAttributesCacheGenerator__objectsCollected(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_AttributeGenerators[];
const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_AttributeGenerators[27] = 
{
	RandomListSpawner_tC63BE818CD5B94E1116A4831FDD5EAB8B6DA3321_CustomAttributesCacheGenerator,
	SingleObjectSpawner_t6F298AA07C111B7B396790ACB2EC0491CE1C27AE_CustomAttributesCacheGenerator,
	ObjectsCollected_tBCC3D39778A8766E5066D0635DF7A7DDBCBF410A_CustomAttributesCacheGenerator,
	Spawner_t25C5C437F30ECF728D29E0B315C67659B99BEA87_CustomAttributesCacheGenerator_spawner,
	RandomListSpawner_tC63BE818CD5B94E1116A4831FDD5EAB8B6DA3321_CustomAttributesCacheGenerator__spawnableGameObjects,
	RandomListSpawner_tC63BE818CD5B94E1116A4831FDD5EAB8B6DA3321_CustomAttributesCacheGenerator__desiredAmount,
	RandomListSpawner_tC63BE818CD5B94E1116A4831FDD5EAB8B6DA3321_CustomAttributesCacheGenerator__minDistance,
	RandomListSpawner_tC63BE818CD5B94E1116A4831FDD5EAB8B6DA3321_CustomAttributesCacheGenerator__objectsCollected,
	SingleObjectSpawner_t6F298AA07C111B7B396790ACB2EC0491CE1C27AE_CustomAttributesCacheGenerator__spawnableGameObject,
	ObjectsCollected_tBCC3D39778A8766E5066D0635DF7A7DDBCBF410A_CustomAttributesCacheGenerator__value,
	ObjectsCollected_tBCC3D39778A8766E5066D0635DF7A7DDBCBF410A_CustomAttributesCacheGenerator__goal,
	ObjectsCollected_tBCC3D39778A8766E5066D0635DF7A7DDBCBF410A_CustomAttributesCacheGenerator_OnValueChanged,
	ObjectsCollected_tBCC3D39778A8766E5066D0635DF7A7DDBCBF410A_CustomAttributesCacheGenerator_OnGoalReached,
	ValueDisplayInt_tE901CFF78B1A8FCD12F13EE9C913E22DFFF6D72A_CustomAttributesCacheGenerator__label,
	ValueDisplayInt_tE901CFF78B1A8FCD12F13EE9C913E22DFFF6D72A_CustomAttributesCacheGenerator__scriptableObject,
	OnGoalReachedTimeStopper_tF0F13BABD01BB4AE9452A9ED19C0D1D2AF1D35C7_CustomAttributesCacheGenerator__scriptableObject,
	OnGoalReachedChildrenEnabler_t579C15C164B8B0D550D241CEF7C0F5329EBBC499_CustomAttributesCacheGenerator__scriptableObject,
	Collectable_t8F11A9ED48A81E7E78DF629DB8AF2A918564DFA2_CustomAttributesCacheGenerator__objectsCollected,
	IGoalReacher_tD5B5B38678D26D3D95DD9AF83D7A66B3D94BAC05_CustomAttributesCacheGenerator_IGoalReacher_add_OnGoalReached_m0E8B58908805A4645455BC576B0C233471DA08B8,
	IGoalReacher_tD5B5B38678D26D3D95DD9AF83D7A66B3D94BAC05_CustomAttributesCacheGenerator_IGoalReacher_remove_OnGoalReached_m8A8A0EF550A76E0C3B360B1C249B0143E000C3AB,
	IValue_1_t93FB89FD3B006357649988C54EA3E388F9C987FA_CustomAttributesCacheGenerator_IValue_1_add_OnValueChanged_mBC77145532BA37B8E4CF1C667031C560116EA7C3,
	IValue_1_t93FB89FD3B006357649988C54EA3E388F9C987FA_CustomAttributesCacheGenerator_IValue_1_remove_OnValueChanged_m796450740B051D038F29D532A495736021C7FE15,
	ObjectsCollected_tBCC3D39778A8766E5066D0635DF7A7DDBCBF410A_CustomAttributesCacheGenerator_ObjectsCollected_add_OnValueChanged_m3191E159B77664528F03D7D977DD189FD41BE0F5,
	ObjectsCollected_tBCC3D39778A8766E5066D0635DF7A7DDBCBF410A_CustomAttributesCacheGenerator_ObjectsCollected_remove_OnValueChanged_mB11AAB0380B77C3E7A15926D178EC5102D5E5D72,
	ObjectsCollected_tBCC3D39778A8766E5066D0635DF7A7DDBCBF410A_CustomAttributesCacheGenerator_ObjectsCollected_add_OnGoalReached_mE566F7979FDAF87BF0527E2864476B168F9E6748,
	ObjectsCollected_tBCC3D39778A8766E5066D0635DF7A7DDBCBF410A_CustomAttributesCacheGenerator_ObjectsCollected_remove_OnGoalReached_m48D006496AC1E64A8B7076A85A577A9789693B48,
	AssemblyU2DCSharp_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.String
struct String_t;
// System.IO.StringReader
struct StringReader_t3465604688;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t2269201059;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Assembly>
struct Dictionary_2_t3887689098;
// System.Collections.Generic.List`1<System.Reflection.Assembly>
struct List_1_t1279540245;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t107971893;
// System.Char[]
struct CharU5BU5D_t3528271667;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CCANSERIALIZEFIELDU3EC__ANONSTOREY2_T1489263536_H
#define U3CCANSERIALIZEFIELDU3EC__ANONSTOREY2_T1489263536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FullSerializer.fsMetaType/<CanSerializeField>c__AnonStorey2
struct  U3CCanSerializeFieldU3Ec__AnonStorey2_t1489263536  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo FullSerializer.fsMetaType/<CanSerializeField>c__AnonStorey2::field
	FieldInfo_t * ___field_0;

public:
	inline static int32_t get_offset_of_field_0() { return static_cast<int32_t>(offsetof(U3CCanSerializeFieldU3Ec__AnonStorey2_t1489263536, ___field_0)); }
	inline FieldInfo_t * get_field_0() const { return ___field_0; }
	inline FieldInfo_t ** get_address_of_field_0() { return &___field_0; }
	inline void set_field_0(FieldInfo_t * value)
	{
		___field_0 = value;
		Il2CppCodeGenWriteBarrier((&___field_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCANSERIALIZEFIELDU3EC__ANONSTOREY2_T1489263536_H
#ifndef SERIALIZER_T1539586466_H
#define SERIALIZER_T1539586466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json/Serializer
struct  Serializer_t1539586466  : public RuntimeObject
{
public:
	// System.Text.StringBuilder MiniJSON.Json/Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t1539586466, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((&___builder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZER_T1539586466_H
#ifndef PARSER_T3021620180_H
#define PARSER_T3021620180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json/Parser
struct  Parser_t3021620180  : public RuntimeObject
{
public:
	// System.IO.StringReader MiniJSON.Json/Parser::json
	StringReader_t3465604688 * ___json_1;

public:
	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(Parser_t3021620180, ___json_1)); }
	inline StringReader_t3465604688 * get_json_1() const { return ___json_1; }
	inline StringReader_t3465604688 ** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(StringReader_t3465604688 * value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier((&___json_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T3021620180_H
#ifndef JSON_T27535148_H
#define JSON_T27535148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json
struct  Json_t27535148  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSON_T27535148_H
#ifndef FSTYPECACHE_T3469578604_H
#define FSTYPECACHE_T3469578604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FullSerializer.Internal.fsTypeCache
struct  fsTypeCache_t3469578604  : public RuntimeObject
{
public:

public:
};

struct fsTypeCache_t3469578604_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> FullSerializer.Internal.fsTypeCache::_cachedTypes
	Dictionary_2_t2269201059 * ____cachedTypes_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.Assembly> FullSerializer.Internal.fsTypeCache::_assembliesByName
	Dictionary_2_t3887689098 * ____assembliesByName_1;
	// System.Collections.Generic.List`1<System.Reflection.Assembly> FullSerializer.Internal.fsTypeCache::_assembliesByIndex
	List_1_t1279540245 * ____assembliesByIndex_2;
	// System.AssemblyLoadEventHandler FullSerializer.Internal.fsTypeCache::<>f__mg$cache0
	AssemblyLoadEventHandler_t107971893 * ___U3CU3Ef__mgU24cache0_3;

public:
	inline static int32_t get_offset_of__cachedTypes_0() { return static_cast<int32_t>(offsetof(fsTypeCache_t3469578604_StaticFields, ____cachedTypes_0)); }
	inline Dictionary_2_t2269201059 * get__cachedTypes_0() const { return ____cachedTypes_0; }
	inline Dictionary_2_t2269201059 ** get_address_of__cachedTypes_0() { return &____cachedTypes_0; }
	inline void set__cachedTypes_0(Dictionary_2_t2269201059 * value)
	{
		____cachedTypes_0 = value;
		Il2CppCodeGenWriteBarrier((&____cachedTypes_0), value);
	}

	inline static int32_t get_offset_of__assembliesByName_1() { return static_cast<int32_t>(offsetof(fsTypeCache_t3469578604_StaticFields, ____assembliesByName_1)); }
	inline Dictionary_2_t3887689098 * get__assembliesByName_1() const { return ____assembliesByName_1; }
	inline Dictionary_2_t3887689098 ** get_address_of__assembliesByName_1() { return &____assembliesByName_1; }
	inline void set__assembliesByName_1(Dictionary_2_t3887689098 * value)
	{
		____assembliesByName_1 = value;
		Il2CppCodeGenWriteBarrier((&____assembliesByName_1), value);
	}

	inline static int32_t get_offset_of__assembliesByIndex_2() { return static_cast<int32_t>(offsetof(fsTypeCache_t3469578604_StaticFields, ____assembliesByIndex_2)); }
	inline List_1_t1279540245 * get__assembliesByIndex_2() const { return ____assembliesByIndex_2; }
	inline List_1_t1279540245 ** get_address_of__assembliesByIndex_2() { return &____assembliesByIndex_2; }
	inline void set__assembliesByIndex_2(List_1_t1279540245 * value)
	{
		____assembliesByIndex_2 = value;
		Il2CppCodeGenWriteBarrier((&____assembliesByIndex_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_3() { return static_cast<int32_t>(offsetof(fsTypeCache_t3469578604_StaticFields, ___U3CU3Ef__mgU24cache0_3)); }
	inline AssemblyLoadEventHandler_t107971893 * get_U3CU3Ef__mgU24cache0_3() const { return ___U3CU3Ef__mgU24cache0_3; }
	inline AssemblyLoadEventHandler_t107971893 ** get_address_of_U3CU3Ef__mgU24cache0_3() { return &___U3CU3Ef__mgU24cache0_3; }
	inline void set_U3CU3Ef__mgU24cache0_3(AssemblyLoadEventHandler_t107971893 * value)
	{
		___U3CU3Ef__mgU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FSTYPECACHE_T3469578604_H
#ifndef FSREFLECTIONUTILITY_T2837052610_H
#define FSREFLECTIONUTILITY_T2837052610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FullSerializer.Internal.fsReflectionUtility
struct  fsReflectionUtility_t2837052610  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FSREFLECTIONUTILITY_T2837052610_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef TOKEN_T3126366611_H
#define TOKEN_T3126366611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json/Parser/TOKEN
struct  TOKEN_t3126366611 
{
public:
	// System.Int32 MiniJSON.Json/Parser/TOKEN::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TOKEN_t3126366611, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOKEN_T3126366611_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3100 = { sizeof (U3CCanSerializeFieldU3Ec__AnonStorey2_t1489263536), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3100[1] = 
{
	U3CCanSerializeFieldU3Ec__AnonStorey2_t1489263536::get_offset_of_field_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3101 = { sizeof (fsReflectionUtility_t2837052610), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3102 = { sizeof (fsTypeCache_t3469578604), -1, sizeof(fsTypeCache_t3469578604_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3102[4] = 
{
	fsTypeCache_t3469578604_StaticFields::get_offset_of__cachedTypes_0(),
	fsTypeCache_t3469578604_StaticFields::get_offset_of__assembliesByName_1(),
	fsTypeCache_t3469578604_StaticFields::get_offset_of__assembliesByIndex_2(),
	fsTypeCache_t3469578604_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3103 = { sizeof (Json_t27535148), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3104 = { sizeof (Parser_t3021620180), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3104[2] = 
{
	0,
	Parser_t3021620180::get_offset_of_json_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3105 = { sizeof (TOKEN_t3126366611)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3105[13] = 
{
	TOKEN_t3126366611::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3106 = { sizeof (Serializer_t1539586466), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3106[1] = 
{
	Serializer_t1539586466::get_offset_of_builder_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

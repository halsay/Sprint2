#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.TmxObject
struct  TmxObject_t815040978  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Tiled2Unity.TmxObject::TmxId
	int32_t ___TmxId_2;
	// System.String Tiled2Unity.TmxObject::TmxName
	String_t* ___TmxName_3;
	// System.String Tiled2Unity.TmxObject::TmxType
	String_t* ___TmxType_4;
	// UnityEngine.Vector2 Tiled2Unity.TmxObject::TmxPosition
	Vector2_t2243707579  ___TmxPosition_5;
	// UnityEngine.Vector2 Tiled2Unity.TmxObject::TmxSize
	Vector2_t2243707579  ___TmxSize_6;
	// System.Single Tiled2Unity.TmxObject::TmxRotation
	float ___TmxRotation_7;

public:
	inline static int32_t get_offset_of_TmxId_2() { return static_cast<int32_t>(offsetof(TmxObject_t815040978, ___TmxId_2)); }
	inline int32_t get_TmxId_2() const { return ___TmxId_2; }
	inline int32_t* get_address_of_TmxId_2() { return &___TmxId_2; }
	inline void set_TmxId_2(int32_t value)
	{
		___TmxId_2 = value;
	}

	inline static int32_t get_offset_of_TmxName_3() { return static_cast<int32_t>(offsetof(TmxObject_t815040978, ___TmxName_3)); }
	inline String_t* get_TmxName_3() const { return ___TmxName_3; }
	inline String_t** get_address_of_TmxName_3() { return &___TmxName_3; }
	inline void set_TmxName_3(String_t* value)
	{
		___TmxName_3 = value;
		Il2CppCodeGenWriteBarrier(&___TmxName_3, value);
	}

	inline static int32_t get_offset_of_TmxType_4() { return static_cast<int32_t>(offsetof(TmxObject_t815040978, ___TmxType_4)); }
	inline String_t* get_TmxType_4() const { return ___TmxType_4; }
	inline String_t** get_address_of_TmxType_4() { return &___TmxType_4; }
	inline void set_TmxType_4(String_t* value)
	{
		___TmxType_4 = value;
		Il2CppCodeGenWriteBarrier(&___TmxType_4, value);
	}

	inline static int32_t get_offset_of_TmxPosition_5() { return static_cast<int32_t>(offsetof(TmxObject_t815040978, ___TmxPosition_5)); }
	inline Vector2_t2243707579  get_TmxPosition_5() const { return ___TmxPosition_5; }
	inline Vector2_t2243707579 * get_address_of_TmxPosition_5() { return &___TmxPosition_5; }
	inline void set_TmxPosition_5(Vector2_t2243707579  value)
	{
		___TmxPosition_5 = value;
	}

	inline static int32_t get_offset_of_TmxSize_6() { return static_cast<int32_t>(offsetof(TmxObject_t815040978, ___TmxSize_6)); }
	inline Vector2_t2243707579  get_TmxSize_6() const { return ___TmxSize_6; }
	inline Vector2_t2243707579 * get_address_of_TmxSize_6() { return &___TmxSize_6; }
	inline void set_TmxSize_6(Vector2_t2243707579  value)
	{
		___TmxSize_6 = value;
	}

	inline static int32_t get_offset_of_TmxRotation_7() { return static_cast<int32_t>(offsetof(TmxObject_t815040978, ___TmxRotation_7)); }
	inline float get_TmxRotation_7() const { return ___TmxRotation_7; }
	inline float* get_address_of_TmxRotation_7() { return &___TmxRotation_7; }
	inline void set_TmxRotation_7(float value)
	{
		___TmxRotation_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

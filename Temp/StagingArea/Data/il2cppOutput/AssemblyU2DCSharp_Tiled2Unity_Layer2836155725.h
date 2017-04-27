#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.Layer
struct  Layer_t2836155725  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 Tiled2Unity.Layer::Offset
	Vector2_t2243707579  ___Offset_2;

public:
	inline static int32_t get_offset_of_Offset_2() { return static_cast<int32_t>(offsetof(Layer_t2836155725, ___Offset_2)); }
	inline Vector2_t2243707579  get_Offset_2() const { return ___Offset_2; }
	inline Vector2_t2243707579 * get_address_of_Offset_2() { return &___Offset_2; }
	inline void set_Offset_2(Vector2_t2243707579  value)
	{
		___Offset_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

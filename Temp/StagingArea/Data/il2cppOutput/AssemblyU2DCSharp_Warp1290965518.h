﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Warp
struct  Warp_t1290965518  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Warp::warpTarget
	Transform_t3275118058 * ___warpTarget_2;

public:
	inline static int32_t get_offset_of_warpTarget_2() { return static_cast<int32_t>(offsetof(Warp_t1290965518, ___warpTarget_2)); }
	inline Transform_t3275118058 * get_warpTarget_2() const { return ___warpTarget_2; }
	inline Transform_t3275118058 ** get_address_of_warpTarget_2() { return &___warpTarget_2; }
	inline void set_warpTarget_2(Transform_t3275118058 * value)
	{
		___warpTarget_2 = value;
		Il2CppCodeGenWriteBarrier(&___warpTarget_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
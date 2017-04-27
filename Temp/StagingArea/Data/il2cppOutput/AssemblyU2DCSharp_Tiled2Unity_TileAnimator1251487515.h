#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.TileAnimator
struct  TileAnimator_t1251487515  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Tiled2Unity.TileAnimator::StartTime
	float ___StartTime_2;
	// System.Single Tiled2Unity.TileAnimator::Duration
	float ___Duration_3;
	// System.Single Tiled2Unity.TileAnimator::TotalAnimationTime
	float ___TotalAnimationTime_4;
	// System.Single Tiled2Unity.TileAnimator::timer
	float ___timer_5;
	// UnityEngine.MeshRenderer Tiled2Unity.TileAnimator::meshRenderer
	MeshRenderer_t1268241104 * ___meshRenderer_6;

public:
	inline static int32_t get_offset_of_StartTime_2() { return static_cast<int32_t>(offsetof(TileAnimator_t1251487515, ___StartTime_2)); }
	inline float get_StartTime_2() const { return ___StartTime_2; }
	inline float* get_address_of_StartTime_2() { return &___StartTime_2; }
	inline void set_StartTime_2(float value)
	{
		___StartTime_2 = value;
	}

	inline static int32_t get_offset_of_Duration_3() { return static_cast<int32_t>(offsetof(TileAnimator_t1251487515, ___Duration_3)); }
	inline float get_Duration_3() const { return ___Duration_3; }
	inline float* get_address_of_Duration_3() { return &___Duration_3; }
	inline void set_Duration_3(float value)
	{
		___Duration_3 = value;
	}

	inline static int32_t get_offset_of_TotalAnimationTime_4() { return static_cast<int32_t>(offsetof(TileAnimator_t1251487515, ___TotalAnimationTime_4)); }
	inline float get_TotalAnimationTime_4() const { return ___TotalAnimationTime_4; }
	inline float* get_address_of_TotalAnimationTime_4() { return &___TotalAnimationTime_4; }
	inline void set_TotalAnimationTime_4(float value)
	{
		___TotalAnimationTime_4 = value;
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(TileAnimator_t1251487515, ___timer_5)); }
	inline float get_timer_5() const { return ___timer_5; }
	inline float* get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(float value)
	{
		___timer_5 = value;
	}

	inline static int32_t get_offset_of_meshRenderer_6() { return static_cast<int32_t>(offsetof(TileAnimator_t1251487515, ___meshRenderer_6)); }
	inline MeshRenderer_t1268241104 * get_meshRenderer_6() const { return ___meshRenderer_6; }
	inline MeshRenderer_t1268241104 ** get_address_of_meshRenderer_6() { return &___meshRenderer_6; }
	inline void set_meshRenderer_6(MeshRenderer_t1268241104 * value)
	{
		___meshRenderer_6 = value;
		Il2CppCodeGenWriteBarrier(&___meshRenderer_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

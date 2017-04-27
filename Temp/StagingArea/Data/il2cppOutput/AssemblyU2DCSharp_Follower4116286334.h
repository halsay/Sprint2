#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Follower
struct  Follower_t4116286334  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Follower::target
	Transform_t3275118058 * ___target_2;
	// System.Int32 Follower::movSpeed
	int32_t ___movSpeed_3;
	// System.Single Follower::dist
	float ___dist_4;
	// UnityEngine.Transform Follower::thisGoat
	Transform_t3275118058 * ___thisGoat_5;
	// UnityEngine.Vector2 Follower::movement
	Vector2_t2243707579  ___movement_6;
	// UnityEngine.Vector2 Follower::delta
	Vector2_t2243707579  ___delta_7;
	// UnityEngine.Animator Follower::anim
	Animator_t69676727 * ___anim_8;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(Follower_t4116286334, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_movSpeed_3() { return static_cast<int32_t>(offsetof(Follower_t4116286334, ___movSpeed_3)); }
	inline int32_t get_movSpeed_3() const { return ___movSpeed_3; }
	inline int32_t* get_address_of_movSpeed_3() { return &___movSpeed_3; }
	inline void set_movSpeed_3(int32_t value)
	{
		___movSpeed_3 = value;
	}

	inline static int32_t get_offset_of_dist_4() { return static_cast<int32_t>(offsetof(Follower_t4116286334, ___dist_4)); }
	inline float get_dist_4() const { return ___dist_4; }
	inline float* get_address_of_dist_4() { return &___dist_4; }
	inline void set_dist_4(float value)
	{
		___dist_4 = value;
	}

	inline static int32_t get_offset_of_thisGoat_5() { return static_cast<int32_t>(offsetof(Follower_t4116286334, ___thisGoat_5)); }
	inline Transform_t3275118058 * get_thisGoat_5() const { return ___thisGoat_5; }
	inline Transform_t3275118058 ** get_address_of_thisGoat_5() { return &___thisGoat_5; }
	inline void set_thisGoat_5(Transform_t3275118058 * value)
	{
		___thisGoat_5 = value;
		Il2CppCodeGenWriteBarrier(&___thisGoat_5, value);
	}

	inline static int32_t get_offset_of_movement_6() { return static_cast<int32_t>(offsetof(Follower_t4116286334, ___movement_6)); }
	inline Vector2_t2243707579  get_movement_6() const { return ___movement_6; }
	inline Vector2_t2243707579 * get_address_of_movement_6() { return &___movement_6; }
	inline void set_movement_6(Vector2_t2243707579  value)
	{
		___movement_6 = value;
	}

	inline static int32_t get_offset_of_delta_7() { return static_cast<int32_t>(offsetof(Follower_t4116286334, ___delta_7)); }
	inline Vector2_t2243707579  get_delta_7() const { return ___delta_7; }
	inline Vector2_t2243707579 * get_address_of_delta_7() { return &___delta_7; }
	inline void set_delta_7(Vector2_t2243707579  value)
	{
		___delta_7 = value;
	}

	inline static int32_t get_offset_of_anim_8() { return static_cast<int32_t>(offsetof(Follower_t4116286334, ___anim_8)); }
	inline Animator_t69676727 * get_anim_8() const { return ___anim_8; }
	inline Animator_t69676727 ** get_address_of_anim_8() { return &___anim_8; }
	inline void set_anim_8(Animator_t69676727 * value)
	{
		___anim_8 = value;
		Il2CppCodeGenWriteBarrier(&___anim_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

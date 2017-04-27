#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMovement
struct  PlayerMovement_t3166138480  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D PlayerMovement::rbody
	Rigidbody2D_t502193897 * ___rbody_2;
	// UnityEngine.Animator PlayerMovement::anim
	Animator_t69676727 * ___anim_3;
	// System.Single PlayerMovement::speed
	float ___speed_4;
	// System.Boolean PlayerMovement::canMove
	bool ___canMove_5;

public:
	inline static int32_t get_offset_of_rbody_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___rbody_2)); }
	inline Rigidbody2D_t502193897 * get_rbody_2() const { return ___rbody_2; }
	inline Rigidbody2D_t502193897 ** get_address_of_rbody_2() { return &___rbody_2; }
	inline void set_rbody_2(Rigidbody2D_t502193897 * value)
	{
		___rbody_2 = value;
		Il2CppCodeGenWriteBarrier(&___rbody_2, value);
	}

	inline static int32_t get_offset_of_anim_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___anim_3)); }
	inline Animator_t69676727 * get_anim_3() const { return ___anim_3; }
	inline Animator_t69676727 ** get_address_of_anim_3() { return &___anim_3; }
	inline void set_anim_3(Animator_t69676727 * value)
	{
		___anim_3 = value;
		Il2CppCodeGenWriteBarrier(&___anim_3, value);
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_canMove_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___canMove_5)); }
	inline bool get_canMove_5() const { return ___canMove_5; }
	inline bool* get_address_of_canMove_5() { return &___canMove_5; }
	inline void set_canMove_5(bool value)
	{
		___canMove_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

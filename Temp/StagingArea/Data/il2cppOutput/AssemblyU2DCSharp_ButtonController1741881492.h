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
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.Animator
struct Animator_t69676727;
// Door
struct Door_t1896021008;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonController
struct  ButtonController_t1741881492  : public MonoBehaviour_t1158329972
{
public:
	// System.String ButtonController::doorTag
	String_t* ___doorTag_2;
	// UnityEngine.Collider2D ButtonController::goat
	Collider2D_t646061738 * ___goat_3;
	// UnityEngine.Animator ButtonController::anim
	Animator_t69676727 * ___anim_4;
	// Door ButtonController::doorControl
	Door_t1896021008 * ___doorControl_5;

public:
	inline static int32_t get_offset_of_doorTag_2() { return static_cast<int32_t>(offsetof(ButtonController_t1741881492, ___doorTag_2)); }
	inline String_t* get_doorTag_2() const { return ___doorTag_2; }
	inline String_t** get_address_of_doorTag_2() { return &___doorTag_2; }
	inline void set_doorTag_2(String_t* value)
	{
		___doorTag_2 = value;
		Il2CppCodeGenWriteBarrier(&___doorTag_2, value);
	}

	inline static int32_t get_offset_of_goat_3() { return static_cast<int32_t>(offsetof(ButtonController_t1741881492, ___goat_3)); }
	inline Collider2D_t646061738 * get_goat_3() const { return ___goat_3; }
	inline Collider2D_t646061738 ** get_address_of_goat_3() { return &___goat_3; }
	inline void set_goat_3(Collider2D_t646061738 * value)
	{
		___goat_3 = value;
		Il2CppCodeGenWriteBarrier(&___goat_3, value);
	}

	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(ButtonController_t1741881492, ___anim_4)); }
	inline Animator_t69676727 * get_anim_4() const { return ___anim_4; }
	inline Animator_t69676727 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t69676727 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier(&___anim_4, value);
	}

	inline static int32_t get_offset_of_doorControl_5() { return static_cast<int32_t>(offsetof(ButtonController_t1741881492, ___doorControl_5)); }
	inline Door_t1896021008 * get_doorControl_5() const { return ___doorControl_5; }
	inline Door_t1896021008 ** get_address_of_doorControl_5() { return &___doorControl_5; }
	inline void set_doorControl_5(Door_t1896021008 * value)
	{
		___doorControl_5 = value;
		Il2CppCodeGenWriteBarrier(&___doorControl_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

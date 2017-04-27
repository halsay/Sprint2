#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoxController
struct  BoxController_t1069305931  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject BoxController::closedDia
	GameObject_t1756533147 * ___closedDia_2;
	// UnityEngine.GameObject BoxController::openDia
	GameObject_t1756533147 * ___openDia_3;
	// System.Boolean BoxController::isOpen
	bool ___isOpen_4;
	// UnityEngine.Animator BoxController::anim
	Animator_t69676727 * ___anim_5;

public:
	inline static int32_t get_offset_of_closedDia_2() { return static_cast<int32_t>(offsetof(BoxController_t1069305931, ___closedDia_2)); }
	inline GameObject_t1756533147 * get_closedDia_2() const { return ___closedDia_2; }
	inline GameObject_t1756533147 ** get_address_of_closedDia_2() { return &___closedDia_2; }
	inline void set_closedDia_2(GameObject_t1756533147 * value)
	{
		___closedDia_2 = value;
		Il2CppCodeGenWriteBarrier(&___closedDia_2, value);
	}

	inline static int32_t get_offset_of_openDia_3() { return static_cast<int32_t>(offsetof(BoxController_t1069305931, ___openDia_3)); }
	inline GameObject_t1756533147 * get_openDia_3() const { return ___openDia_3; }
	inline GameObject_t1756533147 ** get_address_of_openDia_3() { return &___openDia_3; }
	inline void set_openDia_3(GameObject_t1756533147 * value)
	{
		___openDia_3 = value;
		Il2CppCodeGenWriteBarrier(&___openDia_3, value);
	}

	inline static int32_t get_offset_of_isOpen_4() { return static_cast<int32_t>(offsetof(BoxController_t1069305931, ___isOpen_4)); }
	inline bool get_isOpen_4() const { return ___isOpen_4; }
	inline bool* get_address_of_isOpen_4() { return &___isOpen_4; }
	inline void set_isOpen_4(bool value)
	{
		___isOpen_4 = value;
	}

	inline static int32_t get_offset_of_anim_5() { return static_cast<int32_t>(offsetof(BoxController_t1069305931, ___anim_5)); }
	inline Animator_t69676727 * get_anim_5() const { return ___anim_5; }
	inline Animator_t69676727 ** get_address_of_anim_5() { return &___anim_5; }
	inline void set_anim_5(Animator_t69676727 * value)
	{
		___anim_5 = value;
		Il2CppCodeGenWriteBarrier(&___anim_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

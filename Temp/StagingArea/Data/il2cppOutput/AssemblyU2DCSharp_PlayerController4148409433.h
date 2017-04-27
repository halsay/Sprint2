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
// CameraSwitch
struct CameraSwitch_t2061834593;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PlayerController::Little
	GameObject_t1756533147 * ___Little_2;
	// UnityEngine.GameObject PlayerController::Middle
	GameObject_t1756533147 * ___Middle_3;
	// UnityEngine.GameObject PlayerController::Big
	GameObject_t1756533147 * ___Big_4;
	// System.Int32 PlayerController::state
	int32_t ___state_5;
	// CameraSwitch PlayerController::camSwitch
	CameraSwitch_t2061834593 * ___camSwitch_6;

public:
	inline static int32_t get_offset_of_Little_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___Little_2)); }
	inline GameObject_t1756533147 * get_Little_2() const { return ___Little_2; }
	inline GameObject_t1756533147 ** get_address_of_Little_2() { return &___Little_2; }
	inline void set_Little_2(GameObject_t1756533147 * value)
	{
		___Little_2 = value;
		Il2CppCodeGenWriteBarrier(&___Little_2, value);
	}

	inline static int32_t get_offset_of_Middle_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___Middle_3)); }
	inline GameObject_t1756533147 * get_Middle_3() const { return ___Middle_3; }
	inline GameObject_t1756533147 ** get_address_of_Middle_3() { return &___Middle_3; }
	inline void set_Middle_3(GameObject_t1756533147 * value)
	{
		___Middle_3 = value;
		Il2CppCodeGenWriteBarrier(&___Middle_3, value);
	}

	inline static int32_t get_offset_of_Big_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___Big_4)); }
	inline GameObject_t1756533147 * get_Big_4() const { return ___Big_4; }
	inline GameObject_t1756533147 ** get_address_of_Big_4() { return &___Big_4; }
	inline void set_Big_4(GameObject_t1756533147 * value)
	{
		___Big_4 = value;
		Il2CppCodeGenWriteBarrier(&___Big_4, value);
	}

	inline static int32_t get_offset_of_state_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___state_5)); }
	inline int32_t get_state_5() const { return ___state_5; }
	inline int32_t* get_address_of_state_5() { return &___state_5; }
	inline void set_state_5(int32_t value)
	{
		___state_5 = value;
	}

	inline static int32_t get_offset_of_camSwitch_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___camSwitch_6)); }
	inline CameraSwitch_t2061834593 * get_camSwitch_6() const { return ___camSwitch_6; }
	inline CameraSwitch_t2061834593 ** get_address_of_camSwitch_6() { return &___camSwitch_6; }
	inline void set_camSwitch_6(CameraSwitch_t2061834593 * value)
	{
		___camSwitch_6 = value;
		Il2CppCodeGenWriteBarrier(&___camSwitch_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

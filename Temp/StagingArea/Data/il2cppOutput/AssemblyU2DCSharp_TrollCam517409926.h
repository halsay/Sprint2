#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CameraSwitch
struct CameraSwitch_t2061834593;
// PlayerController
struct PlayerController_t4148409433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrollCam
struct  TrollCam_t517409926  : public MonoBehaviour_t1158329972
{
public:
	// CameraSwitch TrollCam::cs
	CameraSwitch_t2061834593 * ___cs_2;
	// System.Int32 TrollCam::state
	int32_t ___state_3;
	// PlayerController TrollCam::pCon
	PlayerController_t4148409433 * ___pCon_4;

public:
	inline static int32_t get_offset_of_cs_2() { return static_cast<int32_t>(offsetof(TrollCam_t517409926, ___cs_2)); }
	inline CameraSwitch_t2061834593 * get_cs_2() const { return ___cs_2; }
	inline CameraSwitch_t2061834593 ** get_address_of_cs_2() { return &___cs_2; }
	inline void set_cs_2(CameraSwitch_t2061834593 * value)
	{
		___cs_2 = value;
		Il2CppCodeGenWriteBarrier(&___cs_2, value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(TrollCam_t517409926, ___state_3)); }
	inline int32_t get_state_3() const { return ___state_3; }
	inline int32_t* get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(int32_t value)
	{
		___state_3 = value;
	}

	inline static int32_t get_offset_of_pCon_4() { return static_cast<int32_t>(offsetof(TrollCam_t517409926, ___pCon_4)); }
	inline PlayerController_t4148409433 * get_pCon_4() const { return ___pCon_4; }
	inline PlayerController_t4148409433 ** get_address_of_pCon_4() { return &___pCon_4; }
	inline void set_pCon_4(PlayerController_t4148409433 * value)
	{
		___pCon_4 = value;
		Il2CppCodeGenWriteBarrier(&___pCon_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

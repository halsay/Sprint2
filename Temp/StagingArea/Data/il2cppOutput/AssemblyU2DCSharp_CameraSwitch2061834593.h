#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraSwitch
struct  CameraSwitch_t2061834593  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform[] CameraSwitch::targets
	TransformU5BU5D_t3764228911* ___targets_2;
	// UnityEngine.GameObject CameraSwitch::playerCon
	GameObject_t1756533147 * ___playerCon_3;
	// System.Int32 CameraSwitch::state
	int32_t ___state_4;
	// UnityEngine.Transform CameraSwitch::focus
	Transform_t3275118058 * ___focus_5;
	// UnityEngine.Camera CameraSwitch::cam
	Camera_t189460977 * ___cam_6;

public:
	inline static int32_t get_offset_of_targets_2() { return static_cast<int32_t>(offsetof(CameraSwitch_t2061834593, ___targets_2)); }
	inline TransformU5BU5D_t3764228911* get_targets_2() const { return ___targets_2; }
	inline TransformU5BU5D_t3764228911** get_address_of_targets_2() { return &___targets_2; }
	inline void set_targets_2(TransformU5BU5D_t3764228911* value)
	{
		___targets_2 = value;
		Il2CppCodeGenWriteBarrier(&___targets_2, value);
	}

	inline static int32_t get_offset_of_playerCon_3() { return static_cast<int32_t>(offsetof(CameraSwitch_t2061834593, ___playerCon_3)); }
	inline GameObject_t1756533147 * get_playerCon_3() const { return ___playerCon_3; }
	inline GameObject_t1756533147 ** get_address_of_playerCon_3() { return &___playerCon_3; }
	inline void set_playerCon_3(GameObject_t1756533147 * value)
	{
		___playerCon_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerCon_3, value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(CameraSwitch_t2061834593, ___state_4)); }
	inline int32_t get_state_4() const { return ___state_4; }
	inline int32_t* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(int32_t value)
	{
		___state_4 = value;
	}

	inline static int32_t get_offset_of_focus_5() { return static_cast<int32_t>(offsetof(CameraSwitch_t2061834593, ___focus_5)); }
	inline Transform_t3275118058 * get_focus_5() const { return ___focus_5; }
	inline Transform_t3275118058 ** get_address_of_focus_5() { return &___focus_5; }
	inline void set_focus_5(Transform_t3275118058 * value)
	{
		___focus_5 = value;
		Il2CppCodeGenWriteBarrier(&___focus_5, value);
	}

	inline static int32_t get_offset_of_cam_6() { return static_cast<int32_t>(offsetof(CameraSwitch_t2061834593, ___cam_6)); }
	inline Camera_t189460977 * get_cam_6() const { return ___cam_6; }
	inline Camera_t189460977 ** get_address_of_cam_6() { return &___cam_6; }
	inline void set_cam_6(Camera_t189460977 * value)
	{
		___cam_6 = value;
		Il2CppCodeGenWriteBarrier(&___cam_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

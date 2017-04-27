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
// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFollow
struct  CameraFollow_t1493855402  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform CameraFollow::target1
	Transform_t3275118058 * ___target1_2;
	// UnityEngine.Camera CameraFollow::cam
	Camera_t189460977 * ___cam_3;

public:
	inline static int32_t get_offset_of_target1_2() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___target1_2)); }
	inline Transform_t3275118058 * get_target1_2() const { return ___target1_2; }
	inline Transform_t3275118058 ** get_address_of_target1_2() { return &___target1_2; }
	inline void set_target1_2(Transform_t3275118058 * value)
	{
		___target1_2 = value;
		Il2CppCodeGenWriteBarrier(&___target1_2, value);
	}

	inline static int32_t get_offset_of_cam_3() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___cam_3)); }
	inline Camera_t189460977 * get_cam_3() const { return ___cam_3; }
	inline Camera_t189460977 ** get_address_of_cam_3() { return &___cam_3; }
	inline void set_cam_3(Camera_t189460977 * value)
	{
		___cam_3 = value;
		Il2CppCodeGenWriteBarrier(&___cam_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

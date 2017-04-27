#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Portal
struct Portal_t2071763530;
// UnityEngine.Transform
struct Transform_t3275118058;
// ScreenFader
struct ScreenFader_t2638366376;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Teleport
struct  Teleport_t282063519  : public MonoBehaviour_t1158329972
{
public:
	// Portal Teleport::portal1
	Portal_t2071763530 * ___portal1_2;
	// Portal Teleport::portal2
	Portal_t2071763530 * ___portal2_3;
	// Portal Teleport::portal3
	Portal_t2071763530 * ___portal3_4;
	// UnityEngine.Transform Teleport::little
	Transform_t3275118058 * ___little_5;
	// UnityEngine.Transform Teleport::middle
	Transform_t3275118058 * ___middle_6;
	// UnityEngine.Transform Teleport::big
	Transform_t3275118058 * ___big_7;
	// UnityEngine.Transform Teleport::target1
	Transform_t3275118058 * ___target1_8;
	// UnityEngine.Transform Teleport::target2
	Transform_t3275118058 * ___target2_9;
	// UnityEngine.Transform Teleport::target3
	Transform_t3275118058 * ___target3_10;
	// System.Boolean Teleport::Teleported
	bool ___Teleported_11;
	// ScreenFader Teleport::sf
	ScreenFader_t2638366376 * ___sf_12;

public:
	inline static int32_t get_offset_of_portal1_2() { return static_cast<int32_t>(offsetof(Teleport_t282063519, ___portal1_2)); }
	inline Portal_t2071763530 * get_portal1_2() const { return ___portal1_2; }
	inline Portal_t2071763530 ** get_address_of_portal1_2() { return &___portal1_2; }
	inline void set_portal1_2(Portal_t2071763530 * value)
	{
		___portal1_2 = value;
		Il2CppCodeGenWriteBarrier(&___portal1_2, value);
	}

	inline static int32_t get_offset_of_portal2_3() { return static_cast<int32_t>(offsetof(Teleport_t282063519, ___portal2_3)); }
	inline Portal_t2071763530 * get_portal2_3() const { return ___portal2_3; }
	inline Portal_t2071763530 ** get_address_of_portal2_3() { return &___portal2_3; }
	inline void set_portal2_3(Portal_t2071763530 * value)
	{
		___portal2_3 = value;
		Il2CppCodeGenWriteBarrier(&___portal2_3, value);
	}

	inline static int32_t get_offset_of_portal3_4() { return static_cast<int32_t>(offsetof(Teleport_t282063519, ___portal3_4)); }
	inline Portal_t2071763530 * get_portal3_4() const { return ___portal3_4; }
	inline Portal_t2071763530 ** get_address_of_portal3_4() { return &___portal3_4; }
	inline void set_portal3_4(Portal_t2071763530 * value)
	{
		___portal3_4 = value;
		Il2CppCodeGenWriteBarrier(&___portal3_4, value);
	}

	inline static int32_t get_offset_of_little_5() { return static_cast<int32_t>(offsetof(Teleport_t282063519, ___little_5)); }
	inline Transform_t3275118058 * get_little_5() const { return ___little_5; }
	inline Transform_t3275118058 ** get_address_of_little_5() { return &___little_5; }
	inline void set_little_5(Transform_t3275118058 * value)
	{
		___little_5 = value;
		Il2CppCodeGenWriteBarrier(&___little_5, value);
	}

	inline static int32_t get_offset_of_middle_6() { return static_cast<int32_t>(offsetof(Teleport_t282063519, ___middle_6)); }
	inline Transform_t3275118058 * get_middle_6() const { return ___middle_6; }
	inline Transform_t3275118058 ** get_address_of_middle_6() { return &___middle_6; }
	inline void set_middle_6(Transform_t3275118058 * value)
	{
		___middle_6 = value;
		Il2CppCodeGenWriteBarrier(&___middle_6, value);
	}

	inline static int32_t get_offset_of_big_7() { return static_cast<int32_t>(offsetof(Teleport_t282063519, ___big_7)); }
	inline Transform_t3275118058 * get_big_7() const { return ___big_7; }
	inline Transform_t3275118058 ** get_address_of_big_7() { return &___big_7; }
	inline void set_big_7(Transform_t3275118058 * value)
	{
		___big_7 = value;
		Il2CppCodeGenWriteBarrier(&___big_7, value);
	}

	inline static int32_t get_offset_of_target1_8() { return static_cast<int32_t>(offsetof(Teleport_t282063519, ___target1_8)); }
	inline Transform_t3275118058 * get_target1_8() const { return ___target1_8; }
	inline Transform_t3275118058 ** get_address_of_target1_8() { return &___target1_8; }
	inline void set_target1_8(Transform_t3275118058 * value)
	{
		___target1_8 = value;
		Il2CppCodeGenWriteBarrier(&___target1_8, value);
	}

	inline static int32_t get_offset_of_target2_9() { return static_cast<int32_t>(offsetof(Teleport_t282063519, ___target2_9)); }
	inline Transform_t3275118058 * get_target2_9() const { return ___target2_9; }
	inline Transform_t3275118058 ** get_address_of_target2_9() { return &___target2_9; }
	inline void set_target2_9(Transform_t3275118058 * value)
	{
		___target2_9 = value;
		Il2CppCodeGenWriteBarrier(&___target2_9, value);
	}

	inline static int32_t get_offset_of_target3_10() { return static_cast<int32_t>(offsetof(Teleport_t282063519, ___target3_10)); }
	inline Transform_t3275118058 * get_target3_10() const { return ___target3_10; }
	inline Transform_t3275118058 ** get_address_of_target3_10() { return &___target3_10; }
	inline void set_target3_10(Transform_t3275118058 * value)
	{
		___target3_10 = value;
		Il2CppCodeGenWriteBarrier(&___target3_10, value);
	}

	inline static int32_t get_offset_of_Teleported_11() { return static_cast<int32_t>(offsetof(Teleport_t282063519, ___Teleported_11)); }
	inline bool get_Teleported_11() const { return ___Teleported_11; }
	inline bool* get_address_of_Teleported_11() { return &___Teleported_11; }
	inline void set_Teleported_11(bool value)
	{
		___Teleported_11 = value;
	}

	inline static int32_t get_offset_of_sf_12() { return static_cast<int32_t>(offsetof(Teleport_t282063519, ___sf_12)); }
	inline ScreenFader_t2638366376 * get_sf_12() const { return ___sf_12; }
	inline ScreenFader_t2638366376 ** get_address_of_sf_12() { return &___sf_12; }
	inline void set_sf_12(ScreenFader_t2638366376 * value)
	{
		___sf_12 = value;
		Il2CppCodeGenWriteBarrier(&___sf_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

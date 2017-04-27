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
// System.String
struct String_t;
// ScreenFader
struct ScreenFader_t2638366376;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TeleportScene
struct  TeleportScene_t2903816149  : public MonoBehaviour_t1158329972
{
public:
	// Portal TeleportScene::portal1
	Portal_t2071763530 * ___portal1_2;
	// Portal TeleportScene::portal2
	Portal_t2071763530 * ___portal2_3;
	// Portal TeleportScene::portal3
	Portal_t2071763530 * ___portal3_4;
	// System.String TeleportScene::stage
	String_t* ___stage_5;
	// System.Boolean TeleportScene::Teleported
	bool ___Teleported_6;
	// ScreenFader TeleportScene::sf
	ScreenFader_t2638366376 * ___sf_7;

public:
	inline static int32_t get_offset_of_portal1_2() { return static_cast<int32_t>(offsetof(TeleportScene_t2903816149, ___portal1_2)); }
	inline Portal_t2071763530 * get_portal1_2() const { return ___portal1_2; }
	inline Portal_t2071763530 ** get_address_of_portal1_2() { return &___portal1_2; }
	inline void set_portal1_2(Portal_t2071763530 * value)
	{
		___portal1_2 = value;
		Il2CppCodeGenWriteBarrier(&___portal1_2, value);
	}

	inline static int32_t get_offset_of_portal2_3() { return static_cast<int32_t>(offsetof(TeleportScene_t2903816149, ___portal2_3)); }
	inline Portal_t2071763530 * get_portal2_3() const { return ___portal2_3; }
	inline Portal_t2071763530 ** get_address_of_portal2_3() { return &___portal2_3; }
	inline void set_portal2_3(Portal_t2071763530 * value)
	{
		___portal2_3 = value;
		Il2CppCodeGenWriteBarrier(&___portal2_3, value);
	}

	inline static int32_t get_offset_of_portal3_4() { return static_cast<int32_t>(offsetof(TeleportScene_t2903816149, ___portal3_4)); }
	inline Portal_t2071763530 * get_portal3_4() const { return ___portal3_4; }
	inline Portal_t2071763530 ** get_address_of_portal3_4() { return &___portal3_4; }
	inline void set_portal3_4(Portal_t2071763530 * value)
	{
		___portal3_4 = value;
		Il2CppCodeGenWriteBarrier(&___portal3_4, value);
	}

	inline static int32_t get_offset_of_stage_5() { return static_cast<int32_t>(offsetof(TeleportScene_t2903816149, ___stage_5)); }
	inline String_t* get_stage_5() const { return ___stage_5; }
	inline String_t** get_address_of_stage_5() { return &___stage_5; }
	inline void set_stage_5(String_t* value)
	{
		___stage_5 = value;
		Il2CppCodeGenWriteBarrier(&___stage_5, value);
	}

	inline static int32_t get_offset_of_Teleported_6() { return static_cast<int32_t>(offsetof(TeleportScene_t2903816149, ___Teleported_6)); }
	inline bool get_Teleported_6() const { return ___Teleported_6; }
	inline bool* get_address_of_Teleported_6() { return &___Teleported_6; }
	inline void set_Teleported_6(bool value)
	{
		___Teleported_6 = value;
	}

	inline static int32_t get_offset_of_sf_7() { return static_cast<int32_t>(offsetof(TeleportScene_t2903816149, ___sf_7)); }
	inline ScreenFader_t2638366376 * get_sf_7() const { return ___sf_7; }
	inline ScreenFader_t2638366376 ** get_address_of_sf_7() { return &___sf_7; }
	inline void set_sf_7(ScreenFader_t2638366376 * value)
	{
		___sf_7 = value;
		Il2CppCodeGenWriteBarrier(&___sf_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

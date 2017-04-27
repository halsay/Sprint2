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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// DialogueManager
struct DialogueManager_t3878200441;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LureTroll
struct  LureTroll_t3671414253  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform LureTroll::target
	Transform_t3275118058 * ___target_2;
	// UnityEngine.GameObject LureTroll::troll
	GameObject_t1756533147 * ___troll_3;
	// System.Boolean LureTroll::trigger
	bool ___trigger_4;
	// DialogueManager LureTroll::dMan
	DialogueManager_t3878200441 * ___dMan_5;
	// System.Boolean LureTroll::activated
	bool ___activated_6;
	// UnityEngine.GameObject LureTroll::warp
	GameObject_t1756533147 * ___warp_7;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(LureTroll_t3671414253, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_troll_3() { return static_cast<int32_t>(offsetof(LureTroll_t3671414253, ___troll_3)); }
	inline GameObject_t1756533147 * get_troll_3() const { return ___troll_3; }
	inline GameObject_t1756533147 ** get_address_of_troll_3() { return &___troll_3; }
	inline void set_troll_3(GameObject_t1756533147 * value)
	{
		___troll_3 = value;
		Il2CppCodeGenWriteBarrier(&___troll_3, value);
	}

	inline static int32_t get_offset_of_trigger_4() { return static_cast<int32_t>(offsetof(LureTroll_t3671414253, ___trigger_4)); }
	inline bool get_trigger_4() const { return ___trigger_4; }
	inline bool* get_address_of_trigger_4() { return &___trigger_4; }
	inline void set_trigger_4(bool value)
	{
		___trigger_4 = value;
	}

	inline static int32_t get_offset_of_dMan_5() { return static_cast<int32_t>(offsetof(LureTroll_t3671414253, ___dMan_5)); }
	inline DialogueManager_t3878200441 * get_dMan_5() const { return ___dMan_5; }
	inline DialogueManager_t3878200441 ** get_address_of_dMan_5() { return &___dMan_5; }
	inline void set_dMan_5(DialogueManager_t3878200441 * value)
	{
		___dMan_5 = value;
		Il2CppCodeGenWriteBarrier(&___dMan_5, value);
	}

	inline static int32_t get_offset_of_activated_6() { return static_cast<int32_t>(offsetof(LureTroll_t3671414253, ___activated_6)); }
	inline bool get_activated_6() const { return ___activated_6; }
	inline bool* get_address_of_activated_6() { return &___activated_6; }
	inline void set_activated_6(bool value)
	{
		___activated_6 = value;
	}

	inline static int32_t get_offset_of_warp_7() { return static_cast<int32_t>(offsetof(LureTroll_t3671414253, ___warp_7)); }
	inline GameObject_t1756533147 * get_warp_7() const { return ___warp_7; }
	inline GameObject_t1756533147 ** get_address_of_warp_7() { return &___warp_7; }
	inline void set_warp_7(GameObject_t1756533147 * value)
	{
		___warp_7 = value;
		Il2CppCodeGenWriteBarrier(&___warp_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

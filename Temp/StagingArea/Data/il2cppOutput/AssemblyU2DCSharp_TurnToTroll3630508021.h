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

// TurnToTroll
struct  TurnToTroll_t3630508021  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform TurnToTroll::target
	Transform_t3275118058 * ___target_2;
	// UnityEngine.GameObject TurnToTroll::Goat1
	GameObject_t1756533147 * ___Goat1_3;
	// UnityEngine.GameObject TurnToTroll::Goat2
	GameObject_t1756533147 * ___Goat2_4;
	// UnityEngine.GameObject TurnToTroll::troll1
	GameObject_t1756533147 * ___troll1_5;
	// UnityEngine.GameObject TurnToTroll::troll2
	GameObject_t1756533147 * ___troll2_6;
	// System.Boolean TurnToTroll::trigger
	bool ___trigger_7;
	// DialogueManager TurnToTroll::dMan
	DialogueManager_t3878200441 * ___dMan_8;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(TurnToTroll_t3630508021, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_Goat1_3() { return static_cast<int32_t>(offsetof(TurnToTroll_t3630508021, ___Goat1_3)); }
	inline GameObject_t1756533147 * get_Goat1_3() const { return ___Goat1_3; }
	inline GameObject_t1756533147 ** get_address_of_Goat1_3() { return &___Goat1_3; }
	inline void set_Goat1_3(GameObject_t1756533147 * value)
	{
		___Goat1_3 = value;
		Il2CppCodeGenWriteBarrier(&___Goat1_3, value);
	}

	inline static int32_t get_offset_of_Goat2_4() { return static_cast<int32_t>(offsetof(TurnToTroll_t3630508021, ___Goat2_4)); }
	inline GameObject_t1756533147 * get_Goat2_4() const { return ___Goat2_4; }
	inline GameObject_t1756533147 ** get_address_of_Goat2_4() { return &___Goat2_4; }
	inline void set_Goat2_4(GameObject_t1756533147 * value)
	{
		___Goat2_4 = value;
		Il2CppCodeGenWriteBarrier(&___Goat2_4, value);
	}

	inline static int32_t get_offset_of_troll1_5() { return static_cast<int32_t>(offsetof(TurnToTroll_t3630508021, ___troll1_5)); }
	inline GameObject_t1756533147 * get_troll1_5() const { return ___troll1_5; }
	inline GameObject_t1756533147 ** get_address_of_troll1_5() { return &___troll1_5; }
	inline void set_troll1_5(GameObject_t1756533147 * value)
	{
		___troll1_5 = value;
		Il2CppCodeGenWriteBarrier(&___troll1_5, value);
	}

	inline static int32_t get_offset_of_troll2_6() { return static_cast<int32_t>(offsetof(TurnToTroll_t3630508021, ___troll2_6)); }
	inline GameObject_t1756533147 * get_troll2_6() const { return ___troll2_6; }
	inline GameObject_t1756533147 ** get_address_of_troll2_6() { return &___troll2_6; }
	inline void set_troll2_6(GameObject_t1756533147 * value)
	{
		___troll2_6 = value;
		Il2CppCodeGenWriteBarrier(&___troll2_6, value);
	}

	inline static int32_t get_offset_of_trigger_7() { return static_cast<int32_t>(offsetof(TurnToTroll_t3630508021, ___trigger_7)); }
	inline bool get_trigger_7() const { return ___trigger_7; }
	inline bool* get_address_of_trigger_7() { return &___trigger_7; }
	inline void set_trigger_7(bool value)
	{
		___trigger_7 = value;
	}

	inline static int32_t get_offset_of_dMan_8() { return static_cast<int32_t>(offsetof(TurnToTroll_t3630508021, ___dMan_8)); }
	inline DialogueManager_t3878200441 * get_dMan_8() const { return ___dMan_8; }
	inline DialogueManager_t3878200441 ** get_address_of_dMan_8() { return &___dMan_8; }
	inline void set_dMan_8(DialogueManager_t3878200441 * value)
	{
		___dMan_8 = value;
		Il2CppCodeGenWriteBarrier(&___dMan_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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
// Follower
struct Follower_t4116286334;
// DialogueManager
struct DialogueManager_t3878200441;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// eatGrass
struct  eatGrass_t992782612  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform eatGrass::target1
	Transform_t3275118058 * ___target1_2;
	// UnityEngine.Transform eatGrass::target2
	Transform_t3275118058 * ___target2_3;
	// Follower eatGrass::Goat1
	Follower_t4116286334 * ___Goat1_4;
	// Follower eatGrass::Goat2
	Follower_t4116286334 * ___Goat2_5;
	// System.Boolean eatGrass::move
	bool ___move_6;
	// DialogueManager eatGrass::dMan
	DialogueManager_t3878200441 * ___dMan_7;

public:
	inline static int32_t get_offset_of_target1_2() { return static_cast<int32_t>(offsetof(eatGrass_t992782612, ___target1_2)); }
	inline Transform_t3275118058 * get_target1_2() const { return ___target1_2; }
	inline Transform_t3275118058 ** get_address_of_target1_2() { return &___target1_2; }
	inline void set_target1_2(Transform_t3275118058 * value)
	{
		___target1_2 = value;
		Il2CppCodeGenWriteBarrier(&___target1_2, value);
	}

	inline static int32_t get_offset_of_target2_3() { return static_cast<int32_t>(offsetof(eatGrass_t992782612, ___target2_3)); }
	inline Transform_t3275118058 * get_target2_3() const { return ___target2_3; }
	inline Transform_t3275118058 ** get_address_of_target2_3() { return &___target2_3; }
	inline void set_target2_3(Transform_t3275118058 * value)
	{
		___target2_3 = value;
		Il2CppCodeGenWriteBarrier(&___target2_3, value);
	}

	inline static int32_t get_offset_of_Goat1_4() { return static_cast<int32_t>(offsetof(eatGrass_t992782612, ___Goat1_4)); }
	inline Follower_t4116286334 * get_Goat1_4() const { return ___Goat1_4; }
	inline Follower_t4116286334 ** get_address_of_Goat1_4() { return &___Goat1_4; }
	inline void set_Goat1_4(Follower_t4116286334 * value)
	{
		___Goat1_4 = value;
		Il2CppCodeGenWriteBarrier(&___Goat1_4, value);
	}

	inline static int32_t get_offset_of_Goat2_5() { return static_cast<int32_t>(offsetof(eatGrass_t992782612, ___Goat2_5)); }
	inline Follower_t4116286334 * get_Goat2_5() const { return ___Goat2_5; }
	inline Follower_t4116286334 ** get_address_of_Goat2_5() { return &___Goat2_5; }
	inline void set_Goat2_5(Follower_t4116286334 * value)
	{
		___Goat2_5 = value;
		Il2CppCodeGenWriteBarrier(&___Goat2_5, value);
	}

	inline static int32_t get_offset_of_move_6() { return static_cast<int32_t>(offsetof(eatGrass_t992782612, ___move_6)); }
	inline bool get_move_6() const { return ___move_6; }
	inline bool* get_address_of_move_6() { return &___move_6; }
	inline void set_move_6(bool value)
	{
		___move_6 = value;
	}

	inline static int32_t get_offset_of_dMan_7() { return static_cast<int32_t>(offsetof(eatGrass_t992782612, ___dMan_7)); }
	inline DialogueManager_t3878200441 * get_dMan_7() const { return ___dMan_7; }
	inline DialogueManager_t3878200441 ** get_address_of_dMan_7() { return &___dMan_7; }
	inline void set_dMan_7(DialogueManager_t3878200441 * value)
	{
		___dMan_7 = value;
		Il2CppCodeGenWriteBarrier(&___dMan_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

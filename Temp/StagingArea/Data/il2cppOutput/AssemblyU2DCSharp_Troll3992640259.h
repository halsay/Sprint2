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
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.Animator
struct Animator_t69676727;
// itemList
struct itemList_t3696289637;
// ScreenFader
struct ScreenFader_t2638366376;
// DialogueManager
struct DialogueManager_t3878200441;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Troll
struct  Troll_t3992640259  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Troll::target
	Transform_t3275118058 * ___target_2;
	// System.Int32 Troll::movSpeed
	int32_t ___movSpeed_3;
	// System.Single Troll::dist
	float ___dist_4;
	// System.Boolean Troll::canMove
	bool ___canMove_5;
	// System.Boolean Troll::dialogueDone
	bool ___dialogueDone_6;
	// System.Boolean Troll::faded
	bool ___faded_7;
	// UnityEngine.Transform Troll::troll
	Transform_t3275118058 * ___troll_8;
	// UnityEngine.Vector2 Troll::movement
	Vector2_t2243707579  ___movement_9;
	// UnityEngine.Vector2 Troll::delta
	Vector2_t2243707579  ___delta_10;
	// System.String[] Troll::dialogLines
	StringU5BU5D_t1642385972* ___dialogLines_11;
	// System.String[] Troll::speakers
	StringU5BU5D_t1642385972* ___speakers_12;
	// UnityEngine.Animator Troll::anim
	Animator_t69676727 * ___anim_13;
	// System.Boolean Troll::animComp
	bool ___animComp_14;
	// itemList Troll::ilist
	itemList_t3696289637 * ___ilist_15;
	// ScreenFader Troll::sf
	ScreenFader_t2638366376 * ___sf_16;
	// DialogueManager Troll::dMan
	DialogueManager_t3878200441 * ___dMan_17;
	// UnityEngine.GameObject Troll::little
	GameObject_t1756533147 * ___little_18;
	// UnityEngine.GameObject Troll::middle
	GameObject_t1756533147 * ___middle_19;
	// UnityEngine.GameObject Troll::big
	GameObject_t1756533147 * ___big_20;
	// System.String Troll::stage
	String_t* ___stage_21;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_movSpeed_3() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___movSpeed_3)); }
	inline int32_t get_movSpeed_3() const { return ___movSpeed_3; }
	inline int32_t* get_address_of_movSpeed_3() { return &___movSpeed_3; }
	inline void set_movSpeed_3(int32_t value)
	{
		___movSpeed_3 = value;
	}

	inline static int32_t get_offset_of_dist_4() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___dist_4)); }
	inline float get_dist_4() const { return ___dist_4; }
	inline float* get_address_of_dist_4() { return &___dist_4; }
	inline void set_dist_4(float value)
	{
		___dist_4 = value;
	}

	inline static int32_t get_offset_of_canMove_5() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___canMove_5)); }
	inline bool get_canMove_5() const { return ___canMove_5; }
	inline bool* get_address_of_canMove_5() { return &___canMove_5; }
	inline void set_canMove_5(bool value)
	{
		___canMove_5 = value;
	}

	inline static int32_t get_offset_of_dialogueDone_6() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___dialogueDone_6)); }
	inline bool get_dialogueDone_6() const { return ___dialogueDone_6; }
	inline bool* get_address_of_dialogueDone_6() { return &___dialogueDone_6; }
	inline void set_dialogueDone_6(bool value)
	{
		___dialogueDone_6 = value;
	}

	inline static int32_t get_offset_of_faded_7() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___faded_7)); }
	inline bool get_faded_7() const { return ___faded_7; }
	inline bool* get_address_of_faded_7() { return &___faded_7; }
	inline void set_faded_7(bool value)
	{
		___faded_7 = value;
	}

	inline static int32_t get_offset_of_troll_8() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___troll_8)); }
	inline Transform_t3275118058 * get_troll_8() const { return ___troll_8; }
	inline Transform_t3275118058 ** get_address_of_troll_8() { return &___troll_8; }
	inline void set_troll_8(Transform_t3275118058 * value)
	{
		___troll_8 = value;
		Il2CppCodeGenWriteBarrier(&___troll_8, value);
	}

	inline static int32_t get_offset_of_movement_9() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___movement_9)); }
	inline Vector2_t2243707579  get_movement_9() const { return ___movement_9; }
	inline Vector2_t2243707579 * get_address_of_movement_9() { return &___movement_9; }
	inline void set_movement_9(Vector2_t2243707579  value)
	{
		___movement_9 = value;
	}

	inline static int32_t get_offset_of_delta_10() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___delta_10)); }
	inline Vector2_t2243707579  get_delta_10() const { return ___delta_10; }
	inline Vector2_t2243707579 * get_address_of_delta_10() { return &___delta_10; }
	inline void set_delta_10(Vector2_t2243707579  value)
	{
		___delta_10 = value;
	}

	inline static int32_t get_offset_of_dialogLines_11() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___dialogLines_11)); }
	inline StringU5BU5D_t1642385972* get_dialogLines_11() const { return ___dialogLines_11; }
	inline StringU5BU5D_t1642385972** get_address_of_dialogLines_11() { return &___dialogLines_11; }
	inline void set_dialogLines_11(StringU5BU5D_t1642385972* value)
	{
		___dialogLines_11 = value;
		Il2CppCodeGenWriteBarrier(&___dialogLines_11, value);
	}

	inline static int32_t get_offset_of_speakers_12() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___speakers_12)); }
	inline StringU5BU5D_t1642385972* get_speakers_12() const { return ___speakers_12; }
	inline StringU5BU5D_t1642385972** get_address_of_speakers_12() { return &___speakers_12; }
	inline void set_speakers_12(StringU5BU5D_t1642385972* value)
	{
		___speakers_12 = value;
		Il2CppCodeGenWriteBarrier(&___speakers_12, value);
	}

	inline static int32_t get_offset_of_anim_13() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___anim_13)); }
	inline Animator_t69676727 * get_anim_13() const { return ___anim_13; }
	inline Animator_t69676727 ** get_address_of_anim_13() { return &___anim_13; }
	inline void set_anim_13(Animator_t69676727 * value)
	{
		___anim_13 = value;
		Il2CppCodeGenWriteBarrier(&___anim_13, value);
	}

	inline static int32_t get_offset_of_animComp_14() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___animComp_14)); }
	inline bool get_animComp_14() const { return ___animComp_14; }
	inline bool* get_address_of_animComp_14() { return &___animComp_14; }
	inline void set_animComp_14(bool value)
	{
		___animComp_14 = value;
	}

	inline static int32_t get_offset_of_ilist_15() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___ilist_15)); }
	inline itemList_t3696289637 * get_ilist_15() const { return ___ilist_15; }
	inline itemList_t3696289637 ** get_address_of_ilist_15() { return &___ilist_15; }
	inline void set_ilist_15(itemList_t3696289637 * value)
	{
		___ilist_15 = value;
		Il2CppCodeGenWriteBarrier(&___ilist_15, value);
	}

	inline static int32_t get_offset_of_sf_16() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___sf_16)); }
	inline ScreenFader_t2638366376 * get_sf_16() const { return ___sf_16; }
	inline ScreenFader_t2638366376 ** get_address_of_sf_16() { return &___sf_16; }
	inline void set_sf_16(ScreenFader_t2638366376 * value)
	{
		___sf_16 = value;
		Il2CppCodeGenWriteBarrier(&___sf_16, value);
	}

	inline static int32_t get_offset_of_dMan_17() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___dMan_17)); }
	inline DialogueManager_t3878200441 * get_dMan_17() const { return ___dMan_17; }
	inline DialogueManager_t3878200441 ** get_address_of_dMan_17() { return &___dMan_17; }
	inline void set_dMan_17(DialogueManager_t3878200441 * value)
	{
		___dMan_17 = value;
		Il2CppCodeGenWriteBarrier(&___dMan_17, value);
	}

	inline static int32_t get_offset_of_little_18() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___little_18)); }
	inline GameObject_t1756533147 * get_little_18() const { return ___little_18; }
	inline GameObject_t1756533147 ** get_address_of_little_18() { return &___little_18; }
	inline void set_little_18(GameObject_t1756533147 * value)
	{
		___little_18 = value;
		Il2CppCodeGenWriteBarrier(&___little_18, value);
	}

	inline static int32_t get_offset_of_middle_19() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___middle_19)); }
	inline GameObject_t1756533147 * get_middle_19() const { return ___middle_19; }
	inline GameObject_t1756533147 ** get_address_of_middle_19() { return &___middle_19; }
	inline void set_middle_19(GameObject_t1756533147 * value)
	{
		___middle_19 = value;
		Il2CppCodeGenWriteBarrier(&___middle_19, value);
	}

	inline static int32_t get_offset_of_big_20() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___big_20)); }
	inline GameObject_t1756533147 * get_big_20() const { return ___big_20; }
	inline GameObject_t1756533147 ** get_address_of_big_20() { return &___big_20; }
	inline void set_big_20(GameObject_t1756533147 * value)
	{
		___big_20 = value;
		Il2CppCodeGenWriteBarrier(&___big_20, value);
	}

	inline static int32_t get_offset_of_stage_21() { return static_cast<int32_t>(offsetof(Troll_t3992640259, ___stage_21)); }
	inline String_t* get_stage_21() const { return ___stage_21; }
	inline String_t** get_address_of_stage_21() { return &___stage_21; }
	inline void set_stage_21(String_t* value)
	{
		___stage_21 = value;
		Il2CppCodeGenWriteBarrier(&___stage_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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
// UnityEngine.Animator
struct Animator_t69676727;
// DialogueManager
struct DialogueManager_t3878200441;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoBack
struct  GoBack_t3805581421  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform GoBack::target
	Transform_t3275118058 * ___target_2;
	// System.Int32 GoBack::movSpeed
	int32_t ___movSpeed_3;
	// System.Single GoBack::dist
	float ___dist_4;
	// UnityEngine.Transform GoBack::thisGoat
	Transform_t3275118058 * ___thisGoat_5;
	// System.Boolean GoBack::done
	bool ___done_6;
	// UnityEngine.Vector2 GoBack::movement
	Vector2_t2243707579  ___movement_7;
	// UnityEngine.Vector2 GoBack::delta
	Vector2_t2243707579  ___delta_8;
	// UnityEngine.Animator GoBack::anim
	Animator_t69676727 * ___anim_9;
	// System.Boolean GoBack::move
	bool ___move_10;
	// DialogueManager GoBack::dMan
	DialogueManager_t3878200441 * ___dMan_11;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(GoBack_t3805581421, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_movSpeed_3() { return static_cast<int32_t>(offsetof(GoBack_t3805581421, ___movSpeed_3)); }
	inline int32_t get_movSpeed_3() const { return ___movSpeed_3; }
	inline int32_t* get_address_of_movSpeed_3() { return &___movSpeed_3; }
	inline void set_movSpeed_3(int32_t value)
	{
		___movSpeed_3 = value;
	}

	inline static int32_t get_offset_of_dist_4() { return static_cast<int32_t>(offsetof(GoBack_t3805581421, ___dist_4)); }
	inline float get_dist_4() const { return ___dist_4; }
	inline float* get_address_of_dist_4() { return &___dist_4; }
	inline void set_dist_4(float value)
	{
		___dist_4 = value;
	}

	inline static int32_t get_offset_of_thisGoat_5() { return static_cast<int32_t>(offsetof(GoBack_t3805581421, ___thisGoat_5)); }
	inline Transform_t3275118058 * get_thisGoat_5() const { return ___thisGoat_5; }
	inline Transform_t3275118058 ** get_address_of_thisGoat_5() { return &___thisGoat_5; }
	inline void set_thisGoat_5(Transform_t3275118058 * value)
	{
		___thisGoat_5 = value;
		Il2CppCodeGenWriteBarrier(&___thisGoat_5, value);
	}

	inline static int32_t get_offset_of_done_6() { return static_cast<int32_t>(offsetof(GoBack_t3805581421, ___done_6)); }
	inline bool get_done_6() const { return ___done_6; }
	inline bool* get_address_of_done_6() { return &___done_6; }
	inline void set_done_6(bool value)
	{
		___done_6 = value;
	}

	inline static int32_t get_offset_of_movement_7() { return static_cast<int32_t>(offsetof(GoBack_t3805581421, ___movement_7)); }
	inline Vector2_t2243707579  get_movement_7() const { return ___movement_7; }
	inline Vector2_t2243707579 * get_address_of_movement_7() { return &___movement_7; }
	inline void set_movement_7(Vector2_t2243707579  value)
	{
		___movement_7 = value;
	}

	inline static int32_t get_offset_of_delta_8() { return static_cast<int32_t>(offsetof(GoBack_t3805581421, ___delta_8)); }
	inline Vector2_t2243707579  get_delta_8() const { return ___delta_8; }
	inline Vector2_t2243707579 * get_address_of_delta_8() { return &___delta_8; }
	inline void set_delta_8(Vector2_t2243707579  value)
	{
		___delta_8 = value;
	}

	inline static int32_t get_offset_of_anim_9() { return static_cast<int32_t>(offsetof(GoBack_t3805581421, ___anim_9)); }
	inline Animator_t69676727 * get_anim_9() const { return ___anim_9; }
	inline Animator_t69676727 ** get_address_of_anim_9() { return &___anim_9; }
	inline void set_anim_9(Animator_t69676727 * value)
	{
		___anim_9 = value;
		Il2CppCodeGenWriteBarrier(&___anim_9, value);
	}

	inline static int32_t get_offset_of_move_10() { return static_cast<int32_t>(offsetof(GoBack_t3805581421, ___move_10)); }
	inline bool get_move_10() const { return ___move_10; }
	inline bool* get_address_of_move_10() { return &___move_10; }
	inline void set_move_10(bool value)
	{
		___move_10 = value;
	}

	inline static int32_t get_offset_of_dMan_11() { return static_cast<int32_t>(offsetof(GoBack_t3805581421, ___dMan_11)); }
	inline DialogueManager_t3878200441 * get_dMan_11() const { return ___dMan_11; }
	inline DialogueManager_t3878200441 ** get_address_of_dMan_11() { return &___dMan_11; }
	inline void set_dMan_11(DialogueManager_t3878200441 * value)
	{
		___dMan_11 = value;
		Il2CppCodeGenWriteBarrier(&___dMan_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

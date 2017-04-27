#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DialogueManager
struct DialogueManager_t3878200441;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrollTrigger
struct  TrollTrigger_t1364274315  : public MonoBehaviour_t1158329972
{
public:
	// DialogueManager TrollTrigger::dMan
	DialogueManager_t3878200441 * ___dMan_2;
	// System.String[] TrollTrigger::dialogLines
	StringU5BU5D_t1642385972* ___dialogLines_3;
	// System.String[] TrollTrigger::speakers
	StringU5BU5D_t1642385972* ___speakers_4;
	// UnityEngine.Animator TrollTrigger::troll
	Animator_t69676727 * ___troll_5;
	// System.Boolean TrollTrigger::dialogueFinished
	bool ___dialogueFinished_6;
	// UnityEngine.GameObject TrollTrigger::t
	GameObject_t1756533147 * ___t_7;
	// System.Boolean TrollTrigger::little
	bool ___little_8;
	// System.Boolean TrollTrigger::middle
	bool ___middle_9;
	// System.Boolean TrollTrigger::big
	bool ___big_10;

public:
	inline static int32_t get_offset_of_dMan_2() { return static_cast<int32_t>(offsetof(TrollTrigger_t1364274315, ___dMan_2)); }
	inline DialogueManager_t3878200441 * get_dMan_2() const { return ___dMan_2; }
	inline DialogueManager_t3878200441 ** get_address_of_dMan_2() { return &___dMan_2; }
	inline void set_dMan_2(DialogueManager_t3878200441 * value)
	{
		___dMan_2 = value;
		Il2CppCodeGenWriteBarrier(&___dMan_2, value);
	}

	inline static int32_t get_offset_of_dialogLines_3() { return static_cast<int32_t>(offsetof(TrollTrigger_t1364274315, ___dialogLines_3)); }
	inline StringU5BU5D_t1642385972* get_dialogLines_3() const { return ___dialogLines_3; }
	inline StringU5BU5D_t1642385972** get_address_of_dialogLines_3() { return &___dialogLines_3; }
	inline void set_dialogLines_3(StringU5BU5D_t1642385972* value)
	{
		___dialogLines_3 = value;
		Il2CppCodeGenWriteBarrier(&___dialogLines_3, value);
	}

	inline static int32_t get_offset_of_speakers_4() { return static_cast<int32_t>(offsetof(TrollTrigger_t1364274315, ___speakers_4)); }
	inline StringU5BU5D_t1642385972* get_speakers_4() const { return ___speakers_4; }
	inline StringU5BU5D_t1642385972** get_address_of_speakers_4() { return &___speakers_4; }
	inline void set_speakers_4(StringU5BU5D_t1642385972* value)
	{
		___speakers_4 = value;
		Il2CppCodeGenWriteBarrier(&___speakers_4, value);
	}

	inline static int32_t get_offset_of_troll_5() { return static_cast<int32_t>(offsetof(TrollTrigger_t1364274315, ___troll_5)); }
	inline Animator_t69676727 * get_troll_5() const { return ___troll_5; }
	inline Animator_t69676727 ** get_address_of_troll_5() { return &___troll_5; }
	inline void set_troll_5(Animator_t69676727 * value)
	{
		___troll_5 = value;
		Il2CppCodeGenWriteBarrier(&___troll_5, value);
	}

	inline static int32_t get_offset_of_dialogueFinished_6() { return static_cast<int32_t>(offsetof(TrollTrigger_t1364274315, ___dialogueFinished_6)); }
	inline bool get_dialogueFinished_6() const { return ___dialogueFinished_6; }
	inline bool* get_address_of_dialogueFinished_6() { return &___dialogueFinished_6; }
	inline void set_dialogueFinished_6(bool value)
	{
		___dialogueFinished_6 = value;
	}

	inline static int32_t get_offset_of_t_7() { return static_cast<int32_t>(offsetof(TrollTrigger_t1364274315, ___t_7)); }
	inline GameObject_t1756533147 * get_t_7() const { return ___t_7; }
	inline GameObject_t1756533147 ** get_address_of_t_7() { return &___t_7; }
	inline void set_t_7(GameObject_t1756533147 * value)
	{
		___t_7 = value;
		Il2CppCodeGenWriteBarrier(&___t_7, value);
	}

	inline static int32_t get_offset_of_little_8() { return static_cast<int32_t>(offsetof(TrollTrigger_t1364274315, ___little_8)); }
	inline bool get_little_8() const { return ___little_8; }
	inline bool* get_address_of_little_8() { return &___little_8; }
	inline void set_little_8(bool value)
	{
		___little_8 = value;
	}

	inline static int32_t get_offset_of_middle_9() { return static_cast<int32_t>(offsetof(TrollTrigger_t1364274315, ___middle_9)); }
	inline bool get_middle_9() const { return ___middle_9; }
	inline bool* get_address_of_middle_9() { return &___middle_9; }
	inline void set_middle_9(bool value)
	{
		___middle_9 = value;
	}

	inline static int32_t get_offset_of_big_10() { return static_cast<int32_t>(offsetof(TrollTrigger_t1364274315, ___big_10)); }
	inline bool get_big_10() const { return ___big_10; }
	inline bool* get_address_of_big_10() { return &___big_10; }
	inline void set_big_10(bool value)
	{
		___big_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

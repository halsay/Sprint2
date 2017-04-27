#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// DialogueManager
struct DialogueManager_t3878200441;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MeetTheGoats
struct  MeetTheGoats_t3701754622  : public MonoBehaviour_t1158329972
{
public:
	// System.String MeetTheGoats::dialogue
	String_t* ___dialogue_2;
	// UnityEngine.GameObject MeetTheGoats::Middle
	GameObject_t1756533147 * ___Middle_3;
	// UnityEngine.GameObject MeetTheGoats::Big
	GameObject_t1756533147 * ___Big_4;
	// DialogueManager MeetTheGoats::dMan
	DialogueManager_t3878200441 * ___dMan_5;
	// System.Boolean MeetTheGoats::met
	bool ___met_6;
	// UnityEngine.GameObject MeetTheGoats::npc
	GameObject_t1756533147 * ___npc_7;
	// System.String[] MeetTheGoats::dialogLines
	StringU5BU5D_t1642385972* ___dialogLines_8;
	// System.String[] MeetTheGoats::speakers
	StringU5BU5D_t1642385972* ___speakers_9;

public:
	inline static int32_t get_offset_of_dialogue_2() { return static_cast<int32_t>(offsetof(MeetTheGoats_t3701754622, ___dialogue_2)); }
	inline String_t* get_dialogue_2() const { return ___dialogue_2; }
	inline String_t** get_address_of_dialogue_2() { return &___dialogue_2; }
	inline void set_dialogue_2(String_t* value)
	{
		___dialogue_2 = value;
		Il2CppCodeGenWriteBarrier(&___dialogue_2, value);
	}

	inline static int32_t get_offset_of_Middle_3() { return static_cast<int32_t>(offsetof(MeetTheGoats_t3701754622, ___Middle_3)); }
	inline GameObject_t1756533147 * get_Middle_3() const { return ___Middle_3; }
	inline GameObject_t1756533147 ** get_address_of_Middle_3() { return &___Middle_3; }
	inline void set_Middle_3(GameObject_t1756533147 * value)
	{
		___Middle_3 = value;
		Il2CppCodeGenWriteBarrier(&___Middle_3, value);
	}

	inline static int32_t get_offset_of_Big_4() { return static_cast<int32_t>(offsetof(MeetTheGoats_t3701754622, ___Big_4)); }
	inline GameObject_t1756533147 * get_Big_4() const { return ___Big_4; }
	inline GameObject_t1756533147 ** get_address_of_Big_4() { return &___Big_4; }
	inline void set_Big_4(GameObject_t1756533147 * value)
	{
		___Big_4 = value;
		Il2CppCodeGenWriteBarrier(&___Big_4, value);
	}

	inline static int32_t get_offset_of_dMan_5() { return static_cast<int32_t>(offsetof(MeetTheGoats_t3701754622, ___dMan_5)); }
	inline DialogueManager_t3878200441 * get_dMan_5() const { return ___dMan_5; }
	inline DialogueManager_t3878200441 ** get_address_of_dMan_5() { return &___dMan_5; }
	inline void set_dMan_5(DialogueManager_t3878200441 * value)
	{
		___dMan_5 = value;
		Il2CppCodeGenWriteBarrier(&___dMan_5, value);
	}

	inline static int32_t get_offset_of_met_6() { return static_cast<int32_t>(offsetof(MeetTheGoats_t3701754622, ___met_6)); }
	inline bool get_met_6() const { return ___met_6; }
	inline bool* get_address_of_met_6() { return &___met_6; }
	inline void set_met_6(bool value)
	{
		___met_6 = value;
	}

	inline static int32_t get_offset_of_npc_7() { return static_cast<int32_t>(offsetof(MeetTheGoats_t3701754622, ___npc_7)); }
	inline GameObject_t1756533147 * get_npc_7() const { return ___npc_7; }
	inline GameObject_t1756533147 ** get_address_of_npc_7() { return &___npc_7; }
	inline void set_npc_7(GameObject_t1756533147 * value)
	{
		___npc_7 = value;
		Il2CppCodeGenWriteBarrier(&___npc_7, value);
	}

	inline static int32_t get_offset_of_dialogLines_8() { return static_cast<int32_t>(offsetof(MeetTheGoats_t3701754622, ___dialogLines_8)); }
	inline StringU5BU5D_t1642385972* get_dialogLines_8() const { return ___dialogLines_8; }
	inline StringU5BU5D_t1642385972** get_address_of_dialogLines_8() { return &___dialogLines_8; }
	inline void set_dialogLines_8(StringU5BU5D_t1642385972* value)
	{
		___dialogLines_8 = value;
		Il2CppCodeGenWriteBarrier(&___dialogLines_8, value);
	}

	inline static int32_t get_offset_of_speakers_9() { return static_cast<int32_t>(offsetof(MeetTheGoats_t3701754622, ___speakers_9)); }
	inline StringU5BU5D_t1642385972* get_speakers_9() const { return ___speakers_9; }
	inline StringU5BU5D_t1642385972** get_address_of_speakers_9() { return &___speakers_9; }
	inline void set_speakers_9(StringU5BU5D_t1642385972* value)
	{
		___speakers_9 = value;
		Il2CppCodeGenWriteBarrier(&___speakers_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

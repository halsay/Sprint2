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

// Monologue
struct  Monologue_t3340364557  : public MonoBehaviour_t1158329972
{
public:
	// System.String Monologue::dialogue
	String_t* ___dialogue_2;
	// System.Boolean Monologue::repeat
	bool ___repeat_3;
	// DialogueManager Monologue::dMan
	DialogueManager_t3878200441 * ___dMan_4;
	// System.String[] Monologue::dialogLines
	StringU5BU5D_t1642385972* ___dialogLines_5;
	// System.String[] Monologue::speakers
	StringU5BU5D_t1642385972* ___speakers_6;
	// System.Boolean Monologue::triggered
	bool ___triggered_7;

public:
	inline static int32_t get_offset_of_dialogue_2() { return static_cast<int32_t>(offsetof(Monologue_t3340364557, ___dialogue_2)); }
	inline String_t* get_dialogue_2() const { return ___dialogue_2; }
	inline String_t** get_address_of_dialogue_2() { return &___dialogue_2; }
	inline void set_dialogue_2(String_t* value)
	{
		___dialogue_2 = value;
		Il2CppCodeGenWriteBarrier(&___dialogue_2, value);
	}

	inline static int32_t get_offset_of_repeat_3() { return static_cast<int32_t>(offsetof(Monologue_t3340364557, ___repeat_3)); }
	inline bool get_repeat_3() const { return ___repeat_3; }
	inline bool* get_address_of_repeat_3() { return &___repeat_3; }
	inline void set_repeat_3(bool value)
	{
		___repeat_3 = value;
	}

	inline static int32_t get_offset_of_dMan_4() { return static_cast<int32_t>(offsetof(Monologue_t3340364557, ___dMan_4)); }
	inline DialogueManager_t3878200441 * get_dMan_4() const { return ___dMan_4; }
	inline DialogueManager_t3878200441 ** get_address_of_dMan_4() { return &___dMan_4; }
	inline void set_dMan_4(DialogueManager_t3878200441 * value)
	{
		___dMan_4 = value;
		Il2CppCodeGenWriteBarrier(&___dMan_4, value);
	}

	inline static int32_t get_offset_of_dialogLines_5() { return static_cast<int32_t>(offsetof(Monologue_t3340364557, ___dialogLines_5)); }
	inline StringU5BU5D_t1642385972* get_dialogLines_5() const { return ___dialogLines_5; }
	inline StringU5BU5D_t1642385972** get_address_of_dialogLines_5() { return &___dialogLines_5; }
	inline void set_dialogLines_5(StringU5BU5D_t1642385972* value)
	{
		___dialogLines_5 = value;
		Il2CppCodeGenWriteBarrier(&___dialogLines_5, value);
	}

	inline static int32_t get_offset_of_speakers_6() { return static_cast<int32_t>(offsetof(Monologue_t3340364557, ___speakers_6)); }
	inline StringU5BU5D_t1642385972* get_speakers_6() const { return ___speakers_6; }
	inline StringU5BU5D_t1642385972** get_address_of_speakers_6() { return &___speakers_6; }
	inline void set_speakers_6(StringU5BU5D_t1642385972* value)
	{
		___speakers_6 = value;
		Il2CppCodeGenWriteBarrier(&___speakers_6, value);
	}

	inline static int32_t get_offset_of_triggered_7() { return static_cast<int32_t>(offsetof(Monologue_t3340364557, ___triggered_7)); }
	inline bool get_triggered_7() const { return ___triggered_7; }
	inline bool* get_address_of_triggered_7() { return &___triggered_7; }
	inline void set_triggered_7(bool value)
	{
		___triggered_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

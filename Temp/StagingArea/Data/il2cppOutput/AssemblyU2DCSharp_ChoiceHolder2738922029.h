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
// DialogueHolder
struct DialogueHolder_t3634035948;
// ChoiceManager
struct ChoiceManager_t1215684250;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChoiceHolder
struct  ChoiceHolder_t2738922029  : public MonoBehaviour_t1158329972
{
public:
	// System.String ChoiceHolder::choice1
	String_t* ___choice1_2;
	// System.String ChoiceHolder::choice2
	String_t* ___choice2_3;
	// System.String ChoiceHolder::choice3
	String_t* ___choice3_4;
	// DialogueHolder ChoiceHolder::dHod
	DialogueHolder_t3634035948 * ___dHod_5;
	// ChoiceManager ChoiceHolder::cMan
	ChoiceManager_t1215684250 * ___cMan_6;

public:
	inline static int32_t get_offset_of_choice1_2() { return static_cast<int32_t>(offsetof(ChoiceHolder_t2738922029, ___choice1_2)); }
	inline String_t* get_choice1_2() const { return ___choice1_2; }
	inline String_t** get_address_of_choice1_2() { return &___choice1_2; }
	inline void set_choice1_2(String_t* value)
	{
		___choice1_2 = value;
		Il2CppCodeGenWriteBarrier(&___choice1_2, value);
	}

	inline static int32_t get_offset_of_choice2_3() { return static_cast<int32_t>(offsetof(ChoiceHolder_t2738922029, ___choice2_3)); }
	inline String_t* get_choice2_3() const { return ___choice2_3; }
	inline String_t** get_address_of_choice2_3() { return &___choice2_3; }
	inline void set_choice2_3(String_t* value)
	{
		___choice2_3 = value;
		Il2CppCodeGenWriteBarrier(&___choice2_3, value);
	}

	inline static int32_t get_offset_of_choice3_4() { return static_cast<int32_t>(offsetof(ChoiceHolder_t2738922029, ___choice3_4)); }
	inline String_t* get_choice3_4() const { return ___choice3_4; }
	inline String_t** get_address_of_choice3_4() { return &___choice3_4; }
	inline void set_choice3_4(String_t* value)
	{
		___choice3_4 = value;
		Il2CppCodeGenWriteBarrier(&___choice3_4, value);
	}

	inline static int32_t get_offset_of_dHod_5() { return static_cast<int32_t>(offsetof(ChoiceHolder_t2738922029, ___dHod_5)); }
	inline DialogueHolder_t3634035948 * get_dHod_5() const { return ___dHod_5; }
	inline DialogueHolder_t3634035948 ** get_address_of_dHod_5() { return &___dHod_5; }
	inline void set_dHod_5(DialogueHolder_t3634035948 * value)
	{
		___dHod_5 = value;
		Il2CppCodeGenWriteBarrier(&___dHod_5, value);
	}

	inline static int32_t get_offset_of_cMan_6() { return static_cast<int32_t>(offsetof(ChoiceHolder_t2738922029, ___cMan_6)); }
	inline ChoiceManager_t1215684250 * get_cMan_6() const { return ___cMan_6; }
	inline ChoiceManager_t1215684250 ** get_address_of_cMan_6() { return &___cMan_6; }
	inline void set_cMan_6(ChoiceManager_t1215684250 * value)
	{
		___cMan_6 = value;
		Il2CppCodeGenWriteBarrier(&___cMan_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

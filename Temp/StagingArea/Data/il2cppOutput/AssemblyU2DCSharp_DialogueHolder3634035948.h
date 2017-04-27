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

// DialogueHolder
struct  DialogueHolder_t3634035948  : public MonoBehaviour_t1158329972
{
public:
	// System.String DialogueHolder::dialogue
	String_t* ___dialogue_2;
	// DialogueManager DialogueHolder::dMan
	DialogueManager_t3878200441 * ___dMan_3;
	// System.Boolean DialogueHolder::isTree
	bool ___isTree_4;
	// System.Boolean DialogueHolder::onlyOnce
	bool ___onlyOnce_5;
	// System.String[] DialogueHolder::dialogLines
	StringU5BU5D_t1642385972* ___dialogLines_6;
	// System.String[] DialogueHolder::dialogLinesA
	StringU5BU5D_t1642385972* ___dialogLinesA_7;
	// System.String[] DialogueHolder::dialogLinesB
	StringU5BU5D_t1642385972* ___dialogLinesB_8;
	// System.String[] DialogueHolder::dialogLinesC
	StringU5BU5D_t1642385972* ___dialogLinesC_9;
	// System.String[] DialogueHolder::speakers
	StringU5BU5D_t1642385972* ___speakers_10;
	// System.String[] DialogueHolder::speakersA
	StringU5BU5D_t1642385972* ___speakersA_11;
	// System.String[] DialogueHolder::speakersB
	StringU5BU5D_t1642385972* ___speakersB_12;
	// System.String[] DialogueHolder::speakersC
	StringU5BU5D_t1642385972* ___speakersC_13;
	// System.Boolean DialogueHolder::choiceAppear
	bool ___choiceAppear_14;

public:
	inline static int32_t get_offset_of_dialogue_2() { return static_cast<int32_t>(offsetof(DialogueHolder_t3634035948, ___dialogue_2)); }
	inline String_t* get_dialogue_2() const { return ___dialogue_2; }
	inline String_t** get_address_of_dialogue_2() { return &___dialogue_2; }
	inline void set_dialogue_2(String_t* value)
	{
		___dialogue_2 = value;
		Il2CppCodeGenWriteBarrier(&___dialogue_2, value);
	}

	inline static int32_t get_offset_of_dMan_3() { return static_cast<int32_t>(offsetof(DialogueHolder_t3634035948, ___dMan_3)); }
	inline DialogueManager_t3878200441 * get_dMan_3() const { return ___dMan_3; }
	inline DialogueManager_t3878200441 ** get_address_of_dMan_3() { return &___dMan_3; }
	inline void set_dMan_3(DialogueManager_t3878200441 * value)
	{
		___dMan_3 = value;
		Il2CppCodeGenWriteBarrier(&___dMan_3, value);
	}

	inline static int32_t get_offset_of_isTree_4() { return static_cast<int32_t>(offsetof(DialogueHolder_t3634035948, ___isTree_4)); }
	inline bool get_isTree_4() const { return ___isTree_4; }
	inline bool* get_address_of_isTree_4() { return &___isTree_4; }
	inline void set_isTree_4(bool value)
	{
		___isTree_4 = value;
	}

	inline static int32_t get_offset_of_onlyOnce_5() { return static_cast<int32_t>(offsetof(DialogueHolder_t3634035948, ___onlyOnce_5)); }
	inline bool get_onlyOnce_5() const { return ___onlyOnce_5; }
	inline bool* get_address_of_onlyOnce_5() { return &___onlyOnce_5; }
	inline void set_onlyOnce_5(bool value)
	{
		___onlyOnce_5 = value;
	}

	inline static int32_t get_offset_of_dialogLines_6() { return static_cast<int32_t>(offsetof(DialogueHolder_t3634035948, ___dialogLines_6)); }
	inline StringU5BU5D_t1642385972* get_dialogLines_6() const { return ___dialogLines_6; }
	inline StringU5BU5D_t1642385972** get_address_of_dialogLines_6() { return &___dialogLines_6; }
	inline void set_dialogLines_6(StringU5BU5D_t1642385972* value)
	{
		___dialogLines_6 = value;
		Il2CppCodeGenWriteBarrier(&___dialogLines_6, value);
	}

	inline static int32_t get_offset_of_dialogLinesA_7() { return static_cast<int32_t>(offsetof(DialogueHolder_t3634035948, ___dialogLinesA_7)); }
	inline StringU5BU5D_t1642385972* get_dialogLinesA_7() const { return ___dialogLinesA_7; }
	inline StringU5BU5D_t1642385972** get_address_of_dialogLinesA_7() { return &___dialogLinesA_7; }
	inline void set_dialogLinesA_7(StringU5BU5D_t1642385972* value)
	{
		___dialogLinesA_7 = value;
		Il2CppCodeGenWriteBarrier(&___dialogLinesA_7, value);
	}

	inline static int32_t get_offset_of_dialogLinesB_8() { return static_cast<int32_t>(offsetof(DialogueHolder_t3634035948, ___dialogLinesB_8)); }
	inline StringU5BU5D_t1642385972* get_dialogLinesB_8() const { return ___dialogLinesB_8; }
	inline StringU5BU5D_t1642385972** get_address_of_dialogLinesB_8() { return &___dialogLinesB_8; }
	inline void set_dialogLinesB_8(StringU5BU5D_t1642385972* value)
	{
		___dialogLinesB_8 = value;
		Il2CppCodeGenWriteBarrier(&___dialogLinesB_8, value);
	}

	inline static int32_t get_offset_of_dialogLinesC_9() { return static_cast<int32_t>(offsetof(DialogueHolder_t3634035948, ___dialogLinesC_9)); }
	inline StringU5BU5D_t1642385972* get_dialogLinesC_9() const { return ___dialogLinesC_9; }
	inline StringU5BU5D_t1642385972** get_address_of_dialogLinesC_9() { return &___dialogLinesC_9; }
	inline void set_dialogLinesC_9(StringU5BU5D_t1642385972* value)
	{
		___dialogLinesC_9 = value;
		Il2CppCodeGenWriteBarrier(&___dialogLinesC_9, value);
	}

	inline static int32_t get_offset_of_speakers_10() { return static_cast<int32_t>(offsetof(DialogueHolder_t3634035948, ___speakers_10)); }
	inline StringU5BU5D_t1642385972* get_speakers_10() const { return ___speakers_10; }
	inline StringU5BU5D_t1642385972** get_address_of_speakers_10() { return &___speakers_10; }
	inline void set_speakers_10(StringU5BU5D_t1642385972* value)
	{
		___speakers_10 = value;
		Il2CppCodeGenWriteBarrier(&___speakers_10, value);
	}

	inline static int32_t get_offset_of_speakersA_11() { return static_cast<int32_t>(offsetof(DialogueHolder_t3634035948, ___speakersA_11)); }
	inline StringU5BU5D_t1642385972* get_speakersA_11() const { return ___speakersA_11; }
	inline StringU5BU5D_t1642385972** get_address_of_speakersA_11() { return &___speakersA_11; }
	inline void set_speakersA_11(StringU5BU5D_t1642385972* value)
	{
		___speakersA_11 = value;
		Il2CppCodeGenWriteBarrier(&___speakersA_11, value);
	}

	inline static int32_t get_offset_of_speakersB_12() { return static_cast<int32_t>(offsetof(DialogueHolder_t3634035948, ___speakersB_12)); }
	inline StringU5BU5D_t1642385972* get_speakersB_12() const { return ___speakersB_12; }
	inline StringU5BU5D_t1642385972** get_address_of_speakersB_12() { return &___speakersB_12; }
	inline void set_speakersB_12(StringU5BU5D_t1642385972* value)
	{
		___speakersB_12 = value;
		Il2CppCodeGenWriteBarrier(&___speakersB_12, value);
	}

	inline static int32_t get_offset_of_speakersC_13() { return static_cast<int32_t>(offsetof(DialogueHolder_t3634035948, ___speakersC_13)); }
	inline StringU5BU5D_t1642385972* get_speakersC_13() const { return ___speakersC_13; }
	inline StringU5BU5D_t1642385972** get_address_of_speakersC_13() { return &___speakersC_13; }
	inline void set_speakersC_13(StringU5BU5D_t1642385972* value)
	{
		___speakersC_13 = value;
		Il2CppCodeGenWriteBarrier(&___speakersC_13, value);
	}

	inline static int32_t get_offset_of_choiceAppear_14() { return static_cast<int32_t>(offsetof(DialogueHolder_t3634035948, ___choiceAppear_14)); }
	inline bool get_choiceAppear_14() const { return ___choiceAppear_14; }
	inline bool* get_address_of_choiceAppear_14() { return &___choiceAppear_14; }
	inline void set_choiceAppear_14(bool value)
	{
		___choiceAppear_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

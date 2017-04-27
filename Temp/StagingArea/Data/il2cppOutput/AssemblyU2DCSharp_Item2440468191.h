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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Item
struct  Item_t2440468191  : public MonoBehaviour_t1158329972
{
public:
	// DialogueManager Item::dMan
	DialogueManager_t3878200441 * ___dMan_2;
	// System.String[] Item::dialogLines
	StringU5BU5D_t1642385972* ___dialogLines_3;
	// System.String[] Item::speakers
	StringU5BU5D_t1642385972* ___speakers_4;

public:
	inline static int32_t get_offset_of_dMan_2() { return static_cast<int32_t>(offsetof(Item_t2440468191, ___dMan_2)); }
	inline DialogueManager_t3878200441 * get_dMan_2() const { return ___dMan_2; }
	inline DialogueManager_t3878200441 ** get_address_of_dMan_2() { return &___dMan_2; }
	inline void set_dMan_2(DialogueManager_t3878200441 * value)
	{
		___dMan_2 = value;
		Il2CppCodeGenWriteBarrier(&___dMan_2, value);
	}

	inline static int32_t get_offset_of_dialogLines_3() { return static_cast<int32_t>(offsetof(Item_t2440468191, ___dialogLines_3)); }
	inline StringU5BU5D_t1642385972* get_dialogLines_3() const { return ___dialogLines_3; }
	inline StringU5BU5D_t1642385972** get_address_of_dialogLines_3() { return &___dialogLines_3; }
	inline void set_dialogLines_3(StringU5BU5D_t1642385972* value)
	{
		___dialogLines_3 = value;
		Il2CppCodeGenWriteBarrier(&___dialogLines_3, value);
	}

	inline static int32_t get_offset_of_speakers_4() { return static_cast<int32_t>(offsetof(Item_t2440468191, ___speakers_4)); }
	inline StringU5BU5D_t1642385972* get_speakers_4() const { return ___speakers_4; }
	inline StringU5BU5D_t1642385972** get_address_of_speakers_4() { return &___speakers_4; }
	inline void set_speakers_4(StringU5BU5D_t1642385972* value)
	{
		___speakers_4 = value;
		Il2CppCodeGenWriteBarrier(&___speakers_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

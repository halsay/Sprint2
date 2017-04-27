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
// IntroManager
struct IntroManager_t1450676775;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Intro
struct  Intro_t779648734  : public MonoBehaviour_t1158329972
{
public:
	// System.String Intro::dialogue
	String_t* ___dialogue_2;
	// IntroManager Intro::dMan
	IntroManager_t1450676775 * ___dMan_3;
	// System.String[] Intro::dialogLines
	StringU5BU5D_t1642385972* ___dialogLines_4;

public:
	inline static int32_t get_offset_of_dialogue_2() { return static_cast<int32_t>(offsetof(Intro_t779648734, ___dialogue_2)); }
	inline String_t* get_dialogue_2() const { return ___dialogue_2; }
	inline String_t** get_address_of_dialogue_2() { return &___dialogue_2; }
	inline void set_dialogue_2(String_t* value)
	{
		___dialogue_2 = value;
		Il2CppCodeGenWriteBarrier(&___dialogue_2, value);
	}

	inline static int32_t get_offset_of_dMan_3() { return static_cast<int32_t>(offsetof(Intro_t779648734, ___dMan_3)); }
	inline IntroManager_t1450676775 * get_dMan_3() const { return ___dMan_3; }
	inline IntroManager_t1450676775 ** get_address_of_dMan_3() { return &___dMan_3; }
	inline void set_dMan_3(IntroManager_t1450676775 * value)
	{
		___dMan_3 = value;
		Il2CppCodeGenWriteBarrier(&___dMan_3, value);
	}

	inline static int32_t get_offset_of_dialogLines_4() { return static_cast<int32_t>(offsetof(Intro_t779648734, ___dialogLines_4)); }
	inline StringU5BU5D_t1642385972* get_dialogLines_4() const { return ___dialogLines_4; }
	inline StringU5BU5D_t1642385972** get_address_of_dialogLines_4() { return &___dialogLines_4; }
	inline void set_dialogLines_4(StringU5BU5D_t1642385972* value)
	{
		___dialogLines_4 = value;
		Il2CppCodeGenWriteBarrier(&___dialogLines_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

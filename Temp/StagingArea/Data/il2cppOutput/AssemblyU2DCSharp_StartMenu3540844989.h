#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ScreenFader
struct ScreenFader_t2638366376;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartMenu
struct  StartMenu_t3540844989  : public MonoBehaviour_t1158329972
{
public:
	// ScreenFader StartMenu::sf
	ScreenFader_t2638366376 * ___sf_2;
	// UnityEngine.GameObject[] StartMenu::text
	GameObjectU5BU5D_t3057952154* ___text_3;

public:
	inline static int32_t get_offset_of_sf_2() { return static_cast<int32_t>(offsetof(StartMenu_t3540844989, ___sf_2)); }
	inline ScreenFader_t2638366376 * get_sf_2() const { return ___sf_2; }
	inline ScreenFader_t2638366376 ** get_address_of_sf_2() { return &___sf_2; }
	inline void set_sf_2(ScreenFader_t2638366376 * value)
	{
		___sf_2 = value;
		Il2CppCodeGenWriteBarrier(&___sf_2, value);
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(StartMenu_t3540844989, ___text_3)); }
	inline GameObjectU5BU5D_t3057952154* get_text_3() const { return ___text_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(GameObjectU5BU5D_t3057952154* value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier(&___text_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

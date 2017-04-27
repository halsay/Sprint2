#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String[]
struct StringU5BU5D_t1642385972;
// ScreenFader
struct ScreenFader_t2638366376;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IntroManager
struct  IntroManager_t1450676775  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject IntroManager::dBox
	GameObject_t1756533147 * ___dBox_2;
	// UnityEngine.UI.Text IntroManager::dText
	Text_t356221433 * ___dText_3;
	// System.Boolean IntroManager::dialogActive
	bool ___dialogActive_4;
	// System.String[] IntroManager::dialogLines
	StringU5BU5D_t1642385972* ___dialogLines_5;
	// System.Int32 IntroManager::currentLine
	int32_t ___currentLine_6;
	// System.Boolean IntroManager::finished
	bool ___finished_7;
	// ScreenFader IntroManager::sf
	ScreenFader_t2638366376 * ___sf_8;
	// System.String IntroManager::scene
	String_t* ___scene_9;

public:
	inline static int32_t get_offset_of_dBox_2() { return static_cast<int32_t>(offsetof(IntroManager_t1450676775, ___dBox_2)); }
	inline GameObject_t1756533147 * get_dBox_2() const { return ___dBox_2; }
	inline GameObject_t1756533147 ** get_address_of_dBox_2() { return &___dBox_2; }
	inline void set_dBox_2(GameObject_t1756533147 * value)
	{
		___dBox_2 = value;
		Il2CppCodeGenWriteBarrier(&___dBox_2, value);
	}

	inline static int32_t get_offset_of_dText_3() { return static_cast<int32_t>(offsetof(IntroManager_t1450676775, ___dText_3)); }
	inline Text_t356221433 * get_dText_3() const { return ___dText_3; }
	inline Text_t356221433 ** get_address_of_dText_3() { return &___dText_3; }
	inline void set_dText_3(Text_t356221433 * value)
	{
		___dText_3 = value;
		Il2CppCodeGenWriteBarrier(&___dText_3, value);
	}

	inline static int32_t get_offset_of_dialogActive_4() { return static_cast<int32_t>(offsetof(IntroManager_t1450676775, ___dialogActive_4)); }
	inline bool get_dialogActive_4() const { return ___dialogActive_4; }
	inline bool* get_address_of_dialogActive_4() { return &___dialogActive_4; }
	inline void set_dialogActive_4(bool value)
	{
		___dialogActive_4 = value;
	}

	inline static int32_t get_offset_of_dialogLines_5() { return static_cast<int32_t>(offsetof(IntroManager_t1450676775, ___dialogLines_5)); }
	inline StringU5BU5D_t1642385972* get_dialogLines_5() const { return ___dialogLines_5; }
	inline StringU5BU5D_t1642385972** get_address_of_dialogLines_5() { return &___dialogLines_5; }
	inline void set_dialogLines_5(StringU5BU5D_t1642385972* value)
	{
		___dialogLines_5 = value;
		Il2CppCodeGenWriteBarrier(&___dialogLines_5, value);
	}

	inline static int32_t get_offset_of_currentLine_6() { return static_cast<int32_t>(offsetof(IntroManager_t1450676775, ___currentLine_6)); }
	inline int32_t get_currentLine_6() const { return ___currentLine_6; }
	inline int32_t* get_address_of_currentLine_6() { return &___currentLine_6; }
	inline void set_currentLine_6(int32_t value)
	{
		___currentLine_6 = value;
	}

	inline static int32_t get_offset_of_finished_7() { return static_cast<int32_t>(offsetof(IntroManager_t1450676775, ___finished_7)); }
	inline bool get_finished_7() const { return ___finished_7; }
	inline bool* get_address_of_finished_7() { return &___finished_7; }
	inline void set_finished_7(bool value)
	{
		___finished_7 = value;
	}

	inline static int32_t get_offset_of_sf_8() { return static_cast<int32_t>(offsetof(IntroManager_t1450676775, ___sf_8)); }
	inline ScreenFader_t2638366376 * get_sf_8() const { return ___sf_8; }
	inline ScreenFader_t2638366376 ** get_address_of_sf_8() { return &___sf_8; }
	inline void set_sf_8(ScreenFader_t2638366376 * value)
	{
		___sf_8 = value;
		Il2CppCodeGenWriteBarrier(&___sf_8, value);
	}

	inline static int32_t get_offset_of_scene_9() { return static_cast<int32_t>(offsetof(IntroManager_t1450676775, ___scene_9)); }
	inline String_t* get_scene_9() const { return ___scene_9; }
	inline String_t** get_address_of_scene_9() { return &___scene_9; }
	inline void set_scene_9(String_t* value)
	{
		___scene_9 = value;
		Il2CppCodeGenWriteBarrier(&___scene_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// ScreenFader
struct ScreenFader_t2638366376;
// CameraFollow
struct CameraFollow_t1493855402;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MagicCircle
struct  MagicCircle_t151061789  : public MonoBehaviour_t1158329972
{
public:
	// System.String MagicCircle::dialogue
	String_t* ___dialogue_2;
	// DialogueManager MagicCircle::dMan
	DialogueManager_t3878200441 * ___dMan_3;
	// System.String[] MagicCircle::dialogLines
	StringU5BU5D_t1642385972* ___dialogLines_4;
	// System.String[] MagicCircle::speakers
	StringU5BU5D_t1642385972* ___speakers_5;
	// UnityEngine.GameObject MagicCircle::Furry
	GameObject_t1756533147 * ___Furry_6;
	// System.Boolean MagicCircle::dialogEnd
	bool ___dialogEnd_7;
	// ScreenFader MagicCircle::sf
	ScreenFader_t2638366376 * ___sf_8;
	// System.Boolean MagicCircle::sceneSwitched
	bool ___sceneSwitched_9;
	// CameraFollow MagicCircle::cam
	CameraFollow_t1493855402 * ___cam_10;

public:
	inline static int32_t get_offset_of_dialogue_2() { return static_cast<int32_t>(offsetof(MagicCircle_t151061789, ___dialogue_2)); }
	inline String_t* get_dialogue_2() const { return ___dialogue_2; }
	inline String_t** get_address_of_dialogue_2() { return &___dialogue_2; }
	inline void set_dialogue_2(String_t* value)
	{
		___dialogue_2 = value;
		Il2CppCodeGenWriteBarrier(&___dialogue_2, value);
	}

	inline static int32_t get_offset_of_dMan_3() { return static_cast<int32_t>(offsetof(MagicCircle_t151061789, ___dMan_3)); }
	inline DialogueManager_t3878200441 * get_dMan_3() const { return ___dMan_3; }
	inline DialogueManager_t3878200441 ** get_address_of_dMan_3() { return &___dMan_3; }
	inline void set_dMan_3(DialogueManager_t3878200441 * value)
	{
		___dMan_3 = value;
		Il2CppCodeGenWriteBarrier(&___dMan_3, value);
	}

	inline static int32_t get_offset_of_dialogLines_4() { return static_cast<int32_t>(offsetof(MagicCircle_t151061789, ___dialogLines_4)); }
	inline StringU5BU5D_t1642385972* get_dialogLines_4() const { return ___dialogLines_4; }
	inline StringU5BU5D_t1642385972** get_address_of_dialogLines_4() { return &___dialogLines_4; }
	inline void set_dialogLines_4(StringU5BU5D_t1642385972* value)
	{
		___dialogLines_4 = value;
		Il2CppCodeGenWriteBarrier(&___dialogLines_4, value);
	}

	inline static int32_t get_offset_of_speakers_5() { return static_cast<int32_t>(offsetof(MagicCircle_t151061789, ___speakers_5)); }
	inline StringU5BU5D_t1642385972* get_speakers_5() const { return ___speakers_5; }
	inline StringU5BU5D_t1642385972** get_address_of_speakers_5() { return &___speakers_5; }
	inline void set_speakers_5(StringU5BU5D_t1642385972* value)
	{
		___speakers_5 = value;
		Il2CppCodeGenWriteBarrier(&___speakers_5, value);
	}

	inline static int32_t get_offset_of_Furry_6() { return static_cast<int32_t>(offsetof(MagicCircle_t151061789, ___Furry_6)); }
	inline GameObject_t1756533147 * get_Furry_6() const { return ___Furry_6; }
	inline GameObject_t1756533147 ** get_address_of_Furry_6() { return &___Furry_6; }
	inline void set_Furry_6(GameObject_t1756533147 * value)
	{
		___Furry_6 = value;
		Il2CppCodeGenWriteBarrier(&___Furry_6, value);
	}

	inline static int32_t get_offset_of_dialogEnd_7() { return static_cast<int32_t>(offsetof(MagicCircle_t151061789, ___dialogEnd_7)); }
	inline bool get_dialogEnd_7() const { return ___dialogEnd_7; }
	inline bool* get_address_of_dialogEnd_7() { return &___dialogEnd_7; }
	inline void set_dialogEnd_7(bool value)
	{
		___dialogEnd_7 = value;
	}

	inline static int32_t get_offset_of_sf_8() { return static_cast<int32_t>(offsetof(MagicCircle_t151061789, ___sf_8)); }
	inline ScreenFader_t2638366376 * get_sf_8() const { return ___sf_8; }
	inline ScreenFader_t2638366376 ** get_address_of_sf_8() { return &___sf_8; }
	inline void set_sf_8(ScreenFader_t2638366376 * value)
	{
		___sf_8 = value;
		Il2CppCodeGenWriteBarrier(&___sf_8, value);
	}

	inline static int32_t get_offset_of_sceneSwitched_9() { return static_cast<int32_t>(offsetof(MagicCircle_t151061789, ___sceneSwitched_9)); }
	inline bool get_sceneSwitched_9() const { return ___sceneSwitched_9; }
	inline bool* get_address_of_sceneSwitched_9() { return &___sceneSwitched_9; }
	inline void set_sceneSwitched_9(bool value)
	{
		___sceneSwitched_9 = value;
	}

	inline static int32_t get_offset_of_cam_10() { return static_cast<int32_t>(offsetof(MagicCircle_t151061789, ___cam_10)); }
	inline CameraFollow_t1493855402 * get_cam_10() const { return ___cam_10; }
	inline CameraFollow_t1493855402 ** get_address_of_cam_10() { return &___cam_10; }
	inline void set_cam_10(CameraFollow_t1493855402 * value)
	{
		___cam_10 = value;
		Il2CppCodeGenWriteBarrier(&___cam_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

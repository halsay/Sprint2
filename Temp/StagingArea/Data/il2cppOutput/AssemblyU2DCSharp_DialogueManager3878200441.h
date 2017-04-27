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
// CameraSwitch
struct CameraSwitch_t2061834593;
// PlayerController
struct PlayerController_t4148409433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DialogueManager
struct  DialogueManager_t3878200441  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject DialogueManager::dBox
	GameObject_t1756533147 * ___dBox_2;
	// UnityEngine.UI.Text DialogueManager::dText
	Text_t356221433 * ___dText_3;
	// UnityEngine.UI.Text DialogueManager::cText
	Text_t356221433 * ___cText_4;
	// System.Boolean DialogueManager::dialogActive
	bool ___dialogActive_5;
	// System.Boolean DialogueManager::isTree
	bool ___isTree_6;
	// System.String[] DialogueManager::dialogLines
	StringU5BU5D_t1642385972* ___dialogLines_7;
	// System.String[] DialogueManager::speakers
	StringU5BU5D_t1642385972* ___speakers_8;
	// System.Int32 DialogueManager::currentLine
	int32_t ___currentLine_9;
	// System.Boolean DialogueManager::switchCam
	bool ___switchCam_10;
	// UnityEngine.GameObject DialogueManager::little
	GameObject_t1756533147 * ___little_11;
	// UnityEngine.GameObject DialogueManager::middle
	GameObject_t1756533147 * ___middle_12;
	// UnityEngine.GameObject DialogueManager::big
	GameObject_t1756533147 * ___big_13;
	// CameraSwitch DialogueManager::camSwitch
	CameraSwitch_t2061834593 * ___camSwitch_14;
	// PlayerController DialogueManager::pCon
	PlayerController_t4148409433 * ___pCon_15;

public:
	inline static int32_t get_offset_of_dBox_2() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___dBox_2)); }
	inline GameObject_t1756533147 * get_dBox_2() const { return ___dBox_2; }
	inline GameObject_t1756533147 ** get_address_of_dBox_2() { return &___dBox_2; }
	inline void set_dBox_2(GameObject_t1756533147 * value)
	{
		___dBox_2 = value;
		Il2CppCodeGenWriteBarrier(&___dBox_2, value);
	}

	inline static int32_t get_offset_of_dText_3() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___dText_3)); }
	inline Text_t356221433 * get_dText_3() const { return ___dText_3; }
	inline Text_t356221433 ** get_address_of_dText_3() { return &___dText_3; }
	inline void set_dText_3(Text_t356221433 * value)
	{
		___dText_3 = value;
		Il2CppCodeGenWriteBarrier(&___dText_3, value);
	}

	inline static int32_t get_offset_of_cText_4() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___cText_4)); }
	inline Text_t356221433 * get_cText_4() const { return ___cText_4; }
	inline Text_t356221433 ** get_address_of_cText_4() { return &___cText_4; }
	inline void set_cText_4(Text_t356221433 * value)
	{
		___cText_4 = value;
		Il2CppCodeGenWriteBarrier(&___cText_4, value);
	}

	inline static int32_t get_offset_of_dialogActive_5() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___dialogActive_5)); }
	inline bool get_dialogActive_5() const { return ___dialogActive_5; }
	inline bool* get_address_of_dialogActive_5() { return &___dialogActive_5; }
	inline void set_dialogActive_5(bool value)
	{
		___dialogActive_5 = value;
	}

	inline static int32_t get_offset_of_isTree_6() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___isTree_6)); }
	inline bool get_isTree_6() const { return ___isTree_6; }
	inline bool* get_address_of_isTree_6() { return &___isTree_6; }
	inline void set_isTree_6(bool value)
	{
		___isTree_6 = value;
	}

	inline static int32_t get_offset_of_dialogLines_7() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___dialogLines_7)); }
	inline StringU5BU5D_t1642385972* get_dialogLines_7() const { return ___dialogLines_7; }
	inline StringU5BU5D_t1642385972** get_address_of_dialogLines_7() { return &___dialogLines_7; }
	inline void set_dialogLines_7(StringU5BU5D_t1642385972* value)
	{
		___dialogLines_7 = value;
		Il2CppCodeGenWriteBarrier(&___dialogLines_7, value);
	}

	inline static int32_t get_offset_of_speakers_8() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___speakers_8)); }
	inline StringU5BU5D_t1642385972* get_speakers_8() const { return ___speakers_8; }
	inline StringU5BU5D_t1642385972** get_address_of_speakers_8() { return &___speakers_8; }
	inline void set_speakers_8(StringU5BU5D_t1642385972* value)
	{
		___speakers_8 = value;
		Il2CppCodeGenWriteBarrier(&___speakers_8, value);
	}

	inline static int32_t get_offset_of_currentLine_9() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___currentLine_9)); }
	inline int32_t get_currentLine_9() const { return ___currentLine_9; }
	inline int32_t* get_address_of_currentLine_9() { return &___currentLine_9; }
	inline void set_currentLine_9(int32_t value)
	{
		___currentLine_9 = value;
	}

	inline static int32_t get_offset_of_switchCam_10() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___switchCam_10)); }
	inline bool get_switchCam_10() const { return ___switchCam_10; }
	inline bool* get_address_of_switchCam_10() { return &___switchCam_10; }
	inline void set_switchCam_10(bool value)
	{
		___switchCam_10 = value;
	}

	inline static int32_t get_offset_of_little_11() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___little_11)); }
	inline GameObject_t1756533147 * get_little_11() const { return ___little_11; }
	inline GameObject_t1756533147 ** get_address_of_little_11() { return &___little_11; }
	inline void set_little_11(GameObject_t1756533147 * value)
	{
		___little_11 = value;
		Il2CppCodeGenWriteBarrier(&___little_11, value);
	}

	inline static int32_t get_offset_of_middle_12() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___middle_12)); }
	inline GameObject_t1756533147 * get_middle_12() const { return ___middle_12; }
	inline GameObject_t1756533147 ** get_address_of_middle_12() { return &___middle_12; }
	inline void set_middle_12(GameObject_t1756533147 * value)
	{
		___middle_12 = value;
		Il2CppCodeGenWriteBarrier(&___middle_12, value);
	}

	inline static int32_t get_offset_of_big_13() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___big_13)); }
	inline GameObject_t1756533147 * get_big_13() const { return ___big_13; }
	inline GameObject_t1756533147 ** get_address_of_big_13() { return &___big_13; }
	inline void set_big_13(GameObject_t1756533147 * value)
	{
		___big_13 = value;
		Il2CppCodeGenWriteBarrier(&___big_13, value);
	}

	inline static int32_t get_offset_of_camSwitch_14() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___camSwitch_14)); }
	inline CameraSwitch_t2061834593 * get_camSwitch_14() const { return ___camSwitch_14; }
	inline CameraSwitch_t2061834593 ** get_address_of_camSwitch_14() { return &___camSwitch_14; }
	inline void set_camSwitch_14(CameraSwitch_t2061834593 * value)
	{
		___camSwitch_14 = value;
		Il2CppCodeGenWriteBarrier(&___camSwitch_14, value);
	}

	inline static int32_t get_offset_of_pCon_15() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___pCon_15)); }
	inline PlayerController_t4148409433 * get_pCon_15() const { return ___pCon_15; }
	inline PlayerController_t4148409433 ** get_address_of_pCon_15() { return &___pCon_15; }
	inline void set_pCon_15(PlayerController_t4148409433 * value)
	{
		___pCon_15 = value;
		Il2CppCodeGenWriteBarrier(&___pCon_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

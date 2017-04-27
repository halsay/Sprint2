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
// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// switchUI
struct  switchUI_t1775377334  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject switchUI::cBox
	GameObject_t1756533147 * ___cBox_2;
	// PlayerController switchUI::pCon
	PlayerController_t4148409433 * ___pCon_3;
	// UnityEngine.UI.Text switchUI::choice1
	Text_t356221433 * ___choice1_4;
	// UnityEngine.UI.Text switchUI::choice2
	Text_t356221433 * ___choice2_5;
	// UnityEngine.UI.Text switchUI::choice3
	Text_t356221433 * ___choice3_6;

public:
	inline static int32_t get_offset_of_cBox_2() { return static_cast<int32_t>(offsetof(switchUI_t1775377334, ___cBox_2)); }
	inline GameObject_t1756533147 * get_cBox_2() const { return ___cBox_2; }
	inline GameObject_t1756533147 ** get_address_of_cBox_2() { return &___cBox_2; }
	inline void set_cBox_2(GameObject_t1756533147 * value)
	{
		___cBox_2 = value;
		Il2CppCodeGenWriteBarrier(&___cBox_2, value);
	}

	inline static int32_t get_offset_of_pCon_3() { return static_cast<int32_t>(offsetof(switchUI_t1775377334, ___pCon_3)); }
	inline PlayerController_t4148409433 * get_pCon_3() const { return ___pCon_3; }
	inline PlayerController_t4148409433 ** get_address_of_pCon_3() { return &___pCon_3; }
	inline void set_pCon_3(PlayerController_t4148409433 * value)
	{
		___pCon_3 = value;
		Il2CppCodeGenWriteBarrier(&___pCon_3, value);
	}

	inline static int32_t get_offset_of_choice1_4() { return static_cast<int32_t>(offsetof(switchUI_t1775377334, ___choice1_4)); }
	inline Text_t356221433 * get_choice1_4() const { return ___choice1_4; }
	inline Text_t356221433 ** get_address_of_choice1_4() { return &___choice1_4; }
	inline void set_choice1_4(Text_t356221433 * value)
	{
		___choice1_4 = value;
		Il2CppCodeGenWriteBarrier(&___choice1_4, value);
	}

	inline static int32_t get_offset_of_choice2_5() { return static_cast<int32_t>(offsetof(switchUI_t1775377334, ___choice2_5)); }
	inline Text_t356221433 * get_choice2_5() const { return ___choice2_5; }
	inline Text_t356221433 ** get_address_of_choice2_5() { return &___choice2_5; }
	inline void set_choice2_5(Text_t356221433 * value)
	{
		___choice2_5 = value;
		Il2CppCodeGenWriteBarrier(&___choice2_5, value);
	}

	inline static int32_t get_offset_of_choice3_6() { return static_cast<int32_t>(offsetof(switchUI_t1775377334, ___choice3_6)); }
	inline Text_t356221433 * get_choice3_6() const { return ___choice3_6; }
	inline Text_t356221433 ** get_address_of_choice3_6() { return &___choice3_6; }
	inline void set_choice3_6(Text_t356221433 * value)
	{
		___choice3_6 = value;
		Il2CppCodeGenWriteBarrier(&___choice3_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

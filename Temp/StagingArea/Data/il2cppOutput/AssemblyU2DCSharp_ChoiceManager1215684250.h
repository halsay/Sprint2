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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChoiceManager
struct  ChoiceManager_t1215684250  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ChoiceManager::cBox
	GameObject_t1756533147 * ___cBox_2;
	// UnityEngine.UI.Text ChoiceManager::choice1
	Text_t356221433 * ___choice1_3;
	// UnityEngine.UI.Text ChoiceManager::choice2
	Text_t356221433 * ___choice2_4;
	// UnityEngine.UI.Text ChoiceManager::choice3
	Text_t356221433 * ___choice3_5;
	// System.Int32 ChoiceManager::choice
	int32_t ___choice_6;
	// System.Boolean ChoiceManager::chosen
	bool ___chosen_7;
	// System.Boolean ChoiceManager::dialogActive
	bool ___dialogActive_8;

public:
	inline static int32_t get_offset_of_cBox_2() { return static_cast<int32_t>(offsetof(ChoiceManager_t1215684250, ___cBox_2)); }
	inline GameObject_t1756533147 * get_cBox_2() const { return ___cBox_2; }
	inline GameObject_t1756533147 ** get_address_of_cBox_2() { return &___cBox_2; }
	inline void set_cBox_2(GameObject_t1756533147 * value)
	{
		___cBox_2 = value;
		Il2CppCodeGenWriteBarrier(&___cBox_2, value);
	}

	inline static int32_t get_offset_of_choice1_3() { return static_cast<int32_t>(offsetof(ChoiceManager_t1215684250, ___choice1_3)); }
	inline Text_t356221433 * get_choice1_3() const { return ___choice1_3; }
	inline Text_t356221433 ** get_address_of_choice1_3() { return &___choice1_3; }
	inline void set_choice1_3(Text_t356221433 * value)
	{
		___choice1_3 = value;
		Il2CppCodeGenWriteBarrier(&___choice1_3, value);
	}

	inline static int32_t get_offset_of_choice2_4() { return static_cast<int32_t>(offsetof(ChoiceManager_t1215684250, ___choice2_4)); }
	inline Text_t356221433 * get_choice2_4() const { return ___choice2_4; }
	inline Text_t356221433 ** get_address_of_choice2_4() { return &___choice2_4; }
	inline void set_choice2_4(Text_t356221433 * value)
	{
		___choice2_4 = value;
		Il2CppCodeGenWriteBarrier(&___choice2_4, value);
	}

	inline static int32_t get_offset_of_choice3_5() { return static_cast<int32_t>(offsetof(ChoiceManager_t1215684250, ___choice3_5)); }
	inline Text_t356221433 * get_choice3_5() const { return ___choice3_5; }
	inline Text_t356221433 ** get_address_of_choice3_5() { return &___choice3_5; }
	inline void set_choice3_5(Text_t356221433 * value)
	{
		___choice3_5 = value;
		Il2CppCodeGenWriteBarrier(&___choice3_5, value);
	}

	inline static int32_t get_offset_of_choice_6() { return static_cast<int32_t>(offsetof(ChoiceManager_t1215684250, ___choice_6)); }
	inline int32_t get_choice_6() const { return ___choice_6; }
	inline int32_t* get_address_of_choice_6() { return &___choice_6; }
	inline void set_choice_6(int32_t value)
	{
		___choice_6 = value;
	}

	inline static int32_t get_offset_of_chosen_7() { return static_cast<int32_t>(offsetof(ChoiceManager_t1215684250, ___chosen_7)); }
	inline bool get_chosen_7() const { return ___chosen_7; }
	inline bool* get_address_of_chosen_7() { return &___chosen_7; }
	inline void set_chosen_7(bool value)
	{
		___chosen_7 = value;
	}

	inline static int32_t get_offset_of_dialogActive_8() { return static_cast<int32_t>(offsetof(ChoiceManager_t1215684250, ___dialogActive_8)); }
	inline bool get_dialogActive_8() const { return ___dialogActive_8; }
	inline bool* get_address_of_dialogActive_8() { return &___dialogActive_8; }
	inline void set_dialogActive_8(bool value)
	{
		___dialogActive_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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
// DialogueManager
struct DialogueManager_t3878200441;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnableBox
struct  EnableBox_t1837457488  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject EnableBox::box
	GameObject_t1756533147 * ___box_2;
	// DialogueManager EnableBox::dMan
	DialogueManager_t3878200441 * ___dMan_3;

public:
	inline static int32_t get_offset_of_box_2() { return static_cast<int32_t>(offsetof(EnableBox_t1837457488, ___box_2)); }
	inline GameObject_t1756533147 * get_box_2() const { return ___box_2; }
	inline GameObject_t1756533147 ** get_address_of_box_2() { return &___box_2; }
	inline void set_box_2(GameObject_t1756533147 * value)
	{
		___box_2 = value;
		Il2CppCodeGenWriteBarrier(&___box_2, value);
	}

	inline static int32_t get_offset_of_dMan_3() { return static_cast<int32_t>(offsetof(EnableBox_t1837457488, ___dMan_3)); }
	inline DialogueManager_t3878200441 * get_dMan_3() const { return ___dMan_3; }
	inline DialogueManager_t3878200441 ** get_address_of_dMan_3() { return &___dMan_3; }
	inline void set_dMan_3(DialogueManager_t3878200441 * value)
	{
		___dMan_3 = value;
		Il2CppCodeGenWriteBarrier(&___dMan_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

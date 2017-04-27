#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Door
struct  Door_t1896021008  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Door::brownPressed
	bool ___brownPressed_2;
	// System.Boolean Door::whitePressed
	bool ___whitePressed_3;
	// System.Boolean Door::blackPressed
	bool ___blackPressed_4;
	// UnityEngine.GameObject[] Door::brownDoors
	GameObjectU5BU5D_t3057952154* ___brownDoors_5;
	// UnityEngine.GameObject[] Door::whiteDoors
	GameObjectU5BU5D_t3057952154* ___whiteDoors_6;
	// UnityEngine.GameObject[] Door::blackDoors
	GameObjectU5BU5D_t3057952154* ___blackDoors_7;
	// System.Boolean Door::multiBrown
	bool ___multiBrown_8;
	// System.Boolean Door::multiWhite
	bool ___multiWhite_9;
	// System.Boolean Door::multiBlack
	bool ___multiBlack_10;

public:
	inline static int32_t get_offset_of_brownPressed_2() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___brownPressed_2)); }
	inline bool get_brownPressed_2() const { return ___brownPressed_2; }
	inline bool* get_address_of_brownPressed_2() { return &___brownPressed_2; }
	inline void set_brownPressed_2(bool value)
	{
		___brownPressed_2 = value;
	}

	inline static int32_t get_offset_of_whitePressed_3() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___whitePressed_3)); }
	inline bool get_whitePressed_3() const { return ___whitePressed_3; }
	inline bool* get_address_of_whitePressed_3() { return &___whitePressed_3; }
	inline void set_whitePressed_3(bool value)
	{
		___whitePressed_3 = value;
	}

	inline static int32_t get_offset_of_blackPressed_4() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___blackPressed_4)); }
	inline bool get_blackPressed_4() const { return ___blackPressed_4; }
	inline bool* get_address_of_blackPressed_4() { return &___blackPressed_4; }
	inline void set_blackPressed_4(bool value)
	{
		___blackPressed_4 = value;
	}

	inline static int32_t get_offset_of_brownDoors_5() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___brownDoors_5)); }
	inline GameObjectU5BU5D_t3057952154* get_brownDoors_5() const { return ___brownDoors_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_brownDoors_5() { return &___brownDoors_5; }
	inline void set_brownDoors_5(GameObjectU5BU5D_t3057952154* value)
	{
		___brownDoors_5 = value;
		Il2CppCodeGenWriteBarrier(&___brownDoors_5, value);
	}

	inline static int32_t get_offset_of_whiteDoors_6() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___whiteDoors_6)); }
	inline GameObjectU5BU5D_t3057952154* get_whiteDoors_6() const { return ___whiteDoors_6; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_whiteDoors_6() { return &___whiteDoors_6; }
	inline void set_whiteDoors_6(GameObjectU5BU5D_t3057952154* value)
	{
		___whiteDoors_6 = value;
		Il2CppCodeGenWriteBarrier(&___whiteDoors_6, value);
	}

	inline static int32_t get_offset_of_blackDoors_7() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___blackDoors_7)); }
	inline GameObjectU5BU5D_t3057952154* get_blackDoors_7() const { return ___blackDoors_7; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_blackDoors_7() { return &___blackDoors_7; }
	inline void set_blackDoors_7(GameObjectU5BU5D_t3057952154* value)
	{
		___blackDoors_7 = value;
		Il2CppCodeGenWriteBarrier(&___blackDoors_7, value);
	}

	inline static int32_t get_offset_of_multiBrown_8() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___multiBrown_8)); }
	inline bool get_multiBrown_8() const { return ___multiBrown_8; }
	inline bool* get_address_of_multiBrown_8() { return &___multiBrown_8; }
	inline void set_multiBrown_8(bool value)
	{
		___multiBrown_8 = value;
	}

	inline static int32_t get_offset_of_multiWhite_9() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___multiWhite_9)); }
	inline bool get_multiWhite_9() const { return ___multiWhite_9; }
	inline bool* get_address_of_multiWhite_9() { return &___multiWhite_9; }
	inline void set_multiWhite_9(bool value)
	{
		___multiWhite_9 = value;
	}

	inline static int32_t get_offset_of_multiBlack_10() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___multiBlack_10)); }
	inline bool get_multiBlack_10() const { return ___multiBlack_10; }
	inline bool* get_address_of_multiBlack_10() { return &___multiBlack_10; }
	inline void set_multiBlack_10(bool value)
	{
		___multiBlack_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

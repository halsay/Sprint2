#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Tiled2Unity.TiledMap
struct TiledMap_t4203693682;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.SpriteDepthInMap
struct  SpriteDepthInMap_t2395493699  : public MonoBehaviour_t1158329972
{
public:
	// Tiled2Unity.TiledMap Tiled2Unity.SpriteDepthInMap::AttachedMap
	TiledMap_t4203693682 * ___AttachedMap_2;
	// System.Int32 Tiled2Unity.SpriteDepthInMap::InteractWithLayer
	int32_t ___InteractWithLayer_3;
	// System.Int32 Tiled2Unity.SpriteDepthInMap::TilesetHeight
	int32_t ___TilesetHeight_4;

public:
	inline static int32_t get_offset_of_AttachedMap_2() { return static_cast<int32_t>(offsetof(SpriteDepthInMap_t2395493699, ___AttachedMap_2)); }
	inline TiledMap_t4203693682 * get_AttachedMap_2() const { return ___AttachedMap_2; }
	inline TiledMap_t4203693682 ** get_address_of_AttachedMap_2() { return &___AttachedMap_2; }
	inline void set_AttachedMap_2(TiledMap_t4203693682 * value)
	{
		___AttachedMap_2 = value;
		Il2CppCodeGenWriteBarrier(&___AttachedMap_2, value);
	}

	inline static int32_t get_offset_of_InteractWithLayer_3() { return static_cast<int32_t>(offsetof(SpriteDepthInMap_t2395493699, ___InteractWithLayer_3)); }
	inline int32_t get_InteractWithLayer_3() const { return ___InteractWithLayer_3; }
	inline int32_t* get_address_of_InteractWithLayer_3() { return &___InteractWithLayer_3; }
	inline void set_InteractWithLayer_3(int32_t value)
	{
		___InteractWithLayer_3 = value;
	}

	inline static int32_t get_offset_of_TilesetHeight_4() { return static_cast<int32_t>(offsetof(SpriteDepthInMap_t2395493699, ___TilesetHeight_4)); }
	inline int32_t get_TilesetHeight_4() const { return ___TilesetHeight_4; }
	inline int32_t* get_address_of_TilesetHeight_4() { return &___TilesetHeight_4; }
	inline void set_TilesetHeight_4(int32_t value)
	{
		___TilesetHeight_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

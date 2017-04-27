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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.ImportBehaviour
struct  ImportBehaviour_t1918973942  : public MonoBehaviour_t1158329972
{
public:
	// System.String Tiled2Unity.ImportBehaviour::Tiled2UnityXmlPath
	String_t* ___Tiled2UnityXmlPath_2;
	// System.String Tiled2Unity.ImportBehaviour::ExporterTiled2UnityVersion
	String_t* ___ExporterTiled2UnityVersion_3;

public:
	inline static int32_t get_offset_of_Tiled2UnityXmlPath_2() { return static_cast<int32_t>(offsetof(ImportBehaviour_t1918973942, ___Tiled2UnityXmlPath_2)); }
	inline String_t* get_Tiled2UnityXmlPath_2() const { return ___Tiled2UnityXmlPath_2; }
	inline String_t** get_address_of_Tiled2UnityXmlPath_2() { return &___Tiled2UnityXmlPath_2; }
	inline void set_Tiled2UnityXmlPath_2(String_t* value)
	{
		___Tiled2UnityXmlPath_2 = value;
		Il2CppCodeGenWriteBarrier(&___Tiled2UnityXmlPath_2, value);
	}

	inline static int32_t get_offset_of_ExporterTiled2UnityVersion_3() { return static_cast<int32_t>(offsetof(ImportBehaviour_t1918973942, ___ExporterTiled2UnityVersion_3)); }
	inline String_t* get_ExporterTiled2UnityVersion_3() const { return ___ExporterTiled2UnityVersion_3; }
	inline String_t** get_address_of_ExporterTiled2UnityVersion_3() { return &___ExporterTiled2UnityVersion_3; }
	inline void set_ExporterTiled2UnityVersion_3(String_t* value)
	{
		___ExporterTiled2UnityVersion_3 = value;
		Il2CppCodeGenWriteBarrier(&___ExporterTiled2UnityVersion_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

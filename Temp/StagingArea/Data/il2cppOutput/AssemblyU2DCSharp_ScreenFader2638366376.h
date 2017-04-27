#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Canvas
struct Canvas_t209405766;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenFader
struct  ScreenFader_t2638366376  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator ScreenFader::anim
	Animator_t69676727 * ___anim_2;
	// System.Boolean ScreenFader::isFading
	bool ___isFading_3;
	// UnityEngine.Canvas ScreenFader::canvas
	Canvas_t209405766 * ___canvas_4;

public:
	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(ScreenFader_t2638366376, ___anim_2)); }
	inline Animator_t69676727 * get_anim_2() const { return ___anim_2; }
	inline Animator_t69676727 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animator_t69676727 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier(&___anim_2, value);
	}

	inline static int32_t get_offset_of_isFading_3() { return static_cast<int32_t>(offsetof(ScreenFader_t2638366376, ___isFading_3)); }
	inline bool get_isFading_3() const { return ___isFading_3; }
	inline bool* get_address_of_isFading_3() { return &___isFading_3; }
	inline void set_isFading_3(bool value)
	{
		___isFading_3 = value;
	}

	inline static int32_t get_offset_of_canvas_4() { return static_cast<int32_t>(offsetof(ScreenFader_t2638366376, ___canvas_4)); }
	inline Canvas_t209405766 * get_canvas_4() const { return ___canvas_4; }
	inline Canvas_t209405766 ** get_address_of_canvas_4() { return &___canvas_4; }
	inline void set_canvas_4(Canvas_t209405766 * value)
	{
		___canvas_4 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

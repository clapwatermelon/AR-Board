﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICheckboxControlledObject
struct  UICheckboxControlledObject_t1491996518  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject UICheckboxControlledObject::target
	GameObject_t1756533147 * ___target_2;
	// System.Boolean UICheckboxControlledObject::inverse
	bool ___inverse_3;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(UICheckboxControlledObject_t1491996518, ___target_2)); }
	inline GameObject_t1756533147 * get_target_2() const { return ___target_2; }
	inline GameObject_t1756533147 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_t1756533147 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_inverse_3() { return static_cast<int32_t>(offsetof(UICheckboxControlledObject_t1491996518, ___inverse_3)); }
	inline bool get_inverse_3() const { return ___inverse_3; }
	inline bool* get_address_of_inverse_3() { return &___inverse_3; }
	inline void set_inverse_3(bool value)
	{
		___inverse_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
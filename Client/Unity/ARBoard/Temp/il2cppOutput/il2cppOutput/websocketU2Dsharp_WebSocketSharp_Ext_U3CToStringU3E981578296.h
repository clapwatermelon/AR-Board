﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Ext/<ToString>c__AnonStoreyA`1<System.Object>
struct  U3CToStringU3Ec__AnonStoreyA_1_t981578296  : public Il2CppObject
{
public:
	// System.Text.StringBuilder WebSocketSharp.Ext/<ToString>c__AnonStoreyA`1::buffer
	StringBuilder_t1221177846 * ___buffer_0;
	// T[] WebSocketSharp.Ext/<ToString>c__AnonStoreyA`1::array
	ObjectU5BU5D_t3614634134* ___array_1;
	// System.String WebSocketSharp.Ext/<ToString>c__AnonStoreyA`1::separator
	String_t* ___separator_2;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(U3CToStringU3Ec__AnonStoreyA_1_t981578296, ___buffer_0)); }
	inline StringBuilder_t1221177846 * get_buffer_0() const { return ___buffer_0; }
	inline StringBuilder_t1221177846 ** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(StringBuilder_t1221177846 * value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_array_1() { return static_cast<int32_t>(offsetof(U3CToStringU3Ec__AnonStoreyA_1_t981578296, ___array_1)); }
	inline ObjectU5BU5D_t3614634134* get_array_1() const { return ___array_1; }
	inline ObjectU5BU5D_t3614634134** get_address_of_array_1() { return &___array_1; }
	inline void set_array_1(ObjectU5BU5D_t3614634134* value)
	{
		___array_1 = value;
		Il2CppCodeGenWriteBarrier(&___array_1, value);
	}

	inline static int32_t get_offset_of_separator_2() { return static_cast<int32_t>(offsetof(U3CToStringU3Ec__AnonStoreyA_1_t981578296, ___separator_2)); }
	inline String_t* get_separator_2() const { return ___separator_2; }
	inline String_t** get_address_of_separator_2() { return &___separator_2; }
	inline void set_separator_2(String_t* value)
	{
		___separator_2 = value;
		Il2CppCodeGenWriteBarrier(&___separator_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

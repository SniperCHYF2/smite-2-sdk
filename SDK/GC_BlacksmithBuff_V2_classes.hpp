﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_BlacksmithBuff_V2

#include "Basic.hpp"

#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_BlacksmithBuff_V2.GC_BlacksmithBuff_V2_C
// 0x0000 (0x0FE0 - 0x0FE0)
class AGC_BlacksmithBuff_V2_C final : public AHWGameplayCueNotify_Looping
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_BlacksmithBuff_V2_C">();
	}
	static class AGC_BlacksmithBuff_V2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_BlacksmithBuff_V2_C>();
	}
};
static_assert(alignof(AGC_BlacksmithBuff_V2_C) == 0x000008, "Wrong alignment on AGC_BlacksmithBuff_V2_C");
static_assert(sizeof(AGC_BlacksmithBuff_V2_C) == 0x000FE0, "Wrong size on AGC_BlacksmithBuff_V2_C");

}


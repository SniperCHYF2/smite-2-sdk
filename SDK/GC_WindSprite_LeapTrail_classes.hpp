﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_WindSprite_LeapTrail

#include "Basic.hpp"

#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_WindSprite_LeapTrail.GC_WindSprite_LeapTrail_C
// 0x0000 (0x0FE0 - 0x0FE0)
class AGC_WindSprite_LeapTrail_C final : public AHWGameplayCueNotify_Looping
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_WindSprite_LeapTrail_C">();
	}
	static class AGC_WindSprite_LeapTrail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_WindSprite_LeapTrail_C>();
	}
};
static_assert(alignof(AGC_WindSprite_LeapTrail_C) == 0x000008, "Wrong alignment on AGC_WindSprite_LeapTrail_C");
static_assert(sizeof(AGC_WindSprite_LeapTrail_C) == 0x000FE0, "Wrong size on AGC_WindSprite_LeapTrail_C");

}


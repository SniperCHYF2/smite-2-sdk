﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Minion_Leadership

#include "Basic.hpp"

#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Minion_Leadership.GC_Minion_Leadership_C
// 0x0000 (0x0FE0 - 0x0FE0)
class AGC_Minion_Leadership_C final : public AHWGameplayCueNotify_Looping
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Minion_Leadership_C">();
	}
	static class AGC_Minion_Leadership_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Minion_Leadership_C>();
	}
};
static_assert(alignof(AGC_Minion_Leadership_C) == 0x000008, "Wrong alignment on AGC_Minion_Leadership_C");
static_assert(sizeof(AGC_Minion_Leadership_C) == 0x000FE0, "Wrong size on AGC_Minion_Leadership_C");

}


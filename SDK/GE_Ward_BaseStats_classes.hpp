﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Ward_BaseStats

#include "Basic.hpp"

#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Ward_BaseStats.GE_Ward_BaseStats_C
// 0x0000 (0x0AB8 - 0x0AB8)
class UGE_Ward_BaseStats_C final : public UHWGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Ward_BaseStats_C">();
	}
	static class UGE_Ward_BaseStats_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Ward_BaseStats_C>();
	}
};
static_assert(alignof(UGE_Ward_BaseStats_C) == 0x000008, "Wrong alignment on UGE_Ward_BaseStats_C");
static_assert(sizeof(UGE_Ward_BaseStats_C) == 0x000AB8, "Wrong size on UGE_Ward_BaseStats_C");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_AIDifficulty_Hard

#include "Basic.hpp"

#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_AIDifficulty_Hard.GE_AIDifficulty_Hard_C
// 0x0000 (0x0C98 - 0x0C98)
class UGE_AIDifficulty_Hard_C final : public UHWGameplayEffect_AttackSpeed
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_AIDifficulty_Hard_C">();
	}
	static class UGE_AIDifficulty_Hard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_AIDifficulty_Hard_C>();
	}
};
static_assert(alignof(UGE_AIDifficulty_Hard_C) == 0x000008, "Wrong alignment on UGE_AIDifficulty_Hard_C");
static_assert(sizeof(UGE_AIDifficulty_Hard_C) == 0x000C98, "Wrong size on UGE_AIDifficulty_Hard_C");

}


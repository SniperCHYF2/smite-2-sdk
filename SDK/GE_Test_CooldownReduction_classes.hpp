﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Test_CooldownReduction

#include "Basic.hpp"

#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Test_CooldownReduction.GE_Test_CooldownReduction_C
// 0x0000 (0x0B30 - 0x0B30)
class UGE_Test_CooldownReduction_C final : public UHWGameplayEffect_LifetimeModification
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Test_CooldownReduction_C">();
	}
	static class UGE_Test_CooldownReduction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Test_CooldownReduction_C>();
	}
};
static_assert(alignof(UGE_Test_CooldownReduction_C) == 0x000008, "Wrong alignment on UGE_Test_CooldownReduction_C");
static_assert(sizeof(UGE_Test_CooldownReduction_C) == 0x000B30, "Wrong size on UGE_Test_CooldownReduction_C");

}


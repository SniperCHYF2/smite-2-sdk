﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_TowerAura_Health

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_TowerAura_Health.GC_TowerAura_Health_C
// 0x0000 (0x0FC8 - 0x0FC8)
class AGC_TowerAura_Health_C final : public AGameplayCueNotify_Looping
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_TowerAura_Health_C">();
	}
	static class AGC_TowerAura_Health_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_TowerAura_Health_C>();
	}
};
static_assert(alignof(AGC_TowerAura_Health_C) == 0x000008, "Wrong alignment on AGC_TowerAura_Health_C");
static_assert(sizeof(AGC_TowerAura_Health_C) == 0x000FC8, "Wrong size on AGC_TowerAura_Health_C");

}


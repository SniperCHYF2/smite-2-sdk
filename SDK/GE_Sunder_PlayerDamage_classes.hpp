﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Sunder_PlayerDamage

#include "Basic.hpp"

#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Sunder_PlayerDamage.GE_Sunder_PlayerDamage_C
// 0x0000 (0x0BE0 - 0x0BE0)
class UGE_Sunder_PlayerDamage_C final : public UHWGameplayEffect_Damage
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Sunder_PlayerDamage_C">();
	}
	static class UGE_Sunder_PlayerDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Sunder_PlayerDamage_C>();
	}
};
static_assert(alignof(UGE_Sunder_PlayerDamage_C) == 0x000008, "Wrong alignment on UGE_Sunder_PlayerDamage_C");
static_assert(sizeof(UGE_Sunder_PlayerDamage_C) == 0x000BE0, "Wrong size on UGE_Sunder_PlayerDamage_C");

}


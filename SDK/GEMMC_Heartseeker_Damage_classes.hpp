﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GEMMC_Heartseeker_Damage

#include "Basic.hpp"

#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GEMMC_Heartseeker_Damage.GEMMC_Heartseeker_Damage_C
// 0x0000 (0x0040 - 0x0040)
class UGEMMC_Heartseeker_Damage_C final : public UHWGEModiferMagnitudeCalc_Base
{
public:
	float CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GEMMC_Heartseeker_Damage_C">();
	}
	static class UGEMMC_Heartseeker_Damage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGEMMC_Heartseeker_Damage_C>();
	}
};
static_assert(alignof(UGEMMC_Heartseeker_Damage_C) == 0x000008, "Wrong alignment on UGEMMC_Heartseeker_Damage_C");
static_assert(sizeof(UGEMMC_Heartseeker_Damage_C) == 0x000040, "Wrong size on UGEMMC_Heartseeker_Damage_C");

}


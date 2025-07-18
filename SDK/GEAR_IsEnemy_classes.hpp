﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GEAR_IsEnemy

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GEAR_IsEnemy.GEAR_IsEnemy_C
// 0x0000 (0x0028 - 0x0028)
class UGEAR_IsEnemy_C final : public UGameplayEffectCustomApplicationRequirement
{
public:
	bool CanApplyGameplayEffect(const class UGameplayEffect* GameplayEffect, const struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GEAR_IsEnemy_C">();
	}
	static class UGEAR_IsEnemy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGEAR_IsEnemy_C>();
	}
};
static_assert(alignof(UGEAR_IsEnemy_C) == 0x000008, "Wrong alignment on UGEAR_IsEnemy_C");
static_assert(sizeof(UGEAR_IsEnemy_C) == 0x000028, "Wrong size on UGEAR_IsEnemy_C");

}


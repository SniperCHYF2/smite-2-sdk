﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Item_StaffOfCosmicHorror

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Item_StaffOfCosmicHorror.GA_Item_StaffOfCosmicHorror_C
// 0x0018 (0x0EF0 - 0x0ED8)
class UGA_Item_StaffOfCosmicHorror_C final : public UHWAbility_PassiveItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0ED8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FActiveGameplayEffectHandle            ActiveHandleForIntThreshold;                       // 0x0EE0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        AmountOfIntToTrigger;                              // 0x0EE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Changed_C46C30B540A07350EB68DCB8E1A20166(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue, class UAbilitySystemComponent* OwningAbilitySystem);
	void CleanupListeners();
	void ExecuteUbergraph_GA_Item_StaffOfCosmicHorror(int32 EntryPoint);
	void SetupListeners();
	void UpdatedInt(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue, class UAbilitySystemComponent* Owning_Ability_System);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Item_StaffOfCosmicHorror_C">();
	}
	static class UGA_Item_StaffOfCosmicHorror_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Item_StaffOfCosmicHorror_C>();
	}
};
static_assert(alignof(UGA_Item_StaffOfCosmicHorror_C) == 0x000008, "Wrong alignment on UGA_Item_StaffOfCosmicHorror_C");
static_assert(sizeof(UGA_Item_StaffOfCosmicHorror_C) == 0x000EF0, "Wrong size on UGA_Item_StaffOfCosmicHorror_C");
static_assert(offsetof(UGA_Item_StaffOfCosmicHorror_C, UberGraphFrame) == 0x000ED8, "Member 'UGA_Item_StaffOfCosmicHorror_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Item_StaffOfCosmicHorror_C, ActiveHandleForIntThreshold) == 0x000EE0, "Member 'UGA_Item_StaffOfCosmicHorror_C::ActiveHandleForIntThreshold' has a wrong offset!");
static_assert(offsetof(UGA_Item_StaffOfCosmicHorror_C, AmountOfIntToTrigger) == 0x000EE8, "Member 'UGA_Item_StaffOfCosmicHorror_C::AmountOfIntToTrigger' has a wrong offset!");

}


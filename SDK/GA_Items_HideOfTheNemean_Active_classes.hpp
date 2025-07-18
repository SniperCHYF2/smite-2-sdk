﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_HideOfTheNemean_Active

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Items_HideOfTheNemean_Active.GA_Items_HideOfTheNemean_Active_C
// 0x0020 (0x0D80 - 0x0D60)
class UGA_Items_HideOfTheNemean_Active_C final : public UHWGameplayAbility_Enhanced
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D60(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        PercentOfDamageDone;                               // 0x0D68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Damage_Event_Data_Original_Instigator;             // 0x0D70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Damage_Event_Data_Instigator;                      // 0x0D78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Items_HideOfTheNemean_Active(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnDamaged(const struct FDamageEventData& DamageEventData);
	void TriggerCustomFireAbilityLogic();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Items_HideOfTheNemean_Active_C">();
	}
	static class UGA_Items_HideOfTheNemean_Active_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Items_HideOfTheNemean_Active_C>();
	}
};
static_assert(alignof(UGA_Items_HideOfTheNemean_Active_C) == 0x000008, "Wrong alignment on UGA_Items_HideOfTheNemean_Active_C");
static_assert(sizeof(UGA_Items_HideOfTheNemean_Active_C) == 0x000D80, "Wrong size on UGA_Items_HideOfTheNemean_Active_C");
static_assert(offsetof(UGA_Items_HideOfTheNemean_Active_C, UberGraphFrame) == 0x000D60, "Member 'UGA_Items_HideOfTheNemean_Active_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Items_HideOfTheNemean_Active_C, PercentOfDamageDone) == 0x000D68, "Member 'UGA_Items_HideOfTheNemean_Active_C::PercentOfDamageDone' has a wrong offset!");
static_assert(offsetof(UGA_Items_HideOfTheNemean_Active_C, Damage_Event_Data_Original_Instigator) == 0x000D70, "Member 'UGA_Items_HideOfTheNemean_Active_C::Damage_Event_Data_Original_Instigator' has a wrong offset!");
static_assert(offsetof(UGA_Items_HideOfTheNemean_Active_C, Damage_Event_Data_Instigator) == 0x000D78, "Member 'UGA_Items_HideOfTheNemean_Active_C::Damage_Event_Data_Instigator' has a wrong offset!");

}


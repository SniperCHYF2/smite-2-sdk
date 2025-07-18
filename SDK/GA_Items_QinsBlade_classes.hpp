﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_QinsBlade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Items_QinsBlade.GA_Items_QinsBlade_C
// 0x0020 (0x0EF8 - 0x0ED8)
class UGA_Items_QinsBlade_C final : public UHWAbility_PassiveItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0ED8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 Damage_Event_Data_Target;                          // 0x0EE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Original_Instigator;                               // 0x0EE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Instigator_Max_Health;                             // 0x0EF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Target_Max_Health;                                 // 0x0EF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Items_QinsBlade(int32 EntryPoint);
	void OnDamageEvent(const struct FDamageEventData& DamageEventData);
	void SetupListeners();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Items_QinsBlade_C">();
	}
	static class UGA_Items_QinsBlade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Items_QinsBlade_C>();
	}
};
static_assert(alignof(UGA_Items_QinsBlade_C) == 0x000008, "Wrong alignment on UGA_Items_QinsBlade_C");
static_assert(sizeof(UGA_Items_QinsBlade_C) == 0x000EF8, "Wrong size on UGA_Items_QinsBlade_C");
static_assert(offsetof(UGA_Items_QinsBlade_C, UberGraphFrame) == 0x000ED8, "Member 'UGA_Items_QinsBlade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Items_QinsBlade_C, Damage_Event_Data_Target) == 0x000EE0, "Member 'UGA_Items_QinsBlade_C::Damage_Event_Data_Target' has a wrong offset!");
static_assert(offsetof(UGA_Items_QinsBlade_C, Original_Instigator) == 0x000EE8, "Member 'UGA_Items_QinsBlade_C::Original_Instigator' has a wrong offset!");
static_assert(offsetof(UGA_Items_QinsBlade_C, Instigator_Max_Health) == 0x000EF0, "Member 'UGA_Items_QinsBlade_C::Instigator_Max_Health' has a wrong offset!");
static_assert(offsetof(UGA_Items_QinsBlade_C, Target_Max_Health) == 0x000EF4, "Member 'UGA_Items_QinsBlade_C::Target_Max_Health' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_TheExecutioner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_COM_ShiftingBuff_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Items_TheExecutioner.GA_Items_TheExecutioner_C
// 0x0010 (0x0F68 - 0x0F58)
class UGA_Items_TheExecutioner_C final : public UGA_COM_ShiftingBuff_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Items_TheExecutioner_C;          // 0x0F58(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 Damage_Event_Data;                                 // 0x0F60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Items_TheExecutioner(int32 EntryPoint);
	void OnDamageEvent(const struct FDamageEventData& DamageEventData);
	void SetupListeners();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Items_TheExecutioner_C">();
	}
	static class UGA_Items_TheExecutioner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Items_TheExecutioner_C>();
	}
};
static_assert(alignof(UGA_Items_TheExecutioner_C) == 0x000008, "Wrong alignment on UGA_Items_TheExecutioner_C");
static_assert(sizeof(UGA_Items_TheExecutioner_C) == 0x000F68, "Wrong size on UGA_Items_TheExecutioner_C");
static_assert(offsetof(UGA_Items_TheExecutioner_C, UberGraphFrame_GA_Items_TheExecutioner_C) == 0x000F58, "Member 'UGA_Items_TheExecutioner_C::UberGraphFrame_GA_Items_TheExecutioner_C' has a wrong offset!");
static_assert(offsetof(UGA_Items_TheExecutioner_C, Damage_Event_Data) == 0x000F60, "Member 'UGA_Items_TheExecutioner_C::Damage_Event_Data' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_TheWorldStone

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Items_TheWorldStone.GA_Items_TheWorldStone_C
// 0x0018 (0x0EF0 - 0x0ED8)
class UGA_Items_TheWorldStone_C final : public UHWAbility_PassiveItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0ED8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAbilityAsync_WaitGameplayTagAdded*     AsyncWait;                                         // 0x0EE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          HasTheTagAlready_;                                 // 0x0EE8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Added_BC3D7EC3468B1422130F25A3FB13378C();
	void ExecuteUbergraph_GA_Items_TheWorldStone(int32 EntryPoint);
	void OnAbilityEnded(const class UGameplayAbility* EndedAbility);
	void SetupListeners();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Items_TheWorldStone_C">();
	}
	static class UGA_Items_TheWorldStone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Items_TheWorldStone_C>();
	}
};
static_assert(alignof(UGA_Items_TheWorldStone_C) == 0x000008, "Wrong alignment on UGA_Items_TheWorldStone_C");
static_assert(sizeof(UGA_Items_TheWorldStone_C) == 0x000EF0, "Wrong size on UGA_Items_TheWorldStone_C");
static_assert(offsetof(UGA_Items_TheWorldStone_C, UberGraphFrame) == 0x000ED8, "Member 'UGA_Items_TheWorldStone_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Items_TheWorldStone_C, AsyncWait) == 0x000EE0, "Member 'UGA_Items_TheWorldStone_C::AsyncWait' has a wrong offset!");
static_assert(offsetof(UGA_Items_TheWorldStone_C, HasTheTagAlready_) == 0x000EE8, "Member 'UGA_Items_TheWorldStone_C::HasTheTagAlready_' has a wrong offset!");

}


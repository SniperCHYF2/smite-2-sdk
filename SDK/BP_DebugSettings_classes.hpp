﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DebugSettings

#include "Basic.hpp"

#include "HemingwayUI_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DebugSettings.BP_DebugSettings_C
// 0x0028 (0x0070 - 0x0048)
class UBP_DebugSettings_C final : public UHWDebugSavePreset
{
public:
	double                                        MovementSpeedMod;                                  // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDebugAttributeMod>             AttributeModList;                                  // 0x0050(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayAttribute>             AttributeWatcherList;                              // 0x0060(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DebugSettings_C">();
	}
	static class UBP_DebugSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DebugSettings_C>();
	}
};
static_assert(alignof(UBP_DebugSettings_C) == 0x000008, "Wrong alignment on UBP_DebugSettings_C");
static_assert(sizeof(UBP_DebugSettings_C) == 0x000070, "Wrong size on UBP_DebugSettings_C");
static_assert(offsetof(UBP_DebugSettings_C, MovementSpeedMod) == 0x000048, "Member 'UBP_DebugSettings_C::MovementSpeedMod' has a wrong offset!");
static_assert(offsetof(UBP_DebugSettings_C, AttributeModList) == 0x000050, "Member 'UBP_DebugSettings_C::AttributeModList' has a wrong offset!");
static_assert(offsetof(UBP_DebugSettings_C, AttributeWatcherList) == 0x000060, "Member 'UBP_DebugSettings_C::AttributeWatcherList' has a wrong offset!");

}


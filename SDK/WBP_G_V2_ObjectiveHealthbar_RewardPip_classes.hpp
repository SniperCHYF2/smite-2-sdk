﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_ObjectiveHealthbar_RewardPip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_G_V2_ObjectiveHealthbar_RewardPip.WBP_G_V2_ObjectiveHealthbar_RewardPip_C
// 0x0010 (0x0608 - 0x05F8)
class UWBP_G_V2_ObjectiveHealthbar_RewardPip_C final : public UHWWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWImage*                               Pip;                                               // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbar_RewardPip(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetFilled(bool bFilled);
	void SetFinalRewardState(bool bFinalReward);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_G_V2_ObjectiveHealthbar_RewardPip_C">();
	}
	static class UWBP_G_V2_ObjectiveHealthbar_RewardPip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_G_V2_ObjectiveHealthbar_RewardPip_C>();
	}
};
static_assert(alignof(UWBP_G_V2_ObjectiveHealthbar_RewardPip_C) == 0x000008, "Wrong alignment on UWBP_G_V2_ObjectiveHealthbar_RewardPip_C");
static_assert(sizeof(UWBP_G_V2_ObjectiveHealthbar_RewardPip_C) == 0x000608, "Wrong size on UWBP_G_V2_ObjectiveHealthbar_RewardPip_C");
static_assert(offsetof(UWBP_G_V2_ObjectiveHealthbar_RewardPip_C, UberGraphFrame) == 0x0005F8, "Member 'UWBP_G_V2_ObjectiveHealthbar_RewardPip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_ObjectiveHealthbar_RewardPip_C, Pip) == 0x000600, "Member 'UWBP_G_V2_ObjectiveHealthbar_RewardPip_C::Pip' has a wrong offset!");

}


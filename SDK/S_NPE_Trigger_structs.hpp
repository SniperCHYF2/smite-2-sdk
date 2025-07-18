﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_NPE_Trigger

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "S_NPE_Trigger_Event_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_NPE_Trigger.S_NPE_Trigger
// 0x0040 (0x0040 - 0x0000)
struct FS_NPE_Trigger final
{
public:
	class UClass*                                 TriggerClass_2_4B549DF14C73F41033D4198C986E8742;   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          FireOnce_35_AFCBA1924689C04306AC87B4405F7BAC;      // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           TriggerTag_38_D3B759AF4CF072DE6059BD94C2B759DA;    // 0x000C(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class AActor>>          TriggerActors_40_6DFB33D544BE51675B721C960B28AE2D; // 0x0018(0x0010)(Edit, BlueprintVisible)
	double                                        TriggerThreshold_10_2DE4BC9E4BC2EE6B754BA8AA9956F8FF; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_NPE_Trigger_Event>           TriggerEvents_33_A1FE3365431949560E37AF95648A79D7; // 0x0030(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FS_NPE_Trigger) == 0x000008, "Wrong alignment on FS_NPE_Trigger");
static_assert(sizeof(FS_NPE_Trigger) == 0x000040, "Wrong size on FS_NPE_Trigger");
static_assert(offsetof(FS_NPE_Trigger, TriggerClass_2_4B549DF14C73F41033D4198C986E8742) == 0x000000, "Member 'FS_NPE_Trigger::TriggerClass_2_4B549DF14C73F41033D4198C986E8742' has a wrong offset!");
static_assert(offsetof(FS_NPE_Trigger, FireOnce_35_AFCBA1924689C04306AC87B4405F7BAC) == 0x000008, "Member 'FS_NPE_Trigger::FireOnce_35_AFCBA1924689C04306AC87B4405F7BAC' has a wrong offset!");
static_assert(offsetof(FS_NPE_Trigger, TriggerTag_38_D3B759AF4CF072DE6059BD94C2B759DA) == 0x00000C, "Member 'FS_NPE_Trigger::TriggerTag_38_D3B759AF4CF072DE6059BD94C2B759DA' has a wrong offset!");
static_assert(offsetof(FS_NPE_Trigger, TriggerActors_40_6DFB33D544BE51675B721C960B28AE2D) == 0x000018, "Member 'FS_NPE_Trigger::TriggerActors_40_6DFB33D544BE51675B721C960B28AE2D' has a wrong offset!");
static_assert(offsetof(FS_NPE_Trigger, TriggerThreshold_10_2DE4BC9E4BC2EE6B754BA8AA9956F8FF) == 0x000028, "Member 'FS_NPE_Trigger::TriggerThreshold_10_2DE4BC9E4BC2EE6B754BA8AA9956F8FF' has a wrong offset!");
static_assert(offsetof(FS_NPE_Trigger, TriggerEvents_33_A1FE3365431949560E37AF95648A79D7) == 0x000030, "Member 'FS_NPE_Trigger::TriggerEvents_33_A1FE3365431949560E37AF95648A79D7' has a wrong offset!");

}


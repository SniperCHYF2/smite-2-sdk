﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_NPE_Quest_SubObjective

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_NPE_Quest_SubObjective.S_NPE_Quest_SubObjective
// 0x0010 (0x0010 - 0x0000)
struct FS_NPE_Quest_SubObjective final
{
public:
	struct FGameplayTag                           ObjectiveTag_30_7EC1336A4F55CE89C271C582BFFDAAE9;  // 0x0000(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCompleted_15_750097514498204FE66036A35140F1F9;   // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ObjectiveProgress_27_33DCD9334DC22793069002BCABECDD25; // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_NPE_Quest_SubObjective) == 0x000004, "Wrong alignment on FS_NPE_Quest_SubObjective");
static_assert(sizeof(FS_NPE_Quest_SubObjective) == 0x000010, "Wrong size on FS_NPE_Quest_SubObjective");
static_assert(offsetof(FS_NPE_Quest_SubObjective, ObjectiveTag_30_7EC1336A4F55CE89C271C582BFFDAAE9) == 0x000000, "Member 'FS_NPE_Quest_SubObjective::ObjectiveTag_30_7EC1336A4F55CE89C271C582BFFDAAE9' has a wrong offset!");
static_assert(offsetof(FS_NPE_Quest_SubObjective, IsCompleted_15_750097514498204FE66036A35140F1F9) == 0x000008, "Member 'FS_NPE_Quest_SubObjective::IsCompleted_15_750097514498204FE66036A35140F1F9' has a wrong offset!");
static_assert(offsetof(FS_NPE_Quest_SubObjective, ObjectiveProgress_27_33DCD9334DC22793069002BCABECDD25) == 0x00000C, "Member 'FS_NPE_Quest_SubObjective::ObjectiveProgress_27_33DCD9334DC22793069002BCABECDD25' has a wrong offset!");

}


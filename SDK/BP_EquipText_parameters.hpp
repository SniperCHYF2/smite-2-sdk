﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EquipText

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_EquipText.BP_EquipText_C.ExecuteUbergraph_BP_EquipText
// 0x0108 (0x0108 - 0x0000)
struct BP_EquipText_C_ExecuteUbergraph_BP_EquipText final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0020(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_EquipText_C_ExecuteUbergraph_BP_EquipText) == 0x000008, "Wrong alignment on BP_EquipText_C_ExecuteUbergraph_BP_EquipText");
static_assert(sizeof(BP_EquipText_C_ExecuteUbergraph_BP_EquipText) == 0x000108, "Wrong size on BP_EquipText_C_ExecuteUbergraph_BP_EquipText");
static_assert(offsetof(BP_EquipText_C_ExecuteUbergraph_BP_EquipText, EntryPoint) == 0x000000, "Member 'BP_EquipText_C_ExecuteUbergraph_BP_EquipText::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EquipText_C_ExecuteUbergraph_BP_EquipText, CallFunc_VLerp_ReturnValue) == 0x000008, "Member 'BP_EquipText_C_ExecuteUbergraph_BP_EquipText::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EquipText_C_ExecuteUbergraph_BP_EquipText, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000020, "Member 'BP_EquipText_C_ExecuteUbergraph_BP_EquipText::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

}


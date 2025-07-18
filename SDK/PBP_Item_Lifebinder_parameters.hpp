﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBP_Item_Lifebinder

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "DataTableSkinsCommon_structs.hpp"


namespace SDK::Params
{

// Function PBP_Item_Lifebinder.PBP_Item_Lifebinder_C.ExecuteUbergraph_PBP_Item_Lifebinder
// 0x0050 (0x0050 - 0x0000)
struct PBP_Item_Lifebinder_C_ExecuteUbergraph_PBP_Item_Lifebinder final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAssetRequestKey                       CallFunc_MakeAssetRequestKeyUsingKeyword_ReturnValue; // 0x0004(0x001C)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_Location;                             // 0x0020(0x0018)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_Rotation;                             // 0x0038(0x0018)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PBP_Item_Lifebinder_C_ExecuteUbergraph_PBP_Item_Lifebinder) == 0x000008, "Wrong alignment on PBP_Item_Lifebinder_C_ExecuteUbergraph_PBP_Item_Lifebinder");
static_assert(sizeof(PBP_Item_Lifebinder_C_ExecuteUbergraph_PBP_Item_Lifebinder) == 0x000050, "Wrong size on PBP_Item_Lifebinder_C_ExecuteUbergraph_PBP_Item_Lifebinder");
static_assert(offsetof(PBP_Item_Lifebinder_C_ExecuteUbergraph_PBP_Item_Lifebinder, EntryPoint) == 0x000000, "Member 'PBP_Item_Lifebinder_C_ExecuteUbergraph_PBP_Item_Lifebinder::EntryPoint' has a wrong offset!");
static_assert(offsetof(PBP_Item_Lifebinder_C_ExecuteUbergraph_PBP_Item_Lifebinder, CallFunc_MakeAssetRequestKeyUsingKeyword_ReturnValue) == 0x000004, "Member 'PBP_Item_Lifebinder_C_ExecuteUbergraph_PBP_Item_Lifebinder::CallFunc_MakeAssetRequestKeyUsingKeyword_ReturnValue' has a wrong offset!");
static_assert(offsetof(PBP_Item_Lifebinder_C_ExecuteUbergraph_PBP_Item_Lifebinder, K2Node_Event_Location) == 0x000020, "Member 'PBP_Item_Lifebinder_C_ExecuteUbergraph_PBP_Item_Lifebinder::K2Node_Event_Location' has a wrong offset!");
static_assert(offsetof(PBP_Item_Lifebinder_C_ExecuteUbergraph_PBP_Item_Lifebinder, K2Node_Event_Rotation) == 0x000038, "Member 'PBP_Item_Lifebinder_C_ExecuteUbergraph_PBP_Item_Lifebinder::K2Node_Event_Rotation' has a wrong offset!");

// Function PBP_Item_Lifebinder.PBP_Item_Lifebinder_C.SpawnMuzzleFlashVFX
// 0x0030 (0x0030 - 0x0000)
struct PBP_Item_Lifebinder_C_SpawnMuzzleFlashVFX final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x0018(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PBP_Item_Lifebinder_C_SpawnMuzzleFlashVFX) == 0x000008, "Wrong alignment on PBP_Item_Lifebinder_C_SpawnMuzzleFlashVFX");
static_assert(sizeof(PBP_Item_Lifebinder_C_SpawnMuzzleFlashVFX) == 0x000030, "Wrong size on PBP_Item_Lifebinder_C_SpawnMuzzleFlashVFX");
static_assert(offsetof(PBP_Item_Lifebinder_C_SpawnMuzzleFlashVFX, Location) == 0x000000, "Member 'PBP_Item_Lifebinder_C_SpawnMuzzleFlashVFX::Location' has a wrong offset!");
static_assert(offsetof(PBP_Item_Lifebinder_C_SpawnMuzzleFlashVFX, Rotation) == 0x000018, "Member 'PBP_Item_Lifebinder_C_SpawnMuzzleFlashVFX::Rotation' has a wrong offset!");

}


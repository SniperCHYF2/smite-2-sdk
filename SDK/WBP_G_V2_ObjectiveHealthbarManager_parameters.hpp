﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_ObjectiveHealthbarManager

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK::Params
{

// Function WBP_G_V2_ObjectiveHealthbarManager.WBP_G_V2_ObjectiveHealthbarManager_C.ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager
// 0x0088 (0x0088 - 0x0000)
struct WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_G_V2_ObjectiveHealthbar_Tower_C*   CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0020(0x0020)(NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FAnchorData                            K2Node_MakeStruct_AnchorData;                      // 0x0048(0x0040)(NoDestructor)
};
static_assert(alignof(WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager) == 0x000008, "Wrong alignment on WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager");
static_assert(sizeof(WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager) == 0x000088, "Wrong size on WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager");
static_assert(offsetof(WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager, EntryPoint) == 0x000000, "Member 'WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager, K2Node_MakeStruct_Margin) == 0x000004, "Member 'WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager, K2Node_Event_IsDesignTime) == 0x000014, "Member 'WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager, CallFunc_Create_ReturnValue) == 0x000018, "Member 'WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager, K2Node_MakeStruct_Anchors) == 0x000020, "Member 'WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager, CallFunc_AddChildToCanvas_ReturnValue) == 0x000040, "Member 'WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager, K2Node_MakeStruct_AnchorData) == 0x000048, "Member 'WBP_G_V2_ObjectiveHealthbarManager_C_ExecuteUbergraph_WBP_G_V2_ObjectiveHealthbarManager::K2Node_MakeStruct_AnchorData' has a wrong offset!");

// Function WBP_G_V2_ObjectiveHealthbarManager.WBP_G_V2_ObjectiveHealthbarManager_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_G_V2_ObjectiveHealthbarManager_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_ObjectiveHealthbarManager_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_G_V2_ObjectiveHealthbarManager_C_PreConstruct");
static_assert(sizeof(WBP_G_V2_ObjectiveHealthbarManager_C_PreConstruct) == 0x000001, "Wrong size on WBP_G_V2_ObjectiveHealthbarManager_C_PreConstruct");
static_assert(offsetof(WBP_G_V2_ObjectiveHealthbarManager_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_G_V2_ObjectiveHealthbarManager_C_PreConstruct::IsDesignTime' has a wrong offset!");

}


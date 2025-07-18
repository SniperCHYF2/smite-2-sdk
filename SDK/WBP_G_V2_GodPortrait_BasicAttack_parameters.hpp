﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_GodPortrait_BasicAttack

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_G_V2_GodPortrait_BasicAttack.WBP_G_V2_GodPortrait_BasicAttack_C.DoCustomNavigation
// 0x0010 (0x0010 - 0x0000)
struct WBP_G_V2_GodPortrait_BasicAttack_C_DoCustomNavigation final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_GodPortrait_BasicAttack_C_DoCustomNavigation) == 0x000008, "Wrong alignment on WBP_G_V2_GodPortrait_BasicAttack_C_DoCustomNavigation");
static_assert(sizeof(WBP_G_V2_GodPortrait_BasicAttack_C_DoCustomNavigation) == 0x000010, "Wrong size on WBP_G_V2_GodPortrait_BasicAttack_C_DoCustomNavigation");
static_assert(offsetof(WBP_G_V2_GodPortrait_BasicAttack_C_DoCustomNavigation, Navigation_0) == 0x000000, "Member 'WBP_G_V2_GodPortrait_BasicAttack_C_DoCustomNavigation::Navigation_0' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_GodPortrait_BasicAttack_C_DoCustomNavigation, ReturnValue) == 0x000008, "Member 'WBP_G_V2_GodPortrait_BasicAttack_C_DoCustomNavigation::ReturnValue' has a wrong offset!");

// Function WBP_G_V2_GodPortrait_BasicAttack.WBP_G_V2_GodPortrait_BasicAttack_C.ExecuteUbergraph_WBP_G_V2_GodPortrait_BasicAttack
// 0x0040 (0x0040 - 0x0000)
struct WBP_G_V2_GodPortrait_BasicAttack_C_ExecuteUbergraph_WBP_G_V2_GodPortrait_BasicAttack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_Event_Icon;                                 // 0x0008(0x0028)(ConstParm, UObjectWrapper, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_AttackTypeTag;                        // 0x0030(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue_1;     // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_GodPortrait_BasicAttack_C_ExecuteUbergraph_WBP_G_V2_GodPortrait_BasicAttack) == 0x000008, "Wrong alignment on WBP_G_V2_GodPortrait_BasicAttack_C_ExecuteUbergraph_WBP_G_V2_GodPortrait_BasicAttack");
static_assert(sizeof(WBP_G_V2_GodPortrait_BasicAttack_C_ExecuteUbergraph_WBP_G_V2_GodPortrait_BasicAttack) == 0x000040, "Wrong size on WBP_G_V2_GodPortrait_BasicAttack_C_ExecuteUbergraph_WBP_G_V2_GodPortrait_BasicAttack");
static_assert(offsetof(WBP_G_V2_GodPortrait_BasicAttack_C_ExecuteUbergraph_WBP_G_V2_GodPortrait_BasicAttack, EntryPoint) == 0x000000, "Member 'WBP_G_V2_GodPortrait_BasicAttack_C_ExecuteUbergraph_WBP_G_V2_GodPortrait_BasicAttack::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_GodPortrait_BasicAttack_C_ExecuteUbergraph_WBP_G_V2_GodPortrait_BasicAttack, K2Node_Event_Icon) == 0x000008, "Member 'WBP_G_V2_GodPortrait_BasicAttack_C_ExecuteUbergraph_WBP_G_V2_GodPortrait_BasicAttack::K2Node_Event_Icon' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_GodPortrait_BasicAttack_C_ExecuteUbergraph_WBP_G_V2_GodPortrait_BasicAttack, K2Node_Event_AttackTypeTag) == 0x000030, "Member 'WBP_G_V2_GodPortrait_BasicAttack_C_ExecuteUbergraph_WBP_G_V2_GodPortrait_BasicAttack::K2Node_Event_AttackTypeTag' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_GodPortrait_BasicAttack_C_ExecuteUbergraph_WBP_G_V2_GodPortrait_BasicAttack, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x000038, "Member 'WBP_G_V2_GodPortrait_BasicAttack_C_ExecuteUbergraph_WBP_G_V2_GodPortrait_BasicAttack::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_GodPortrait_BasicAttack_C_ExecuteUbergraph_WBP_G_V2_GodPortrait_BasicAttack, CallFunc_EqualEqual_GameplayTag_ReturnValue_1) == 0x000039, "Member 'WBP_G_V2_GodPortrait_BasicAttack_C_ExecuteUbergraph_WBP_G_V2_GodPortrait_BasicAttack::CallFunc_EqualEqual_GameplayTag_ReturnValue_1' has a wrong offset!");

// Function WBP_G_V2_GodPortrait_BasicAttack.WBP_G_V2_GodPortrait_BasicAttack_C.GetLocalModifierTagOverride
// 0x0008 (0x0008 - 0x0000)
struct WBP_G_V2_GodPortrait_BasicAttack_C_GetLocalModifierTagOverride final
{
public:
	struct FGameplayTag                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_GodPortrait_BasicAttack_C_GetLocalModifierTagOverride) == 0x000004, "Wrong alignment on WBP_G_V2_GodPortrait_BasicAttack_C_GetLocalModifierTagOverride");
static_assert(sizeof(WBP_G_V2_GodPortrait_BasicAttack_C_GetLocalModifierTagOverride) == 0x000008, "Wrong size on WBP_G_V2_GodPortrait_BasicAttack_C_GetLocalModifierTagOverride");
static_assert(offsetof(WBP_G_V2_GodPortrait_BasicAttack_C_GetLocalModifierTagOverride, ReturnValue) == 0x000000, "Member 'WBP_G_V2_GodPortrait_BasicAttack_C_GetLocalModifierTagOverride::ReturnValue' has a wrong offset!");

// Function WBP_G_V2_GodPortrait_BasicAttack.WBP_G_V2_GodPortrait_BasicAttack_C.GetWidgetName
// 0x0018 (0x0018 - 0x0000)
struct WBP_G_V2_GodPortrait_BasicAttack_C_GetWidgetName final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReturnParm)
};
static_assert(alignof(WBP_G_V2_GodPortrait_BasicAttack_C_GetWidgetName) == 0x000008, "Wrong alignment on WBP_G_V2_GodPortrait_BasicAttack_C_GetWidgetName");
static_assert(sizeof(WBP_G_V2_GodPortrait_BasicAttack_C_GetWidgetName) == 0x000018, "Wrong size on WBP_G_V2_GodPortrait_BasicAttack_C_GetWidgetName");
static_assert(offsetof(WBP_G_V2_GodPortrait_BasicAttack_C_GetWidgetName, ReturnValue) == 0x000000, "Member 'WBP_G_V2_GodPortrait_BasicAttack_C_GetWidgetName::ReturnValue' has a wrong offset!");

// Function WBP_G_V2_GodPortrait_BasicAttack.WBP_G_V2_GodPortrait_BasicAttack_C.UpdateImage
// 0x0030 (0x0030 - 0x0000)
struct WBP_G_V2_GodPortrait_BasicAttack_C_UpdateImage final
{
public:
	TSoftObjectPtr<class UTexture2D>              Icon;                                              // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
	struct FGameplayTag                           AttackTypeTag;                                     // 0x0028(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_GodPortrait_BasicAttack_C_UpdateImage) == 0x000008, "Wrong alignment on WBP_G_V2_GodPortrait_BasicAttack_C_UpdateImage");
static_assert(sizeof(WBP_G_V2_GodPortrait_BasicAttack_C_UpdateImage) == 0x000030, "Wrong size on WBP_G_V2_GodPortrait_BasicAttack_C_UpdateImage");
static_assert(offsetof(WBP_G_V2_GodPortrait_BasicAttack_C_UpdateImage, Icon) == 0x000000, "Member 'WBP_G_V2_GodPortrait_BasicAttack_C_UpdateImage::Icon' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_GodPortrait_BasicAttack_C_UpdateImage, AttackTypeTag) == 0x000028, "Member 'WBP_G_V2_GodPortrait_BasicAttack_C_UpdateImage::AttackTypeTag' has a wrong offset!");

// Function WBP_G_V2_GodPortrait_BasicAttack.WBP_G_V2_GodPortrait_BasicAttack_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_G_V2_GodPortrait_BasicAttack_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_GodPortrait_BasicAttack_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_G_V2_GodPortrait_BasicAttack_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_G_V2_GodPortrait_BasicAttack_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_G_V2_GodPortrait_BasicAttack_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_G_V2_GodPortrait_BasicAttack_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_G_V2_GodPortrait_BasicAttack_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}


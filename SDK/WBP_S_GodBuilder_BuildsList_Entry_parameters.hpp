﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_GodBuilder_BuildsList_Entry

#include "Basic.hpp"

#include "Hemingway_structs.hpp"
#include "UMG_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_S_GodBuilder_BuildsList_Entry.WBP_S_GodBuilder_BuildsList_Entry_C.ExecuteUbergraph_WBP_S_GodBuilder_BuildsList_Entry
// 0x0004 (0x0004 - 0x0000)
struct WBP_S_GodBuilder_BuildsList_Entry_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildsList_Entry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_GodBuilder_BuildsList_Entry_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildsList_Entry) == 0x000004, "Wrong alignment on WBP_S_GodBuilder_BuildsList_Entry_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildsList_Entry");
static_assert(sizeof(WBP_S_GodBuilder_BuildsList_Entry_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildsList_Entry) == 0x000004, "Wrong size on WBP_S_GodBuilder_BuildsList_Entry_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildsList_Entry");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildsList_Entry, EntryPoint) == 0x000000, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildsList_Entry::EntryPoint' has a wrong offset!");

// Function WBP_S_GodBuilder_BuildsList_Entry.WBP_S_GodBuilder_BuildsList_Entry_C.OnPinnedUpdated
// 0x0228 (0x0228 - 0x0000)
struct WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated final
{
public:
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable;                          // 0x0000(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	class UHWLocalPlayerLoadoutSubsystem*         CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_1;                        // 0x0030(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x005C(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x0064(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UHWInventoryItem>        CallFunc_GetSoftInventoryItemFromItemId_ReturnValue; // 0x0070(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UHWInventoryItem*                       K2Node_DynamicCast_AsHWInventory_Item;             // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UHWCharacterItem*                 K2Node_DynamicCast_AsHWCharacter_Item;             // 0x00B8(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHWGodLoadout                          CallFunc_GetGodLoadout_OutLoadout;                 // 0x00C8(0x0128)()
	bool                                          CallFunc_GetGodLoadout_ReturnValue;                // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GuidGuid_ReturnValue;          // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F2[0x6];                                      // 0x01F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default;                             // 0x01F8(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Select_Default_1;                           // 0x0220(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated) == 0x000008, "Wrong alignment on WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated");
static_assert(sizeof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated) == 0x000228, "Wrong size on WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, Temp_softobject_Variable) == 0x000000, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::Temp_softobject_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000028, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, Temp_softobject_Variable_1) == 0x000030, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::Temp_softobject_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, Temp_bool_Variable) == 0x000058, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, Temp_struct_Variable) == 0x00005C, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, Temp_struct_Variable_1) == 0x000064, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, Temp_bool_Variable_1) == 0x00006C, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, CallFunc_GetSoftInventoryItemFromItemId_ReturnValue) == 0x000070, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::CallFunc_GetSoftInventoryItemFromItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000098, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x0000A0, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, K2Node_DynamicCast_AsHWInventory_Item) == 0x0000A8, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::K2Node_DynamicCast_AsHWInventory_Item' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, K2Node_DynamicCast_AsHWCharacter_Item) == 0x0000B8, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::K2Node_DynamicCast_AsHWCharacter_Item' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, K2Node_DynamicCast_bSuccess_1) == 0x0000C0, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, CallFunc_GetGodLoadout_OutLoadout) == 0x0000C8, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::CallFunc_GetGodLoadout_OutLoadout' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, CallFunc_GetGodLoadout_ReturnValue) == 0x0001F0, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::CallFunc_GetGodLoadout_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, CallFunc_EqualEqual_GuidGuid_ReturnValue) == 0x0001F1, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::CallFunc_EqualEqual_GuidGuid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, K2Node_Select_Default) == 0x0001F8, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated, K2Node_Select_Default_1) == 0x000220, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_OnPinnedUpdated::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_S_GodBuilder_BuildsList_Entry.WBP_S_GodBuilder_BuildsList_Entry_C.UpdateEntryDisplay
// 0x01D8 (0x01D8 - 0x0000)
struct WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x000C(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable;                          // 0x0018(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Temp_softobject_Variable_1;                        // 0x0040(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Temp_struct_Variable_2;                            // 0x006C(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable_3;                            // 0x0074(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerFacingGameVersion_ReturnValue;   // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Select_Default;                             // 0x0090(0x0008)(NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_Select_Default_1;                           // 0x0098(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue;                   // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetGameModeIcon_SoftIcon;                 // 0x00C8(0x0028)(HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetCharacterRoleIcon_SoftIcon;            // 0x00F8(0x0028)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0120(0x0018)()
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0140(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0190(0x0010)(ReferenceParm)
	struct FGameplayTag                           K2Node_Select_Default_3;                           // 0x01A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01A8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01C0(0x0018)()
};
static_assert(alignof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay) == 0x000008, "Wrong alignment on WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay");
static_assert(sizeof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay) == 0x0001D8, "Wrong size on WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, Temp_bool_Variable) == 0x000000, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, Temp_byte_Variable) == 0x000001, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, Temp_bool_Variable_1) == 0x000003, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, Temp_struct_Variable) == 0x000004, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, Temp_struct_Variable_1) == 0x00000C, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, Temp_softobject_Variable) == 0x000018, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::Temp_softobject_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, Temp_softobject_Variable_1) == 0x000040, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::Temp_softobject_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, Temp_bool_Variable_2) == 0x000068, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, Temp_struct_Variable_2) == 0x00006C, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, Temp_struct_Variable_3) == 0x000074, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, Temp_bool_Variable_3) == 0x00007C, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, CallFunc_GetPlayerFacingGameVersion_ReturnValue) == 0x000080, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::CallFunc_GetPlayerFacingGameVersion_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, K2Node_Select_Default) == 0x000090, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, K2Node_Select_Default_1) == 0x000098, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, CallFunc_MatchesTag_ReturnValue) == 0x0000C0, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, CallFunc_GetGameModeIcon_SoftIcon) == 0x0000C8, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::CallFunc_GetGameModeIcon_SoftIcon' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, K2Node_Select_Default_2) == 0x0000F0, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, CallFunc_GetCharacterRoleIcon_SoftIcon) == 0x0000F8, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::CallFunc_GetCharacterRoleIcon_SoftIcon' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, CallFunc_Conv_StringToText_ReturnValue) == 0x000120, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000138, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, K2Node_MakeStruct_FormatArgumentData) == 0x000140, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, K2Node_MakeArray_Array) == 0x000190, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, K2Node_Select_Default_3) == 0x0001A0, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, CallFunc_Format_ReturnValue) == 0x0001A8, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001C0, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdateEntryDisplay::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function WBP_S_GodBuilder_BuildsList_Entry.WBP_S_GodBuilder_BuildsList_Entry_C.UpdatePromoted
// 0x000E (0x000E - 0x0000)
struct WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted final
{
public:
	bool                                          IsPromoted;                                        // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted) == 0x000001, "Wrong alignment on WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted");
static_assert(sizeof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted) == 0x00000E, "Wrong size on WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted, IsPromoted) == 0x000000, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted::IsPromoted' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted, Temp_bool_Variable) == 0x000001, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted, Temp_byte_Variable) == 0x000002, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted, Temp_bool_Variable_1) == 0x000004, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted, Temp_byte_Variable_2) == 0x000005, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted, Temp_byte_Variable_3) == 0x000006, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted, Temp_bool_Variable_2) == 0x000007, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted, Temp_byte_Variable_4) == 0x000008, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted, Temp_byte_Variable_5) == 0x000009, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted, K2Node_Select_Default) == 0x00000A, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted, K2Node_Select_Default_1) == 0x00000B, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted, K2Node_Select_Default_2) == 0x00000C, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted, CallFunc_Greater_IntInt_ReturnValue) == 0x00000D, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_UpdatePromoted::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_S_GodBuilder_BuildsList_Entry.WBP_S_GodBuilder_BuildsList_Entry_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_S_GodBuilder_BuildsList_Entry_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_GodBuilder_BuildsList_Entry_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_S_GodBuilder_BuildsList_Entry_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_S_GodBuilder_BuildsList_Entry_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_S_GodBuilder_BuildsList_Entry_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_S_GodBuilder_BuildsList_Entry_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_S_GodBuilder_BuildsList_Entry_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}


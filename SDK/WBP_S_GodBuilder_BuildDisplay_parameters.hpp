﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_GodBuilder_BuildDisplay

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_S_GodBuilder_BuildDisplay.WBP_S_GodBuilder_BuildDisplay_C.ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay
// 0x0008 (0x0008 - 0x0000)
struct WBP_S_GodBuilder_BuildDisplay_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_GodBuilder_BuildDisplay_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay) == 0x000004, "Wrong alignment on WBP_S_GodBuilder_BuildDisplay_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay");
static_assert(sizeof(WBP_S_GodBuilder_BuildDisplay_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay) == 0x000008, "Wrong size on WBP_S_GodBuilder_BuildDisplay_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay, EntryPoint) == 0x000000, "Member 'WBP_S_GodBuilder_BuildDisplay_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'WBP_S_GodBuilder_BuildDisplay_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_S_GodBuilder_BuildDisplay.WBP_S_GodBuilder_BuildDisplay_C.SetEntriesExpanded
// 0x0050 (0x0050 - 0x0000)
struct WBP_S_GodBuilder_BuildDisplay_C_SetEntriesExpanded final
{
public:
	bool                                          bInIsExpanded;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0020(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0038(0x0018)()
};
static_assert(alignof(WBP_S_GodBuilder_BuildDisplay_C_SetEntriesExpanded) == 0x000008, "Wrong alignment on WBP_S_GodBuilder_BuildDisplay_C_SetEntriesExpanded");
static_assert(sizeof(WBP_S_GodBuilder_BuildDisplay_C_SetEntriesExpanded) == 0x000050, "Wrong size on WBP_S_GodBuilder_BuildDisplay_C_SetEntriesExpanded");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_SetEntriesExpanded, bInIsExpanded) == 0x000000, "Member 'WBP_S_GodBuilder_BuildDisplay_C_SetEntriesExpanded::bInIsExpanded' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_SetEntriesExpanded, Temp_bool_Variable) == 0x000001, "Member 'WBP_S_GodBuilder_BuildDisplay_C_SetEntriesExpanded::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_SetEntriesExpanded, Temp_text_Variable) == 0x000008, "Member 'WBP_S_GodBuilder_BuildDisplay_C_SetEntriesExpanded::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_SetEntriesExpanded, Temp_text_Variable_1) == 0x000020, "Member 'WBP_S_GodBuilder_BuildDisplay_C_SetEntriesExpanded::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_SetEntriesExpanded, K2Node_Select_Default) == 0x000038, "Member 'WBP_S_GodBuilder_BuildDisplay_C_SetEntriesExpanded::K2Node_Select_Default' has a wrong offset!");

// Function WBP_S_GodBuilder_BuildDisplay.WBP_S_GodBuilder_BuildDisplay_C.UpdateBuildDisplay
// 0x0198 (0x0198 - 0x0000)
struct WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x1];                                        // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x000C(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerFacingGameVersion_ReturnValue;   // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetGameModeName_GameModeName;             // 0x0030(0x0018)()
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetGameModeIcon_SoftIcon;                 // 0x0048(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue;                   // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetCharacterRoleName_SoftIcon;            // 0x0078(0x0018)()
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetCharacterRoleIconSmall_SoftIcon;       // 0x0090(0x0028)(HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C0(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DB[0x5];                                       // 0x00DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00E0(0x0018)()
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0100(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0150(0x0010)(ReferenceParm)
	struct FGameplayTag                           K2Node_Select_Default_3;                           // 0x0160(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0168(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0180(0x0018)()
};
static_assert(alignof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay) == 0x000008, "Wrong alignment on WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay");
static_assert(sizeof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay) == 0x000198, "Wrong size on WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, Temp_byte_Variable) == 0x000000, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, Temp_byte_Variable_1) == 0x000001, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, Temp_bool_Variable) == 0x000002, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, Temp_struct_Variable) == 0x000004, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, Temp_struct_Variable_1) == 0x00000C, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, Temp_bool_Variable_1) == 0x000014, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, Temp_byte_Variable_2) == 0x000015, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, Temp_byte_Variable_3) == 0x000016, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, Temp_bool_Variable_2) == 0x000017, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, Temp_byte_Variable_4) == 0x000018, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, Temp_byte_Variable_5) == 0x000019, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, Temp_bool_Variable_3) == 0x00001A, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, CallFunc_GetPlayerFacingGameVersion_ReturnValue) == 0x000020, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::CallFunc_GetPlayerFacingGameVersion_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, CallFunc_GetGameModeName_GameModeName) == 0x000030, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::CallFunc_GetGameModeName_GameModeName' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, CallFunc_GetGameModeIcon_SoftIcon) == 0x000048, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::CallFunc_GetGameModeIcon_SoftIcon' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, CallFunc_MatchesTag_ReturnValue) == 0x000070, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, CallFunc_GetCharacterRoleName_SoftIcon) == 0x000078, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::CallFunc_GetCharacterRoleName_SoftIcon' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, CallFunc_GetCharacterRoleIconSmall_SoftIcon) == 0x000090, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::CallFunc_GetCharacterRoleIconSmall_SoftIcon' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, K2Node_Select_Default) == 0x0000B8, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C0, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, CallFunc_Greater_IntInt_ReturnValue) == 0x0000D8, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, K2Node_Select_Default_1) == 0x0000D9, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, K2Node_Select_Default_2) == 0x0000DA, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000E0, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000F8, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, K2Node_MakeStruct_FormatArgumentData) == 0x000100, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, K2Node_MakeArray_Array) == 0x000150, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, K2Node_Select_Default_3) == 0x000160, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, CallFunc_Format_ReturnValue) == 0x000168, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000180, "Member 'WBP_S_GodBuilder_BuildDisplay_C_UpdateBuildDisplay::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function WBP_S_GodBuilder_BuildDisplay.WBP_S_GodBuilder_BuildDisplay_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_S_GodBuilder_BuildDisplay_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_GodBuilder_BuildDisplay_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_S_GodBuilder_BuildDisplay_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_S_GodBuilder_BuildDisplay_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_S_GodBuilder_BuildDisplay_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_S_GodBuilder_BuildDisplay_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}


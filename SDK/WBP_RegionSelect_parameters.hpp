﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RegionSelect

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "RallyHereStart_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_RegionSelect.WBP_RegionSelect_C.ExecuteUbergraph_WBP_RegionSelect
// 0x0240 (0x0240 - 0x0000)
struct WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCustomLobbyRegionSelect_ReturnValue;    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERHLoginState                                 K2Node_CustomEvent_LoginState;                     // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_RegionSelect_Entry_C*              CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ARHLobbyHUD*                            K2Node_DynamicCast_AsRallyHere_Client_HUD;         // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URHQueueDataFactory*                    CallFunc_GetQueueDataFactory_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPreferredRegionId_OutRegionId;         // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPreferredRegionId_ReturnValue;         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URH_JoinedSession*                      CallFunc_GetCustomMatchSession_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, class FText>              CallFunc_GetRegionList_OutRegionIdToNameMap;       // 0x0070(0x0050)()
	class FString                                 CallFunc_GetCustomSessionRegionId_ReturnValue;     // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x00D0(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ARHHUDCommon*                           K2Node_DynamicCast_AsRHHUDCommon;                  // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URHLoginDataFactory*                    CallFunc_GetLoginDataFactory_ReturnValue;          // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Map_Find_Value;                           // 0x0108(0x0018)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x3];                                      // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_RegionId;                       // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& Region_Id)> K2Node_CreateDelegate_OutputDelegate;            // 0x0140(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0154(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_RegionSelect_Entry_C*>      CallFunc_GetRegionSelectEntries_RegionSelectEntries; // 0x0168(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWBP_RegionSelect_Entry_C*              CallFunc_Array_Get_Item_1;                         // 0x0178(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18A[0x2];                                      // 0x018A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARHLobbyHUD*                            K2Node_DynamicCast_AsRallyHere_Client_HUD_1;       // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFontByName_HasFound;                   // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19A[0x6];                                      // 0x019A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         CallFunc_GetFontByName_FontInfo;                   // 0x01A0(0x0058)(HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCustomLobbyRegionSelect_ReturnValue_1;  // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FA[0x6];                                      // 0x01FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ARHLobbyHUD*                            K2Node_DynamicCast_AsRallyHere_Client_HUD_2;       // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21A[0x6];                                      // 0x021A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class URHQueueDataFactory*                    CallFunc_GetQueueDataFactory_ReturnValue_1;        // 0x0220(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCustomLobbyRegionSelect_ReturnValue_2;  // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveViewRoute_ReturnValue;              // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCustomLobbyRegionSelect_ReturnValue_3;  // 0x022A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22B[0x1];                                      // 0x022B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ERHLoginState LoginState)>     K2Node_CreateDelegate_OutputDelegate_1;            // 0x022C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveViewRoute_ReturnValue_1;            // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect) == 0x000008, "Wrong alignment on WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect");
static_assert(sizeof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect) == 0x000240, "Wrong size on WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, EntryPoint) == 0x000000, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_IsCustomLobbyRegionSelect_ReturnValue) == 0x000004, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_IsCustomLobbyRegionSelect_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, Temp_int_Array_Index_Variable_1) == 0x000014, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, Temp_bool_Variable) == 0x000018, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, K2Node_Event_IsDesignTime) == 0x000019, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, K2Node_CustomEvent_LoginState) == 0x00001A, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::K2Node_CustomEvent_LoginState' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, K2Node_SwitchEnum_CmpSuccess) == 0x00001B, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_Create_ReturnValue) == 0x000028, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_AddChild_ReturnValue) == 0x000030, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, K2Node_DynamicCast_AsRallyHere_Client_HUD) == 0x000038, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::K2Node_DynamicCast_AsRallyHere_Client_HUD' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_GetQueueDataFactory_ReturnValue) == 0x000048, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_GetQueueDataFactory_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_GetPreferredRegionId_OutRegionId) == 0x000050, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_GetPreferredRegionId_OutRegionId' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_GetPreferredRegionId_ReturnValue) == 0x000060, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_GetPreferredRegionId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_GetCustomMatchSession_ReturnValue) == 0x000068, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_GetCustomMatchSession_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_GetRegionList_OutRegionIdToNameMap) == 0x000070, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_GetRegionList_OutRegionIdToNameMap' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_GetCustomSessionRegionId_ReturnValue) == 0x0000C0, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_GetCustomSessionRegionId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_Map_Keys_Keys) == 0x0000D0, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_Array_Get_Item) == 0x0000E0, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, K2Node_DynamicCast_AsRHHUDCommon) == 0x0000F0, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::K2Node_DynamicCast_AsRHHUDCommon' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, K2Node_DynamicCast_bSuccess_1) == 0x0000F8, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_GetLoginDataFactory_ReturnValue) == 0x000100, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_GetLoginDataFactory_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_Map_Find_Value) == 0x000108, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_Map_Find_ReturnValue) == 0x000120, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_Array_Length_ReturnValue) == 0x000124, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_Less_IntInt_ReturnValue) == 0x000128, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, K2Node_CustomEvent_RegionId) == 0x000130, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::K2Node_CustomEvent_RegionId' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, K2Node_CreateDelegate_OutputDelegate) == 0x000140, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_Array_Add_ReturnValue) == 0x000150, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, K2Node_MakeStruct_Margin) == 0x000154, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_GetRegionSelectEntries_RegionSelectEntries) == 0x000168, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_GetRegionSelectEntries_RegionSelectEntries' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_Array_Get_Item_1) == 0x000178, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_Array_Length_ReturnValue_1) == 0x000180, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, Temp_int_Loop_Counter_Variable_1) == 0x000184, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000188, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_Less_IntInt_ReturnValue_1) == 0x000189, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_Add_IntInt_ReturnValue_1) == 0x00018C, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, K2Node_DynamicCast_AsRallyHere_Client_HUD_1) == 0x000190, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::K2Node_DynamicCast_AsRallyHere_Client_HUD_1' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, K2Node_DynamicCast_bSuccess_2) == 0x000198, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_GetFontByName_HasFound) == 0x000199, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_GetFontByName_HasFound' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_GetFontByName_FontInfo) == 0x0001A0, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_GetFontByName_FontInfo' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_Not_PreBool_ReturnValue) == 0x0001F8, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_IsCustomLobbyRegionSelect_ReturnValue_1) == 0x0001F9, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_IsCustomLobbyRegionSelect_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, K2Node_Select_Default) == 0x000200, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, K2Node_DynamicCast_AsRallyHere_Client_HUD_2) == 0x000210, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::K2Node_DynamicCast_AsRallyHere_Client_HUD_2' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, K2Node_DynamicCast_bSuccess_3) == 0x000218, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000219, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_GetQueueDataFactory_ReturnValue_1) == 0x000220, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_GetQueueDataFactory_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_IsCustomLobbyRegionSelect_ReturnValue_2) == 0x000228, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_IsCustomLobbyRegionSelect_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_RemoveViewRoute_ReturnValue) == 0x000229, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_RemoveViewRoute_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_IsCustomLobbyRegionSelect_ReturnValue_3) == 0x00022A, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_IsCustomLobbyRegionSelect_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, K2Node_CreateDelegate_OutputDelegate_1) == 0x00022C, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect, CallFunc_RemoveViewRoute_ReturnValue_1) == 0x00023C, "Member 'WBP_RegionSelect_C_ExecuteUbergraph_WBP_RegionSelect::CallFunc_RemoveViewRoute_ReturnValue_1' has a wrong offset!");

// Function WBP_RegionSelect.WBP_RegionSelect_C.GetRegionSelectEntries
// 0x0010 (0x0010 - 0x0000)
struct WBP_RegionSelect_C_GetRegionSelectEntries final
{
public:
	TArray<class UWBP_RegionSelect_Entry_C*>      RegionSelectEntries;                               // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_RegionSelect_C_GetRegionSelectEntries) == 0x000008, "Wrong alignment on WBP_RegionSelect_C_GetRegionSelectEntries");
static_assert(sizeof(WBP_RegionSelect_C_GetRegionSelectEntries) == 0x000010, "Wrong size on WBP_RegionSelect_C_GetRegionSelectEntries");
static_assert(offsetof(WBP_RegionSelect_C_GetRegionSelectEntries, RegionSelectEntries) == 0x000000, "Member 'WBP_RegionSelect_C_GetRegionSelectEntries::RegionSelectEntries' has a wrong offset!");

// Function WBP_RegionSelect.WBP_RegionSelect_C.IsCustomLobbyRegionSelect
// 0x0020 (0x0020 - 0x0000)
struct WBP_RegionSelect_C_IsCustomLobbyRegionSelect final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URHViewManager*                         CallFunc_GetViewManager_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CallFunc_GetCurrentRoute_ReturnValue;              // 0x0014(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RegionSelect_C_IsCustomLobbyRegionSelect) == 0x000008, "Wrong alignment on WBP_RegionSelect_C_IsCustomLobbyRegionSelect");
static_assert(sizeof(WBP_RegionSelect_C_IsCustomLobbyRegionSelect) == 0x000020, "Wrong size on WBP_RegionSelect_C_IsCustomLobbyRegionSelect");
static_assert(offsetof(WBP_RegionSelect_C_IsCustomLobbyRegionSelect, ReturnValue) == 0x000000, "Member 'WBP_RegionSelect_C_IsCustomLobbyRegionSelect::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_IsCustomLobbyRegionSelect, CallFunc_GetViewManager_ReturnValue) == 0x000008, "Member 'WBP_RegionSelect_C_IsCustomLobbyRegionSelect::CallFunc_GetViewManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_IsCustomLobbyRegionSelect, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'WBP_RegionSelect_C_IsCustomLobbyRegionSelect::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_IsCustomLobbyRegionSelect, CallFunc_GetCurrentRoute_ReturnValue) == 0x000014, "Member 'WBP_RegionSelect_C_IsCustomLobbyRegionSelect::CallFunc_GetCurrentRoute_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_IsCustomLobbyRegionSelect, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x00001C, "Member 'WBP_RegionSelect_C_IsCustomLobbyRegionSelect::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_IsCustomLobbyRegionSelect, CallFunc_BooleanOR_ReturnValue) == 0x00001D, "Member 'WBP_RegionSelect_C_IsCustomLobbyRegionSelect::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_RegionSelect.WBP_RegionSelect_C.LoginState
// 0x0001 (0x0001 - 0x0000)
struct WBP_RegionSelect_C_LoginState final
{
public:
	ERHLoginState                                 LoginState_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RegionSelect_C_LoginState) == 0x000001, "Wrong alignment on WBP_RegionSelect_C_LoginState");
static_assert(sizeof(WBP_RegionSelect_C_LoginState) == 0x000001, "Wrong size on WBP_RegionSelect_C_LoginState");
static_assert(offsetof(WBP_RegionSelect_C_LoginState, LoginState_0) == 0x000000, "Member 'WBP_RegionSelect_C_LoginState::LoginState_0' has a wrong offset!");

// Function WBP_RegionSelect.WBP_RegionSelect_C.NavigateBack
// 0x0004 (0x0004 - 0x0000)
struct WBP_RegionSelect_C_NavigateBack final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveViewRoute_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCustomLobbyRegionSelect_ReturnValue;    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NavigateBack_ReturnValue;                 // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RegionSelect_C_NavigateBack) == 0x000001, "Wrong alignment on WBP_RegionSelect_C_NavigateBack");
static_assert(sizeof(WBP_RegionSelect_C_NavigateBack) == 0x000004, "Wrong size on WBP_RegionSelect_C_NavigateBack");
static_assert(offsetof(WBP_RegionSelect_C_NavigateBack, ReturnValue) == 0x000000, "Member 'WBP_RegionSelect_C_NavigateBack::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_NavigateBack, CallFunc_RemoveViewRoute_ReturnValue) == 0x000001, "Member 'WBP_RegionSelect_C_NavigateBack::CallFunc_RemoveViewRoute_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_NavigateBack, CallFunc_IsCustomLobbyRegionSelect_ReturnValue) == 0x000002, "Member 'WBP_RegionSelect_C_NavigateBack::CallFunc_IsCustomLobbyRegionSelect_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_NavigateBack, CallFunc_NavigateBack_ReturnValue) == 0x000003, "Member 'WBP_RegionSelect_C_NavigateBack::CallFunc_NavigateBack_ReturnValue' has a wrong offset!");

// Function WBP_RegionSelect.WBP_RegionSelect_C.OnChildButtonSelectedRegion
// 0x0010 (0x0010 - 0x0000)
struct WBP_RegionSelect_C_OnChildButtonSelectedRegion final
{
public:
	class FString                                 RegionId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RegionSelect_C_OnChildButtonSelectedRegion) == 0x000008, "Wrong alignment on WBP_RegionSelect_C_OnChildButtonSelectedRegion");
static_assert(sizeof(WBP_RegionSelect_C_OnChildButtonSelectedRegion) == 0x000010, "Wrong size on WBP_RegionSelect_C_OnChildButtonSelectedRegion");
static_assert(offsetof(WBP_RegionSelect_C_OnChildButtonSelectedRegion, RegionId) == 0x000000, "Member 'WBP_RegionSelect_C_OnChildButtonSelectedRegion::RegionId' has a wrong offset!");

// Function WBP_RegionSelect.WBP_RegionSelect_C.OnShown
// 0x0001 (0x0001 - 0x0000)
struct WBP_RegionSelect_C_OnShown final
{
public:
	bool                                          CallFunc_IsCustomLobbyRegionSelect_ReturnValue;    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RegionSelect_C_OnShown) == 0x000001, "Wrong alignment on WBP_RegionSelect_C_OnShown");
static_assert(sizeof(WBP_RegionSelect_C_OnShown) == 0x000001, "Wrong size on WBP_RegionSelect_C_OnShown");
static_assert(offsetof(WBP_RegionSelect_C_OnShown, CallFunc_IsCustomLobbyRegionSelect_ReturnValue) == 0x000000, "Member 'WBP_RegionSelect_C_OnShown::CallFunc_IsCustomLobbyRegionSelect_ReturnValue' has a wrong offset!");

// Function WBP_RegionSelect.WBP_RegionSelect_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_RegionSelect_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RegionSelect_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_RegionSelect_C_PreConstruct");
static_assert(sizeof(WBP_RegionSelect_C_PreConstruct) == 0x000001, "Wrong size on WBP_RegionSelect_C_PreConstruct");
static_assert(offsetof(WBP_RegionSelect_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_RegionSelect_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_RegionSelect.WBP_RegionSelect_C.SetAllowCloseButton
// 0x0001 (0x0001 - 0x0000)
struct WBP_RegionSelect_C_SetAllowCloseButton final
{
public:
	bool                                          bAllow;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RegionSelect_C_SetAllowCloseButton) == 0x000001, "Wrong alignment on WBP_RegionSelect_C_SetAllowCloseButton");
static_assert(sizeof(WBP_RegionSelect_C_SetAllowCloseButton) == 0x000001, "Wrong size on WBP_RegionSelect_C_SetAllowCloseButton");
static_assert(offsetof(WBP_RegionSelect_C_SetAllowCloseButton, bAllow) == 0x000000, "Member 'WBP_RegionSelect_C_SetAllowCloseButton::bAllow' has a wrong offset!");

// Function WBP_RegionSelect.WBP_RegionSelect_C.SetUpStandaloneNavigation
// 0x0010 (0x0010 - 0x0000)
struct WBP_RegionSelect_C_SetUpStandaloneNavigation final
{
public:
	bool                                          CallFunc_IsCustomLobbyRegionSelect_ReturnValue;    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_RegionSelect_Entry_C*              CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RegionSelect_C_SetUpStandaloneNavigation) == 0x000008, "Wrong alignment on WBP_RegionSelect_C_SetUpStandaloneNavigation");
static_assert(sizeof(WBP_RegionSelect_C_SetUpStandaloneNavigation) == 0x000010, "Wrong size on WBP_RegionSelect_C_SetUpStandaloneNavigation");
static_assert(offsetof(WBP_RegionSelect_C_SetUpStandaloneNavigation, CallFunc_IsCustomLobbyRegionSelect_ReturnValue) == 0x000000, "Member 'WBP_RegionSelect_C_SetUpStandaloneNavigation::CallFunc_IsCustomLobbyRegionSelect_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RegionSelect_C_SetUpStandaloneNavigation, CallFunc_Array_Get_Item) == 0x000008, "Member 'WBP_RegionSelect_C_SetUpStandaloneNavigation::CallFunc_Array_Get_Item' has a wrong offset!");

}


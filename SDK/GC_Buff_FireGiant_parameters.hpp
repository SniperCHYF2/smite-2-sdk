﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Buff_FireGiant

#include "Basic.hpp"

#include "Hemingway_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GC_Buff_FireGiant.GC_Buff_FireGiant_C.ApplyMaterialToChildMeshes
// 0x0038 (0x0038 - 0x0000)
struct GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes final
{
public:
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumChildrenComponents_ReturnValue;     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_GetChildComponent_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHWSkeletalMeshComponent*               K2Node_DynamicCast_AsHWSkeletal_Mesh_Component;    // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHWMaterialOverlayHandle               CallFunc_AddOverlayMaterial_ReturnValue;           // 0x002C(0x0004)(NoDestructor)
	struct FHWMaterialOverlayHandle               CallFunc_Map_Find_Value;                           // 0x0030(0x0004)(NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOverlayMaterialActive_ReturnValue;      // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes) == 0x000008, "Wrong alignment on GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes");
static_assert(sizeof(GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes) == 0x000038, "Wrong size on GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes, Mesh) == 0x000000, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes::Mesh' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes, CallFunc_GetNumChildrenComponents_ReturnValue) == 0x000008, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes::CallFunc_GetNumChildrenComponents_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes, Temp_int_Variable) == 0x000010, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes, CallFunc_GetChildComponent_ReturnValue) == 0x000018, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes::CallFunc_GetChildComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes, K2Node_DynamicCast_AsHWSkeletal_Mesh_Component) == 0x000020, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes::K2Node_DynamicCast_AsHWSkeletal_Mesh_Component' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes, CallFunc_AddOverlayMaterial_ReturnValue) == 0x00002C, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes::CallFunc_AddOverlayMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes, CallFunc_Map_Find_Value) == 0x000030, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes, CallFunc_Map_Find_ReturnValue) == 0x000034, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes, CallFunc_IsOverlayMaterialActive_ReturnValue) == 0x000035, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes::CallFunc_IsOverlayMaterialActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000036, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes, CallFunc_Not_PreBool_ReturnValue) == 0x000037, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToChildMeshes::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function GC_Buff_FireGiant.GC_Buff_FireGiant_C.ApplyMaterialToMesh
// 0x0020 (0x0020 - 0x0000)
struct GC_Buff_FireGiant_C_ApplyMaterialToMesh final
{
public:
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHWSkeletalMeshComponent*               K2Node_DynamicCast_AsHWSkeletal_Mesh_Component;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHWMaterialOverlayHandle               CallFunc_AddOverlayMaterial_ReturnValue;           // 0x0014(0x0004)(NoDestructor)
	bool                                          CallFunc_IsOverlayMaterialActive_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_Buff_FireGiant_C_ApplyMaterialToMesh) == 0x000008, "Wrong alignment on GC_Buff_FireGiant_C_ApplyMaterialToMesh");
static_assert(sizeof(GC_Buff_FireGiant_C_ApplyMaterialToMesh) == 0x000020, "Wrong size on GC_Buff_FireGiant_C_ApplyMaterialToMesh");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToMesh, Mesh) == 0x000000, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToMesh::Mesh' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToMesh, K2Node_DynamicCast_AsHWSkeletal_Mesh_Component) == 0x000008, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToMesh::K2Node_DynamicCast_AsHWSkeletal_Mesh_Component' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToMesh, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToMesh::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToMesh, CallFunc_AddOverlayMaterial_ReturnValue) == 0x000014, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToMesh::CallFunc_AddOverlayMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToMesh, CallFunc_IsOverlayMaterialActive_ReturnValue) == 0x000018, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToMesh::CallFunc_IsOverlayMaterialActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ApplyMaterialToMesh, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'GC_Buff_FireGiant_C_ApplyMaterialToMesh::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function GC_Buff_FireGiant.GC_Buff_FireGiant_C.ExecuteUbergraph_GC_Buff_FireGiant
// 0x0110 (0x0110 - 0x0000)
struct GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             K2Node_Event_EventType;                            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0018(0x00D8)(ConstParm, ContainsInstancedReference)
	class AHWCharacter_Base*                      K2Node_DynamicCast_AsHWCharacter_Base;             // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FA[0x6];                                       // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWCharacter_Base*                      K2Node_DynamicCast_AsHWCharacter_Base_1;           // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant) == 0x000008, "Wrong alignment on GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant");
static_assert(sizeof(GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant) == 0x000110, "Wrong size on GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant");
static_assert(offsetof(GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant, EntryPoint) == 0x000000, "Member 'GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant::EntryPoint' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant, K2Node_Event_MyTarget) == 0x000008, "Member 'GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant, K2Node_Event_EventType) == 0x000010, "Member 'GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant::K2Node_Event_EventType' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant, K2Node_Event_Parameters) == 0x000018, "Member 'GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant, K2Node_DynamicCast_AsHWCharacter_Base) == 0x0000F0, "Member 'GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant::K2Node_DynamicCast_AsHWCharacter_Base' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant, K2Node_SwitchEnum_CmpSuccess) == 0x0000F9, "Member 'GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant, K2Node_DynamicCast_AsHWCharacter_Base_1) == 0x000100, "Member 'GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant::K2Node_DynamicCast_AsHWCharacter_Base_1' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant, K2Node_DynamicCast_bSuccess_1) == 0x000108, "Member 'GC_Buff_FireGiant_C_ExecuteUbergraph_GC_Buff_FireGiant::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function GC_Buff_FireGiant.GC_Buff_FireGiant_C.K2_HandleGameplayCue
// 0x00E8 (0x00E8 - 0x0000)
struct GC_Buff_FireGiant_C_K2_HandleGameplayCue final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             EventType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 Parameters;                                        // 0x0010(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GC_Buff_FireGiant_C_K2_HandleGameplayCue) == 0x000008, "Wrong alignment on GC_Buff_FireGiant_C_K2_HandleGameplayCue");
static_assert(sizeof(GC_Buff_FireGiant_C_K2_HandleGameplayCue) == 0x0000E8, "Wrong size on GC_Buff_FireGiant_C_K2_HandleGameplayCue");
static_assert(offsetof(GC_Buff_FireGiant_C_K2_HandleGameplayCue, MyTarget) == 0x000000, "Member 'GC_Buff_FireGiant_C_K2_HandleGameplayCue::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_K2_HandleGameplayCue, EventType) == 0x000008, "Member 'GC_Buff_FireGiant_C_K2_HandleGameplayCue::EventType' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_K2_HandleGameplayCue, Parameters) == 0x000010, "Member 'GC_Buff_FireGiant_C_K2_HandleGameplayCue::Parameters' has a wrong offset!");

// Function GC_Buff_FireGiant.GC_Buff_FireGiant_C.RemoveMaterialFromMesh
// 0x0050 (0x0050 - 0x0000)
struct GC_Buff_FireGiant_C_RemoveMaterialFromMesh final
{
public:
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHWSkeletalMeshComponent*               K2Node_DynamicCast_AsHWSkeletal_Mesh_Component;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UHWSkeletalMeshComponent*>       CallFunc_Map_Keys_Keys;                            // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UHWSkeletalMeshComponent*               CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHWMaterialOverlayHandle               CallFunc_Map_Find_Value;                           // 0x003C(0x0004)(NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_Buff_FireGiant_C_RemoveMaterialFromMesh) == 0x000008, "Wrong alignment on GC_Buff_FireGiant_C_RemoveMaterialFromMesh");
static_assert(sizeof(GC_Buff_FireGiant_C_RemoveMaterialFromMesh) == 0x000050, "Wrong size on GC_Buff_FireGiant_C_RemoveMaterialFromMesh");
static_assert(offsetof(GC_Buff_FireGiant_C_RemoveMaterialFromMesh, Mesh) == 0x000000, "Member 'GC_Buff_FireGiant_C_RemoveMaterialFromMesh::Mesh' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_RemoveMaterialFromMesh, K2Node_DynamicCast_AsHWSkeletal_Mesh_Component) == 0x000008, "Member 'GC_Buff_FireGiant_C_RemoveMaterialFromMesh::K2Node_DynamicCast_AsHWSkeletal_Mesh_Component' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_RemoveMaterialFromMesh, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'GC_Buff_FireGiant_C_RemoveMaterialFromMesh::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_RemoveMaterialFromMesh, Temp_int_Array_Index_Variable) == 0x000014, "Member 'GC_Buff_FireGiant_C_RemoveMaterialFromMesh::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_RemoveMaterialFromMesh, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'GC_Buff_FireGiant_C_RemoveMaterialFromMesh::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_RemoveMaterialFromMesh, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'GC_Buff_FireGiant_C_RemoveMaterialFromMesh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_RemoveMaterialFromMesh, CallFunc_Map_Keys_Keys) == 0x000020, "Member 'GC_Buff_FireGiant_C_RemoveMaterialFromMesh::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_RemoveMaterialFromMesh, CallFunc_Array_Get_Item) == 0x000030, "Member 'GC_Buff_FireGiant_C_RemoveMaterialFromMesh::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_RemoveMaterialFromMesh, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'GC_Buff_FireGiant_C_RemoveMaterialFromMesh::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_RemoveMaterialFromMesh, CallFunc_Map_Find_Value) == 0x00003C, "Member 'GC_Buff_FireGiant_C_RemoveMaterialFromMesh::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_RemoveMaterialFromMesh, CallFunc_Map_Find_ReturnValue) == 0x000040, "Member 'GC_Buff_FireGiant_C_RemoveMaterialFromMesh::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_RemoveMaterialFromMesh, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'GC_Buff_FireGiant_C_RemoveMaterialFromMesh::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Buff_FireGiant_C_RemoveMaterialFromMesh, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'GC_Buff_FireGiant_C_RemoveMaterialFromMesh::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}


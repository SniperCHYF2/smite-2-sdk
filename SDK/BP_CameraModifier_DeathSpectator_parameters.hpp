﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CameraModifier_DeathSpectator

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_CameraModifier_DeathSpectator.BP_CameraModifier_DeathSpectator_C.BlueprintModifyCamera
// 0x0288 (0x0288 - 0x0000)
struct BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ViewLocation;                                      // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ViewRotation;                                      // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         FOV;                                               // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                NewViewLocation;                                   // 0x0040(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               NewViewRotation;                                   // 0x0058(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         NewFOV;                                            // 0x0070(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ViewTargetChanged;                                 // 0x0074(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MinZLocation;                                      // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               DesiredRotation;                                   // 0x0080(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                DesiredCamLoc;                                     // 0x0098(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCapsuleHalfHeight_ReturnValue;         // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHWCharacter_Base*                      K2Node_DynamicCast_AsHWCharacter_Base;             // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X;                            // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHWCharacter_PlayableCharacter*         K2Node_DynamicCast_AsHWCharacter_Playable_Character; // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue_1;   // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue;           // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue_1;         // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue_2;   // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue_2;         // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_RotatorRotator_ReturnValue;      // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0193(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194[0x4];                                      // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetCamLocationOffset_OutLocationOffset;   // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_ConstrainCameraLocation_ReturnValue;      // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_229[0x7];                                      // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0230(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0260(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ConstrainCameraLocation_ProbeSize_ImplicitCast; // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera) == 0x000008, "Wrong alignment on BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera");
static_assert(sizeof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera) == 0x000288, "Wrong size on BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, DeltaTime) == 0x000000, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, ViewLocation) == 0x000008, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::ViewLocation' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, ViewRotation) == 0x000020, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::ViewRotation' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, FOV) == 0x000038, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::FOV' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, NewViewLocation) == 0x000040, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::NewViewLocation' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, NewViewRotation) == 0x000058, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::NewViewRotation' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, NewFOV) == 0x000070, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::NewFOV' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, ViewTargetChanged) == 0x000074, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::ViewTargetChanged' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, MinZLocation) == 0x000078, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::MinZLocation' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, DesiredRotation) == 0x000080, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::DesiredRotation' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, DesiredCamLoc) == 0x000098, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::DesiredCamLoc' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_GetCapsuleHalfHeight_ReturnValue) == 0x0000B0, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_GetCapsuleHalfHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_GetViewTarget_ReturnValue) == 0x0000B8, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0000C0, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, K2Node_DynamicCast_AsHWCharacter_Base) == 0x0000D8, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::K2Node_DynamicCast_AsHWCharacter_Base' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_BreakVector_X) == 0x0000E8, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_BreakVector_Y) == 0x0000F0, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_BreakVector_Z) == 0x0000F8, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000100, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, K2Node_DynamicCast_AsHWCharacter_Playable_Character) == 0x000108, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::K2Node_DynamicCast_AsHWCharacter_Playable_Character' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, K2Node_DynamicCast_bSuccess_1) == 0x000110, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_MakeVector_ReturnValue) == 0x000118, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000130, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_GetLocalPlayerController_ReturnValue_1) == 0x000138, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_GetLocalPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_GetControlRotation_ReturnValue) == 0x000140, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_GetControlRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_GetControlRotation_ReturnValue_1) == 0x000158, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_GetControlRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_GetLocalPlayerController_ReturnValue_2) == 0x000170, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_GetLocalPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_GetControlRotation_ReturnValue_2) == 0x000178, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_GetControlRotation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000190, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_NotEqual_RotatorRotator_ReturnValue) == 0x000191, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_NotEqual_RotatorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_BooleanOR_ReturnValue) == 0x000192, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_IsValid_ReturnValue) == 0x000193, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_GetCamLocationOffset_OutLocationOffset) == 0x000198, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_GetCamLocationOffset_OutLocationOffset' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_BreakVector_X_1) == 0x0001B0, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_BreakVector_Y_1) == 0x0001B8, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_BreakVector_Z_1) == 0x0001C0, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_MakeVector_ReturnValue_1) == 0x0001C8, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_GetSocketLocation_ReturnValue) == 0x0001E0, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_Add_VectorVector_ReturnValue) == 0x0001F8, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_ConstrainCameraLocation_ReturnValue) == 0x000210, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_ConstrainCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_IsValid_ReturnValue_1) == 0x000228, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000230, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000248, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000260, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000278, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera, CallFunc_ConstrainCameraLocation_ProbeSize_ImplicitCast) == 0x000280, "Member 'BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera::CallFunc_ConstrainCameraLocation_ProbeSize_ImplicitCast' has a wrong offset!");

// Function BP_CameraModifier_DeathSpectator.BP_CameraModifier_DeathSpectator_C.GetCamLocationOffset
// 0x0148 (0x0148 - 0x0000)
struct BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset final
{
public:
	class AHWCharacter_Base*                      Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Camera_Rotation;                                   // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                OutLocationOffset;                                 // 0x0020(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkelMeshComp;                                      // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CamOffsetZ;                                        // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringComp;                                        // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CamDistance;                                       // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       CameraComp;                                        // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  Structure_Tag;                                     // 0x0060(0x0020)(Edit, BlueprintVisible)
	class USpringArmComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_IntToVector_ReturnValue;             // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_CamDistance_ImplicitCast;       // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset) == 0x000008, "Wrong alignment on BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset");
static_assert(sizeof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset) == 0x000148, "Wrong size on BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, Target) == 0x000000, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::Target' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, Camera_Rotation) == 0x000008, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::Camera_Rotation' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, OutLocationOffset) == 0x000020, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::OutLocationOffset' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, SkelMeshComp) == 0x000038, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::SkelMeshComp' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, CamOffsetZ) == 0x000040, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::CamOffsetZ' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, SpringComp) == 0x000048, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::SpringComp' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, CamDistance) == 0x000050, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::CamDistance' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, CameraComp) == 0x000058, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::CameraComp' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, Structure_Tag) == 0x000060, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::Structure_Tag' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, CallFunc_GetComponentByClass_ReturnValue) == 0x000080, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x000088, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x0000A0, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, Temp_bool_Variable) == 0x0000B8, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, CallFunc_SelectFloat_ReturnValue) == 0x0000C0, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000C8, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x0000D0, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x0000D8, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, CallFunc_Conv_IntToVector_ReturnValue) == 0x0000F0, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::CallFunc_Conv_IntToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, CallFunc_IsValid_ReturnValue) == 0x000108, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000110, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x000128, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset, K2Node_VariableSet_CamDistance_ImplicitCast) == 0x000140, "Member 'BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset::K2Node_VariableSet_CamDistance_ImplicitCast' has a wrong offset!");

}


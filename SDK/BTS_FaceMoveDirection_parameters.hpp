﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_FaceMoveDirection

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTS_FaceMoveDirection.BTS_FaceMoveDirection_C.ExecuteUbergraph_BTS_FaceMoveDirection
// 0x0108 (0x0108 - 0x0000)
struct BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController_2;                    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetBlackboardValueAsActor_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Normal2D_ReturnValue;              // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSizeXYSquared_ReturnValue;               // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController_1;                    // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection) == 0x000008, "Wrong alignment on BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection");
static_assert(sizeof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection) == 0x000108, "Wrong size on BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, EntryPoint) == 0x000000, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, K2Node_Event_OwnerController_2) == 0x000008, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::K2Node_Event_OwnerController_2' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, K2Node_Event_ControlledPawn_2) == 0x000010, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, CallFunc_GetBlackboardValueAsActor_ReturnValue) == 0x000020, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::CallFunc_GetBlackboardValueAsActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000048, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, CallFunc_GetVelocity_ReturnValue) == 0x000060, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, CallFunc_Vector_Normal2D_ReturnValue) == 0x000078, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::CallFunc_Vector_Normal2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, CallFunc_VSizeXYSquared_ReturnValue) == 0x000090, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::CallFunc_VSizeXYSquared_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000098, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000B0, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000B8, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, CallFunc_Add_VectorVector_ReturnValue) == 0x0000D0, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, K2Node_Event_OwnerController_1) == 0x0000E8, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::K2Node_Event_OwnerController_1' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, K2Node_Event_ControlledPawn_1) == 0x0000F0, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, K2Node_Event_OwnerController) == 0x0000F8, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection, K2Node_Event_ControlledPawn) == 0x000100, "Member 'BTS_FaceMoveDirection_C_ExecuteUbergraph_BTS_FaceMoveDirection::K2Node_Event_ControlledPawn' has a wrong offset!");

// Function BTS_FaceMoveDirection.BTS_FaceMoveDirection_C.ReceiveActivationAI
// 0x0010 (0x0010 - 0x0000)
struct BTS_FaceMoveDirection_C_ReceiveActivationAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_FaceMoveDirection_C_ReceiveActivationAI) == 0x000008, "Wrong alignment on BTS_FaceMoveDirection_C_ReceiveActivationAI");
static_assert(sizeof(BTS_FaceMoveDirection_C_ReceiveActivationAI) == 0x000010, "Wrong size on BTS_FaceMoveDirection_C_ReceiveActivationAI");
static_assert(offsetof(BTS_FaceMoveDirection_C_ReceiveActivationAI, OwnerController) == 0x000000, "Member 'BTS_FaceMoveDirection_C_ReceiveActivationAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ReceiveActivationAI, ControlledPawn) == 0x000008, "Member 'BTS_FaceMoveDirection_C_ReceiveActivationAI::ControlledPawn' has a wrong offset!");

// Function BTS_FaceMoveDirection.BTS_FaceMoveDirection_C.ReceiveDeactivationAI
// 0x0010 (0x0010 - 0x0000)
struct BTS_FaceMoveDirection_C_ReceiveDeactivationAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_FaceMoveDirection_C_ReceiveDeactivationAI) == 0x000008, "Wrong alignment on BTS_FaceMoveDirection_C_ReceiveDeactivationAI");
static_assert(sizeof(BTS_FaceMoveDirection_C_ReceiveDeactivationAI) == 0x000010, "Wrong size on BTS_FaceMoveDirection_C_ReceiveDeactivationAI");
static_assert(offsetof(BTS_FaceMoveDirection_C_ReceiveDeactivationAI, OwnerController) == 0x000000, "Member 'BTS_FaceMoveDirection_C_ReceiveDeactivationAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ReceiveDeactivationAI, ControlledPawn) == 0x000008, "Member 'BTS_FaceMoveDirection_C_ReceiveDeactivationAI::ControlledPawn' has a wrong offset!");

// Function BTS_FaceMoveDirection.BTS_FaceMoveDirection_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct BTS_FaceMoveDirection_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_FaceMoveDirection_C_ReceiveTickAI) == 0x000008, "Wrong alignment on BTS_FaceMoveDirection_C_ReceiveTickAI");
static_assert(sizeof(BTS_FaceMoveDirection_C_ReceiveTickAI) == 0x000018, "Wrong size on BTS_FaceMoveDirection_C_ReceiveTickAI");
static_assert(offsetof(BTS_FaceMoveDirection_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'BTS_FaceMoveDirection_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'BTS_FaceMoveDirection_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_FaceMoveDirection_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'BTS_FaceMoveDirection_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

}


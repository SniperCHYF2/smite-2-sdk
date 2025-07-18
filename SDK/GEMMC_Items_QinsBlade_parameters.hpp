﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GEMMC_Items_QinsBlade

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GEMMC_Items_QinsBlade.GEMMC_Items_QinsBlade_C.CalculateBaseMagnitude
// 0x0340 (0x0340 - 0x0000)
struct GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude final
{
public:
	struct FGameplayEffectSpec                    Spec;                                              // 0x0000(0x02A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                         ReturnValue;                                       // 0x02A8(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetMaxHealth;                                   // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SourceMaxHealth;                                   // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B4[0x4];                                      // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_GetTargetSpecTags_ReturnValue;            // 0x02C0(0x0020)(ConstParm)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_GetCapturedAttributeMagnitude_ReturnValue; // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_GetGameplayEffectContext_ReturnValue;     // 0x0300(0x0018)()
	class AActor*                                 CallFunc_EffectContextGetInstigatorActor_ReturnValue; // 0x0318(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_321[0x3];                                      // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttribute_ReturnValue;            // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32C[0x4];                                      // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude) == 0x000008, "Wrong alignment on GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude");
static_assert(sizeof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude) == 0x000340, "Wrong size on GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude");
static_assert(offsetof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude, Spec) == 0x000000, "Member 'GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude::Spec' has a wrong offset!");
static_assert(offsetof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude, ReturnValue) == 0x0002A8, "Member 'GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude::ReturnValue' has a wrong offset!");
static_assert(offsetof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude, TargetMaxHealth) == 0x0002AC, "Member 'GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude::TargetMaxHealth' has a wrong offset!");
static_assert(offsetof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude, SourceMaxHealth) == 0x0002B0, "Member 'GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude::SourceMaxHealth' has a wrong offset!");
static_assert(offsetof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0002B8, "Member 'GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude, CallFunc_GetTargetSpecTags_ReturnValue) == 0x0002C0, "Member 'GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude::CallFunc_GetTargetSpecTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude, CallFunc_FMax_ReturnValue) == 0x0002E0, "Member 'GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude, CallFunc_K2_GetCapturedAttributeMagnitude_ReturnValue) == 0x0002E8, "Member 'GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude::CallFunc_K2_GetCapturedAttributeMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0002F0, "Member 'GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0002F8, "Member 'GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude, CallFunc_GetGameplayEffectContext_ReturnValue) == 0x000300, "Member 'GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude::CallFunc_GetGameplayEffectContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude, CallFunc_EffectContextGetInstigatorActor_ReturnValue) == 0x000318, "Member 'GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude::CallFunc_EffectContextGetInstigatorActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000320, "Member 'GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude, CallFunc_GetFloatAttribute_ReturnValue) == 0x000324, "Member 'GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude, K2Node_FunctionResult_ReturnValue_ImplicitCast) == 0x000328, "Member 'GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude::K2Node_FunctionResult_ReturnValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000330, "Member 'GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000338, "Member 'GEMMC_Items_QinsBlade_C_CalculateBaseMagnitude::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}


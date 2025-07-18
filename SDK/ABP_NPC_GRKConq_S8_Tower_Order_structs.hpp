﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_NPC_GRKConq_S8_Tower_Order

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_NPC_GRKConq_S8_Tower_Order.ABP_NPC_GRKConq_S8_Tower_Order_C.AnimBlueprintGeneratedConstantData
// 0x0107 (0x0108 - 0x0001)
struct ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_19;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_20;                                 // 0x000C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_21;                                // 0x0010(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_22;                               // 0x0014(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_23;                                // 0x0040(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_24;                                 // 0x0044(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_25;                                 // 0x0045(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_26;                                 // 0x0046(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47[0x1];                                       // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_27;                                 // 0x0048(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_28;                               // 0x0050(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0070(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00F0(0x0018)()
};
static_assert(alignof(ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData) == 0x000108, "Wrong size on ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData, __NameProperty_19) == 0x000004, "Member 'ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData::__NameProperty_19' has a wrong offset!");
static_assert(offsetof(ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData, __BoolProperty_20) == 0x00000C, "Member 'ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData::__BoolProperty_20' has a wrong offset!");
static_assert(offsetof(ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData, __FloatProperty_21) == 0x000010, "Member 'ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData::__FloatProperty_21' has a wrong offset!");
static_assert(offsetof(ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData, __StructProperty_22) == 0x000014, "Member 'ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData::__StructProperty_22' has a wrong offset!");
static_assert(offsetof(ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData, __FloatProperty_23) == 0x000040, "Member 'ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData::__FloatProperty_23' has a wrong offset!");
static_assert(offsetof(ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData, __BoolProperty_24) == 0x000044, "Member 'ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData::__BoolProperty_24' has a wrong offset!");
static_assert(offsetof(ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData, __EnumProperty_25) == 0x000045, "Member 'ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData::__EnumProperty_25' has a wrong offset!");
static_assert(offsetof(ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData, __ByteProperty_26) == 0x000046, "Member 'ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData::__ByteProperty_26' has a wrong offset!");
static_assert(offsetof(ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData, __NameProperty_27) == 0x000048, "Member 'ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData::__NameProperty_27' has a wrong offset!");
static_assert(offsetof(ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData, __StructProperty_28) == 0x000050, "Member 'ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData::__StructProperty_28' has a wrong offset!");
static_assert(offsetof(ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000070, "Member 'ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000F0, "Member 'ABP_NPC_GRKConq_S8_Tower_Order::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}


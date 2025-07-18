﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_GOD_Cernunnos_Boar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_GOD_Cernunnos_Boar.ABP_GOD_Cernunnos_Boar_C.AnimBlueprintGeneratedConstantData
// 0x016F (0x0170 - 0x0001)
struct ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_122;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_123;                               // 0x0010(0x0010)(BlueprintVisible, EditFixedSize)
	TArray<int32>                                 __ArrayProperty_124;                               // 0x0020(0x0010)(BlueprintVisible)
	class FName                                   __NameProperty_125;                                // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_126;                                 // 0x0038(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_127;                                // 0x003C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_128;                               // 0x0040(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_129;                              // 0x0044(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_130;                               // 0x0070(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_131;                                // 0x0074(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_132;                                // 0x0075(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76[0x2];                                       // 0x0076(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_133;                                // 0x0078(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_134;                                // 0x0080(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_135;                                 // 0x0088(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_136;                              // 0x0090(0x0020)(BlueprintVisible, NoDestructor)
	class UBlendProfile*                          __BlendProfile_137;                                // 0x00B0(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_138;                                  // 0x00B8(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_139;                                // 0x00C0(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_140;                                // 0x00C1(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_141;                                // 0x00C2(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C3[0x5];                                       // 0x00C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_142;                               // 0x00C8(0x0010)(BlueprintVisible, EditFixedSize)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00D8(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0158(0x0018)()
};
static_assert(alignof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData) == 0x000170, "Wrong size on ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __NameProperty_122) == 0x000004, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__NameProperty_122' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __ArrayProperty_123) == 0x000010, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__ArrayProperty_123' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __ArrayProperty_124) == 0x000020, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__ArrayProperty_124' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __NameProperty_125) == 0x000030, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__NameProperty_125' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __IntProperty_126) == 0x000038, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__IntProperty_126' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __BoolProperty_127) == 0x00003C, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__BoolProperty_127' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __FloatProperty_128) == 0x000040, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__FloatProperty_128' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __StructProperty_129) == 0x000044, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__StructProperty_129' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __FloatProperty_130) == 0x000070, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__FloatProperty_130' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __EnumProperty_131) == 0x000074, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__EnumProperty_131' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __ByteProperty_132) == 0x000075, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__ByteProperty_132' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __NameProperty_133) == 0x000078, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__NameProperty_133' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __NameProperty_134) == 0x000080, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__NameProperty_134' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __IntProperty_135) == 0x000088, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__IntProperty_135' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __StructProperty_136) == 0x000090, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__StructProperty_136' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __BlendProfile_137) == 0x0000B0, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__BlendProfile_137' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __CurveFloat_138) == 0x0000B8, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__CurveFloat_138' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __BoolProperty_139) == 0x0000C0, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__BoolProperty_139' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __EnumProperty_140) == 0x0000C1, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__EnumProperty_140' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __EnumProperty_141) == 0x0000C2, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__EnumProperty_141' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, __ArrayProperty_142) == 0x0000C8, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::__ArrayProperty_142' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000D8, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000158, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_GOD_Cernunnos_Boar.ABP_GOD_Cernunnos_Boar_C.AnimBlueprintGeneratedMutableData
// 0x000B (0x000C - 0x0001)
struct ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_0;                                 // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         __ByteProperty_1;                                  // 0x0008(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_2;                                  // 0x0009(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedMutableData) == 0x00000C, "Wrong size on ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedMutableData, __FloatProperty_0) == 0x000004, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedMutableData::__FloatProperty_0' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedMutableData, __ByteProperty_1) == 0x000008, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedMutableData::__ByteProperty_1' has a wrong offset!");
static_assert(offsetof(ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedMutableData, __BoolProperty_2) == 0x000009, "Member 'ABP_GOD_Cernunnos_Boar::FAnimBlueprintGeneratedMutableData::__BoolProperty_2' has a wrong offset!");

}


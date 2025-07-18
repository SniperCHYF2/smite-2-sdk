﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_NPC_Phoenix

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ABP_NPC_Phoenix_structs.hpp"
#include "Hemingway_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "SkinnableAnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_NPC_Phoenix.ABP_NPC_Phoenix_C
// 0x0C00 (0x11E0 - 0x05E0)
class UABP_NPC_Phoenix_C final : public UHWCharacter_AnimInstNPC
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_NPC_Phoenix::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;              // 0x05E8(0x0002)(HasGetValueTypeHash)
	uint8                                         Pad_5EA[0x6];                                      // 0x05EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x05F0(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x05F8(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0600(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0628(0x0050)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0678(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x06A8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x06D8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0708(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0738(0x0050)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x0788(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x07B0(0x0050)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x0800(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0828(0x0030)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer;                        // 0x0858(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x08D8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0900(0x0050)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0950(0x0028)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x0978(0x00D0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0A48(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0A70(0x0050)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0AC0(0x0028)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0AE8(0x00D0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0BB8(0x0028)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0BE0(0x00D0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0CB0(0x0130)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0DE0(0x0028)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0E08(0x0028)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0E30(0x0130)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x0F60(0x0050)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0FB0(0x0050)()
	struct FAnimNode_SequenceSkinned              AnimGraphNode_SequenceSkinned;                     // 0x1000(0x0180)()
	class ABP_NPC_Tower_C*                        OwnerTower;                                        // 0x1180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               StartRotation;                                     // 0x1188(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               EnemyLookAtRotation;                               // 0x11A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Rotation;                                          // 0x11B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                        RootScale;                                         // 0x11D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Interp_Speed;                                      // 0x11D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AnimNotify_OnDeath();
	void BlueprintBeginPlay();
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Phoenix_AnimGraphNode_TransitionResult_28F6BFC44CAED37502A4B9BCCC77D745();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Phoenix_AnimGraphNode_TransitionResult_4FD6A52E4B6222373B7F6B859BFF698A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Phoenix_AnimGraphNode_TransitionResult_636C22DA4A12983CECF1139C32338F88();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Phoenix_AnimGraphNode_TransitionResult_726C1C24495FC10DD121C5A1F75531BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Phoenix_AnimGraphNode_TransitionResult_C98BBE4D4699199ED133FEBBA757418E();
	void ExecuteUbergraph_ABP_NPC_Phoenix(int32 EntryPoint);
	void NewFunction();
	void UpdateSmoothRotation(double Delta);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_NPC_Phoenix_C">();
	}
	static class UABP_NPC_Phoenix_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_NPC_Phoenix_C>();
	}
};
static_assert(alignof(UABP_NPC_Phoenix_C) == 0x000010, "Wrong alignment on UABP_NPC_Phoenix_C");
static_assert(sizeof(UABP_NPC_Phoenix_C) == 0x0011E0, "Wrong size on UABP_NPC_Phoenix_C");
static_assert(offsetof(UABP_NPC_Phoenix_C, UberGraphFrame) == 0x0005E0, "Member 'UABP_NPC_Phoenix_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, __AnimBlueprintMutables) == 0x0005E8, "Member 'UABP_NPC_Phoenix_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimBlueprintExtension_PropertyAccess) == 0x0005F0, "Member 'UABP_NPC_Phoenix_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimBlueprintExtension_Base) == 0x0005F8, "Member 'UABP_NPC_Phoenix_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_Root) == 0x000600, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_Slot) == 0x000628, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_TransitionResult_4) == 0x000678, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_TransitionResult_3) == 0x0006A8, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_TransitionResult_2) == 0x0006D8, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_TransitionResult_1) == 0x000708, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_SequencePlayer_4) == 0x000738, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_StateResult_6) == 0x000788, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_SequencePlayer_3) == 0x0007B0, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_StateResult_5) == 0x000800, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_TransitionResult) == 0x000828, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_RandomPlayer) == 0x000858, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_RandomPlayer' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_StateResult_4) == 0x0008D8, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_SequencePlayer_2) == 0x000900, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_StateResult_3) == 0x000950, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_StateMachine_2) == 0x000978, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_StateResult_2) == 0x000A48, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_SequencePlayer_1) == 0x000A70, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_StateResult_1) == 0x000AC0, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_StateMachine_1) == 0x000AE8, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_StateResult) == 0x000BB8, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_StateMachine) == 0x000BE0, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_ModifyBone_1) == 0x000CB0, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_ComponentToLocalSpace) == 0x000DE0, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_LocalToComponentSpace) == 0x000E08, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_ModifyBone) == 0x000E30, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_BlendListByEnum) == 0x000F60, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_SequencePlayer) == 0x000FB0, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, AnimGraphNode_SequenceSkinned) == 0x001000, "Member 'UABP_NPC_Phoenix_C::AnimGraphNode_SequenceSkinned' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, OwnerTower) == 0x001180, "Member 'UABP_NPC_Phoenix_C::OwnerTower' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, StartRotation) == 0x001188, "Member 'UABP_NPC_Phoenix_C::StartRotation' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, EnemyLookAtRotation) == 0x0011A0, "Member 'UABP_NPC_Phoenix_C::EnemyLookAtRotation' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, Rotation) == 0x0011B8, "Member 'UABP_NPC_Phoenix_C::Rotation' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, RootScale) == 0x0011D0, "Member 'UABP_NPC_Phoenix_C::RootScale' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Phoenix_C, Interp_Speed) == 0x0011D8, "Member 'UABP_NPC_Phoenix_C::Interp_Speed' has a wrong offset!");

}


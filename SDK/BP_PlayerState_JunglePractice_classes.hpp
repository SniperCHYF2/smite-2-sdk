﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerState_JunglePractice

#include "Basic.hpp"

#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerState_JunglePractice.BP_PlayerState_JunglePractice_C
// 0x0010 (0x0628 - 0x0618)
class ABP_PlayerState_JunglePractice_C final : public AHWPlayerState
{
public:
	class UBP_TrainingMenu_Component_C*           BP_TrainingMenu_Component;                         // 0x0618(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0620(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerState_JunglePractice_C">();
	}
	static class ABP_PlayerState_JunglePractice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerState_JunglePractice_C>();
	}
};
static_assert(alignof(ABP_PlayerState_JunglePractice_C) == 0x000008, "Wrong alignment on ABP_PlayerState_JunglePractice_C");
static_assert(sizeof(ABP_PlayerState_JunglePractice_C) == 0x000628, "Wrong size on ABP_PlayerState_JunglePractice_C");
static_assert(offsetof(ABP_PlayerState_JunglePractice_C, BP_TrainingMenu_Component) == 0x000618, "Member 'ABP_PlayerState_JunglePractice_C::BP_TrainingMenu_Component' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_JunglePractice_C, DefaultSceneRoot) == 0x000620, "Member 'ABP_PlayerState_JunglePractice_C::DefaultSceneRoot' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIGoal_Play_JungleBoss_AttackTarget

#include "Basic.hpp"

#include "BP_AIGoal_Play_JungleBoss_AttackTarget_classes.hpp"
#include "BP_AIGoal_Play_JungleBoss_AttackTarget_parameters.hpp"


namespace SDK
{

// Function BP_AIGoal_Play_JungleBoss_AttackTarget.BP_AIGoal_Play_JungleBoss_AttackTarget_C.CheckPreconditionsBP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHWAIController*                  InController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AIGoal_Play_JungleBoss_AttackTarget_C::CheckPreconditionsBP(class AHWAIController* InController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_Play_JungleBoss_AttackTarget_C", "CheckPreconditionsBP");

	Params::BP_AIGoal_Play_JungleBoss_AttackTarget_C_CheckPreconditionsBP Parms{};

	Parms.InController = InController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AIGoal_Play_JungleBoss_AttackTarget.BP_AIGoal_Play_JungleBoss_AttackTarget_C.EndGoalBP
// (Event, Protected, BlueprintEvent)

void UBP_AIGoal_Play_JungleBoss_AttackTarget_C::EndGoalBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_Play_JungleBoss_AttackTarget_C", "EndGoalBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIGoal_Play_JungleBoss_AttackTarget.BP_AIGoal_Play_JungleBoss_AttackTarget_C.ExecuteUbergraph_BP_AIGoal_Play_JungleBoss_AttackTarget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIGoal_Play_JungleBoss_AttackTarget_C::ExecuteUbergraph_BP_AIGoal_Play_JungleBoss_AttackTarget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_Play_JungleBoss_AttackTarget_C", "ExecuteUbergraph_BP_AIGoal_Play_JungleBoss_AttackTarget");

	Params::BP_AIGoal_Play_JungleBoss_AttackTarget_C_ExecuteUbergraph_BP_AIGoal_Play_JungleBoss_AttackTarget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIGoal_Play_JungleBoss_AttackTarget.BP_AIGoal_Play_JungleBoss_AttackTarget_C.IsBossBeingTanked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InPlayActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHWCharacter_Base*                InCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool*                                   IsTanked                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIGoal_Play_JungleBoss_AttackTarget_C::IsBossBeingTanked(class AActor* InPlayActor, class AHWCharacter_Base* InCharacter, bool* IsTanked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_Play_JungleBoss_AttackTarget_C", "IsBossBeingTanked");

	Params::BP_AIGoal_Play_JungleBoss_AttackTarget_C_IsBossBeingTanked Parms{};

	Parms.InPlayActor = InPlayActor;
	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (IsTanked != nullptr)
		*IsTanked = Parms.IsTanked;
}


// Function BP_AIGoal_Play_JungleBoss_AttackTarget.BP_AIGoal_Play_JungleBoss_AttackTarget_C.StartGoalBP
// (Event, Protected, BlueprintEvent)

void UBP_AIGoal_Play_JungleBoss_AttackTarget_C::StartGoalBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_Play_JungleBoss_AttackTarget_C", "StartGoalBP");

	UObject::ProcessEvent(Func, nullptr);
}

}


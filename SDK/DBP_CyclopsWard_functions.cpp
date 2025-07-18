﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DBP_CyclopsWard

#include "Basic.hpp"

#include "DBP_CyclopsWard_classes.hpp"
#include "DBP_CyclopsWard_parameters.hpp"


namespace SDK
{

// Function DBP_CyclopsWard.DBP_CyclopsWard_C.Die
// (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FDamageEventData&          DeathDamageReceivedEvent                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void ADBP_CyclopsWard_C::Die(const struct FDamageEventData& DeathDamageReceivedEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DBP_CyclopsWard_C", "Die");

	Params::DBP_CyclopsWard_C_Die Parms{};

	Parms.DeathDamageReceivedEvent = std::move(DeathDamageReceivedEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DBP_CyclopsWard.DBP_CyclopsWard_C.ExecuteUbergraph_DBP_CyclopsWard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADBP_CyclopsWard_C::ExecuteUbergraph_DBP_CyclopsWard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DBP_CyclopsWard_C", "ExecuteUbergraph_DBP_CyclopsWard");

	Params::DBP_CyclopsWard_C_ExecuteUbergraph_DBP_CyclopsWard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DBP_CyclopsWard.DBP_CyclopsWard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADBP_CyclopsWard_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DBP_CyclopsWard_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DBP_CyclopsWard.DBP_CyclopsWard_C.ReceiveDamageAsPip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTagContainer&     EffectTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FDamageCalcInfo&           DamageCalcInfo                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UHWAbilitySystemComponent*        BroadcastingAbilitySystemComponent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const EHWAdjustAttributeEventType       AdjustAttributeEventType                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const float                             BaseDamageValue                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADBP_CyclopsWard_C::ReceiveDamageAsPip(const struct FGameplayTagContainer& EffectTags, const struct FDamageCalcInfo& DamageCalcInfo, class UHWAbilitySystemComponent* BroadcastingAbilitySystemComponent, const EHWAdjustAttributeEventType AdjustAttributeEventType, const float BaseDamageValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DBP_CyclopsWard_C", "ReceiveDamageAsPip");

	Params::DBP_CyclopsWard_C_ReceiveDamageAsPip Parms{};

	Parms.EffectTags = std::move(EffectTags);
	Parms.DamageCalcInfo = std::move(DamageCalcInfo);
	Parms.BroadcastingAbilitySystemComponent = BroadcastingAbilitySystemComponent;
	Parms.AdjustAttributeEventType = AdjustAttributeEventType;
	Parms.BaseDamageValue = BaseDamageValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DBP_CyclopsWard.DBP_CyclopsWard_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADBP_CyclopsWard_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DBP_CyclopsWard_C", "ReceiveEndPlay");

	Params::DBP_CyclopsWard_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

}


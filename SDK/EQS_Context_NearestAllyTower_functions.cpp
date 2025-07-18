﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EQS_Context_NearestAllyTower

#include "Basic.hpp"

#include "EQS_Context_NearestAllyTower_classes.hpp"
#include "EQS_Context_NearestAllyTower_parameters.hpp"


namespace SDK
{

// Function EQS_Context_NearestAllyTower.EQS_Context_NearestAllyTower_C.ProvideSingleActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                          QuerierObject                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           QuerierActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor**                          ResultingActor                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UEQS_Context_NearestAllyTower_C::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EQS_Context_NearestAllyTower_C", "ProvideSingleActor");

	Params::EQS_Context_NearestAllyTower_C_ProvideSingleActor Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActor != nullptr)
		*ResultingActor = Parms.ResultingActor;
}

}


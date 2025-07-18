﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CameraModifier_DeathSpectator

#include "Basic.hpp"

#include "BP_CameraModifier_DeathSpectator_classes.hpp"
#include "BP_CameraModifier_DeathSpectator_parameters.hpp"


namespace SDK
{

// Function BP_CameraModifier_DeathSpectator.BP_CameraModifier_DeathSpectator_C.BlueprintModifyCamera
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   ViewLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FRotator&                  ViewRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   FOV                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                         NewViewLocation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator*                        NewViewRotation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float*                                  NewFOV                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CameraModifier_DeathSpectator_C::BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraModifier_DeathSpectator_C", "BlueprintModifyCamera");

	Params::BP_CameraModifier_DeathSpectator_C_BlueprintModifyCamera Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.ViewLocation = std::move(ViewLocation);
	Parms.ViewRotation = std::move(ViewRotation);
	Parms.FOV = FOV;

	UObject::ProcessEvent(Func, &Parms);

	if (NewViewLocation != nullptr)
		*NewViewLocation = std::move(Parms.NewViewLocation);

	if (NewViewRotation != nullptr)
		*NewViewRotation = std::move(Parms.NewViewRotation);

	if (NewFOV != nullptr)
		*NewFOV = Parms.NewFOV;
}


// Function BP_CameraModifier_DeathSpectator.BP_CameraModifier_DeathSpectator_C.GetCamLocationOffset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHWCharacter_Base*                Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FRotator&                  Camera_Rotation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector*                         OutLocationOffset                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CameraModifier_DeathSpectator_C::GetCamLocationOffset(class AHWCharacter_Base* Target, const struct FRotator& Camera_Rotation, struct FVector* OutLocationOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraModifier_DeathSpectator_C", "GetCamLocationOffset");

	Params::BP_CameraModifier_DeathSpectator_C_GetCamLocationOffset Parms{};

	Parms.Target = Target;
	Parms.Camera_Rotation = std::move(Camera_Rotation);

	UObject::ProcessEvent(Func, &Parms);

	if (OutLocationOffset != nullptr)
		*OutLocationOffset = std::move(Parms.OutLocationOffset);
}

}


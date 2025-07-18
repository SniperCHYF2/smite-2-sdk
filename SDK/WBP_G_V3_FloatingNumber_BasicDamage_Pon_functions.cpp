﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V3_FloatingNumber_BasicDamage_Pon

#include "Basic.hpp"

#include "WBP_G_V3_FloatingNumber_BasicDamage_Pon_classes.hpp"
#include "WBP_G_V3_FloatingNumber_BasicDamage_Pon_parameters.hpp"


namespace SDK
{

// Function WBP_G_V3_FloatingNumber_BasicDamage_Pon.WBP_G_V3_FloatingNumber_BasicDamage_Pon_C.AnimateNumber
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Number                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AActor*                           OwnerActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V3_FloatingNumber_BasicDamage_Pon_C::AnimateNumber(int32 Number, const struct FGameplayCueParameters& Parameters, class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V3_FloatingNumber_BasicDamage_Pon_C", "AnimateNumber");

	Params::WBP_G_V3_FloatingNumber_BasicDamage_Pon_C_AnimateNumber Parms{};

	Parms.Number = Number;
	Parms.Parameters = std::move(Parameters);
	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V3_FloatingNumber_BasicDamage_Pon.WBP_G_V3_FloatingNumber_BasicDamage_Pon_C.ApplyFontSize
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Size_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V3_FloatingNumber_BasicDamage_Pon_C::ApplyFontSize(int32 Size_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V3_FloatingNumber_BasicDamage_Pon_C", "ApplyFontSize");

	Params::WBP_G_V3_FloatingNumber_BasicDamage_Pon_C_ApplyFontSize Parms{};

	Parms.Size_0 = Size_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V3_FloatingNumber_BasicDamage_Pon.WBP_G_V3_FloatingNumber_BasicDamage_Pon_C.DetermineSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UWBP_G_V3_FloatingNumber_BasicDamage_Pon_C::DetermineSpeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V3_FloatingNumber_BasicDamage_Pon_C", "DetermineSpeed");

	Params::WBP_G_V3_FloatingNumber_BasicDamage_Pon_C_DetermineSpeed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_G_V3_FloatingNumber_BasicDamage_Pon.WBP_G_V3_FloatingNumber_BasicDamage_Pon_C.GetDamageTypeIcon
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters&          CueParameters                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UTexture2D**                      Texture                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V3_FloatingNumber_BasicDamage_Pon_C::GetDamageTypeIcon(struct FGameplayCueParameters& CueParameters, class UTexture2D** Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V3_FloatingNumber_BasicDamage_Pon_C", "GetDamageTypeIcon");

	Params::WBP_G_V3_FloatingNumber_BasicDamage_Pon_C_GetDamageTypeIcon Parms{};

	Parms.CueParameters = std::move(CueParameters);

	UObject::ProcessEvent(Func, &Parms);

	CueParameters = std::move(Parms.CueParameters);

	if (Texture != nullptr)
		*Texture = Parms.Texture;
}


// Function WBP_G_V3_FloatingNumber_BasicDamage_Pon.WBP_G_V3_FloatingNumber_BasicDamage_Pon_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_G_V3_FloatingNumber_BasicDamage_Pon_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V3_FloatingNumber_BasicDamage_Pon_C", "InitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V3_FloatingNumber_BasicDamage_Pon.WBP_G_V3_FloatingNumber_BasicDamage_Pon_C.OnShown
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_G_V3_FloatingNumber_BasicDamage_Pon_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V3_FloatingNumber_BasicDamage_Pon_C", "OnShown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V3_FloatingNumber_BasicDamage_Pon.WBP_G_V3_FloatingNumber_BasicDamage_Pon_C.SetDamageTypeColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              SpecifiedColor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V3_FloatingNumber_BasicDamage_Pon_C::SetDamageTypeColor(const struct FLinearColor& SpecifiedColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V3_FloatingNumber_BasicDamage_Pon_C", "SetDamageTypeColor");

	Params::WBP_G_V3_FloatingNumber_BasicDamage_Pon_C_SetDamageTypeColor Parms{};

	Parms.SpecifiedColor = std::move(SpecifiedColor);

	UObject::ProcessEvent(Func, &Parms);
}

}


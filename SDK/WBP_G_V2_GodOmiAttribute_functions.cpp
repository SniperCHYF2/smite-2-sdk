﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_GodOmiAttribute

#include "Basic.hpp"

#include "WBP_G_V2_GodOmiAttribute_classes.hpp"
#include "WBP_G_V2_GodOmiAttribute_parameters.hpp"


namespace SDK
{

// Function WBP_G_V2_GodOmiAttribute.WBP_G_V2_GodOmiAttribute_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_G_V2_GodOmiAttribute_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodOmiAttribute_C", "InitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_GodOmiAttribute.WBP_G_V2_GodOmiAttribute_C.OnAttributesTracked
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_G_V2_GodOmiAttribute_C::OnAttributesTracked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodOmiAttribute_C", "OnAttributesTracked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_GodOmiAttribute.WBP_G_V2_GodOmiAttribute_C.OnAttributesUntracked
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_G_V2_GodOmiAttribute_C::OnAttributesUntracked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodOmiAttribute_C", "OnAttributesUntracked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_GodOmiAttribute.WBP_G_V2_GodOmiAttribute_C.UpdateMaxOmi
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   OldMaxMana                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   NewMaxMana                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bShouldAnimate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodOmiAttribute_C::UpdateMaxOmi(float OldMaxMana, float NewMaxMana, bool bShouldAnimate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodOmiAttribute_C", "UpdateMaxOmi");

	Params::WBP_G_V2_GodOmiAttribute_C_UpdateMaxOmi Parms{};

	Parms.OldMaxMana = OldMaxMana;
	Parms.NewMaxMana = NewMaxMana;
	Parms.bShouldAnimate = bShouldAnimate;

	UObject::ProcessEvent(Func, &Parms);
}

}


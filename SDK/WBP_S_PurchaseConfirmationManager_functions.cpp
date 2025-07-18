﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_PurchaseConfirmationManager

#include "Basic.hpp"

#include "WBP_S_PurchaseConfirmationManager_classes.hpp"
#include "WBP_S_PurchaseConfirmationManager_parameters.hpp"


namespace SDK
{

// Function WBP_S_PurchaseConfirmationManager.WBP_S_PurchaseConfirmationManager_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_S_PurchaseConfirmationManager_C::BP_OnHandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_PurchaseConfirmationManager_C", "BP_OnHandleBackAction");

	Params::WBP_S_PurchaseConfirmationManager_C_BP_OnHandleBackAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_S_PurchaseConfirmationManager.WBP_S_PurchaseConfirmationManager_C.DisplayPurchaseWidget
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHWPurchaseConfirmWidget*         PurchaseWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_S_PurchaseConfirmationManager_C::DisplayPurchaseWidget(class UHWPurchaseConfirmWidget* PurchaseWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_PurchaseConfirmationManager_C", "DisplayPurchaseWidget");

	Params::WBP_S_PurchaseConfirmationManager_C_DisplayPurchaseWidget Parms{};

	Parms.PurchaseWidget = PurchaseWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_PurchaseConfirmationManager.WBP_S_PurchaseConfirmationManager_C.OnHide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_S_PurchaseConfirmationManager_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_PurchaseConfirmationManager_C", "OnHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_S_PurchaseConfirmationManager.WBP_S_PurchaseConfirmationManager_C.OnShown
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_S_PurchaseConfirmationManager_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_PurchaseConfirmationManager_C", "OnShown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_S_PurchaseConfirmationManager.WBP_S_PurchaseConfirmationManager_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_S_PurchaseConfirmationManager_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_PurchaseConfirmationManager_C", "PreConstruct");

	Params::WBP_S_PurchaseConfirmationManager_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_PurchaseConfirmationManager.WBP_S_PurchaseConfirmationManager_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_S_PurchaseConfirmationManager_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_PurchaseConfirmationManager_C", "BP_GetDesiredFocusTarget");

	Params::WBP_S_PurchaseConfirmationManager_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


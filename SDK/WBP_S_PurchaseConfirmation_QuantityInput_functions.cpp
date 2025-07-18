﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_PurchaseConfirmation_QuantityInput

#include "Basic.hpp"

#include "WBP_S_PurchaseConfirmation_QuantityInput_classes.hpp"
#include "WBP_S_PurchaseConfirmation_QuantityInput_parameters.hpp"


namespace SDK
{

// Function WBP_S_PurchaseConfirmation_QuantityInput.WBP_S_PurchaseConfirmation_QuantityInput_C.BndEvt__WBP_S_PurchaseConfirmation_QuantityInput_DecrementQuantity_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_S_PurchaseConfirmation_QuantityInput_C::BndEvt__WBP_S_PurchaseConfirmation_QuantityInput_DecrementQuantity_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_PurchaseConfirmation_QuantityInput_C", "BndEvt__WBP_S_PurchaseConfirmation_QuantityInput_DecrementQuantity_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_S_PurchaseConfirmation_QuantityInput.WBP_S_PurchaseConfirmation_QuantityInput_C.BndEvt__WBP_S_PurchaseConfirmation_QuantityInput_IncrementQuantity_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_S_PurchaseConfirmation_QuantityInput_C::BndEvt__WBP_S_PurchaseConfirmation_QuantityInput_IncrementQuantity_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_PurchaseConfirmation_QuantityInput_C", "BndEvt__WBP_S_PurchaseConfirmation_QuantityInput_IncrementQuantity_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_S_PurchaseConfirmation_QuantityInput.WBP_S_PurchaseConfirmation_QuantityInput_C.DisplayQuantity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuantity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_S_PurchaseConfirmation_QuantityInput_C::DisplayQuantity(int32 InQuantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_PurchaseConfirmation_QuantityInput_C", "DisplayQuantity");

	Params::WBP_S_PurchaseConfirmation_QuantityInput_C_DisplayQuantity Parms{};

	Parms.InQuantity = InQuantity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_PurchaseConfirmation_QuantityInput.WBP_S_PurchaseConfirmation_QuantityInput_C.ExecuteUbergraph_WBP_S_PurchaseConfirmation_QuantityInput
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_S_PurchaseConfirmation_QuantityInput_C::ExecuteUbergraph_WBP_S_PurchaseConfirmation_QuantityInput(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_PurchaseConfirmation_QuantityInput_C", "ExecuteUbergraph_WBP_S_PurchaseConfirmation_QuantityInput");

	Params::WBP_S_PurchaseConfirmation_QuantityInput_C_ExecuteUbergraph_WBP_S_PurchaseConfirmation_QuantityInput Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_PurchaseConfirmation_QuantityInput.WBP_S_PurchaseConfirmation_QuantityInput_C.HandleInputStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERH_INPUT_STATE                         InputState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_S_PurchaseConfirmation_QuantityInput_C::HandleInputStateChanged(ERH_INPUT_STATE InputState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_PurchaseConfirmation_QuantityInput_C", "HandleInputStateChanged");

	Params::WBP_S_PurchaseConfirmation_QuantityInput_C_HandleInputStateChanged Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_PurchaseConfirmation_QuantityInput.WBP_S_PurchaseConfirmation_QuantityInput_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_S_PurchaseConfirmation_QuantityInput_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_PurchaseConfirmation_QuantityInput_C", "InitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_S_PurchaseConfirmation_QuantityInput.WBP_S_PurchaseConfirmation_QuantityInput_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_S_PurchaseConfirmation_QuantityInput_C::UninitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_PurchaseConfirmation_QuantityInput_C", "UninitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}

}


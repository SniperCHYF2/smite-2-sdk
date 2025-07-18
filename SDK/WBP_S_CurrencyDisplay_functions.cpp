﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_CurrencyDisplay

#include "Basic.hpp"

#include "WBP_S_CurrencyDisplay_classes.hpp"
#include "WBP_S_CurrencyDisplay_parameters.hpp"


namespace SDK
{

// Function WBP_S_CurrencyDisplay.WBP_S_CurrencyDisplay_C.DisplayCurrency
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class URHCurrency*                CURRENCY                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsLoading                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_S_CurrencyDisplay_C::DisplayCurrency(const class URHCurrency* CURRENCY, bool bIsLoading)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_CurrencyDisplay_C", "DisplayCurrency");

	Params::WBP_S_CurrencyDisplay_C_DisplayCurrency Parms{};

	Parms.CURRENCY = CURRENCY;
	Parms.bIsLoading = bIsLoading;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_CurrencyDisplay.WBP_S_CurrencyDisplay_C.DisplayCurrencyAmount
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsLessThanOwned                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_S_CurrencyDisplay_C::DisplayCurrencyAmount(int32 NewAmount, bool bIsLessThanOwned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_CurrencyDisplay_C", "DisplayCurrencyAmount");

	Params::WBP_S_CurrencyDisplay_C_DisplayCurrencyAmount Parms{};

	Parms.NewAmount = NewAmount;
	Parms.bIsLessThanOwned = bIsLessThanOwned;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_CurrencyDisplay.WBP_S_CurrencyDisplay_C.ExecuteUbergraph_WBP_S_CurrencyDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_S_CurrencyDisplay_C::ExecuteUbergraph_WBP_S_CurrencyDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_CurrencyDisplay_C", "ExecuteUbergraph_WBP_S_CurrencyDisplay");

	Params::WBP_S_CurrencyDisplay_C_ExecuteUbergraph_WBP_S_CurrencyDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_CurrencyDisplay.WBP_S_CurrencyDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_S_CurrencyDisplay_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_CurrencyDisplay_C", "PreConstruct");

	Params::WBP_S_CurrencyDisplay_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_CurrencyDisplay.WBP_S_CurrencyDisplay_C.SetOrientation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOrientation                            InOrientation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_S_CurrencyDisplay_C::SetOrientation(EOrientation InOrientation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_CurrencyDisplay_C", "SetOrientation");

	Params::WBP_S_CurrencyDisplay_C_SetOrientation Parms{};

	Parms.InOrientation = InOrientation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_CurrencyDisplay.WBP_S_CurrencyDisplay_C.SetTextforPricing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_S_CurrencyDisplay_C::SetTextforPricing(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_CurrencyDisplay_C", "SetTextforPricing");

	Params::WBP_S_CurrencyDisplay_C_SetTextforPricing Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_CurrencyDisplay.WBP_S_CurrencyDisplay_C.UpdateIsCurrencyDisplayEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsCurrencyEnabled                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_S_CurrencyDisplay_C::UpdateIsCurrencyDisplayEnabled(bool bIsCurrencyEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_CurrencyDisplay_C", "UpdateIsCurrencyDisplayEnabled");

	Params::WBP_S_CurrencyDisplay_C_UpdateIsCurrencyDisplayEnabled Parms{};

	Parms.bIsCurrencyEnabled = bIsCurrencyEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_CurrencyDisplay.WBP_S_CurrencyDisplay_C.UpdateSaleDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_S_CurrencyDisplay_C::UpdateSaleDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_CurrencyDisplay_C", "UpdateSaleDisplay");

	UObject::ProcessEvent(Func, nullptr);
}

}


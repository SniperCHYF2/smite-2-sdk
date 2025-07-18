﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_Store_LowScopeDeals

#include "Basic.hpp"

#include "WBP_C_Store_LowScopeDeals_classes.hpp"
#include "WBP_C_Store_LowScopeDeals_parameters.hpp"


namespace SDK
{

// Function WBP_C_Store_LowScopeDeals.WBP_C_Store_LowScopeDeals_C.BndEvt__WBP_C_Store_LowScopeDeals_PurchaseButton_K2Node_ComponentBoundEvent_0_OnHWButtonEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_C_Store_LowScopeDeals_C::BndEvt__WBP_C_Store_LowScopeDeals_PurchaseButton_K2Node_ComponentBoundEvent_0_OnHWButtonEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_Store_LowScopeDeals_C", "BndEvt__WBP_C_Store_LowScopeDeals_PurchaseButton_K2Node_ComponentBoundEvent_0_OnHWButtonEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_Store_LowScopeDeals.WBP_C_Store_LowScopeDeals_C.BndEvt__WBP_C_Store_LowScopeDeals_SkinVoicePreviewButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_C_Store_LowScopeDeals_C::BndEvt__WBP_C_Store_LowScopeDeals_SkinVoicePreviewButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_Store_LowScopeDeals_C", "BndEvt__WBP_C_Store_LowScopeDeals_SkinVoicePreviewButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_Store_LowScopeDeals.WBP_C_Store_LowScopeDeals_C.DisplayStoreItemWidgets
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<class UHWStoreItemDisplayWidget*>&Widgets                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UWBP_C_Store_LowScopeDeals_C::DisplayStoreItemWidgets(const TArray<class UHWStoreItemDisplayWidget*>& Widgets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_Store_LowScopeDeals_C", "DisplayStoreItemWidgets");

	Params::WBP_C_Store_LowScopeDeals_C_DisplayStoreItemWidgets Parms{};

	Parms.Widgets = std::move(Widgets);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_Store_LowScopeDeals.WBP_C_Store_LowScopeDeals_C.ExecuteUbergraph_WBP_C_Store_LowScopeDeals
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_C_Store_LowScopeDeals_C::ExecuteUbergraph_WBP_C_Store_LowScopeDeals(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_Store_LowScopeDeals_C", "ExecuteUbergraph_WBP_C_Store_LowScopeDeals");

	Params::WBP_C_Store_LowScopeDeals_C_ExecuteUbergraph_WBP_C_Store_LowScopeDeals Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_Store_LowScopeDeals.WBP_C_Store_LowScopeDeals_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_C_Store_LowScopeDeals_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_Store_LowScopeDeals_C", "InitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_Store_LowScopeDeals.WBP_C_Store_LowScopeDeals_C.OnDisplayItem
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHWInventoryItem*                 Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_C_Store_LowScopeDeals_C::OnDisplayItem(class UHWInventoryItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_Store_LowScopeDeals_C", "OnDisplayItem");

	Params::WBP_C_Store_LowScopeDeals_C_OnDisplayItem Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_Store_LowScopeDeals.WBP_C_Store_LowScopeDeals_C.OnDisplayPrice
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHStoreItemPrice*                PriceItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayTag&              PriceGroupTag                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UWBP_C_Store_LowScopeDeals_C::OnDisplayPrice(class URHStoreItemPrice* PriceItem, const struct FGameplayTag& PriceGroupTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_Store_LowScopeDeals_C", "OnDisplayPrice");

	Params::WBP_C_Store_LowScopeDeals_C_OnDisplayPrice Parms{};

	Parms.PriceItem = PriceItem;
	Parms.PriceGroupTag = std::move(PriceGroupTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_Store_LowScopeDeals.WBP_C_Store_LowScopeDeals_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_C_Store_LowScopeDeals_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_Store_LowScopeDeals_C", "OnHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_Store_LowScopeDeals.WBP_C_Store_LowScopeDeals_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_C_Store_LowScopeDeals_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_Store_LowScopeDeals_C", "OnShown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_Store_LowScopeDeals.WBP_C_Store_LowScopeDeals_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_C_Store_LowScopeDeals_C::UninitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_Store_LowScopeDeals_C", "UninitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_Store_LowScopeDeals.WBP_C_Store_LowScopeDeals_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_C_Store_LowScopeDeals_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_Store_LowScopeDeals_C", "BP_GetDesiredFocusTarget");

	Params::WBP_C_Store_LowScopeDeals_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_C_Store_LowScopeDeals.WBP_C_Store_LowScopeDeals_C.GetDefaultSelectDisplayName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_C_Store_LowScopeDeals_C::GetDefaultSelectDisplayName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_Store_LowScopeDeals_C", "GetDefaultSelectDisplayName");

	Params::WBP_C_Store_LowScopeDeals_C_GetDefaultSelectDisplayName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


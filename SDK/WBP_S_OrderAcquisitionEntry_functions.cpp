﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_OrderAcquisitionEntry

#include "Basic.hpp"

#include "WBP_S_OrderAcquisitionEntry_classes.hpp"
#include "WBP_S_OrderAcquisitionEntry_parameters.hpp"


namespace SDK
{

// Function WBP_S_OrderAcquisitionEntry.WBP_S_OrderAcquisitionEntry_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWBP_S_OrderAcquisitionEntry_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_OrderAcquisitionEntry_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_S_OrderAcquisitionEntry.WBP_S_OrderAcquisitionEntry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_S_OrderAcquisitionEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_OrderAcquisitionEntry_C", "BP_OnItemExpansionChanged");

	Params::WBP_S_OrderAcquisitionEntry_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_OrderAcquisitionEntry.WBP_S_OrderAcquisitionEntry_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_S_OrderAcquisitionEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_OrderAcquisitionEntry_C", "BP_OnItemSelectionChanged");

	Params::WBP_S_OrderAcquisitionEntry_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_OrderAcquisitionEntry.WBP_S_OrderAcquisitionEntry_C.DisplayLoadingState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsLoading                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_S_OrderAcquisitionEntry_C::DisplayLoadingState(bool bIsLoading)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_OrderAcquisitionEntry_C", "DisplayLoadingState");

	Params::WBP_S_OrderAcquisitionEntry_C_DisplayLoadingState Parms{};

	Parms.bIsLoading = bIsLoading;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_OrderAcquisitionEntry.WBP_S_OrderAcquisitionEntry_C.ExecuteUbergraph_WBP_S_OrderAcquisitionEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_S_OrderAcquisitionEntry_C::ExecuteUbergraph_WBP_S_OrderAcquisitionEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_OrderAcquisitionEntry_C", "ExecuteUbergraph_WBP_S_OrderAcquisitionEntry");

	Params::WBP_S_OrderAcquisitionEntry_C_ExecuteUbergraph_WBP_S_OrderAcquisitionEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_OrderAcquisitionEntry.WBP_S_OrderAcquisitionEntry_C.OnDisplayItem
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHWInventoryItem*                 Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_S_OrderAcquisitionEntry_C::OnDisplayItem(class UHWInventoryItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_OrderAcquisitionEntry_C", "OnDisplayItem");

	Params::WBP_S_OrderAcquisitionEntry_C_OnDisplayItem Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_OrderAcquisitionEntry.WBP_S_OrderAcquisitionEntry_C.OnDisplayItemAsCurrency
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHCurrency*                      CURRENCY                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_S_OrderAcquisitionEntry_C::OnDisplayItemAsCurrency(class URHCurrency* CURRENCY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_OrderAcquisitionEntry_C", "OnDisplayItemAsCurrency");

	Params::WBP_S_OrderAcquisitionEntry_C_OnDisplayItemAsCurrency Parms{};

	Parms.CURRENCY = CURRENCY;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_OrderAcquisitionEntry.WBP_S_OrderAcquisitionEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_S_OrderAcquisitionEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_OrderAcquisitionEntry_C", "OnListItemObjectSet");

	Params::WBP_S_OrderAcquisitionEntry_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_OrderAcquisitionEntry.WBP_S_OrderAcquisitionEntry_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_S_OrderAcquisitionEntry_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_OrderAcquisitionEntry_C", "OnMouseEnter");

	Params::WBP_S_OrderAcquisitionEntry_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_OrderAcquisitionEntry.WBP_S_OrderAcquisitionEntry_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_S_OrderAcquisitionEntry_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_OrderAcquisitionEntry_C", "OnMouseLeave");

	Params::WBP_S_OrderAcquisitionEntry_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

}


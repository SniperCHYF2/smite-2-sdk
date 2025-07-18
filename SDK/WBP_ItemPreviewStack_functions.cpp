﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ItemPreviewStack

#include "Basic.hpp"

#include "WBP_ItemPreviewStack_classes.hpp"
#include "WBP_ItemPreviewStack_parameters.hpp"


namespace SDK
{

// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemPreviewStack_C::SetTitle(class UPlatformInventoryItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemPreviewStack_C", "SetTitle");

	Params::WBP_ItemPreviewStack_C_SetTitle Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetDesiredPreviewSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTagContainer&     CollectionContainer                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ItemPreviewStack_C::SetDesiredPreviewSize(const struct FGameplayTagContainer& CollectionContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemPreviewStack_C", "SetDesiredPreviewSize");

	Params::WBP_ItemPreviewStack_C_SetDesiredPreviewSize Parms{};

	Parms.CollectionContainer = std::move(CollectionContainer);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Set2DPreviewImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemPreviewStack_C::Set2DPreviewImage(class UPlatformInventoryItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemPreviewStack_C", "Set2DPreviewImage");

	Params::WBP_ItemPreviewStack_C_Set2DPreviewImage Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.OnLoaded_5B391F904D214C13E2C4A39899512E2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemPreviewStack_C::OnLoaded_5B391F904D214C13E2C4A39899512E2A(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemPreviewStack_C", "OnLoaded_5B391F904D214C13E2C4A39899512E2A");

	Params::WBP_ItemPreviewStack_C_OnLoaded_5B391F904D214C13E2C4A39899512E2A Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_ItemPreviewStack_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemPreviewStack_C", "InitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.ExecuteUbergraph_WBP_ItemPreviewStack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemPreviewStack_C::ExecuteUbergraph_WBP_ItemPreviewStack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemPreviewStack_C", "ExecuteUbergraph_WBP_ItemPreviewStack");

	Params::WBP_ItemPreviewStack_C_ExecuteUbergraph_WBP_ItemPreviewStack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.DisplayItemInternal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*           PlatformInventoryItem                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemPreviewStack_C::DisplayItemInternal(class UPlatformInventoryItem* PlatformInventoryItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemPreviewStack_C", "DisplayItemInternal");

	Params::WBP_ItemPreviewStack_C_DisplayItemInternal Parms{};

	Parms.PlatformInventoryItem = PlatformInventoryItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.DisplayItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHStoreItem*                     StoreItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemPreviewStack_C::DisplayItem(class URHStoreItem* StoreItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemPreviewStack_C", "DisplayItem");

	Params::WBP_ItemPreviewStack_C_DisplayItem Parms{};

	Parms.StoreItem = StoreItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.DisplayInventoryItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*           InventoryItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemPreviewStack_C::DisplayInventoryItem(class UPlatformInventoryItem* InventoryItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemPreviewStack_C", "DisplayInventoryItem");

	Params::WBP_ItemPreviewStack_C_DisplayInventoryItem Parms{};

	Parms.InventoryItem = InventoryItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ItemPreviewStack_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemPreviewStack_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.ClearDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ItemPreviewStack_C::ClearDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemPreviewStack_C", "ClearDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Choose View Model Name
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             View_Model_Name                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    Alt_Name_Suffix                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Use_Default_View_Model                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemPreviewStack_C::Choose_View_Model_Name(class FName View_Model_Name, const class FString& Alt_Name_Suffix, bool Use_Default_View_Model)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemPreviewStack_C", "Choose View Model Name");

	Params::WBP_ItemPreviewStack_C_Choose_View_Model_Name Parms{};

	Parms.View_Model_Name = View_Model_Name;
	Parms.Alt_Name_Suffix = std::move(Alt_Name_Suffix);
	Parms.Use_Default_View_Model = Use_Default_View_Model;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.AsyncLoadItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UPlatformInventoryItem>InventoryItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_ItemPreviewStack_C::AsyncLoadItem(TSoftObjectPtr<class UPlatformInventoryItem> InventoryItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemPreviewStack_C", "AsyncLoadItem");

	Params::WBP_ItemPreviewStack_C_AsyncLoadItem Parms{};

	Parms.InventoryItem = InventoryItem;

	UObject::ProcessEvent(Func, &Parms);
}

}


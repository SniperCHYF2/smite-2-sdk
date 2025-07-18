﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_StorePriceTag

#include "Basic.hpp"

#include "WBP_StorePriceTag_classes.hpp"
#include "WBP_StorePriceTag_parameters.hpp"


namespace SDK
{

// Function WBP_StorePriceTag.WBP_StorePriceTag_C.ExecuteUbergraph_WBP_StorePriceTag
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StorePriceTag_C::ExecuteUbergraph_WBP_StorePriceTag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorePriceTag_C", "ExecuteUbergraph_WBP_StorePriceTag");

	Params::WBP_StorePriceTag_C_ExecuteUbergraph_WBP_StorePriceTag Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorePriceTag.WBP_StorePriceTag_C.OnCanAffordResponse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsValid                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StorePriceTag_C::OnCanAffordResponse(bool IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorePriceTag_C", "OnCanAffordResponse");

	Params::WBP_StorePriceTag_C_OnCanAffordResponse Parms{};

	Parms.IsValid = IsValid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorePriceTag.WBP_StorePriceTag_C.OnGetBestCouponResponse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHStoreItem*                     CouponItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_StorePriceTag_C::OnGetBestCouponResponse(class URHStoreItem* CouponItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorePriceTag_C", "OnGetBestCouponResponse");

	Params::WBP_StorePriceTag_C_OnGetBestCouponResponse Parms{};

	Parms.CouponItem = CouponItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorePriceTag.WBP_StorePriceTag_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StorePriceTag_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorePriceTag_C", "PreConstruct");

	Params::WBP_StorePriceTag_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorePriceTag.WBP_StorePriceTag_C.SetPriceColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              PriceColor_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              OriginalPriceColor_0                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StorePriceTag_C::SetPriceColors(const struct FLinearColor& PriceColor_0, const struct FLinearColor& OriginalPriceColor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorePriceTag_C", "SetPriceColors");

	Params::WBP_StorePriceTag_C_SetPriceColors Parms{};

	Parms.PriceColor_0 = std::move(PriceColor_0);
	Parms.OriginalPriceColor_0 = std::move(OriginalPriceColor_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorePriceTag.WBP_StorePriceTag_C.SetPriceDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHStoreItemPrice*                PriceInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHPortalOffer*                   PortalOffer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   PurchaseQuantity                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHStoreItem*                     StoreItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_StorePriceTag_C::SetPriceDisplay(class URHStoreItemPrice* PriceInfo, class URHPortalOffer* PortalOffer, int32 PurchaseQuantity, class URHStoreItem* StoreItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorePriceTag_C", "SetPriceDisplay");

	Params::WBP_StorePriceTag_C_SetPriceDisplay Parms{};

	Parms.PriceInfo = PriceInfo;
	Parms.PortalOffer = PortalOffer;
	Parms.PurchaseQuantity = PurchaseQuantity;
	Parms.StoreItem = StoreItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorePriceTag.WBP_StorePriceTag_C.SetPriceTag
// (Event, Public, BlueprintEvent)
// Parameters:
// class URHStoreItemPrice*                StoreItemPrice                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHStoreItem*                     StoreItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_StorePriceTag_C::SetPriceTag(class URHStoreItemPrice* StoreItemPrice, class URHStoreItem* StoreItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorePriceTag_C", "SetPriceTag");

	Params::WBP_StorePriceTag_C_SetPriceTag Parms{};

	Parms.StoreItemPrice = StoreItemPrice;
	Parms.StoreItem = StoreItem;

	UObject::ProcessEvent(Func, &Parms);
}

}


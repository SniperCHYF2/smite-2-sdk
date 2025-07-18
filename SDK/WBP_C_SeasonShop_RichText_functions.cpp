﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_SeasonShop_RichText

#include "Basic.hpp"

#include "WBP_C_SeasonShop_RichText_classes.hpp"
#include "WBP_C_SeasonShop_RichText_parameters.hpp"


namespace SDK
{

// Function WBP_C_SeasonShop_RichText.WBP_C_SeasonShop_RichText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_C_SeasonShop_RichText_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonShop_RichText_C", "PreConstruct");

	Params::WBP_C_SeasonShop_RichText_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_SeasonShop_RichText.WBP_C_SeasonShop_RichText_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        Icon_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_C_SeasonShop_RichText_C::SetIcon(TSoftObjectPtr<class UTexture2D> Icon_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonShop_RichText_C", "SetIcon");

	Params::WBP_C_SeasonShop_RichText_C_SetIcon Parms{};

	Parms.Icon_0 = Icon_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_SeasonShop_RichText.WBP_C_SeasonShop_RichText_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      NewText                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_C_SeasonShop_RichText_C::SetText(const class FText& NewText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonShop_RichText_C", "SetText");

	Params::WBP_C_SeasonShop_RichText_C_SetText Parms{};

	Parms.NewText = std::move(NewText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_SeasonShop_RichText.WBP_C_SeasonShop_RichText_C.ShowDiamond
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_C_SeasonShop_RichText_C::ShowDiamond(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonShop_RichText_C", "ShowDiamond");

	Params::WBP_C_SeasonShop_RichText_C_ShowDiamond Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}

}


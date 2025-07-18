﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_GodAbilityDisplay_Details

#include "Basic.hpp"

#include "WBP_C_GodAbilityDisplay_Details_classes.hpp"
#include "WBP_C_GodAbilityDisplay_Details_parameters.hpp"


namespace SDK
{

// Function WBP_C_GodAbilityDisplay_Details.WBP_C_GodAbilityDisplay_Details_C.DisplayCustomText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_C_GodAbilityDisplay_Details_C::DisplayCustomText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_GodAbilityDisplay_Details_C", "DisplayCustomText");

	Params::WBP_C_GodAbilityDisplay_Details_C_DisplayCustomText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_GodAbilityDisplay_Details.WBP_C_GodAbilityDisplay_Details_C.DisplayKeywordText
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FHWDataDisplay_Keyword&    KeywordData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_C_GodAbilityDisplay_Details_C::DisplayKeywordText(const class FText& Text, const struct FHWDataDisplay_Keyword& KeywordData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_GodAbilityDisplay_Details_C", "DisplayKeywordText");

	Params::WBP_C_GodAbilityDisplay_Details_C_DisplayKeywordText Parms{};

	Parms.Text = std::move(Text);
	Parms.KeywordData = std::move(KeywordData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_GodAbilityDisplay_Details.WBP_C_GodAbilityDisplay_Details_C.FormatScaling
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      ScalingValueText                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FHWDataDisplay_CharacterStat&StatData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_C_GodAbilityDisplay_Details_C::FormatScaling(const class FText& ScalingValueText, const struct FHWDataDisplay_CharacterStat& StatData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_GodAbilityDisplay_Details_C", "FormatScaling");

	Params::WBP_C_GodAbilityDisplay_Details_C_FormatScaling Parms{};

	Parms.ScalingValueText = std::move(ScalingValueText);
	Parms.StatData = std::move(StatData);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_C_GodAbilityDisplay_Details.WBP_C_GodAbilityDisplay_Details_C.FormatScalingTexts
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<class FText>&              IndividualScalingTexts                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_C_GodAbilityDisplay_Details_C::FormatScalingTexts(const TArray<class FText>& IndividualScalingTexts)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_GodAbilityDisplay_Details_C", "FormatScalingTexts");

	Params::WBP_C_GodAbilityDisplay_Details_C_FormatScalingTexts Parms{};

	Parms.IndividualScalingTexts = std::move(IndividualScalingTexts);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_C_GodAbilityDisplay_Details.WBP_C_GodAbilityDisplay_Details_C.FormatValue
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsCurrentLevel                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_C_GodAbilityDisplay_Details_C::FormatValue(float Value, bool bIsCurrentLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_GodAbilityDisplay_Details_C", "FormatValue");

	Params::WBP_C_GodAbilityDisplay_Details_C_FormatValue Parms{};

	Parms.Value = Value;
	Parms.bIsCurrentLevel = bIsCurrentLevel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_C_GodAbilityDisplay_Details.WBP_C_GodAbilityDisplay_Details_C.FormatValues
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<class FText>&              ValueTexts                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_C_GodAbilityDisplay_Details_C::FormatValues(const TArray<class FText>& ValueTexts)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_GodAbilityDisplay_Details_C", "FormatValues");

	Params::WBP_C_GodAbilityDisplay_Details_C_FormatValues Parms{};

	Parms.ValueTexts = std::move(ValueTexts);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


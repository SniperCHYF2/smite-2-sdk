﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_GodBuilder_StatsDisplay_Entry

#include "Basic.hpp"

#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_S_GodBuilder_StatsDisplay_Entry.WBP_S_GodBuilder_StatsDisplay_Entry_C
// 0x0030 (0x0748 - 0x0718)
class UWBP_S_GodBuilder_StatsDisplay_Entry_C final : public UHWGodBuilderStatsDisplayEntryWidget
{
public:
	class UHWImage*                               arrowicon;                                         // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               StatChangedBackground;                             // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           StatCurrentValue;                                  // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               StatIcon;                                          // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           StatOriginalValue;                                 // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           StatTitleText;                                     // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetTitleText(const class FText& InTitleText);
	void SetStatValues(const class FText& InValueFormat, float InBaseValue, float InChangeValue);
	void SetStatIcon(const TSoftObjectPtr<class UTexture2D>& InStatIcon);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_S_GodBuilder_StatsDisplay_Entry_C">();
	}
	static class UWBP_S_GodBuilder_StatsDisplay_Entry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_S_GodBuilder_StatsDisplay_Entry_C>();
	}
};
static_assert(alignof(UWBP_S_GodBuilder_StatsDisplay_Entry_C) == 0x000008, "Wrong alignment on UWBP_S_GodBuilder_StatsDisplay_Entry_C");
static_assert(sizeof(UWBP_S_GodBuilder_StatsDisplay_Entry_C) == 0x000748, "Wrong size on UWBP_S_GodBuilder_StatsDisplay_Entry_C");
static_assert(offsetof(UWBP_S_GodBuilder_StatsDisplay_Entry_C, arrowicon) == 0x000718, "Member 'UWBP_S_GodBuilder_StatsDisplay_Entry_C::arrowicon' has a wrong offset!");
static_assert(offsetof(UWBP_S_GodBuilder_StatsDisplay_Entry_C, StatChangedBackground) == 0x000720, "Member 'UWBP_S_GodBuilder_StatsDisplay_Entry_C::StatChangedBackground' has a wrong offset!");
static_assert(offsetof(UWBP_S_GodBuilder_StatsDisplay_Entry_C, StatCurrentValue) == 0x000728, "Member 'UWBP_S_GodBuilder_StatsDisplay_Entry_C::StatCurrentValue' has a wrong offset!");
static_assert(offsetof(UWBP_S_GodBuilder_StatsDisplay_Entry_C, StatIcon) == 0x000730, "Member 'UWBP_S_GodBuilder_StatsDisplay_Entry_C::StatIcon' has a wrong offset!");
static_assert(offsetof(UWBP_S_GodBuilder_StatsDisplay_Entry_C, StatOriginalValue) == 0x000738, "Member 'UWBP_S_GodBuilder_StatsDisplay_Entry_C::StatOriginalValue' has a wrong offset!");
static_assert(offsetof(UWBP_S_GodBuilder_StatsDisplay_Entry_C, StatTitleText) == 0x000740, "Member 'UWBP_S_GodBuilder_StatsDisplay_Entry_C::StatTitleText' has a wrong offset!");

}


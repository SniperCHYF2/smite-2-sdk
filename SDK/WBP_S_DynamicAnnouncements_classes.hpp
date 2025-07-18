﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_DynamicAnnouncements

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_S_DynamicAnnouncements.WBP_S_DynamicAnnouncements_C
// 0x0018 (0x06F8 - 0x06E0)
class UWBP_S_DynamicAnnouncements_C final : public UHWDynamicAnnouncementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWTextBlock*                           Annoucement;                                       // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AttentionIcon;                                     // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void UpdateDisplayedText(const class FText& InText);
	void ExecuteUbergraph_WBP_S_DynamicAnnouncements(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_S_DynamicAnnouncements_C">();
	}
	static class UWBP_S_DynamicAnnouncements_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_S_DynamicAnnouncements_C>();
	}
};
static_assert(alignof(UWBP_S_DynamicAnnouncements_C) == 0x000008, "Wrong alignment on UWBP_S_DynamicAnnouncements_C");
static_assert(sizeof(UWBP_S_DynamicAnnouncements_C) == 0x0006F8, "Wrong size on UWBP_S_DynamicAnnouncements_C");
static_assert(offsetof(UWBP_S_DynamicAnnouncements_C, UberGraphFrame) == 0x0006E0, "Member 'UWBP_S_DynamicAnnouncements_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_S_DynamicAnnouncements_C, Annoucement) == 0x0006E8, "Member 'UWBP_S_DynamicAnnouncements_C::Annoucement' has a wrong offset!");
static_assert(offsetof(UWBP_S_DynamicAnnouncements_C, AttentionIcon) == 0x0006F0, "Member 'UWBP_S_DynamicAnnouncements_C::AttentionIcon' has a wrong offset!");

}


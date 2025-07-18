﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DebugHUDTabWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DebugHUDTabWidget.WBP_DebugHUDTabWidget_C
// 0x0018 (0x0640 - 0x0628)
class UWBP_DebugHUDTabWidget_C final : public UHWTabEntryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0628(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWButton*                              HitArea;                                           // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           TabText;                                           // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__WBP_DebugHUDTabWidget_HitArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void DisplayIsSelected();
	void DisplayTab();
	void ExecuteUbergraph_WBP_DebugHUDTabWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DebugHUDTabWidget_C">();
	}
	static class UWBP_DebugHUDTabWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DebugHUDTabWidget_C>();
	}
};
static_assert(alignof(UWBP_DebugHUDTabWidget_C) == 0x000008, "Wrong alignment on UWBP_DebugHUDTabWidget_C");
static_assert(sizeof(UWBP_DebugHUDTabWidget_C) == 0x000640, "Wrong size on UWBP_DebugHUDTabWidget_C");
static_assert(offsetof(UWBP_DebugHUDTabWidget_C, UberGraphFrame) == 0x000628, "Member 'UWBP_DebugHUDTabWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_DebugHUDTabWidget_C, HitArea) == 0x000630, "Member 'UWBP_DebugHUDTabWidget_C::HitArea' has a wrong offset!");
static_assert(offsetof(UWBP_DebugHUDTabWidget_C, TabText) == 0x000638, "Member 'UWBP_DebugHUDTabWidget_C::TabText' has a wrong offset!");

}


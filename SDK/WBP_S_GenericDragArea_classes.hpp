﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_GenericDragArea

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_S_GenericDragArea.WBP_S_GenericDragArea_C
// 0x0010 (0x0638 - 0x0628)
class UWBP_S_GenericDragArea_C final : public UHWDragArea
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0628(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWButton*                              HitArea;                                           // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__WBP_S_GenericDragArea_HitArea_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_S_GenericDragArea_HitArea_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_S_GenericDragArea(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_S_GenericDragArea_C">();
	}
	static class UWBP_S_GenericDragArea_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_S_GenericDragArea_C>();
	}
};
static_assert(alignof(UWBP_S_GenericDragArea_C) == 0x000008, "Wrong alignment on UWBP_S_GenericDragArea_C");
static_assert(sizeof(UWBP_S_GenericDragArea_C) == 0x000638, "Wrong size on UWBP_S_GenericDragArea_C");
static_assert(offsetof(UWBP_S_GenericDragArea_C, UberGraphFrame) == 0x000628, "Member 'UWBP_S_GenericDragArea_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_S_GenericDragArea_C, HitArea) == 0x000630, "Member 'UWBP_S_GenericDragArea_C::HitArea' has a wrong offset!");

}


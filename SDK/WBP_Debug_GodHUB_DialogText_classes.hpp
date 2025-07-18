﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Debug_GodHUB_DialogText

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EGodDebugDialogTextOptions_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Debug_GodHUB_DialogText.WBP_Debug_GodHUB_DialogText_C
// 0x0060 (0x0658 - 0x05F8)
class UWBP_Debug_GodHUB_DialogText_C final : public UHWWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                ClearText;                                         // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_1;                                            // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_98;                                      // 0x0618(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Timer;                                             // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   DialogText;                                        // 0x0628(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	EGodDebugDialogTextOptions                    DialogOption;                                      // 0x0640(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_641[0x7];                                      // 0x0641(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TimerPercent;                                      // 0x0648(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowTimer;                                         // 0x0650(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__WBP_GodDebugErrorText_ClearErrorText_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_Debug_GodHUB_DialogText(int32 EntryPoint);
	ESlateVisibility Get_Timer_Visibility();
	struct FSlateColor GetColorAndOpacity();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Debug_GodHUB_DialogText_C">();
	}
	static class UWBP_Debug_GodHUB_DialogText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Debug_GodHUB_DialogText_C>();
	}
};
static_assert(alignof(UWBP_Debug_GodHUB_DialogText_C) == 0x000008, "Wrong alignment on UWBP_Debug_GodHUB_DialogText_C");
static_assert(sizeof(UWBP_Debug_GodHUB_DialogText_C) == 0x000658, "Wrong size on UWBP_Debug_GodHUB_DialogText_C");
static_assert(offsetof(UWBP_Debug_GodHUB_DialogText_C, UberGraphFrame) == 0x0005F8, "Member 'UWBP_Debug_GodHUB_DialogText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_GodHUB_DialogText_C, ClearText) == 0x000600, "Member 'UWBP_Debug_GodHUB_DialogText_C::ClearText' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_GodHUB_DialogText_C, Line) == 0x000608, "Member 'UWBP_Debug_GodHUB_DialogText_C::Line' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_GodHUB_DialogText_C, Line_1) == 0x000610, "Member 'UWBP_Debug_GodHUB_DialogText_C::Line_1' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_GodHUB_DialogText_C, TextBlock_98) == 0x000618, "Member 'UWBP_Debug_GodHUB_DialogText_C::TextBlock_98' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_GodHUB_DialogText_C, Timer) == 0x000620, "Member 'UWBP_Debug_GodHUB_DialogText_C::Timer' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_GodHUB_DialogText_C, DialogText) == 0x000628, "Member 'UWBP_Debug_GodHUB_DialogText_C::DialogText' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_GodHUB_DialogText_C, DialogOption) == 0x000640, "Member 'UWBP_Debug_GodHUB_DialogText_C::DialogOption' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_GodHUB_DialogText_C, TimerPercent) == 0x000648, "Member 'UWBP_Debug_GodHUB_DialogText_C::TimerPercent' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_GodHUB_DialogText_C, ShowTimer) == 0x000650, "Member 'UWBP_Debug_GodHUB_DialogText_C::ShowTimer' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PrototypeHUDCanvas

#include "Basic.hpp"

#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PrototypeHUDCanvas.WBP_PrototypeHUDCanvas_C
// 0x0060 (0x0658 - 0x05F8)
class UWBP_PrototypeHUDCanvas_C final : public UHWWidget
{
public:
	class UWBP_G_Prototype_Courier_C*             WBP_G_Prototype_Courier;                           // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_G_Prototype_Journeys_Abilities_End_C* WBP_G_Prototype_Journeys_Abilities_End;         // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_G_Prototype_Journeys_Abilities_Start_C* WBP_G_Prototype_Journeys_Abilities_Start;     // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HelpTip_Popup_C*                   WBP_HelpTip_Popup;                                 // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_JY_Caption_C*                      WBP_JY_Caption;                                    // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_JY_Prototype_AbilityHighlighter_C* WBP_JY_Prototype_AbilityHighlighter_01;            // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_JY_Prototype_AbilityHighlighter_C* WBP_JY_Prototype_AbilityHighlighter_02;            // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_JY_Prototype_AbilityHighlighter_C* WBP_JY_Prototype_AbilityHighlighter_03;            // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_JY_Prototype_AbilityHighlighter_C* WBP_JY_Prototype_AbilityHighlighter_04;            // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_JY_Prototype_ComboCounter_C*       WBP_JY_Prototype_ComboCounter;                     // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_JY_Prototype_Countdown_C*          WBP_JY_Prototype_Countdown;                        // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_JY_Prototype_Points_C*             WBP_JY_Prototype_Points;                           // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void GetHWWidgets(TArray<class UHWWidget*>* NewParam);
	void InitializeWidget();
	void OnHide();
	void OnShown();
	void UninitializeWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PrototypeHUDCanvas_C">();
	}
	static class UWBP_PrototypeHUDCanvas_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PrototypeHUDCanvas_C>();
	}
};
static_assert(alignof(UWBP_PrototypeHUDCanvas_C) == 0x000008, "Wrong alignment on UWBP_PrototypeHUDCanvas_C");
static_assert(sizeof(UWBP_PrototypeHUDCanvas_C) == 0x000658, "Wrong size on UWBP_PrototypeHUDCanvas_C");
static_assert(offsetof(UWBP_PrototypeHUDCanvas_C, WBP_G_Prototype_Courier) == 0x0005F8, "Member 'UWBP_PrototypeHUDCanvas_C::WBP_G_Prototype_Courier' has a wrong offset!");
static_assert(offsetof(UWBP_PrototypeHUDCanvas_C, WBP_G_Prototype_Journeys_Abilities_End) == 0x000600, "Member 'UWBP_PrototypeHUDCanvas_C::WBP_G_Prototype_Journeys_Abilities_End' has a wrong offset!");
static_assert(offsetof(UWBP_PrototypeHUDCanvas_C, WBP_G_Prototype_Journeys_Abilities_Start) == 0x000608, "Member 'UWBP_PrototypeHUDCanvas_C::WBP_G_Prototype_Journeys_Abilities_Start' has a wrong offset!");
static_assert(offsetof(UWBP_PrototypeHUDCanvas_C, WBP_HelpTip_Popup) == 0x000610, "Member 'UWBP_PrototypeHUDCanvas_C::WBP_HelpTip_Popup' has a wrong offset!");
static_assert(offsetof(UWBP_PrototypeHUDCanvas_C, WBP_JY_Caption) == 0x000618, "Member 'UWBP_PrototypeHUDCanvas_C::WBP_JY_Caption' has a wrong offset!");
static_assert(offsetof(UWBP_PrototypeHUDCanvas_C, WBP_JY_Prototype_AbilityHighlighter_01) == 0x000620, "Member 'UWBP_PrototypeHUDCanvas_C::WBP_JY_Prototype_AbilityHighlighter_01' has a wrong offset!");
static_assert(offsetof(UWBP_PrototypeHUDCanvas_C, WBP_JY_Prototype_AbilityHighlighter_02) == 0x000628, "Member 'UWBP_PrototypeHUDCanvas_C::WBP_JY_Prototype_AbilityHighlighter_02' has a wrong offset!");
static_assert(offsetof(UWBP_PrototypeHUDCanvas_C, WBP_JY_Prototype_AbilityHighlighter_03) == 0x000630, "Member 'UWBP_PrototypeHUDCanvas_C::WBP_JY_Prototype_AbilityHighlighter_03' has a wrong offset!");
static_assert(offsetof(UWBP_PrototypeHUDCanvas_C, WBP_JY_Prototype_AbilityHighlighter_04) == 0x000638, "Member 'UWBP_PrototypeHUDCanvas_C::WBP_JY_Prototype_AbilityHighlighter_04' has a wrong offset!");
static_assert(offsetof(UWBP_PrototypeHUDCanvas_C, WBP_JY_Prototype_ComboCounter) == 0x000640, "Member 'UWBP_PrototypeHUDCanvas_C::WBP_JY_Prototype_ComboCounter' has a wrong offset!");
static_assert(offsetof(UWBP_PrototypeHUDCanvas_C, WBP_JY_Prototype_Countdown) == 0x000648, "Member 'UWBP_PrototypeHUDCanvas_C::WBP_JY_Prototype_Countdown' has a wrong offset!");
static_assert(offsetof(UWBP_PrototypeHUDCanvas_C, WBP_JY_Prototype_Points) == 0x000650, "Member 'UWBP_PrototypeHUDCanvas_C::WBP_JY_Prototype_Points' has a wrong offset!");

}


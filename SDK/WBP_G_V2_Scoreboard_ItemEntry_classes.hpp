﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_Scoreboard_ItemEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_G_V2_Scoreboard_ItemEntry.WBP_G_V2_Scoreboard_ItemEntry_C
// 0x0050 (0x0798 - 0x0748)
class UWBP_G_V2_Scoreboard_ItemEntry_C final : public UHWActivatableEquipmentWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0748(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWTextBlock*                           AmmoText;                                          // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWOverlay*                             Filled_Overlay;                                    // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               Frame;                                             // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              HitBox;                                            // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               ItemIcon_Normal;                                   // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWOverlay*                             StackOverlay;                                      // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           StackText;                                         // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               StrokeHover;                                       // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWSizeBox*                             TooltipRef;                                        // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__WBP_G_V2_Scoreboard_ItemEntry_HitBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_V2_Scoreboard_ItemEntry_HitBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void DisplayAmmo(const int32 AmmoCount, const bool bHasEnough, const int32 MaxCount);
	void DisplayEquipment(const class UHWEquipmentItem* EquipmentInfo);
	void DisplayStackCount(const int32 StackCount, const int32 MaxStackCount);
	void ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry(int32 EntryPoint);
	void HoverStyling(bool bHovered);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_G_V2_Scoreboard_ItemEntry_C">();
	}
	static class UWBP_G_V2_Scoreboard_ItemEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_G_V2_Scoreboard_ItemEntry_C>();
	}
};
static_assert(alignof(UWBP_G_V2_Scoreboard_ItemEntry_C) == 0x000008, "Wrong alignment on UWBP_G_V2_Scoreboard_ItemEntry_C");
static_assert(sizeof(UWBP_G_V2_Scoreboard_ItemEntry_C) == 0x000798, "Wrong size on UWBP_G_V2_Scoreboard_ItemEntry_C");
static_assert(offsetof(UWBP_G_V2_Scoreboard_ItemEntry_C, UberGraphFrame) == 0x000748, "Member 'UWBP_G_V2_Scoreboard_ItemEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_Scoreboard_ItemEntry_C, AmmoText) == 0x000750, "Member 'UWBP_G_V2_Scoreboard_ItemEntry_C::AmmoText' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_Scoreboard_ItemEntry_C, Filled_Overlay) == 0x000758, "Member 'UWBP_G_V2_Scoreboard_ItemEntry_C::Filled_Overlay' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_Scoreboard_ItemEntry_C, Frame) == 0x000760, "Member 'UWBP_G_V2_Scoreboard_ItemEntry_C::Frame' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_Scoreboard_ItemEntry_C, HitBox) == 0x000768, "Member 'UWBP_G_V2_Scoreboard_ItemEntry_C::HitBox' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_Scoreboard_ItemEntry_C, ItemIcon_Normal) == 0x000770, "Member 'UWBP_G_V2_Scoreboard_ItemEntry_C::ItemIcon_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_Scoreboard_ItemEntry_C, StackOverlay) == 0x000778, "Member 'UWBP_G_V2_Scoreboard_ItemEntry_C::StackOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_Scoreboard_ItemEntry_C, StackText) == 0x000780, "Member 'UWBP_G_V2_Scoreboard_ItemEntry_C::StackText' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_Scoreboard_ItemEntry_C, StrokeHover) == 0x000788, "Member 'UWBP_G_V2_Scoreboard_ItemEntry_C::StrokeHover' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_Scoreboard_ItemEntry_C, TooltipRef) == 0x000790, "Member 'UWBP_G_V2_Scoreboard_ItemEntry_C::TooltipRef' has a wrong offset!");

}


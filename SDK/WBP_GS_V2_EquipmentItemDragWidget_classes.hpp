﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GS_V2_EquipmentItemDragWidget

#include "Basic.hpp"

#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GS_V2_EquipmentItemDragWidget.WBP_GS_V2_EquipmentItemDragWidget_C
// 0x0018 (0x0638 - 0x0620)
class UWBP_GS_V2_EquipmentItemDragWidget_C final : public UHWEquipmentItemDragWidget
{
public:
	class UHWImage*                               EquipmentIcon;                                     // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               FX_Stroke;                                         // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HoverStroke;                                       // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetEquipmentItem(const class UHWEquipmentItem* EquipmentItem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GS_V2_EquipmentItemDragWidget_C">();
	}
	static class UWBP_GS_V2_EquipmentItemDragWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GS_V2_EquipmentItemDragWidget_C>();
	}
};
static_assert(alignof(UWBP_GS_V2_EquipmentItemDragWidget_C) == 0x000008, "Wrong alignment on UWBP_GS_V2_EquipmentItemDragWidget_C");
static_assert(sizeof(UWBP_GS_V2_EquipmentItemDragWidget_C) == 0x000638, "Wrong size on UWBP_GS_V2_EquipmentItemDragWidget_C");
static_assert(offsetof(UWBP_GS_V2_EquipmentItemDragWidget_C, EquipmentIcon) == 0x000620, "Member 'UWBP_GS_V2_EquipmentItemDragWidget_C::EquipmentIcon' has a wrong offset!");
static_assert(offsetof(UWBP_GS_V2_EquipmentItemDragWidget_C, FX_Stroke) == 0x000628, "Member 'UWBP_GS_V2_EquipmentItemDragWidget_C::FX_Stroke' has a wrong offset!");
static_assert(offsetof(UWBP_GS_V2_EquipmentItemDragWidget_C, HoverStroke) == 0x000630, "Member 'UWBP_GS_V2_EquipmentItemDragWidget_C::HoverStroke' has a wrong offset!");

}


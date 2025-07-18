﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_GodDetailsGodOverviewWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "UMG_structs.hpp"
#include "Hemingway_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_C_GodDetailsGodOverviewWidget.WBP_C_GodDetailsGodOverviewWidget_C
// 0x0048 (0x0650 - 0x0608)
class UWBP_C_GodDetailsGodOverviewWidget_C final : public UHWGodDetailsGodOverviewWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0608(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWTextBlock*                           LongDesc;                                          // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_C_GodCategory_Entry_C*             MagicalOrPhysical;                                 // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_C_GodCategory_Entry_C*             MeleeOrRanged;                                     // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_C_NewUserFriendlyTag_C*            NewPlayer;                                         // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           PlaystyleDescriptorText;                           // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_C_FreeGodRotationTag_C*            Rotation;                                          // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_C_GodCategory_Entry_C*             Scaling;                                           // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           SummaryText;                                       // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_C_GodDetailsGodOverviewWidget(int32 EntryPoint);
	void OnGodSet();
	void OnHide();
	void OnShown();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_C_GodDetailsGodOverviewWidget_C">();
	}
	static class UWBP_C_GodDetailsGodOverviewWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_C_GodDetailsGodOverviewWidget_C>();
	}
};
static_assert(alignof(UWBP_C_GodDetailsGodOverviewWidget_C) == 0x000008, "Wrong alignment on UWBP_C_GodDetailsGodOverviewWidget_C");
static_assert(sizeof(UWBP_C_GodDetailsGodOverviewWidget_C) == 0x000650, "Wrong size on UWBP_C_GodDetailsGodOverviewWidget_C");
static_assert(offsetof(UWBP_C_GodDetailsGodOverviewWidget_C, UberGraphFrame) == 0x000608, "Member 'UWBP_C_GodDetailsGodOverviewWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodOverviewWidget_C, LongDesc) == 0x000610, "Member 'UWBP_C_GodDetailsGodOverviewWidget_C::LongDesc' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodOverviewWidget_C, MagicalOrPhysical) == 0x000618, "Member 'UWBP_C_GodDetailsGodOverviewWidget_C::MagicalOrPhysical' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodOverviewWidget_C, MeleeOrRanged) == 0x000620, "Member 'UWBP_C_GodDetailsGodOverviewWidget_C::MeleeOrRanged' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodOverviewWidget_C, NewPlayer) == 0x000628, "Member 'UWBP_C_GodDetailsGodOverviewWidget_C::NewPlayer' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodOverviewWidget_C, PlaystyleDescriptorText) == 0x000630, "Member 'UWBP_C_GodDetailsGodOverviewWidget_C::PlaystyleDescriptorText' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodOverviewWidget_C, Rotation) == 0x000638, "Member 'UWBP_C_GodDetailsGodOverviewWidget_C::Rotation' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodOverviewWidget_C, Scaling) == 0x000640, "Member 'UWBP_C_GodDetailsGodOverviewWidget_C::Scaling' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodOverviewWidget_C, SummaryText) == 0x000648, "Member 'UWBP_C_GodDetailsGodOverviewWidget_C::SummaryText' has a wrong offset!");

}


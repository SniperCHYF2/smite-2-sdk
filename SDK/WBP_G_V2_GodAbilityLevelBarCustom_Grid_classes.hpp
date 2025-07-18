﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_GodAbilityLevelBarCustom_Grid

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_G_V2_GodAbilityLevelBarCustom_Grid.WBP_G_V2_GodAbilityLevelBarCustom_Grid_C
// 0x0010 (0x0800 - 0x07F0)
class UWBP_G_V2_GodAbilityLevelBarCustom_Grid_C final : public UHWEquipmentLevelBarCustomWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWUniformGridPanel*                    LevelWidgetContainer;                              // 0x07F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_G_V2_GodAbilityLevelBarCustom_Grid(int32 EntryPoint);
	void LevelUpdated();
	void PipWidgetAdded(class UHWImage* Pip, int32 Level);
	void PipWidgetRemoved(class UHWImage* Pip);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_G_V2_GodAbilityLevelBarCustom_Grid_C">();
	}
	static class UWBP_G_V2_GodAbilityLevelBarCustom_Grid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_G_V2_GodAbilityLevelBarCustom_Grid_C>();
	}
};
static_assert(alignof(UWBP_G_V2_GodAbilityLevelBarCustom_Grid_C) == 0x000010, "Wrong alignment on UWBP_G_V2_GodAbilityLevelBarCustom_Grid_C");
static_assert(sizeof(UWBP_G_V2_GodAbilityLevelBarCustom_Grid_C) == 0x000800, "Wrong size on UWBP_G_V2_GodAbilityLevelBarCustom_Grid_C");
static_assert(offsetof(UWBP_G_V2_GodAbilityLevelBarCustom_Grid_C, UberGraphFrame) == 0x0007F0, "Member 'UWBP_G_V2_GodAbilityLevelBarCustom_Grid_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_GodAbilityLevelBarCustom_Grid_C, LevelWidgetContainer) == 0x0007F8, "Member 'UWBP_G_V2_GodAbilityLevelBarCustom_Grid_C::LevelWidgetContainer' has a wrong offset!");

}


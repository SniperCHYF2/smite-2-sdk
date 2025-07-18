﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_QueueSelectV2_Screen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_C_QueueSelectV2_Screen.WBP_C_QueueSelectV2_Screen_C
// 0x0030 (0x06E8 - 0x06B8)
class UWBP_C_QueueSelectV2_Screen_C final : public UHWQueueSelectV2ScreenWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_C_QueueSelectV2_EntrySmall_C*      CustomEntry;                                       // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CustomGameBrowser_C*               CustomGameBrowser;                                 // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_C_QueueSelectV2_EntrySmall_C*      RankedInfoEntry;                                   // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_C_QueueSelectV2_EntrySmall_C*      RankedLeaderboardEntry;                            // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_C_QueueSelectV2_EntrySmall_C*      TrainingEntry;                                     // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	bool BP_OnHandleBackAction();
	void ExecuteUbergraph_WBP_C_QueueSelectV2_Screen(int32 EntryPoint);
	void HandleCustomClicked();
	void HandleRankedInfoClicked();
	void HandleRankedLeaderboardClicked();
	void HandleTrainingClicked();
	void InitializeWidget();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_C_QueueSelectV2_Screen_C">();
	}
	static class UWBP_C_QueueSelectV2_Screen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_C_QueueSelectV2_Screen_C>();
	}
};
static_assert(alignof(UWBP_C_QueueSelectV2_Screen_C) == 0x000008, "Wrong alignment on UWBP_C_QueueSelectV2_Screen_C");
static_assert(sizeof(UWBP_C_QueueSelectV2_Screen_C) == 0x0006E8, "Wrong size on UWBP_C_QueueSelectV2_Screen_C");
static_assert(offsetof(UWBP_C_QueueSelectV2_Screen_C, UberGraphFrame) == 0x0006B8, "Member 'UWBP_C_QueueSelectV2_Screen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_C_QueueSelectV2_Screen_C, CustomEntry) == 0x0006C0, "Member 'UWBP_C_QueueSelectV2_Screen_C::CustomEntry' has a wrong offset!");
static_assert(offsetof(UWBP_C_QueueSelectV2_Screen_C, CustomGameBrowser) == 0x0006C8, "Member 'UWBP_C_QueueSelectV2_Screen_C::CustomGameBrowser' has a wrong offset!");
static_assert(offsetof(UWBP_C_QueueSelectV2_Screen_C, RankedInfoEntry) == 0x0006D0, "Member 'UWBP_C_QueueSelectV2_Screen_C::RankedInfoEntry' has a wrong offset!");
static_assert(offsetof(UWBP_C_QueueSelectV2_Screen_C, RankedLeaderboardEntry) == 0x0006D8, "Member 'UWBP_C_QueueSelectV2_Screen_C::RankedLeaderboardEntry' has a wrong offset!");
static_assert(offsetof(UWBP_C_QueueSelectV2_Screen_C, TrainingEntry) == 0x0006E0, "Member 'UWBP_C_QueueSelectV2_Screen_C::TrainingEntry' has a wrong offset!");

}


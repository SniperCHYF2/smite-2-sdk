﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_QueueSelectV2_Entry

#include "Basic.hpp"

#include "HemingwayUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_C_QueueSelectV2_Entry.WBP_C_QueueSelectV2_Entry_C
// 0x0080 (0x06B0 - 0x0630)
class UWBP_C_QueueSelectV2_Entry_C final : public UHWQueueSelectV2EntryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0630(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWImage*                               BackgroundImage;                                   // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           BlurbText;                                         // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               QueueIcon;                                         // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           QueueText;                                         // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWBorder*                              RootBorder;                                        // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           BackgroundColor;                                   // 0x0660(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   QueueName;                                         // 0x0670(0x0018)(Edit, BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>              QueueIconBrush;                                    // 0x0688(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void PopulateQueueDetails(const struct FRHQueueDetails& QueueDetails);
	void InitializeWidget();
	void ExecuteUbergraph_WBP_C_QueueSelectV2_Entry(int32 EntryPoint);
	void DoUnhover();
	void DoHover();
	void BndEvt__WBP_C_QueueSelectV2_Entry_RootButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_C_QueueSelectV2_Entry_RootButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_C_QueueSelectV2_Entry_C">();
	}
	static class UWBP_C_QueueSelectV2_Entry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_C_QueueSelectV2_Entry_C>();
	}
};
static_assert(alignof(UWBP_C_QueueSelectV2_Entry_C) == 0x000008, "Wrong alignment on UWBP_C_QueueSelectV2_Entry_C");
static_assert(sizeof(UWBP_C_QueueSelectV2_Entry_C) == 0x0006B0, "Wrong size on UWBP_C_QueueSelectV2_Entry_C");
static_assert(offsetof(UWBP_C_QueueSelectV2_Entry_C, UberGraphFrame) == 0x000630, "Member 'UWBP_C_QueueSelectV2_Entry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_C_QueueSelectV2_Entry_C, BackgroundImage) == 0x000638, "Member 'UWBP_C_QueueSelectV2_Entry_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(UWBP_C_QueueSelectV2_Entry_C, BlurbText) == 0x000640, "Member 'UWBP_C_QueueSelectV2_Entry_C::BlurbText' has a wrong offset!");
static_assert(offsetof(UWBP_C_QueueSelectV2_Entry_C, QueueIcon) == 0x000648, "Member 'UWBP_C_QueueSelectV2_Entry_C::QueueIcon' has a wrong offset!");
static_assert(offsetof(UWBP_C_QueueSelectV2_Entry_C, QueueText) == 0x000650, "Member 'UWBP_C_QueueSelectV2_Entry_C::QueueText' has a wrong offset!");
static_assert(offsetof(UWBP_C_QueueSelectV2_Entry_C, RootBorder) == 0x000658, "Member 'UWBP_C_QueueSelectV2_Entry_C::RootBorder' has a wrong offset!");
static_assert(offsetof(UWBP_C_QueueSelectV2_Entry_C, BackgroundColor) == 0x000660, "Member 'UWBP_C_QueueSelectV2_Entry_C::BackgroundColor' has a wrong offset!");
static_assert(offsetof(UWBP_C_QueueSelectV2_Entry_C, QueueName) == 0x000670, "Member 'UWBP_C_QueueSelectV2_Entry_C::QueueName' has a wrong offset!");
static_assert(offsetof(UWBP_C_QueueSelectV2_Entry_C, QueueIconBrush) == 0x000688, "Member 'UWBP_C_QueueSelectV2_Entry_C::QueueIconBrush' has a wrong offset!");

}


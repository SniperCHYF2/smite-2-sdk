﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BanPickDraftUI

#include "Basic.hpp"

#include "BanPickDraftCommon_structs.hpp"


namespace SDK::Params
{

// Function BanPickDraftUI.DraftActorWidget.ChoicesChanged
// 0x0020 (0x0020 - 0x0000)
struct DraftActorWidget_ChoicesChanged final
{
public:
	TArray<class UObject*>                        RemovedChoices;                                    // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UObject*>                        AddedOrUpdatedChoices;                             // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftActorWidget_ChoicesChanged) == 0x000008, "Wrong alignment on DraftActorWidget_ChoicesChanged");
static_assert(sizeof(DraftActorWidget_ChoicesChanged) == 0x000020, "Wrong size on DraftActorWidget_ChoicesChanged");
static_assert(offsetof(DraftActorWidget_ChoicesChanged, RemovedChoices) == 0x000000, "Member 'DraftActorWidget_ChoicesChanged::RemovedChoices' has a wrong offset!");
static_assert(offsetof(DraftActorWidget_ChoicesChanged, AddedOrUpdatedChoices) == 0x000010, "Member 'DraftActorWidget_ChoicesChanged::AddedOrUpdatedChoices' has a wrong offset!");

// Function BanPickDraftUI.DraftActorWidget.DraftActorAddedToOwner
// 0x0008 (0x0008 - 0x0000)
struct DraftActorWidget_DraftActorAddedToOwner final
{
public:
	class ADraftReplicatedActor*                  NewDraftActor;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftActorWidget_DraftActorAddedToOwner) == 0x000008, "Wrong alignment on DraftActorWidget_DraftActorAddedToOwner");
static_assert(sizeof(DraftActorWidget_DraftActorAddedToOwner) == 0x000008, "Wrong size on DraftActorWidget_DraftActorAddedToOwner");
static_assert(offsetof(DraftActorWidget_DraftActorAddedToOwner, NewDraftActor) == 0x000000, "Member 'DraftActorWidget_DraftActorAddedToOwner::NewDraftActor' has a wrong offset!");

// Function BanPickDraftUI.DraftActorWidget.OnBoundDraftActorDestroyed
// 0x0008 (0x0008 - 0x0000)
struct DraftActorWidget_OnBoundDraftActorDestroyed final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftActorWidget_OnBoundDraftActorDestroyed) == 0x000008, "Wrong alignment on DraftActorWidget_OnBoundDraftActorDestroyed");
static_assert(sizeof(DraftActorWidget_OnBoundDraftActorDestroyed) == 0x000008, "Wrong size on DraftActorWidget_OnBoundDraftActorDestroyed");
static_assert(offsetof(DraftActorWidget_OnBoundDraftActorDestroyed, DestroyedActor) == 0x000000, "Member 'DraftActorWidget_OnBoundDraftActorDestroyed::DestroyedActor' has a wrong offset!");

// Function BanPickDraftUI.DraftActorWidget.SetBindToAllPersonalTasksCompleted
// 0x0001 (0x0001 - 0x0000)
struct DraftActorWidget_SetBindToAllPersonalTasksCompleted final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftActorWidget_SetBindToAllPersonalTasksCompleted) == 0x000001, "Wrong alignment on DraftActorWidget_SetBindToAllPersonalTasksCompleted");
static_assert(sizeof(DraftActorWidget_SetBindToAllPersonalTasksCompleted) == 0x000001, "Wrong size on DraftActorWidget_SetBindToAllPersonalTasksCompleted");
static_assert(offsetof(DraftActorWidget_SetBindToAllPersonalTasksCompleted, bEnable) == 0x000000, "Member 'DraftActorWidget_SetBindToAllPersonalTasksCompleted::bEnable' has a wrong offset!");

// Function BanPickDraftUI.DraftActorWidget.SetBindToChoicesChanged
// 0x0001 (0x0001 - 0x0000)
struct DraftActorWidget_SetBindToChoicesChanged final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftActorWidget_SetBindToChoicesChanged) == 0x000001, "Wrong alignment on DraftActorWidget_SetBindToChoicesChanged");
static_assert(sizeof(DraftActorWidget_SetBindToChoicesChanged) == 0x000001, "Wrong size on DraftActorWidget_SetBindToChoicesChanged");
static_assert(offsetof(DraftActorWidget_SetBindToChoicesChanged, bEnable) == 0x000000, "Member 'DraftActorWidget_SetBindToChoicesChanged::bEnable' has a wrong offset!");

// Function BanPickDraftUI.DraftActorWidget.SetBindToEndDraft
// 0x0001 (0x0001 - 0x0000)
struct DraftActorWidget_SetBindToEndDraft final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftActorWidget_SetBindToEndDraft) == 0x000001, "Wrong alignment on DraftActorWidget_SetBindToEndDraft");
static_assert(sizeof(DraftActorWidget_SetBindToEndDraft) == 0x000001, "Wrong size on DraftActorWidget_SetBindToEndDraft");
static_assert(offsetof(DraftActorWidget_SetBindToEndDraft, bEnable) == 0x000000, "Member 'DraftActorWidget_SetBindToEndDraft::bEnable' has a wrong offset!");

// Function BanPickDraftUI.DraftActorWidget.SetBindToPendingTasksChanged
// 0x0001 (0x0001 - 0x0000)
struct DraftActorWidget_SetBindToPendingTasksChanged final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftActorWidget_SetBindToPendingTasksChanged) == 0x000001, "Wrong alignment on DraftActorWidget_SetBindToPendingTasksChanged");
static_assert(sizeof(DraftActorWidget_SetBindToPendingTasksChanged) == 0x000001, "Wrong size on DraftActorWidget_SetBindToPendingTasksChanged");
static_assert(offsetof(DraftActorWidget_SetBindToPendingTasksChanged, bEnable) == 0x000000, "Member 'DraftActorWidget_SetBindToPendingTasksChanged::bEnable' has a wrong offset!");

// Function BanPickDraftUI.DraftActorWidget.SetBindToPersonalTaskChanged
// 0x0001 (0x0001 - 0x0000)
struct DraftActorWidget_SetBindToPersonalTaskChanged final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftActorWidget_SetBindToPersonalTaskChanged) == 0x000001, "Wrong alignment on DraftActorWidget_SetBindToPersonalTaskChanged");
static_assert(sizeof(DraftActorWidget_SetBindToPersonalTaskChanged) == 0x000001, "Wrong size on DraftActorWidget_SetBindToPersonalTaskChanged");
static_assert(offsetof(DraftActorWidget_SetBindToPersonalTaskChanged, bEnable) == 0x000000, "Member 'DraftActorWidget_SetBindToPersonalTaskChanged::bEnable' has a wrong offset!");

// Function BanPickDraftUI.DraftActorWidget.SetBindToTaskCompleted
// 0x0001 (0x0001 - 0x0000)
struct DraftActorWidget_SetBindToTaskCompleted final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftActorWidget_SetBindToTaskCompleted) == 0x000001, "Wrong alignment on DraftActorWidget_SetBindToTaskCompleted");
static_assert(sizeof(DraftActorWidget_SetBindToTaskCompleted) == 0x000001, "Wrong size on DraftActorWidget_SetBindToTaskCompleted");
static_assert(offsetof(DraftActorWidget_SetBindToTaskCompleted, bEnable) == 0x000000, "Member 'DraftActorWidget_SetBindToTaskCompleted::bEnable' has a wrong offset!");

// Function BanPickDraftUI.DraftActorWidget.SetBindToTasksChanged
// 0x0001 (0x0001 - 0x0000)
struct DraftActorWidget_SetBindToTasksChanged final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftActorWidget_SetBindToTasksChanged) == 0x000001, "Wrong alignment on DraftActorWidget_SetBindToTasksChanged");
static_assert(sizeof(DraftActorWidget_SetBindToTasksChanged) == 0x000001, "Wrong size on DraftActorWidget_SetBindToTasksChanged");
static_assert(offsetof(DraftActorWidget_SetBindToTasksChanged, bEnable) == 0x000000, "Member 'DraftActorWidget_SetBindToTasksChanged::bEnable' has a wrong offset!");

// Function BanPickDraftUI.DraftActorWidget.SetDraftActor
// 0x0008 (0x0008 - 0x0000)
struct DraftActorWidget_SetDraftActor final
{
public:
	class ADraftReplicatedActor*                  InNewDraftActor;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftActorWidget_SetDraftActor) == 0x000008, "Wrong alignment on DraftActorWidget_SetDraftActor");
static_assert(sizeof(DraftActorWidget_SetDraftActor) == 0x000008, "Wrong size on DraftActorWidget_SetDraftActor");
static_assert(offsetof(DraftActorWidget_SetDraftActor, InNewDraftActor) == 0x000000, "Member 'DraftActorWidget_SetDraftActor::InNewDraftActor' has a wrong offset!");

// Function BanPickDraftUI.DraftActorWidget.TaskCompleted
// 0x0048 (0x0048 - 0x0000)
struct DraftActorWidget_TaskCompleted final
{
public:
	struct FDraftTask                             CompletedTask;                                     // 0x0000(0x0048)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftActorWidget_TaskCompleted) == 0x000008, "Wrong alignment on DraftActorWidget_TaskCompleted");
static_assert(sizeof(DraftActorWidget_TaskCompleted) == 0x000048, "Wrong size on DraftActorWidget_TaskCompleted");
static_assert(offsetof(DraftActorWidget_TaskCompleted, CompletedTask) == 0x000000, "Member 'DraftActorWidget_TaskCompleted::CompletedTask' has a wrong offset!");

// Function BanPickDraftUI.DraftActorWidget.GetDraftActor
// 0x0008 (0x0008 - 0x0000)
struct DraftActorWidget_GetDraftActor final
{
public:
	class ADraftReplicatedActor*                  ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftActorWidget_GetDraftActor) == 0x000008, "Wrong alignment on DraftActorWidget_GetDraftActor");
static_assert(sizeof(DraftActorWidget_GetDraftActor) == 0x000008, "Wrong size on DraftActorWidget_GetDraftActor");
static_assert(offsetof(DraftActorWidget_GetDraftActor, ReturnValue) == 0x000000, "Member 'DraftActorWidget_GetDraftActor::ReturnValue' has a wrong offset!");

// Function BanPickDraftUI.DraftChoiceGridWidget.SetChoiceWidgetClass
// 0x0008 (0x0008 - 0x0000)
struct DraftChoiceGridWidget_SetChoiceWidgetClass final
{
public:
	TSubclassOf<class UDraftChoiceWidget>         InChoiceWidgetClass;                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftChoiceGridWidget_SetChoiceWidgetClass) == 0x000008, "Wrong alignment on DraftChoiceGridWidget_SetChoiceWidgetClass");
static_assert(sizeof(DraftChoiceGridWidget_SetChoiceWidgetClass) == 0x000008, "Wrong size on DraftChoiceGridWidget_SetChoiceWidgetClass");
static_assert(offsetof(DraftChoiceGridWidget_SetChoiceWidgetClass, InChoiceWidgetClass) == 0x000000, "Member 'DraftChoiceGridWidget_SetChoiceWidgetClass::InChoiceWidgetClass' has a wrong offset!");

// Function BanPickDraftUI.DraftChoiceGridWidget.SetGridPanel
// 0x0008 (0x0008 - 0x0000)
struct DraftChoiceGridWidget_SetGridPanel final
{
public:
	class UGridPanel*                             InGridPanel;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftChoiceGridWidget_SetGridPanel) == 0x000008, "Wrong alignment on DraftChoiceGridWidget_SetGridPanel");
static_assert(sizeof(DraftChoiceGridWidget_SetGridPanel) == 0x000008, "Wrong size on DraftChoiceGridWidget_SetGridPanel");
static_assert(offsetof(DraftChoiceGridWidget_SetGridPanel, InGridPanel) == 0x000000, "Member 'DraftChoiceGridWidget_SetGridPanel::InGridPanel' has a wrong offset!");

// Function BanPickDraftUI.DraftChoiceGridWidget.SortActiveChoiceWidgets
// 0x0018 (0x0018 - 0x0000)
struct DraftChoiceGridWidget_SortActiveChoiceWidgets final
{
public:
	const class UDraftChoiceWidget*               LHS;                                               // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UDraftChoiceWidget*               RHS;                                               // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(DraftChoiceGridWidget_SortActiveChoiceWidgets) == 0x000008, "Wrong alignment on DraftChoiceGridWidget_SortActiveChoiceWidgets");
static_assert(sizeof(DraftChoiceGridWidget_SortActiveChoiceWidgets) == 0x000018, "Wrong size on DraftChoiceGridWidget_SortActiveChoiceWidgets");
static_assert(offsetof(DraftChoiceGridWidget_SortActiveChoiceWidgets, LHS) == 0x000000, "Member 'DraftChoiceGridWidget_SortActiveChoiceWidgets::LHS' has a wrong offset!");
static_assert(offsetof(DraftChoiceGridWidget_SortActiveChoiceWidgets, RHS) == 0x000008, "Member 'DraftChoiceGridWidget_SortActiveChoiceWidgets::RHS' has a wrong offset!");
static_assert(offsetof(DraftChoiceGridWidget_SortActiveChoiceWidgets, ReturnValue) == 0x000010, "Member 'DraftChoiceGridWidget_SortActiveChoiceWidgets::ReturnValue' has a wrong offset!");

// Function BanPickDraftUI.DraftChoiceWidget.AddCombinedHitTarget
// 0x0008 (0x0008 - 0x0000)
struct DraftChoiceWidget_AddCombinedHitTarget final
{
public:
	class UButton*                                InButton;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftChoiceWidget_AddCombinedHitTarget) == 0x000008, "Wrong alignment on DraftChoiceWidget_AddCombinedHitTarget");
static_assert(sizeof(DraftChoiceWidget_AddCombinedHitTarget) == 0x000008, "Wrong size on DraftChoiceWidget_AddCombinedHitTarget");
static_assert(offsetof(DraftChoiceWidget_AddCombinedHitTarget, InButton) == 0x000000, "Member 'DraftChoiceWidget_AddCombinedHitTarget::InButton' has a wrong offset!");

// Function BanPickDraftUI.DraftChoiceWidget.RemoveCombinedHitTarget
// 0x0008 (0x0008 - 0x0000)
struct DraftChoiceWidget_RemoveCombinedHitTarget final
{
public:
	class UButton*                                InButton;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftChoiceWidget_RemoveCombinedHitTarget) == 0x000008, "Wrong alignment on DraftChoiceWidget_RemoveCombinedHitTarget");
static_assert(sizeof(DraftChoiceWidget_RemoveCombinedHitTarget) == 0x000008, "Wrong size on DraftChoiceWidget_RemoveCombinedHitTarget");
static_assert(offsetof(DraftChoiceWidget_RemoveCombinedHitTarget, InButton) == 0x000000, "Member 'DraftChoiceWidget_RemoveCombinedHitTarget::InButton' has a wrong offset!");

// Function BanPickDraftUI.DraftChoiceWidget.RequestSelect
// 0x0001 (0x0001 - 0x0000)
struct DraftChoiceWidget_RequestSelect final
{
public:
	ECanCompleteDraftTaskResult                   ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftChoiceWidget_RequestSelect) == 0x000001, "Wrong alignment on DraftChoiceWidget_RequestSelect");
static_assert(sizeof(DraftChoiceWidget_RequestSelect) == 0x000001, "Wrong size on DraftChoiceWidget_RequestSelect");
static_assert(offsetof(DraftChoiceWidget_RequestSelect, ReturnValue) == 0x000000, "Member 'DraftChoiceWidget_RequestSelect::ReturnValue' has a wrong offset!");

// Function BanPickDraftUI.DraftChoiceWidget.SetChoiceObject
// 0x0008 (0x0008 - 0x0000)
struct DraftChoiceWidget_SetChoiceObject final
{
public:
	class UObject*                                ChoiceObject;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftChoiceWidget_SetChoiceObject) == 0x000008, "Wrong alignment on DraftChoiceWidget_SetChoiceObject");
static_assert(sizeof(DraftChoiceWidget_SetChoiceObject) == 0x000008, "Wrong size on DraftChoiceWidget_SetChoiceObject");
static_assert(offsetof(DraftChoiceWidget_SetChoiceObject, ChoiceObject) == 0x000000, "Member 'DraftChoiceWidget_SetChoiceObject::ChoiceObject' has a wrong offset!");

// Function BanPickDraftUI.DraftChoiceWidget.GetChoiceData
// 0x0010 (0x0010 - 0x0000)
struct DraftChoiceWidget_GetChoiceData final
{
public:
	struct FDraftChoice                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftChoiceWidget_GetChoiceData) == 0x000008, "Wrong alignment on DraftChoiceWidget_GetChoiceData");
static_assert(sizeof(DraftChoiceWidget_GetChoiceData) == 0x000010, "Wrong size on DraftChoiceWidget_GetChoiceData");
static_assert(offsetof(DraftChoiceWidget_GetChoiceData, ReturnValue) == 0x000000, "Member 'DraftChoiceWidget_GetChoiceData::ReturnValue' has a wrong offset!");

// Function BanPickDraftUI.DraftChoiceWidget.GetChoiceObject
// 0x0008 (0x0008 - 0x0000)
struct DraftChoiceWidget_GetChoiceObject final
{
public:
	class UObject*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftChoiceWidget_GetChoiceObject) == 0x000008, "Wrong alignment on DraftChoiceWidget_GetChoiceObject");
static_assert(sizeof(DraftChoiceWidget_GetChoiceObject) == 0x000008, "Wrong size on DraftChoiceWidget_GetChoiceObject");
static_assert(offsetof(DraftChoiceWidget_GetChoiceObject, ReturnValue) == 0x000000, "Member 'DraftChoiceWidget_GetChoiceObject::ReturnValue' has a wrong offset!");

// Function BanPickDraftUI.DraftPlayerStatusWidget.SetPlayerById
// 0x0010 (0x0010 - 0x0000)
struct DraftPlayerStatusWidget_SetPlayerById final
{
public:
	struct FDraftPlayerIdHandle                   InPlayerId;                                        // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftPlayerStatusWidget_SetPlayerById) == 0x000008, "Wrong alignment on DraftPlayerStatusWidget_SetPlayerById");
static_assert(sizeof(DraftPlayerStatusWidget_SetPlayerById) == 0x000010, "Wrong size on DraftPlayerStatusWidget_SetPlayerById");
static_assert(offsetof(DraftPlayerStatusWidget_SetPlayerById, InPlayerId) == 0x000000, "Member 'DraftPlayerStatusWidget_SetPlayerById::InPlayerId' has a wrong offset!");

// Function BanPickDraftUI.DraftPlayerStatusWidget.GetPlayerId
// 0x0010 (0x0010 - 0x0000)
struct DraftPlayerStatusWidget_GetPlayerId final
{
public:
	struct FDraftPlayerIdHandle                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftPlayerStatusWidget_GetPlayerId) == 0x000008, "Wrong alignment on DraftPlayerStatusWidget_GetPlayerId");
static_assert(sizeof(DraftPlayerStatusWidget_GetPlayerId) == 0x000010, "Wrong size on DraftPlayerStatusWidget_GetPlayerId");
static_assert(offsetof(DraftPlayerStatusWidget_GetPlayerId, ReturnValue) == 0x000000, "Member 'DraftPlayerStatusWidget_GetPlayerId::ReturnValue' has a wrong offset!");

// Function BanPickDraftUI.DraftPlayerStatusWidget.HasActiveTask
// 0x0001 (0x0001 - 0x0000)
struct DraftPlayerStatusWidget_HasActiveTask final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DraftPlayerStatusWidget_HasActiveTask) == 0x000001, "Wrong alignment on DraftPlayerStatusWidget_HasActiveTask");
static_assert(sizeof(DraftPlayerStatusWidget_HasActiveTask) == 0x000001, "Wrong size on DraftPlayerStatusWidget_HasActiveTask");
static_assert(offsetof(DraftPlayerStatusWidget_HasActiveTask, ReturnValue) == 0x000000, "Member 'DraftPlayerStatusWidget_HasActiveTask::ReturnValue' has a wrong offset!");

// Function BanPickDraftUI.DraftPlayerStatusWidget.HasLockedInAChoice
// 0x0010 (0x0010 - 0x0000)
struct DraftPlayerStatusWidget_HasLockedInAChoice final
{
public:
	class UObject*                                OutChoice;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(DraftPlayerStatusWidget_HasLockedInAChoice) == 0x000008, "Wrong alignment on DraftPlayerStatusWidget_HasLockedInAChoice");
static_assert(sizeof(DraftPlayerStatusWidget_HasLockedInAChoice) == 0x000010, "Wrong size on DraftPlayerStatusWidget_HasLockedInAChoice");
static_assert(offsetof(DraftPlayerStatusWidget_HasLockedInAChoice, OutChoice) == 0x000000, "Member 'DraftPlayerStatusWidget_HasLockedInAChoice::OutChoice' has a wrong offset!");
static_assert(offsetof(DraftPlayerStatusWidget_HasLockedInAChoice, ReturnValue) == 0x000008, "Member 'DraftPlayerStatusWidget_HasLockedInAChoice::ReturnValue' has a wrong offset!");

}


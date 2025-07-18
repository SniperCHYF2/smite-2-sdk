﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_QueueSelectV2_Entry

#include "Basic.hpp"

#include "RallyHereStart_structs.hpp"


namespace SDK::Params
{

// Function WBP_C_QueueSelectV2_Entry.WBP_C_QueueSelectV2_Entry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_C_QueueSelectV2_Entry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_QueueSelectV2_Entry_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_C_QueueSelectV2_Entry_C_PreConstruct");
static_assert(sizeof(WBP_C_QueueSelectV2_Entry_C_PreConstruct) == 0x000001, "Wrong size on WBP_C_QueueSelectV2_Entry_C_PreConstruct");
static_assert(offsetof(WBP_C_QueueSelectV2_Entry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_C_QueueSelectV2_Entry_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_C_QueueSelectV2_Entry.WBP_C_QueueSelectV2_Entry_C.PopulateQueueDetails
// 0x0198 (0x0198 - 0x0000)
struct WBP_C_QueueSelectV2_Entry_C_PopulateQueueDetails final
{
public:
	struct FRHQueueDetails                        QueueDetails;                                      // 0x0000(0x0198)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_C_QueueSelectV2_Entry_C_PopulateQueueDetails) == 0x000008, "Wrong alignment on WBP_C_QueueSelectV2_Entry_C_PopulateQueueDetails");
static_assert(sizeof(WBP_C_QueueSelectV2_Entry_C_PopulateQueueDetails) == 0x000198, "Wrong size on WBP_C_QueueSelectV2_Entry_C_PopulateQueueDetails");
static_assert(offsetof(WBP_C_QueueSelectV2_Entry_C_PopulateQueueDetails, QueueDetails) == 0x000000, "Member 'WBP_C_QueueSelectV2_Entry_C_PopulateQueueDetails::QueueDetails' has a wrong offset!");

// Function WBP_C_QueueSelectV2_Entry.WBP_C_QueueSelectV2_Entry_C.ExecuteUbergraph_WBP_C_QueueSelectV2_Entry
// 0x0008 (0x0008 - 0x0000)
struct WBP_C_QueueSelectV2_Entry_C_ExecuteUbergraph_WBP_C_QueueSelectV2_Entry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_QueueSelectV2_Entry_C_ExecuteUbergraph_WBP_C_QueueSelectV2_Entry) == 0x000004, "Wrong alignment on WBP_C_QueueSelectV2_Entry_C_ExecuteUbergraph_WBP_C_QueueSelectV2_Entry");
static_assert(sizeof(WBP_C_QueueSelectV2_Entry_C_ExecuteUbergraph_WBP_C_QueueSelectV2_Entry) == 0x000008, "Wrong size on WBP_C_QueueSelectV2_Entry_C_ExecuteUbergraph_WBP_C_QueueSelectV2_Entry");
static_assert(offsetof(WBP_C_QueueSelectV2_Entry_C_ExecuteUbergraph_WBP_C_QueueSelectV2_Entry, EntryPoint) == 0x000000, "Member 'WBP_C_QueueSelectV2_Entry_C_ExecuteUbergraph_WBP_C_QueueSelectV2_Entry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_C_QueueSelectV2_Entry_C_ExecuteUbergraph_WBP_C_QueueSelectV2_Entry, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_C_QueueSelectV2_Entry_C_ExecuteUbergraph_WBP_C_QueueSelectV2_Entry::K2Node_Event_IsDesignTime' has a wrong offset!");

}


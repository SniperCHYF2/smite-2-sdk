﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KantanChartsDatasource

#include "Basic.hpp"

#include "KantanChartsDatasource_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetNumSeries
// 0x0004 (0x0004 - 0x0000)
struct KantanCartesianDatasourceInterface_GetNumSeries final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KantanCartesianDatasourceInterface_GetNumSeries) == 0x000004, "Wrong alignment on KantanCartesianDatasourceInterface_GetNumSeries");
static_assert(sizeof(KantanCartesianDatasourceInterface_GetNumSeries) == 0x000004, "Wrong size on KantanCartesianDatasourceInterface_GetNumSeries");
static_assert(offsetof(KantanCartesianDatasourceInterface_GetNumSeries, ReturnValue) == 0x000000, "Member 'KantanCartesianDatasourceInterface_GetNumSeries::ReturnValue' has a wrong offset!");

// Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesDatapoints
// 0x0018 (0x0018 - 0x0000)
struct KantanCartesianDatasourceInterface_GetSeriesDatapoints final
{
public:
	int32                                         SeriesIdx;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FKantanCartesianDatapoint>      ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(KantanCartesianDatasourceInterface_GetSeriesDatapoints) == 0x000008, "Wrong alignment on KantanCartesianDatasourceInterface_GetSeriesDatapoints");
static_assert(sizeof(KantanCartesianDatasourceInterface_GetSeriesDatapoints) == 0x000018, "Wrong size on KantanCartesianDatasourceInterface_GetSeriesDatapoints");
static_assert(offsetof(KantanCartesianDatasourceInterface_GetSeriesDatapoints, SeriesIdx) == 0x000000, "Member 'KantanCartesianDatasourceInterface_GetSeriesDatapoints::SeriesIdx' has a wrong offset!");
static_assert(offsetof(KantanCartesianDatasourceInterface_GetSeriesDatapoints, ReturnValue) == 0x000008, "Member 'KantanCartesianDatasourceInterface_GetSeriesDatapoints::ReturnValue' has a wrong offset!");

// Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesId
// 0x000C (0x000C - 0x0000)
struct KantanCartesianDatasourceInterface_GetSeriesId final
{
public:
	int32                                         CatIdx;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ReturnValue;                                       // 0x0004(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KantanCartesianDatasourceInterface_GetSeriesId) == 0x000004, "Wrong alignment on KantanCartesianDatasourceInterface_GetSeriesId");
static_assert(sizeof(KantanCartesianDatasourceInterface_GetSeriesId) == 0x00000C, "Wrong size on KantanCartesianDatasourceInterface_GetSeriesId");
static_assert(offsetof(KantanCartesianDatasourceInterface_GetSeriesId, CatIdx) == 0x000000, "Member 'KantanCartesianDatasourceInterface_GetSeriesId::CatIdx' has a wrong offset!");
static_assert(offsetof(KantanCartesianDatasourceInterface_GetSeriesId, ReturnValue) == 0x000004, "Member 'KantanCartesianDatasourceInterface_GetSeriesId::ReturnValue' has a wrong offset!");

// Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesName
// 0x0020 (0x0020 - 0x0000)
struct KantanCartesianDatasourceInterface_GetSeriesName final
{
public:
	int32                                         SeriesIdx;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(KantanCartesianDatasourceInterface_GetSeriesName) == 0x000008, "Wrong alignment on KantanCartesianDatasourceInterface_GetSeriesName");
static_assert(sizeof(KantanCartesianDatasourceInterface_GetSeriesName) == 0x000020, "Wrong size on KantanCartesianDatasourceInterface_GetSeriesName");
static_assert(offsetof(KantanCartesianDatasourceInterface_GetSeriesName, SeriesIdx) == 0x000000, "Member 'KantanCartesianDatasourceInterface_GetSeriesName::SeriesIdx' has a wrong offset!");
static_assert(offsetof(KantanCartesianDatasourceInterface_GetSeriesName, ReturnValue) == 0x000008, "Member 'KantanCartesianDatasourceInterface_GetSeriesName::ReturnValue' has a wrong offset!");

// Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryId
// 0x000C (0x000C - 0x0000)
struct KantanCategoryDatasourceInterface_GetCategoryId final
{
public:
	int32                                         CatIdx;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ReturnValue;                                       // 0x0004(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KantanCategoryDatasourceInterface_GetCategoryId) == 0x000004, "Wrong alignment on KantanCategoryDatasourceInterface_GetCategoryId");
static_assert(sizeof(KantanCategoryDatasourceInterface_GetCategoryId) == 0x00000C, "Wrong size on KantanCategoryDatasourceInterface_GetCategoryId");
static_assert(offsetof(KantanCategoryDatasourceInterface_GetCategoryId, CatIdx) == 0x000000, "Member 'KantanCategoryDatasourceInterface_GetCategoryId::CatIdx' has a wrong offset!");
static_assert(offsetof(KantanCategoryDatasourceInterface_GetCategoryId, ReturnValue) == 0x000004, "Member 'KantanCategoryDatasourceInterface_GetCategoryId::ReturnValue' has a wrong offset!");

// Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryName
// 0x0020 (0x0020 - 0x0000)
struct KantanCategoryDatasourceInterface_GetCategoryName final
{
public:
	int32                                         CatIdx;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(KantanCategoryDatasourceInterface_GetCategoryName) == 0x000008, "Wrong alignment on KantanCategoryDatasourceInterface_GetCategoryName");
static_assert(sizeof(KantanCategoryDatasourceInterface_GetCategoryName) == 0x000020, "Wrong size on KantanCategoryDatasourceInterface_GetCategoryName");
static_assert(offsetof(KantanCategoryDatasourceInterface_GetCategoryName, CatIdx) == 0x000000, "Member 'KantanCategoryDatasourceInterface_GetCategoryName::CatIdx' has a wrong offset!");
static_assert(offsetof(KantanCategoryDatasourceInterface_GetCategoryName, ReturnValue) == 0x000008, "Member 'KantanCategoryDatasourceInterface_GetCategoryName::ReturnValue' has a wrong offset!");

// Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryValue
// 0x0008 (0x0008 - 0x0000)
struct KantanCategoryDatasourceInterface_GetCategoryValue final
{
public:
	int32                                         CatIdx;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KantanCategoryDatasourceInterface_GetCategoryValue) == 0x000004, "Wrong alignment on KantanCategoryDatasourceInterface_GetCategoryValue");
static_assert(sizeof(KantanCategoryDatasourceInterface_GetCategoryValue) == 0x000008, "Wrong size on KantanCategoryDatasourceInterface_GetCategoryValue");
static_assert(offsetof(KantanCategoryDatasourceInterface_GetCategoryValue, CatIdx) == 0x000000, "Member 'KantanCategoryDatasourceInterface_GetCategoryValue::CatIdx' has a wrong offset!");
static_assert(offsetof(KantanCategoryDatasourceInterface_GetCategoryValue, ReturnValue) == 0x000004, "Member 'KantanCategoryDatasourceInterface_GetCategoryValue::ReturnValue' has a wrong offset!");

// Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetNumCategories
// 0x0004 (0x0004 - 0x0000)
struct KantanCategoryDatasourceInterface_GetNumCategories final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KantanCategoryDatasourceInterface_GetNumCategories) == 0x000004, "Wrong alignment on KantanCategoryDatasourceInterface_GetNumCategories");
static_assert(sizeof(KantanCategoryDatasourceInterface_GetNumCategories) == 0x000004, "Wrong size on KantanCategoryDatasourceInterface_GetNumCategories");
static_assert(offsetof(KantanCategoryDatasourceInterface_GetNumCategories, ReturnValue) == 0x000000, "Member 'KantanCategoryDatasourceInterface_GetNumCategories::ReturnValue' has a wrong offset!");

// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.NewSimpleCartesianDatasource
// 0x0010 (0x0010 - 0x0000)
struct KantanSimpleCartesianDatasource_NewSimpleCartesianDatasource final
{
public:
	int32                                         MaxDatapoints;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UKantanSimpleCartesianDatasource*       ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KantanSimpleCartesianDatasource_NewSimpleCartesianDatasource) == 0x000008, "Wrong alignment on KantanSimpleCartesianDatasource_NewSimpleCartesianDatasource");
static_assert(sizeof(KantanSimpleCartesianDatasource_NewSimpleCartesianDatasource) == 0x000010, "Wrong size on KantanSimpleCartesianDatasource_NewSimpleCartesianDatasource");
static_assert(offsetof(KantanSimpleCartesianDatasource_NewSimpleCartesianDatasource, MaxDatapoints) == 0x000000, "Member 'KantanSimpleCartesianDatasource_NewSimpleCartesianDatasource::MaxDatapoints' has a wrong offset!");
static_assert(offsetof(KantanSimpleCartesianDatasource_NewSimpleCartesianDatasource, ReturnValue) == 0x000008, "Member 'KantanSimpleCartesianDatasource_NewSimpleCartesianDatasource::ReturnValue' has a wrong offset!");

// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddDatapoint
// 0x0020 (0x0020 - 0x0000)
struct KantanSimpleCartesianDatasource_BP_AddDatapoint final
{
public:
	class FName                                   SeriesId;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Point;                                             // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSuccess;                                          // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KantanSimpleCartesianDatasource_BP_AddDatapoint) == 0x000008, "Wrong alignment on KantanSimpleCartesianDatasource_BP_AddDatapoint");
static_assert(sizeof(KantanSimpleCartesianDatasource_BP_AddDatapoint) == 0x000020, "Wrong size on KantanSimpleCartesianDatasource_BP_AddDatapoint");
static_assert(offsetof(KantanSimpleCartesianDatasource_BP_AddDatapoint, SeriesId) == 0x000000, "Member 'KantanSimpleCartesianDatasource_BP_AddDatapoint::SeriesId' has a wrong offset!");
static_assert(offsetof(KantanSimpleCartesianDatasource_BP_AddDatapoint, Point) == 0x000008, "Member 'KantanSimpleCartesianDatasource_BP_AddDatapoint::Point' has a wrong offset!");
static_assert(offsetof(KantanSimpleCartesianDatasource_BP_AddDatapoint, bSuccess) == 0x000018, "Member 'KantanSimpleCartesianDatasource_BP_AddDatapoint::bSuccess' has a wrong offset!");

// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddSeries
// 0x0020 (0x0020 - 0x0000)
struct KantanSimpleCartesianDatasource_BP_AddSeries final
{
public:
	class FText                                   Name_0;                                            // 0x0000(0x0018)(Parm, NativeAccessSpecifierPublic)
	class FName                                   SeriesId;                                          // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KantanSimpleCartesianDatasource_BP_AddSeries) == 0x000008, "Wrong alignment on KantanSimpleCartesianDatasource_BP_AddSeries");
static_assert(sizeof(KantanSimpleCartesianDatasource_BP_AddSeries) == 0x000020, "Wrong size on KantanSimpleCartesianDatasource_BP_AddSeries");
static_assert(offsetof(KantanSimpleCartesianDatasource_BP_AddSeries, Name_0) == 0x000000, "Member 'KantanSimpleCartesianDatasource_BP_AddSeries::Name_0' has a wrong offset!");
static_assert(offsetof(KantanSimpleCartesianDatasource_BP_AddSeries, SeriesId) == 0x000018, "Member 'KantanSimpleCartesianDatasource_BP_AddSeries::SeriesId' has a wrong offset!");

// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddSeriesWithId
// 0x0028 (0x0028 - 0x0000)
struct KantanSimpleCartesianDatasource_BP_AddSeriesWithId final
{
public:
	class FName                                   ID;                                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Name_0;                                            // 0x0008(0x0018)(Parm, NativeAccessSpecifierPublic)
	bool                                          bSuccess;                                          // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KantanSimpleCartesianDatasource_BP_AddSeriesWithId) == 0x000008, "Wrong alignment on KantanSimpleCartesianDatasource_BP_AddSeriesWithId");
static_assert(sizeof(KantanSimpleCartesianDatasource_BP_AddSeriesWithId) == 0x000028, "Wrong size on KantanSimpleCartesianDatasource_BP_AddSeriesWithId");
static_assert(offsetof(KantanSimpleCartesianDatasource_BP_AddSeriesWithId, ID) == 0x000000, "Member 'KantanSimpleCartesianDatasource_BP_AddSeriesWithId::ID' has a wrong offset!");
static_assert(offsetof(KantanSimpleCartesianDatasource_BP_AddSeriesWithId, Name_0) == 0x000008, "Member 'KantanSimpleCartesianDatasource_BP_AddSeriesWithId::Name_0' has a wrong offset!");
static_assert(offsetof(KantanSimpleCartesianDatasource_BP_AddSeriesWithId, bSuccess) == 0x000020, "Member 'KantanSimpleCartesianDatasource_BP_AddSeriesWithId::bSuccess' has a wrong offset!");

// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_RemoveSeries
// 0x000C (0x000C - 0x0000)
struct KantanSimpleCartesianDatasource_BP_RemoveSeries final
{
public:
	class FName                                   ID;                                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSuccess;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KantanSimpleCartesianDatasource_BP_RemoveSeries) == 0x000004, "Wrong alignment on KantanSimpleCartesianDatasource_BP_RemoveSeries");
static_assert(sizeof(KantanSimpleCartesianDatasource_BP_RemoveSeries) == 0x00000C, "Wrong size on KantanSimpleCartesianDatasource_BP_RemoveSeries");
static_assert(offsetof(KantanSimpleCartesianDatasource_BP_RemoveSeries, ID) == 0x000000, "Member 'KantanSimpleCartesianDatasource_BP_RemoveSeries::ID' has a wrong offset!");
static_assert(offsetof(KantanSimpleCartesianDatasource_BP_RemoveSeries, bSuccess) == 0x000008, "Member 'KantanSimpleCartesianDatasource_BP_RemoveSeries::bSuccess' has a wrong offset!");

// Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_SetDatapointLimit
// 0x0004 (0x0004 - 0x0000)
struct KantanSimpleCartesianDatasource_BP_SetDatapointLimit final
{
public:
	int32                                         Limit;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KantanSimpleCartesianDatasource_BP_SetDatapointLimit) == 0x000004, "Wrong alignment on KantanSimpleCartesianDatasource_BP_SetDatapointLimit");
static_assert(sizeof(KantanSimpleCartesianDatasource_BP_SetDatapointLimit) == 0x000004, "Wrong size on KantanSimpleCartesianDatasource_BP_SetDatapointLimit");
static_assert(offsetof(KantanSimpleCartesianDatasource_BP_SetDatapointLimit, Limit) == 0x000000, "Member 'KantanSimpleCartesianDatasource_BP_SetDatapointLimit::Limit' has a wrong offset!");

// Function KantanChartsDatasource.KantanSimpleCategoryDatasource.NewSimpleCategoryDatasource
// 0x0008 (0x0008 - 0x0000)
struct KantanSimpleCategoryDatasource_NewSimpleCategoryDatasource final
{
public:
	class UKantanSimpleCategoryDatasource*        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KantanSimpleCategoryDatasource_NewSimpleCategoryDatasource) == 0x000008, "Wrong alignment on KantanSimpleCategoryDatasource_NewSimpleCategoryDatasource");
static_assert(sizeof(KantanSimpleCategoryDatasource_NewSimpleCategoryDatasource) == 0x000008, "Wrong size on KantanSimpleCategoryDatasource_NewSimpleCategoryDatasource");
static_assert(offsetof(KantanSimpleCategoryDatasource_NewSimpleCategoryDatasource, ReturnValue) == 0x000000, "Member 'KantanSimpleCategoryDatasource_NewSimpleCategoryDatasource::ReturnValue' has a wrong offset!");

// Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_AddCategory
// 0x0020 (0x0020 - 0x0000)
struct KantanSimpleCategoryDatasource_BP_AddCategory final
{
public:
	class FText                                   Name_0;                                            // 0x0000(0x0018)(Parm, NativeAccessSpecifierPublic)
	class FName                                   CatId;                                             // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KantanSimpleCategoryDatasource_BP_AddCategory) == 0x000008, "Wrong alignment on KantanSimpleCategoryDatasource_BP_AddCategory");
static_assert(sizeof(KantanSimpleCategoryDatasource_BP_AddCategory) == 0x000020, "Wrong size on KantanSimpleCategoryDatasource_BP_AddCategory");
static_assert(offsetof(KantanSimpleCategoryDatasource_BP_AddCategory, Name_0) == 0x000000, "Member 'KantanSimpleCategoryDatasource_BP_AddCategory::Name_0' has a wrong offset!");
static_assert(offsetof(KantanSimpleCategoryDatasource_BP_AddCategory, CatId) == 0x000018, "Member 'KantanSimpleCategoryDatasource_BP_AddCategory::CatId' has a wrong offset!");

// Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_AddCategoryWithId
// 0x0028 (0x0028 - 0x0000)
struct KantanSimpleCategoryDatasource_BP_AddCategoryWithId final
{
public:
	class FName                                   ID;                                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Name_0;                                            // 0x0008(0x0018)(Parm, NativeAccessSpecifierPublic)
	bool                                          bSuccess;                                          // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KantanSimpleCategoryDatasource_BP_AddCategoryWithId) == 0x000008, "Wrong alignment on KantanSimpleCategoryDatasource_BP_AddCategoryWithId");
static_assert(sizeof(KantanSimpleCategoryDatasource_BP_AddCategoryWithId) == 0x000028, "Wrong size on KantanSimpleCategoryDatasource_BP_AddCategoryWithId");
static_assert(offsetof(KantanSimpleCategoryDatasource_BP_AddCategoryWithId, ID) == 0x000000, "Member 'KantanSimpleCategoryDatasource_BP_AddCategoryWithId::ID' has a wrong offset!");
static_assert(offsetof(KantanSimpleCategoryDatasource_BP_AddCategoryWithId, Name_0) == 0x000008, "Member 'KantanSimpleCategoryDatasource_BP_AddCategoryWithId::Name_0' has a wrong offset!");
static_assert(offsetof(KantanSimpleCategoryDatasource_BP_AddCategoryWithId, bSuccess) == 0x000020, "Member 'KantanSimpleCategoryDatasource_BP_AddCategoryWithId::bSuccess' has a wrong offset!");

// Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_RemoveCategory
// 0x000C (0x000C - 0x0000)
struct KantanSimpleCategoryDatasource_BP_RemoveCategory final
{
public:
	class FName                                   ID;                                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSuccess;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KantanSimpleCategoryDatasource_BP_RemoveCategory) == 0x000004, "Wrong alignment on KantanSimpleCategoryDatasource_BP_RemoveCategory");
static_assert(sizeof(KantanSimpleCategoryDatasource_BP_RemoveCategory) == 0x00000C, "Wrong size on KantanSimpleCategoryDatasource_BP_RemoveCategory");
static_assert(offsetof(KantanSimpleCategoryDatasource_BP_RemoveCategory, ID) == 0x000000, "Member 'KantanSimpleCategoryDatasource_BP_RemoveCategory::ID' has a wrong offset!");
static_assert(offsetof(KantanSimpleCategoryDatasource_BP_RemoveCategory, bSuccess) == 0x000008, "Member 'KantanSimpleCategoryDatasource_BP_RemoveCategory::bSuccess' has a wrong offset!");

// Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_UpdateCategoryValue
// 0x0010 (0x0010 - 0x0000)
struct KantanSimpleCategoryDatasource_BP_UpdateCategoryValue final
{
public:
	class FName                                   ID;                                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSuccess;                                          // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KantanSimpleCategoryDatasource_BP_UpdateCategoryValue) == 0x000004, "Wrong alignment on KantanSimpleCategoryDatasource_BP_UpdateCategoryValue");
static_assert(sizeof(KantanSimpleCategoryDatasource_BP_UpdateCategoryValue) == 0x000010, "Wrong size on KantanSimpleCategoryDatasource_BP_UpdateCategoryValue");
static_assert(offsetof(KantanSimpleCategoryDatasource_BP_UpdateCategoryValue, ID) == 0x000000, "Member 'KantanSimpleCategoryDatasource_BP_UpdateCategoryValue::ID' has a wrong offset!");
static_assert(offsetof(KantanSimpleCategoryDatasource_BP_UpdateCategoryValue, Value) == 0x000008, "Member 'KantanSimpleCategoryDatasource_BP_UpdateCategoryValue::Value' has a wrong offset!");
static_assert(offsetof(KantanSimpleCategoryDatasource_BP_UpdateCategoryValue, bSuccess) == 0x00000C, "Member 'KantanSimpleCategoryDatasource_BP_UpdateCategoryValue::bSuccess' has a wrong offset!");

}


﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_NPE_PopupTextSection

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_NPE_PopupTextSection.S_NPE_PopupTextSection
// 0x0060 (0x0060 - 0x0000)
struct FS_NPE_PopupTextSection final
{
public:
	class FText                                   SectionTitleText_14_C5774B804AD6A5E35827DB8EDB66F712; // 0x0000(0x0018)(Edit, BlueprintVisible)
	struct FSlateColor                            SectionTitleColor_13_CA718B1F4533101E603311ADD654A406; // 0x0018(0x0014)(Edit, BlueprintVisible)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   SectionText_15_EEB07B884063226B2FA342A3DD3A001C;   // 0x0030(0x0018)(Edit, BlueprintVisible)
	struct FSlateColor                            SectionColor_16_236100A74BF2864100C86F8AA1C8DD98;  // 0x0048(0x0014)(Edit, BlueprintVisible)
};
static_assert(alignof(FS_NPE_PopupTextSection) == 0x000008, "Wrong alignment on FS_NPE_PopupTextSection");
static_assert(sizeof(FS_NPE_PopupTextSection) == 0x000060, "Wrong size on FS_NPE_PopupTextSection");
static_assert(offsetof(FS_NPE_PopupTextSection, SectionTitleText_14_C5774B804AD6A5E35827DB8EDB66F712) == 0x000000, "Member 'FS_NPE_PopupTextSection::SectionTitleText_14_C5774B804AD6A5E35827DB8EDB66F712' has a wrong offset!");
static_assert(offsetof(FS_NPE_PopupTextSection, SectionTitleColor_13_CA718B1F4533101E603311ADD654A406) == 0x000018, "Member 'FS_NPE_PopupTextSection::SectionTitleColor_13_CA718B1F4533101E603311ADD654A406' has a wrong offset!");
static_assert(offsetof(FS_NPE_PopupTextSection, SectionText_15_EEB07B884063226B2FA342A3DD3A001C) == 0x000030, "Member 'FS_NPE_PopupTextSection::SectionText_15_EEB07B884063226B2FA342A3DD3A001C' has a wrong offset!");
static_assert(offsetof(FS_NPE_PopupTextSection, SectionColor_16_236100A74BF2864100C86F8AA1C8DD98) == 0x000048, "Member 'FS_NPE_PopupTextSection::SectionColor_16_236100A74BF2864100C86F8AA1C8DD98' has a wrong offset!");

}


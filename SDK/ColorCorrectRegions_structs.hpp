﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ColorCorrectRegions

#include "Basic.hpp"


namespace SDK
{

// Enum ColorCorrectRegions.EColorCorrectRegionsType
// NumValues: 0x0005
enum class EColorCorrectRegionsType : uint8
{
	Sphere                                   = 0,
	Box                                      = 1,
	Cylinder                                 = 2,
	Cone                                     = 3,
	MAX                                      = 4,
};

// Enum ColorCorrectRegions.EColorCorrectWindowType
// NumValues: 0x0003
enum class EColorCorrectWindowType : uint8
{
	Square                                   = 0,
	Circle                                   = 1,
	MAX                                      = 2,
};

// Enum ColorCorrectRegions.EColorCorrectRegionTemperatureType
// NumValues: 0x0004
enum class EColorCorrectRegionTemperatureType : uint8
{
	LegacyTemperature                        = 0,
	WhiteBalance                             = 1,
	ColorTemperature                         = 2,
	MAX                                      = 3,
};

// Enum ColorCorrectRegions.EColorCorrectRegionStencilType
// NumValues: 0x0003
enum class EColorCorrectRegionStencilType : uint8
{
	ExcludeStencil                           = 0,
	IncludeStencil                           = 1,
	MAX                                      = 2,
};

}


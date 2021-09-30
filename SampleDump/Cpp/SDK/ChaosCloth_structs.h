#pragma once

// Name: Mordhau, Version: 4_25_hotfix


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum ChaosCloth.EChaosWeightMapTarget
enum class ChaosCloth_EChaosWeightMapTarget : uint8_t
{
	EChaosWeightMapTarget__None    = 0,
	EChaosWeightMapTarget__MaxDistance = 1,
	EChaosWeightMapTarget__BackstopDistance = 2,
	EChaosWeightMapTarget__BackstopRadius = 3,
	EChaosWeightMapTarget__AnimDriveMultiplier = 4,
	EChaosWeightMapTarget__EChaosWeightMapTarget_MAX = 5,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

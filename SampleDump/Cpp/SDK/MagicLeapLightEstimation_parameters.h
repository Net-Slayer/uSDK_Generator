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
// Parameters
//---------------------------------------------------------------------------

// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid
struct UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState
struct UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Params
{
	struct FMagicLeapLightEstimationColorTemperatureState ColorTemperatureState;                                     // 0x0000(0x0020)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState
struct UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Params
{
	struct FMagicLeapLightEstimationAmbientGlobalState GlobalAmbientState;                                        // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker
struct UMagicLeapLightEstimationFunctionLibrary_DestroyTracker_Params
{
};

// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker
struct UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

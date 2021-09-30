// Name: Mordhau, Version: 4_25_hotfix

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00D25410
//		Name   -> Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapLightEstimationFunctionLibrary::STATIC_IsTrackerValid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid");

	UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D25380
//		Name   -> Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FMagicLeapLightEstimationColorTemperatureState ColorTemperatureState                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapLightEstimationFunctionLibrary::STATIC_GetColorTemperatureState(struct FMagicLeapLightEstimationColorTemperatureState* ColorTemperatureState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState");

	UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ColorTemperatureState != nullptr)
		*ColorTemperatureState = params.ColorTemperatureState;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D252D0
//		Name   -> Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FMagicLeapLightEstimationAmbientGlobalState GlobalAmbientState                                         (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapLightEstimationFunctionLibrary::STATIC_GetAmbientGlobalState(struct FMagicLeapLightEstimationAmbientGlobalState* GlobalAmbientState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState");

	UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GlobalAmbientState != nullptr)
		*GlobalAmbientState = params.GlobalAmbientState;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D252B0
//		Name   -> Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UMagicLeapLightEstimationFunctionLibrary::STATIC_DestroyTracker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker");

	UMagicLeapLightEstimationFunctionLibrary_DestroyTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00D25280
//		Name   -> Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapLightEstimationFunctionLibrary::STATIC_CreateTracker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker");

	UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

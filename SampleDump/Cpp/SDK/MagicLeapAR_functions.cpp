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
//		Offset -> 0x00D00120
//		Name   -> Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class ULuminARSessionConfig*                       Configuration                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULuminARSessionFunctionLibrary::STATIC_StartLuminARSession(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ULuminARSessionConfig* Configuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession");

	ULuminARSessionFunctionLibrary_StartLuminARSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Configuration = Configuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CFFDF0
//		Name   -> Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ScreenPosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FARTraceResult>                      OutHitResults                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULuminARFrameFunctionLibrary::STATIC_LuminARLineTrace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, TArray<struct FARTraceResult>* OutHitResults)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace");

	ULuminARFrameFunctionLibrary_LuminARLineTrace_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHitResults != nullptr)
		*OutHitResults = params.OutHitResults;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFFDA0
//		Name   -> Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		MagicLeapAR_ELuminARTrackingState                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapAR_ELuminARTrackingState ULuminARFrameFunctionLibrary::STATIC_GetTrackingState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState");

	ULuminARFrameFunctionLibrary_GetTrackingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFFAA0
//		Name   -> Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  CandidateTexture                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     FriendlyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PhysicalWidth                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUseUnreliablePose                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bImageIsStationary                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULuminARCandidateImage*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULuminARCandidateImage* ULuminARImageTrackingFunctionLibrary::STATIC_AddLuminRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage");

	ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Params params;
	params.SessionConfig = SessionConfig;
	params.CandidateTexture = CandidateTexture;
	params.FriendlyName = FriendlyName;
	params.PhysicalWidth = PhysicalWidth;
	params.bUseUnreliablePose = bUseUnreliablePose;
	params.bImageIsStationary = bImageIsStationary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFFCC0
//		Name   -> Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<float>                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<float> ULuminARLightEstimate::GetAmbientIntensityNits()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits");

	ULuminARLightEstimate_GetAmbientIntensityNits_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFFDD0
//		Name   -> Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULuminARCandidateImage::GetUseUnreliablePose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose");

	ULuminARCandidateImage_GetUseUnreliablePose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFFD80
//		Name   -> Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULuminARCandidateImage::GetImageIsStationary()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary");

	ULuminARCandidateImage_GetImageIsStationary_Params params;

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

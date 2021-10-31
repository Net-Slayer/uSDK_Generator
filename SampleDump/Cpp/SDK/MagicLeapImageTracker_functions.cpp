// Name: Mordhau, Version: Patch23

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
//		Offset -> 0x00D26A50
//		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UTexture2D*                                  ImageTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapImageTrackerComponent::SetTargetAsync(class UTexture2D* ImageTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync");

	UMagicLeapImageTrackerComponent_SetTargetAsync_Params params;
	params.ImageTarget = ImageTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D269B0
//		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapImageTrackerComponent::RemoveTargetAsync()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync");

	UMagicLeapImageTrackerComponent_RemoveTargetAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D269E0
//		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                MaxSimultaneousTargets                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapImageTrackerFunctionLibrary::STATIC_SetMaxSimultaneousTargets(int MaxSimultaneousTargets)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets");

	UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Params params;
	params.MaxSimultaneousTargets = MaxSimultaneousTargets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00D26980
//		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapImageTrackerFunctionLibrary::STATIC_IsImageTrackingEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled");

	UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D26950
//		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapImageTrackerFunctionLibrary::STATIC_GetMaxSimultaneousTargets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets");

	UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D268D0
//		Name   -> Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapImageTrackerFunctionLibrary::STATIC_EnableImageTracking(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking");

	UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

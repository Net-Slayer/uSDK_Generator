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
//		Offset -> 0x00CFB960
//		Name   -> Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FPurchaseItemDetails                        ItemDetails                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInAppPurchaseComponent::TryPurchaseItemAsync(const struct FPurchaseItemDetails& ItemDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync");

	UInAppPurchaseComponent_TryPurchaseItemAsync_Params params;
	params.ItemDetails = ItemDetails;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFB8D0
//		Name   -> Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InNumPages                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInAppPurchaseComponent::TryGetPurchaseHistoryAsync(int InNumPages)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync");

	UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Params params;
	params.InNumPages = InNumPages;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFB7F0
//		Name   -> Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FString>                             ItemIds                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInAppPurchaseComponent::TryGetItemsDetailsAsync(TArray<struct FString> ItemIds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync");

	UInAppPurchaseComponent_TryGetItemsDetailsAsync_Params params;
	params.ItemIds = ItemIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
//		struct FPurchaseConfirmation                       PurchaseConfirmations                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UInAppPurchaseComponent::PurchaseConfirmationSuccess__DelegateSignature(const struct FPurchaseConfirmation& PurchaseConfirmations)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature");

	UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Params params;
	params.PurchaseConfirmations = PurchaseConfirmations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void UInAppPurchaseComponent::PurchaseConfirmationFailure__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature");

	UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		struct FString                                     LogMessage                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInAppPurchaseComponent::InAppPurchaseLogMessage__DelegateSignature(const struct FString& LogMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature");

	UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Params params;
	params.LogMessage = LogMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
//		TArray<struct FPurchaseConfirmation>               PurchaseHistory                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInAppPurchaseComponent::GetPurchaseHistorySuccess__DelegateSignature(TArray<struct FPurchaseConfirmation> PurchaseHistory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature");

	UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Params params;
	params.PurchaseHistory = PurchaseHistory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void UInAppPurchaseComponent::GetPurchaseHistoryFailure__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature");

	UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
//		TArray<struct FPurchaseItemDetails>                ItemsDetails                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInAppPurchaseComponent::GetItemsDetailsSuccess__DelegateSignature(TArray<struct FPurchaseItemDetails> ItemsDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature");

	UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Params params;
	params.ItemsDetails = ItemsDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void UInAppPurchaseComponent::GetItemsDetailsFailure__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature");

	UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CFB730
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      InStabilizationDepthActor                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSetFocusActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapHMDFunctionLibrary::STATIC_SetStabilizationDepthActor(class AActor* InStabilizationDepthActor, bool bSetFocusActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor");

	UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Params params;
	params.InStabilizationDepthActor = InStabilizationDepthActor;
	params.bSetFocusActor = bSetFocusActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CFB670
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      InFocusActor                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSetStabilizationActor                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapHMDFunctionLibrary::STATIC_SetFocusActor(class AActor* InFocusActor, bool bSetStabilizationActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor");

	UMagicLeapHMDFunctionLibrary_SetFocusActor_Params params;
	params.InFocusActor = InFocusActor;
	params.bSetStabilizationActor = bSetStabilizationActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CFB5F0
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FRotator                                    InBaseRotation                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapHMDFunctionLibrary::STATIC_SetBaseRotation(const struct FRotator& InBaseRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation");

	UMagicLeapHMDFunctionLibrary_SetBaseRotation_Params params;
	params.InBaseRotation = InBaseRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CFB5F0
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     InBasePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapHMDFunctionLibrary::STATIC_SetBasePosition(const struct FVector& InBasePosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition");

	UMagicLeapHMDFunctionLibrary_SetBasePosition_Params params;
	params.InBasePosition = InBasePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CFB5F0
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FQuat                                       InBaseOrientation                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapHMDFunctionLibrary::STATIC_SetBaseOrientation(const struct FQuat& InBaseOrientation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation");

	UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Params params;
	params.InBaseOrientation = InBaseOrientation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CFB5C0
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHMDFunctionLibrary::STATIC_SetAppReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady");

	UMagicLeapHMDFunctionLibrary_SetAppReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFAF80
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHMDFunctionLibrary::STATIC_IsRunningOnMagicLeapHMD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD");

	UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFAEF0
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapHMDFunctionLibrary::STATIC_GetPlatformAPILevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel");

	UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFAEF0
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapHMDFunctionLibrary::STATIC_GetMLSDKVersionRevision()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision");

	UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFAEF0
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapHMDFunctionLibrary::STATIC_GetMLSDKVersionMinor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor");

	UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFAEF0
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapHMDFunctionLibrary::STATIC_GetMLSDKVersionMajor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor");

	UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFAE70
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMagicLeapHMDFunctionLibrary::STATIC_GetMLSDKVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion");

	UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFAF20
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapHMDFunctionLibrary::STATIC_GetMinimumAPILevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel");

	UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFADE0
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FMagicLeapHeadTrackingState                 State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHMDFunctionLibrary::STATIC_GetHeadTrackingState(struct FMagicLeapHeadTrackingState* State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState");

	UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFAC50
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHMDFunctionLibrary::STATIC_GetHeadTrackingMapEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents");

	UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFABA0
//		Name   -> Function MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FMagicLeapGraphicsClientPerformanceInfo     PerformanceInfo                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHMDFunctionLibrary::STATIC_GetGraphicsClientPerformanceInfo(struct FMagicLeapGraphicsClientPerformanceInfo* PerformanceInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo");

	UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PerformanceInfo != nullptr)
		*PerformanceInfo = params.PerformanceInfo;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFB4A0
//		Name   -> Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FMagicLeapTrackingMeshInfo                  NewMeshInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FMagicLeapMeshBlockRequest>          RequestedMesh                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapMeshTrackerComponent::SelectMeshBlocks(const struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks");

	UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Params params;
	params.NewMeshInfo = NewMeshInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RequestedMesh != nullptr)
		*RequestedMesh = params.RequestedMesh;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults)
// Parameters:
//		struct FGuid                                       ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<float>                                      Confidence                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapMeshTrackerComponent::OnMeshTrackerUpdated__DelegateSignature(const struct FGuid& ID, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature");

	UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Params params;
	params.ID = ID;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.Confidence = Confidence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CFAF50
//		Name   -> Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapMeshTrackerComponent::GetNumQueuedBlockUpdates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates");

	UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CFAB20
//		Name   -> Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMRMeshComponent*                            InMRMeshPtr                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapMeshTrackerComponent::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh");

	UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CFAB00
//		Name   -> Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMagicLeapMeshTrackerComponent::DisconnectBlockSelector()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector");

	UMagicLeapMeshTrackerComponent_DisconnectBlockSelector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CFAA80
//		Name   -> Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMRMeshComponent*                            InMRMeshPtr                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapMeshTrackerComponent::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh");

	UMagicLeapMeshTrackerComponent_ConnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CFA9E0
//		Name   -> Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMagicLeapMeshTrackerComponent::ConnectBlockSelector()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector");

	UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CFB380
//		Name   -> Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FMagicLeapTrackingMeshInfo                  NewMeshInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FMagicLeapMeshBlockRequest>          RequestedMesh                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapMeshBlockSelectorInterface::SelectMeshBlocks(const struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks");

	UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Params params;
	params.NewMeshInfo = NewMeshInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RequestedMesh != nullptr)
		*RequestedMesh = params.RequestedMesh;

}


// Function:
//		Offset -> 0x00CFB230
//		Name   -> Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FMagicLeapRaycastQueryParams                RequestParams                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapRaycastComponent::RequestRaycast(const struct FMagicLeapRaycastQueryParams& RequestParams, const struct FScriptDelegate& ResultDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast");

	UMagicLeapRaycastComponent_RequestRaycast_Params params;
	params.RequestParams = RequestParams;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FMagicLeapRaycastHitResult                  HitResult                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapRaycastComponent::RaycastResultDelegate__DelegateSignature(const struct FMagicLeapRaycastHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature");

	UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CFAFB0
//		Name   -> Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     UpVector                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              HorizontalFovDegrees                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               CollideWithUnobserved                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                UserData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FMagicLeapRaycastQueryParams                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FMagicLeapRaycastQueryParams UMagicLeapRaycastFunctionLibrary::STATIC_MakeRaycastQueryParams(const struct FVector& Position, const struct FVector& Direction, const struct FVector& UpVector, int Width, int Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int UserData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams");

	UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Params params;
	params.Position = Position;
	params.Direction = Direction;
	params.UpVector = UpVector;
	params.Width = Width;
	params.Height = Height;
	params.HorizontalFovDegrees = HorizontalFovDegrees;
	params.CollideWithUnobserved = CollideWithUnobserved;
	params.UserData = UserData;

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

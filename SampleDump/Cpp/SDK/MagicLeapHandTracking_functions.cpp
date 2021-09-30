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
//		Offset -> 0x00D192C0
//		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Confidence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapHandTrackingFunctionLibrary::STATIC_SetStaticGestureConfidenceThreshold(MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture, float Confidence)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold");

	UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Params params;
	params.Gesture = Gesture;
	params.Confidence = Confidence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00D19150
//		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture> StaticGesturesToActivate                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTrackingEnabled                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::STATIC_SetConfiguration(TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture> StaticGesturesToActivate, MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration");

	UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Params params;
	params.StaticGesturesToActivate = StaticGesturesToActivate;
	params.KeypointsFilterLevel = KeypointsFilterLevel;
	params.GestureFilterLevel = GestureFilterLevel;
	params.bTrackingEnabled = bTrackingEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D190D0
//		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::STATIC_IsHoldingControl(InputCore_EControllerHand Hand)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl");

	UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D19050
//		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMagicLeapHandTrackingFunctionLibrary::STATIC_GetStaticGestureConfidenceThreshold(MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold");

	UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Params params;
	params.Gesture = Gesture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D18F50
//		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       OutMotionSource                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetMotionSourceForHandKeypoint(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint, struct FName* OutMotionSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint");

	UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Params params;
	params.Hand = Hand;
	params.Keypoint = Keypoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMotionSource != nullptr)
		*OutMotionSource = params.OutMotionSource;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D18E80
//		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FLiveLinkSourceHandle                       SourceHandle                                               (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetMagicLeapHandTrackingLiveLinkSource(struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource");

	UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D18D20
//		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  Secondary                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetHandThumbTip(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Secondary)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip");

	UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Params params;
	params.Hand = Hand;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Secondary != nullptr)
		*Secondary = params.Secondary;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D18C50
//		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint OutKeyPoint                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetHandKeypointForMotionSource(const struct FName& MotionSource, MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint* OutKeyPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource");

	UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Params params;
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutKeyPoint != nullptr)
		*OutKeyPoint = params.OutKeyPoint;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D18AF0
//		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  Pointer                                                    (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetHandIndexFingerTip(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Pointer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip");

	UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Params params;
	params.Hand = Hand;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pointer != nullptr)
		*Pointer = params.Pointer;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D18A20
//		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     HandCenterNormalized                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetHandCenterNormalized(InputCore_EControllerHand Hand, struct FVector* HandCenterNormalized)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized");

	UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HandCenterNormalized != nullptr)
		*HandCenterNormalized = params.HandCenterNormalized;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D18900
//		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  HandCenter                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetHandCenter(InputCore_EControllerHand Hand, struct FTransform* HandCenter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter");

	UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HandCenter != nullptr)
		*HandCenter = params.HandCenter;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D18670
//		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetGestureKeypointTransform(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint, MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Transform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform");

	UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Params params;
	params.Hand = Hand;
	params.Keypoint = Keypoint;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D18810
//		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FTransform>                          Keypoints                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetGestureKeypoints(InputCore_EControllerHand Hand, TArray<struct FTransform>* Keypoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints");

	UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Keypoints != nullptr)
		*Keypoints = params.Keypoints;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D18590
//		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Confidence                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetCurrentGestureConfidence(InputCore_EControllerHand Hand, float* Confidence)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence");

	UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Confidence != nullptr)
		*Confidence = params.Confidence;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D184C0
//		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetCurrentGesture(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapHandTrackingGesture* Gesture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture");

	UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Gesture != nullptr)
		*Gesture = params.Gesture;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D18320
//		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture> ActiveStaticGestures                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTrackingEnabled                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandTrackingFunctionLibrary::STATIC_GetConfiguration(TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture>* ActiveStaticGestures, MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel* KeypointsFilterLevel, MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel* GestureFilterLevel, bool* bTrackingEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration");

	UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActiveStaticGestures != nullptr)
		*ActiveStaticGestures = params.ActiveStaticGestures;
	if (KeypointsFilterLevel != nullptr)
		*KeypointsFilterLevel = params.KeypointsFilterLevel;
	if (GestureFilterLevel != nullptr)
		*GestureFilterLevel = params.GestureFilterLevel;
	if (bTrackingEnabled != nullptr)
		*bTrackingEnabled = params.bTrackingEnabled;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

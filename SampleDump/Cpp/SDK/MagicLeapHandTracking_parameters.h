#pragma once

// Name: Mordhau, Version: Patch23


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

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold
struct UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Params
{
	MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Confidence;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration
struct UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Params
{
	TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture> StaticGesturesToActivate;                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel;                                        // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTrackingEnabled;                                          // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0013(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl
struct UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Params
{
	InputCore_EControllerHand                          Hand;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold
struct UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Params
{
	MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint
struct UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Params
{
	InputCore_EControllerHand                          Hand;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       OutMotionSource;                                           // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource
struct UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Params
{
	struct FLiveLinkSourceHandle                       SourceHandle;                                              // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip
struct UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Params
{
	InputCore_EControllerHand                          Hand;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Secondary;                                                 // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource
struct UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Params
{
	struct FName                                       MotionSource;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint OutKeyPoint;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip
struct UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Params
{
	InputCore_EControllerHand                          Hand;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Pointer;                                                   // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized
struct UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Params
{
	InputCore_EControllerHand                          Hand;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HandCenterNormalized;                                      // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter
struct UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Params
{
	InputCore_EControllerHand                          Hand;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  HandCenter;                                                // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform
struct UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Params
{
	InputCore_EControllerHand                          Hand;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace;                                            // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints
struct UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Params
{
	InputCore_EControllerHand                          Hand;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          Keypoints;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence
struct UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Params
{
	InputCore_EControllerHand                          Hand;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Confidence;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture
struct UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Params
{
	InputCore_EControllerHand                          Hand;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture;                                                   // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration
struct UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Params
{
	TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture> ActiveStaticGestures;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel;                                      // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel;                                        // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTrackingEnabled;                                          // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0013(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

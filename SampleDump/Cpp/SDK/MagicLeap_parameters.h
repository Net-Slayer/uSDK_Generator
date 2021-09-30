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

// Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync
struct UInAppPurchaseComponent_TryPurchaseItemAsync_Params
{
	struct FPurchaseItemDetails                        ItemDetails;                                               // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync
struct UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Params
{
	int                                                InNumPages;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync
struct UInAppPurchaseComponent_TryGetItemsDetailsAsync_Params
{
	TArray<struct FString>                             ItemIds;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature
struct UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Params
{
	struct FPurchaseConfirmation                       PurchaseConfirmations;                                     // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature
struct UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature_Params
{
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature
struct UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Params
{
	struct FString                                     LogMessage;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature
struct UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Params
{
	TArray<struct FPurchaseConfirmation>               PurchaseHistory;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature
struct UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature_Params
{
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature
struct UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Params
{
	TArray<struct FPurchaseItemDetails>                ItemsDetails;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature
struct UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature_Params
{
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor
struct UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Params
{
	class AActor*                                      InStabilizationDepthActor;                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetFocusActor;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor
struct UMagicLeapHMDFunctionLibrary_SetFocusActor_Params
{
	class AActor*                                      InFocusActor;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetStabilizationActor;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation
struct UMagicLeapHMDFunctionLibrary_SetBaseRotation_Params
{
	struct FRotator                                    InBaseRotation;                                            // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition
struct UMagicLeapHMDFunctionLibrary_SetBasePosition_Params
{
	struct FVector                                     InBasePosition;                                            // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation
struct UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Params
{
	struct FQuat                                       InBaseOrientation;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady
struct UMagicLeapHMDFunctionLibrary_SetAppReady_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD
struct UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel
struct UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision
struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor
struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor
struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion
struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel
struct UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState
struct UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Params
{
	struct FMagicLeapHeadTrackingState                 State;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents
struct UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Params
{
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo
struct UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Params
{
	struct FMagicLeapGraphicsClientPerformanceInfo     PerformanceInfo;                                           // 0x0000(0x001C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks
struct UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Params
{
	struct FMagicLeapTrackingMeshInfo                  NewMeshInfo;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapMeshBlockRequest>          RequestedMesh;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature
struct UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Params
{
	struct FGuid                                       ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Vertices;                                                  // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        Triangles;                                                 // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Normals;                                                   // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      Confidence;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates
struct UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh
struct UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Params
{
	class UMRMeshComponent*                            InMRMeshPtr;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector
struct UMagicLeapMeshTrackerComponent_DisconnectBlockSelector_Params
{
};

// Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh
struct UMagicLeapMeshTrackerComponent_ConnectMRMesh_Params
{
	class UMRMeshComponent*                            InMRMeshPtr;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector
struct UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Params
{
};

// Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks
struct UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Params
{
	struct FMagicLeapTrackingMeshInfo                  NewMeshInfo;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapMeshBlockRequest>          RequestedMesh;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast
struct UMagicLeapRaycastComponent_RequestRaycast_Params
{
	struct FMagicLeapRaycastQueryParams                RequestParams;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ResultDelegate;                                            // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature
struct UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Params
{
	struct FMagicLeapRaycastHitResult                  HitResult;                                                 // 0x0000(0x0024)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams
struct UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Params
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     UpVector;                                                  // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HorizontalFovDegrees;                                      // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CollideWithUnobserved;                                     // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserData;                                                  // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapRaycastQueryParams                ReturnValue;                                               // 0x0038(0x0038)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

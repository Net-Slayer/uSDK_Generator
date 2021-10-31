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

// Function MagicLeapARPin.MagicLeapARPinComponent.UnPin
struct UMagicLeapARPinComponent_UnPin_Params
{
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
struct UMagicLeapARPinComponent_PinSceneComponent_Params
{
	class USceneComponent*                             ComponentToPin;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
struct UMagicLeapARPinComponent_PinRestoredOrSynced_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinActor
struct UMagicLeapARPinComponent_PinActor_Params
{
	class AActor*                                      ActorToPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
struct UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Params
{
	bool                                               bRestoredOrSynced;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
struct UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Params
{
};

// Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned
struct UMagicLeapARPinComponent_IsPinned_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState
struct UMagicLeapARPinComponent_GetPinState_Params
{
	struct FMagicLeapARPinState                        State;                                                     // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
struct UMagicLeapARPinComponent_GetPinnedPinID_Params
{
	struct FGuid                                       PinID;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
struct UMagicLeapARPinComponent_GetPinData_Params
{
	class UClass*                                      PinDataClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMagicLeapARPinSaveGame*                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
struct UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
struct UMagicLeapARPinFunctionLibrary_IsTrackerValid_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
struct UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Params
{
	int                                                Count;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
struct UMagicLeapARPinFunctionLibrary_GetClosestARPin_Params
{
	struct FVector                                     SearchPoint;                                               // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       PinID;                                                     // 0x000C(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue;                                               // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
struct UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Params
{
	int                                                NumRequested;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                               Pins;                                                      // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
struct UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Params
{
	struct FMagicLeapARPinState                        State;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
struct UMagicLeapARPinFunctionLibrary_GetARPinState_Params
{
	struct FGuid                                       PinID;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapARPinState                        State;                                                     // 0x0010(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
struct UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Params
{
	struct FGuid                                       PinID;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               PinFoundInEnvironment;                                     // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
struct UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Params
{
	struct FGuid                                       PinID;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               PinFoundInEnvironment;                                     // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
struct UMagicLeapARPinFunctionLibrary_DestroyTracker_Params
{
	MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
struct UMagicLeapARPinFunctionLibrary_CreateTracker_Params
{
	MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
struct UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

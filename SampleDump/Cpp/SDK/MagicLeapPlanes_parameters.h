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

// Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
struct UMagicLeapPlanesComponent_RequestPlanesAsync_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
struct UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Params
{
	TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  InPriority;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  InFlagsToReorder;                                          // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  OutReorderedFlags;                                         // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery
struct UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Params
{
	struct FGuid                                       Handle;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
struct UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Params
{
	TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  InQueryFlags;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  InResultFlags;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  OutFlags;                                                  // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
struct UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Params
{
	struct FMagicLeapPlanesQuery                       Query;                                                     // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ResultDelegate;                                            // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync
struct UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Params
{
	struct FMagicLeapPlanesQuery                       Query;                                                     // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGuid                                       Handle;                                                    // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ResultDelegate;                                            // 0x0070(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
struct UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
struct UMagicLeapPlanesFunctionLibrary_GetContentScale_Params
{
	class AActor*                                      ContentActor;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapPlaneResult                       PlaneResult;                                               // 0x0008(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0070(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
struct UMagicLeapPlanesFunctionLibrary_DestroyTracker_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
struct UMagicLeapPlanesFunctionLibrary_CreateTracker_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery
struct UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Params
{
	MagicLeapPlanes_EMagicLeapPlaneQueryType           PersistentQueryType;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ReturnValue;                                               // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

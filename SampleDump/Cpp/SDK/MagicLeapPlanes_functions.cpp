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
//		Offset -> 0x00D29A80
//		Name   -> Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPlanesComponent::RequestPlanesAsync()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync");

	UMagicLeapPlanesComponent_RequestPlanesAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D29900
//		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  InPriority                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  InFlagsToReorder                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  OutReorderedFlags                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapPlanesFunctionLibrary::STATIC_ReorderPlaneFlags(TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InPriority, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InFlagsToReorder, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>* OutReorderedFlags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags");

	UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Params params;
	params.InPriority = InPriority;
	params.InFlagsToReorder = InFlagsToReorder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutReorderedFlags != nullptr)
		*OutReorderedFlags = params.OutReorderedFlags;

}


// Function:
//		Offset -> 0x00D29870
//		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FGuid                                       Handle                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPlanesFunctionLibrary::STATIC_RemovePersistentQuery(const struct FGuid& Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery");

	UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D296F0
//		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  InQueryFlags                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  InResultFlags                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  OutFlags                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapPlanesFunctionLibrary::STATIC_RemoveFlagsNotInQuery(TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InQueryFlags, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InResultFlags, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>* OutFlags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery");

	UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Params params;
	params.InQueryFlags = InQueryFlags;
	params.InResultFlags = InResultFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutFlags != nullptr)
		*OutFlags = params.OutFlags;

}


// Function:
//		Offset -> 0x00D29590
//		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FMagicLeapPlanesQuery                       Query                                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPlanesFunctionLibrary::STATIC_PlanesQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FScriptDelegate& ResultDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync");

	UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Params params;
	params.Query = Query;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D293E0
//		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FMagicLeapPlanesQuery                       Query                                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		struct FGuid                                       Handle                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPlanesFunctionLibrary::STATIC_PlanesPersistentQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FGuid& Handle, const struct FScriptDelegate& ResultDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync");

	UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Params params;
	params.Query = Query;
	params.Handle = Handle;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D293B0
//		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPlanesFunctionLibrary::STATIC_IsTrackerValid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid");

	UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D29260
//		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class AActor*                                      ContentActor                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FMagicLeapPlaneResult                       PlaneResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UMagicLeapPlanesFunctionLibrary::STATIC_GetContentScale(class AActor* ContentActor, const struct FMagicLeapPlaneResult& PlaneResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale");

	UMagicLeapPlanesFunctionLibrary_GetContentScale_Params params;
	params.ContentActor = ContentActor;
	params.PlaneResult = PlaneResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D29230
//		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPlanesFunctionLibrary::STATIC_DestroyTracker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker");

	UMagicLeapPlanesFunctionLibrary_DestroyTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D29200
//		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPlanesFunctionLibrary::STATIC_CreateTracker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker");

	UMagicLeapPlanesFunctionLibrary_CreateTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D29180
//		Name   -> Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		MagicLeapPlanes_EMagicLeapPlaneQueryType           PersistentQueryType                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGuid                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGuid UMagicLeapPlanesFunctionLibrary::STATIC_AddPersistentQuery(MagicLeapPlanes_EMagicLeapPlaneQueryType PersistentQueryType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery");

	UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Params params;
	params.PersistentQueryType = PersistentQueryType;

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

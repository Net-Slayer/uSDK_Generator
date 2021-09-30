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
//		Offset -> 0x00D24040
//		Name   -> Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInUseWeightedNormals                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapHandMeshingComponent::SetUseWeightedNormals(bool bInUseWeightedNormals)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals");

	UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Params params;
	params.bInUseWeightedNormals = bInUseWeightedNormals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00D23F30
//		Name   -> Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMRMeshComponent*                            InMRMeshPtr                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandMeshingComponent::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh");

	UMagicLeapHandMeshingComponent_DisconnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D23DC0
//		Name   -> Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMRMeshComponent*                            InMRMeshPtr                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandMeshingComponent::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh");

	UMagicLeapHandMeshingComponent_ConnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D23FC0
//		Name   -> Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UMRMeshComponent*                            InMRMeshPtr                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandMeshingFunctionLibrary::STATIC_DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh");

	UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D23F00
//		Name   -> Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandMeshingFunctionLibrary::STATIC_DestroyClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient");

	UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D23ED0
//		Name   -> Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandMeshingFunctionLibrary::STATIC_CreateClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient");

	UMagicLeapHandMeshingFunctionLibrary_CreateClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D23E50
//		Name   -> Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UMRMeshComponent*                            InMRMeshPtr                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapHandMeshingFunctionLibrary::STATIC_ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh");

	UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

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

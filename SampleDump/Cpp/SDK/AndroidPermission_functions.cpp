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
//		Offset -> 0x00E1CC30
//		Name   -> Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Permission                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAndroidPermissionFunctionLibrary::STATIC_CheckPermission(const struct FString& Permission)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission");

	UAndroidPermissionFunctionLibrary_CheckPermission_Params params;
	params.Permission = Permission;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00E1CB60
//		Name   -> Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FString>                             Permissions                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAndroidPermissionCallbackProxy*             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAndroidPermissionCallbackProxy* UAndroidPermissionFunctionLibrary::STATIC_AcquirePermissions(TArray<struct FString> Permissions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions");

	UAndroidPermissionFunctionLibrary_AcquirePermissions_Params params;
	params.Permissions = Permissions;

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

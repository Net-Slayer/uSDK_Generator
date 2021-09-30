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
//		Offset -> 0x009F6710
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.SetPlayFabId
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InKey                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayFabAuthenticationContext::SetPlayFabId(const struct FString& InKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.SetPlayFabId");

	UPlayFabAuthenticationContext_SetPlayFabId_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009F6600
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.SetEntityToken
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InToken                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayFabAuthenticationContext::SetEntityToken(const struct FString& InToken)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.SetEntityToken");

	UPlayFabAuthenticationContext_SetEntityToken_Params params;
	params.InToken = InToken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009F64F0
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.SetDeveloperSecretKey
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InKey                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayFabAuthenticationContext::SetDeveloperSecretKey(const struct FString& InKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.SetDeveloperSecretKey");

	UPlayFabAuthenticationContext_SetDeveloperSecretKey_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009F63E0
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.SetClientSessionTicket
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InTicket                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayFabAuthenticationContext::SetClientSessionTicket(const struct FString& InTicket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.SetClientSessionTicket");

	UPlayFabAuthenticationContext_SetClientSessionTicket_Params params;
	params.InTicket = InTicket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009F63B0
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.GetPlayFabId
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPlayFabAuthenticationContext::GetPlayFabId()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.GetPlayFabId");

	UPlayFabAuthenticationContext_GetPlayFabId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009F6380
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.GetEntityToken
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPlayFabAuthenticationContext::GetEntityToken()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.GetEntityToken");

	UPlayFabAuthenticationContext_GetEntityToken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009F6350
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.GetDeveloperSecretKey
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPlayFabAuthenticationContext::GetDeveloperSecretKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.GetDeveloperSecretKey");

	UPlayFabAuthenticationContext_GetDeveloperSecretKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009F6320
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.GetClientSessionTicket
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPlayFabAuthenticationContext::GetClientSessionTicket()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.GetClientSessionTicket");

	UPlayFabAuthenticationContext_GetClientSessionTicket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009F62A0
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.ForgetAllCredentials
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPlayFabAuthenticationContext::ForgetAllCredentials()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.ForgetAllCredentials");

	UPlayFabAuthenticationContext_ForgetAllCredentials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009F6280
//		Name   -> Function PlayFabCommon.PlayFabAuthenticationContext.ClientAdminSecurityCheck
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
void UPlayFabAuthenticationContext::ClientAdminSecurityCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayFabCommon.PlayFabAuthenticationContext.ClientAdminSecurityCheck");

	UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Offset -> 0x0062E970
//		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.UpdateWorkspaceModifiedPackages
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UMultiUserClientStatics::STATIC_UpdateWorkspaceModifiedPackages()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.UpdateWorkspaceModifiedPackages");

	UMultiUserClientStatics_UpdateWorkspaceModifiedPackages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0062E610
//		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.StartMultiUserDefaultConnection
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMultiUserClientStatics::STATIC_StartMultiUserDefaultConnection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.StartMultiUserDefaultConnection");

	UMultiUserClientStatics_StartMultiUserDefaultConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0062EB40
//		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceVisibilityById
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FGuid                                       ClientEndpointId                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               PropagateToAll                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiUserClientStatics::STATIC_SetMultiUserPresenceVisibilityById(const struct FGuid& ClientEndpointId, bool Visibility, bool PropagateToAll)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceVisibilityById");

	UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Params params;
	params.ClientEndpointId = ClientEndpointId;
	params.Visibility = Visibility;
	params.PropagateToAll = PropagateToAll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0062EA10
//		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceVisibility
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               PropagateToAll                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiUserClientStatics::STATIC_SetMultiUserPresenceVisibility(const struct FString& Name, bool Visibility, bool PropagateToAll)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceVisibility");

	UMultiUserClientStatics_SetMultiUserPresenceVisibility_Params params;
	params.Name = Name;
	params.Visibility = Visibility;
	params.PropagateToAll = PropagateToAll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0062E990
//		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceEnabled
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsEnabled                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiUserClientStatics::STATIC_SetMultiUserPresenceEnabled(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceEnabled");

	UMultiUserClientStatics_SetMultiUserPresenceEnabled_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0062E970
//		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.PersistMultiUserSessionChanges
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UMultiUserClientStatics::STATIC_PersistMultiUserSessionChanges()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.PersistMultiUserSessionChanges");

	UMultiUserClientStatics_PersistMultiUserSessionChanges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0062E820
//		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.JumpToMultiUserPresence
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     OtherUserName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  TransformOffset                                            (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UMultiUserClientStatics::STATIC_JumpToMultiUserPresence(const struct FString& OtherUserName, const struct FTransform& TransformOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.JumpToMultiUserPresence");

	UMultiUserClientStatics_JumpToMultiUserPresence_Params params;
	params.OtherUserName = OtherUserName;
	params.TransformOffset = TransformOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0062E740
//		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.GetRemoteMultiUserClientInfos
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FMultiUserClientInfo>                ClientInfos                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMultiUserClientStatics::STATIC_GetRemoteMultiUserClientInfos(TArray<struct FMultiUserClientInfo>* ClientInfos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.GetRemoteMultiUserClientInfos");

	UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClientInfos != nullptr)
		*ClientInfos = params.ClientInfos;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0062E670
//		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserPresenceTransform
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FGuid                                       ClientEndpointId                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UMultiUserClientStatics::STATIC_GetMultiUserPresenceTransform(const struct FGuid& ClientEndpointId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserPresenceTransform");

	UMultiUserClientStatics_GetMultiUserPresenceTransform_Params params;
	params.ClientEndpointId = ClientEndpointId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0062E640
//		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserConnectionStatusDetail
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		MultiUserClientLibrary_EMultiUserConnectionStatus  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MultiUserClientLibrary_EMultiUserConnectionStatus UMultiUserClientStatics::STATIC_GetMultiUserConnectionStatusDetail()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserConnectionStatusDetail");

	UMultiUserClientStatics_GetMultiUserConnectionStatusDetail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0062E610
//		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserConnectionStatus
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMultiUserClientStatics::STATIC_GetMultiUserConnectionStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserConnectionStatus");

	UMultiUserClientStatics_GetMultiUserConnectionStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0062E4E0
//		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserClientInfoByName
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     ClientName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FMultiUserClientInfo                        ClientInfo                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMultiUserClientStatics::STATIC_GetMultiUserClientInfoByName(const struct FString& ClientName, struct FMultiUserClientInfo* ClientInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserClientInfoByName");

	UMultiUserClientStatics_GetMultiUserClientInfoByName_Params params;
	params.ClientName = ClientName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClientInfo != nullptr)
		*ClientInfo = params.ClientInfo;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0062E3F0
//		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.GetLocalMultiUserClientInfo
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FMultiUserClientInfo                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FMultiUserClientInfo UMultiUserClientStatics::STATIC_GetLocalMultiUserClientInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.GetLocalMultiUserClientInfo");

	UMultiUserClientStatics_GetLocalMultiUserClientInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0062E350
//		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.GetLastMultiUserConnectionError
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FMultiUserConnectionError                   ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FMultiUserConnectionError UMultiUserClientStatics::STATIC_GetLastMultiUserConnectionError()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.GetLastMultiUserConnectionError");

	UMultiUserClientStatics_GetLastMultiUserConnectionError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0062E280
//		Name   -> Function MultiUserClientLibrary.MultiUserClientStatics.ConfigureMultiUserClient
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FMultiUserClientConfig                      ClientConfig                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMultiUserClientStatics::STATIC_ConfigureMultiUserClient(const struct FMultiUserClientConfig& ClientConfig)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MultiUserClientLibrary.MultiUserClientStatics.ConfigureMultiUserClient");

	UMultiUserClientStatics_ConfigureMultiUserClient_Params params;
	params.ClientConfig = ClientConfig;

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

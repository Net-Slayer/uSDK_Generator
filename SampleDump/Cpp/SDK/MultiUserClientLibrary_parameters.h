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

// Function MultiUserClientLibrary.MultiUserClientStatics.UpdateWorkspaceModifiedPackages
struct UMultiUserClientStatics_UpdateWorkspaceModifiedPackages_Params
{
};

// Function MultiUserClientLibrary.MultiUserClientStatics.StartMultiUserDefaultConnection
struct UMultiUserClientStatics_StartMultiUserDefaultConnection_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceVisibilityById
struct UMultiUserClientStatics_SetMultiUserPresenceVisibilityById_Params
{
	struct FGuid                                       ClientEndpointId;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Visibility;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PropagateToAll;                                            // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceVisibility
struct UMultiUserClientStatics_SetMultiUserPresenceVisibility_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Visibility;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PropagateToAll;                                            // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiUserClientLibrary.MultiUserClientStatics.SetMultiUserPresenceEnabled
struct UMultiUserClientStatics_SetMultiUserPresenceEnabled_Params
{
	bool                                               IsEnabled;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiUserClientLibrary.MultiUserClientStatics.PersistMultiUserSessionChanges
struct UMultiUserClientStatics_PersistMultiUserSessionChanges_Params
{
};

// Function MultiUserClientLibrary.MultiUserClientStatics.JumpToMultiUserPresence
struct UMultiUserClientStatics_JumpToMultiUserPresence_Params
{
	struct FString                                     OtherUserName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  TransformOffset;                                           // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MultiUserClientLibrary.MultiUserClientStatics.GetRemoteMultiUserClientInfos
struct UMultiUserClientStatics_GetRemoteMultiUserClientInfos_Params
{
	TArray<struct FMultiUserClientInfo>                ClientInfos;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserPresenceTransform
struct UMultiUserClientStatics_GetMultiUserPresenceTransform_Params
{
	struct FGuid                                       ClientEndpointId;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserConnectionStatusDetail
struct UMultiUserClientStatics_GetMultiUserConnectionStatusDetail_Params
{
	MultiUserClientLibrary_EMultiUserConnectionStatus  ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserConnectionStatus
struct UMultiUserClientStatics_GetMultiUserConnectionStatus_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiUserClientLibrary.MultiUserClientStatics.GetMultiUserClientInfoByName
struct UMultiUserClientStatics_GetMultiUserClientInfoByName_Params
{
	struct FString                                     ClientName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMultiUserClientInfo                        ClientInfo;                                                // 0x0010(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MultiUserClientLibrary.MultiUserClientStatics.GetLocalMultiUserClientInfo
struct UMultiUserClientStatics_GetLocalMultiUserClientInfo_Params
{
	struct FMultiUserClientInfo                        ReturnValue;                                               // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MultiUserClientLibrary.MultiUserClientStatics.GetLastMultiUserConnectionError
struct UMultiUserClientStatics_GetLastMultiUserConnectionError_Params
{
	struct FMultiUserConnectionError                   ReturnValue;                                               // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MultiUserClientLibrary.MultiUserClientStatics.ConfigureMultiUserClient
struct UMultiUserClientStatics_ConfigureMultiUserClient_Params
{
	struct FMultiUserClientConfig                      ClientConfig;                                              // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

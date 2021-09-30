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
// Classes
//---------------------------------------------------------------------------

// Class MultiUserClientLibrary.MultiUserClientStatics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMultiUserClientStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MultiUserClientLibrary.MultiUserClientStatics");
		return ptr;
	}



	void STATIC_UpdateWorkspaceModifiedPackages();
	bool STATIC_StartMultiUserDefaultConnection();
	void STATIC_SetMultiUserPresenceVisibilityById(const struct FGuid& ClientEndpointId, bool Visibility, bool PropagateToAll);
	void STATIC_SetMultiUserPresenceVisibility(const struct FString& Name, bool Visibility, bool PropagateToAll);
	void STATIC_SetMultiUserPresenceEnabled(bool IsEnabled);
	void STATIC_PersistMultiUserSessionChanges();
	void STATIC_JumpToMultiUserPresence(const struct FString& OtherUserName, const struct FTransform& TransformOffset);
	bool STATIC_GetRemoteMultiUserClientInfos(TArray<struct FMultiUserClientInfo>* ClientInfos);
	struct FTransform STATIC_GetMultiUserPresenceTransform(const struct FGuid& ClientEndpointId);
	MultiUserClientLibrary_EMultiUserConnectionStatus STATIC_GetMultiUserConnectionStatusDetail();
	bool STATIC_GetMultiUserConnectionStatus();
	bool STATIC_GetMultiUserClientInfoByName(const struct FString& ClientName, struct FMultiUserClientInfo* ClientInfo);
	struct FMultiUserClientInfo STATIC_GetLocalMultiUserClientInfo();
	struct FMultiUserConnectionError STATIC_GetLastMultiUserConnectionError();
	bool STATIC_ConfigureMultiUserClient(const struct FMultiUserClientConfig& ClientConfig);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

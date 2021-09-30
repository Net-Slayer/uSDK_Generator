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

// Class MordhauOnlineSubsystem.OnlineUtilities
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOnlineUtilities : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MordhauOnlineSubsystem.OnlineUtilities");
		return ptr;
	}



	bool STATIC_UnmountPak(const struct FString& PakPath);
	struct FString STATIC_SanitizePlayerName(const struct FString& InName, const struct FString& InFallback);
	int STATIC_RandomRangeExclude(int Min, int Max, int Exclude);
	bool STATIC_MountPak(const struct FString& PakPath);
	bool STATIC_IsWindowsVersionOrGreater(int MajorVersion, int MinorVersion, int ServicePackMajor);
	bool STATIC_IsValidIPAddress(const struct FString& IPAddress);
	bool STATIC_IsPublicIPAddress(const struct FString& IPAddress);
	bool STATIC_IsPrivateIPAddress(const struct FString& IPAddress);
	bool STATIC_IsOfficialServer();
	bool STATIC_IsDevelopmentBuild();
	bool STATIC_IsDevelopmentBranch();
	bool STATIC_IsDedicatedServer();
	bool STATIC_GetUseLegacyPakMounting();
	int STATIC_GetReleaseVersion();
	struct FString STATIC_GetRegionName(MordhauOnlineSubsystem_EServerRegion Region);
	struct FText STATIC_GetRegionDisplayName(MordhauOnlineSubsystem_EServerRegion Region);
	MordhauOnlineSubsystem_EServerRegion STATIC_GetRegion(const struct FString& RegionName);
	struct FPlayFabServer STATIC_GetPlayFabServer();
	struct FPlayFabPlayer STATIC_GetPlayFabPlayer();
	class UPlayFabAPI* STATIC_GetPlayFabAPI();
	struct FString STATIC_GetPlatformName(MordhauOnlineSubsystem_EPlatform Platform);
	MordhauOnlineSubsystem_EPlatform STATIC_GetPlatformByName(const struct FString& PlatformName);
	MordhauOnlineSubsystem_EPlatform STATIC_GetPlatform();
	int STATIC_GetPerforceRevision();
	struct FString STATIC_GetOSVersion();
	struct FString STATIC_GetLocationName(MordhauOnlineSubsystem_EServerLocation Location);
	struct FText STATIC_GetLocationDisplayName(MordhauOnlineSubsystem_EServerLocation Location);
	MordhauOnlineSubsystem_EServerLocation STATIC_GetLocation(const struct FString& LocationName);
	uint32_t STATIC_GetLocalNetworkVersion();
	int STATIC_GetGameServerGamePort();
	int STATIC_GetEnumValue(const struct FString& EnumName, const struct FString& EnumKey);
	struct FString STATIC_GetEnumKey(const struct FString& EnumName, int EnumValue);
	struct FString STATIC_GetCurrentPlatformName();
	int STATIC_GetBuildVersion();
};

// Class MordhauOnlineSubsystem.PlayFabAPI
// 0x0768 (FullSize[0x0790] - InheritedSize[0x0028])
class UPlayFabAPI : public UObject
{
public:
	unsigned char                                      UnknownData_BORQ[0x430];                                   // 0x0028(0x0430) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnGetLeaderboardComplete;                                  // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NBDK[0x328];                                   // 0x0468(0x0328) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MordhauOnlineSubsystem.PlayFabAPI");
		return ptr;
	}



	bool IsPlayerLoggedIn();
	void GetLeaderboard(const struct FString& LeaderboardName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

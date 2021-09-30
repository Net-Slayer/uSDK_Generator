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
// Parameters
//---------------------------------------------------------------------------

// Function MordhauOnlineSubsystem.OnlineUtilities.UnmountPak
struct UOnlineUtilities_UnmountPak_Params
{
	struct FString                                     PakPath;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.SanitizePlayerName
struct UOnlineUtilities_SanitizePlayerName_Params
{
	struct FString                                     InName;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InFallback;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.RandomRangeExclude
struct UOnlineUtilities_RandomRangeExclude_Params
{
	int                                                Min;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Max;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Exclude;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.MountPak
struct UOnlineUtilities_MountPak_Params
{
	struct FString                                     PakPath;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.IsWindowsVersionOrGreater
struct UOnlineUtilities_IsWindowsVersionOrGreater_Params
{
	int                                                MajorVersion;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinorVersion;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ServicePackMajor;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.IsValidIPAddress
struct UOnlineUtilities_IsValidIPAddress_Params
{
	struct FString                                     IPAddress;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.IsPublicIPAddress
struct UOnlineUtilities_IsPublicIPAddress_Params
{
	struct FString                                     IPAddress;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.IsPrivateIPAddress
struct UOnlineUtilities_IsPrivateIPAddress_Params
{
	struct FString                                     IPAddress;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.IsOfficialServer
struct UOnlineUtilities_IsOfficialServer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.IsDevelopmentBuild
struct UOnlineUtilities_IsDevelopmentBuild_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.IsDevelopmentBranch
struct UOnlineUtilities_IsDevelopmentBranch_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.IsDedicatedServer
struct UOnlineUtilities_IsDedicatedServer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetUseLegacyPakMounting
struct UOnlineUtilities_GetUseLegacyPakMounting_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetReleaseVersion
struct UOnlineUtilities_GetReleaseVersion_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetRegionName
struct UOnlineUtilities_GetRegionName_Params
{
	MordhauOnlineSubsystem_EServerRegion               Region;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetRegionDisplayName
struct UOnlineUtilities_GetRegionDisplayName_Params
{
	MordhauOnlineSubsystem_EServerRegion               Region;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetRegion
struct UOnlineUtilities_GetRegion_Params
{
	struct FString                                     RegionName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EServerRegion               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetPlayFabServer
struct UOnlineUtilities_GetPlayFabServer_Params
{
	struct FPlayFabServer                              ReturnValue;                                               // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetPlayFabPlayer
struct UOnlineUtilities_GetPlayFabPlayer_Params
{
	struct FPlayFabPlayer                              ReturnValue;                                               // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetPlayFabAPI
struct UOnlineUtilities_GetPlayFabAPI_Params
{
	class UPlayFabAPI*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetPlatformName
struct UOnlineUtilities_GetPlatformName_Params
{
	MordhauOnlineSubsystem_EPlatform                   Platform;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetPlatformByName
struct UOnlineUtilities_GetPlatformByName_Params
{
	struct FString                                     PlatformName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EPlatform                   ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetPlatform
struct UOnlineUtilities_GetPlatform_Params
{
	MordhauOnlineSubsystem_EPlatform                   ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetPerforceRevision
struct UOnlineUtilities_GetPerforceRevision_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetOSVersion
struct UOnlineUtilities_GetOSVersion_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetLocationName
struct UOnlineUtilities_GetLocationName_Params
{
	MordhauOnlineSubsystem_EServerLocation             Location;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetLocationDisplayName
struct UOnlineUtilities_GetLocationDisplayName_Params
{
	MordhauOnlineSubsystem_EServerLocation             Location;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetLocation
struct UOnlineUtilities_GetLocation_Params
{
	struct FString                                     LocationName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EServerLocation             ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetLocalNetworkVersion
struct UOnlineUtilities_GetLocalNetworkVersion_Params
{
	uint32_t                                           ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetGameServerGamePort
struct UOnlineUtilities_GetGameServerGamePort_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetEnumValue
struct UOnlineUtilities_GetEnumValue_Params
{
	struct FString                                     EnumName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EnumKey;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetEnumKey
struct UOnlineUtilities_GetEnumKey_Params
{
	struct FString                                     EnumName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EnumValue;                                                 // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetCurrentPlatformName
struct UOnlineUtilities_GetCurrentPlatformName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.OnlineUtilities.GetBuildVersion
struct UOnlineUtilities_GetBuildVersion_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.PlayFabAPI.IsPlayerLoggedIn
struct UPlayFabAPI_IsPlayerLoggedIn_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MordhauOnlineSubsystem.PlayFabAPI.GetLeaderboard
struct UPlayFabAPI_GetLeaderboard_Params
{
	struct FString                                     LeaderboardName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
// Enums
//---------------------------------------------------------------------------

// Enum MordhauOnlineSubsystem.EPlatform
enum class MordhauOnlineSubsystem_EPlatform : uint8_t
{
	EPlatform__None                = 0,
	EPlatform__Steam               = 1,
	EPlatform__Epic                = 2,
	EPlatform__XBoxOne             = 3,
	EPlatform__PS4                 = 4,
	EPlatform__EPlatform_MAX       = 5,

};

// Enum MordhauOnlineSubsystem.EEntityType
enum class MordhauOnlineSubsystem_EEntityType : uint8_t
{
	EEntityType__None              = 0,
	EEntityType__Player            = 1,
	EEntityType__CommunityServer   = 2,
	EEntityType__OfficialServer    = 3,
	EEntityType__Group             = 4,
	EEntityType__EEntityType_MAX   = 5,

};

// Enum MordhauOnlineSubsystem.EPlayFabTicketStatus
enum class MordhauOnlineSubsystem_EPlayFabTicketStatus : uint8_t
{
	EPlayFabTicketStatus__Unknown  = 0,
	EPlayFabTicketStatus__WaitingForPlayers = 1,
	EPlayFabTicketStatus__WaitingForMatch = 2,
	EPlayFabTicketStatus__WaitingForServer = 3,
	EPlayFabTicketStatus__Cancelled = 4,
	EPlayFabTicketStatus__Matched  = 5,
	EPlayFabTicketStatus__EPlayFabTicketStatus_MAX = 6,

};

// Enum MordhauOnlineSubsystem.EServerRegion
enum class MordhauOnlineSubsystem_EServerRegion : uint8_t
{
	EServerRegion__East_Asia       = 0,
	EServerRegion__South_Asia      = 1,
	EServerRegion__Europe          = 2,
	EServerRegion__Oceania         = 3,
	EServerRegion__Russia          = 4,
	EServerRegion__South_America   = 5,
	EServerRegion__US_Central      = 6,
	EServerRegion__US_East         = 7,
	EServerRegion__US_West         = 8,
	EServerRegion__South_Africa    = 9,
	EServerRegion__Worldwide       = 10,
	EServerRegion__EServerRegion_MAX = 11,

};

// Enum MordhauOnlineSubsystem.EServerLocation
enum class MordhauOnlineSubsystem_EServerLocation : uint8_t
{
	EServerLocation__Germany       = 0,
	EServerLocation__France        = 1,
	EServerLocation__UK            = 2,
	EServerLocation__Poland        = 3,
	EServerLocation__Russia        = 4,
	EServerLocation__US_East       = 5,
	EServerLocation__US_Central    = 6,
	EServerLocation__US_West       = 7,
	EServerLocation__Australia     = 8,
	EServerLocation__Taiwan        = 9,
	EServerLocation__Brazil        = 10,
	EServerLocation__South_Africa  = 11,
	EServerLocation__Japan         = 12,
	EServerLocation__Singapore     = 13,
	EServerLocation__Any           = 14,
	EServerLocation__EServerLocation_MAX = 15,

};

// Enum MordhauOnlineSubsystem.EPlayFabMatchStatus
enum class MordhauOnlineSubsystem_EPlayFabMatchStatus : uint8_t
{
	EPlayFabMatchStatus__Pending   = 0,
	EPlayFabMatchStatus__WaitingForPlayers = 1,
	EPlayFabMatchStatus__WaitingForServer = 2,
	EPlayFabMatchStatus__InProgress = 3,
	EPlayFabMatchStatus__Cancelled = 4,
	EPlayFabMatchStatus__EPlayFabMatchStatus_MAX = 5,

};

// Enum MordhauOnlineSubsystem.EServerState
enum class MordhauOnlineSubsystem_EServerState : uint8_t
{
	EServerState__Open             = 0,
	EServerState__Closed           = 1,
	EServerState__EServerState_MAX = 2,

};

// Enum MordhauOnlineSubsystem.EPlayFabRequestPriority
enum class MordhauOnlineSubsystem_EPlayFabRequestPriority : uint8_t
{
	EPlayFabRequestPriority__Low   = 0,
	EPlayFabRequestPriority__Medium = 1,
	EPlayFabRequestPriority__High  = 2,
	EPlayFabRequestPriority__EPlayFabRequestPriority_MAX = 3,

};

// Enum MordhauOnlineSubsystem.EPlayFabRequestType
enum class MordhauOnlineSubsystem_EPlayFabRequestType : uint8_t
{
	EPlayFabRequestType__None      = 0,
	EPlayFabRequestType__LoginWithSteam = 1,
	EPlayFabRequestType__LoginWithEpic = 2,
	EPlayFabRequestType__LoginWithServer = 3,
	EPlayFabRequestType__UpdateTimeDrift = 4,
	EPlayFabRequestType__GetTitleData = 5,
	EPlayFabRequestType__GetTitleInternalData = 6,
	EPlayFabRequestType__GetPlayerData = 7,
	EPlayFabRequestType__GetPlayerInventory = 8,
	EPlayFabRequestType__GetPlayer = 9,
	EPlayFabRequestType__GetPlayerStats = 10,
	EPlayFabRequestType__UpdatePlayerStats = 11,
	EPlayFabRequestType__GetCatalogItems = 12,
	EPlayFabRequestType__GetPlayFabIDsFromSteamIDs = 13,
	EPlayFabRequestType__GetPlayFabIDsFromEpicIDs = 14,
	EPlayFabRequestType__ImportInventory = 15,
	EPlayFabRequestType__UnlockItems = 16,
	EPlayFabRequestType__GrantItems = 17,
	EPlayFabRequestType__GetGameServers = 18,
	EPlayFabRequestType__GetServerInfo = 19,
	EPlayFabRequestType__GetLeaderboard = 20,
	EPlayFabRequestType__GetMatchRewards = 21,
	EPlayFabRequestType__RegisterGameServer = 22,
	EPlayFabRequestType__RefreshGameServer = 23,
	EPlayFabRequestType__UpdateGameServer = 24,
	EPlayFabRequestType__StartMatch = 25,
	EPlayFabRequestType__EndMatch  = 26,
	EPlayFabRequestType__AbortMatch = 27,
	EPlayFabRequestType__ApplyRestriction = 28,
	EPlayFabRequestType__ClearRestriction = 29,
	EPlayFabRequestType__ReportTimeLeft = 30,
	EPlayFabRequestType__ReportMatchEnded = 31,
	EPlayFabRequestType__CreateMatchmakingTicket = 32,
	EPlayFabRequestType__JoinMatchmakingTicket = 33,
	EPlayFabRequestType__GetMatchmakingTicket = 34,
	EPlayFabRequestType__GetMatchmakingMatch = 35,
	EPlayFabRequestType__CancelMatchmakingTicket = 36,
	EPlayFabRequestType__CreateServerBackfillTicket = 37,
	EPlayFabRequestType__GetServerBackfillTicket = 38,
	EPlayFabRequestType__CancelServerBackfillTicket = 39,
	EPlayFabRequestType__GetServerBackfillTicketForPlayer = 40,
	EPlayFabRequestType__CancelServerBackfillTicketForPlayer = 41,
	EPlayFabRequestType__GetObjects = 42,
	EPlayFabRequestType__SetObjects = 43,
	EPlayFabRequestType__CreateGroup = 44,
	EPlayFabRequestType__JoinGroup = 45,
	EPlayFabRequestType__LeaveGroup = 46,
	EPlayFabRequestType__GetGroup  = 47,
	EPlayFabRequestType__ListGroupMembership = 48,
	EPlayFabRequestType__ListGroupMembershipOpportunities = 49,
	EPlayFabRequestType__ListGroupMembers = 50,
	EPlayFabRequestType__RemoveGroupMembers = 51,
	EPlayFabRequestType__CreateGroupRole = 52,
	EPlayFabRequestType__DeleteGroupRole = 53,
	EPlayFabRequestType__UpdateAccountInfo = 54,
	EPlayFabRequestType__JoinMatchmakingMatch = 55,
	EPlayFabRequestType__LeaveMatchmakingMatch = 56,
	EPlayFabRequestType__RefreshEntityToken = 57,
	EPlayFabRequestType__AuthenticatePlayer = 58,
	EPlayFabRequestType__EPlayFabRequestType_MAX = 59,

};

// Enum MordhauOnlineSubsystem.EPlayFabRestriction
enum class MordhauOnlineSubsystem_EPlayFabRestriction : uint8_t
{
	EPlayFabRestriction__Ban       = 0,
	EPlayFabRestriction__Mute      = 1,
	EPlayFabRestriction__EPlayFabRestriction_MAX = 2,

};

// Enum MordhauOnlineSubsystem.EIngameEvent
enum class MordhauOnlineSubsystem_EIngameEvent : uint8_t
{
	EIngameEvent__None             = 0,
	EIngameEvent__Christmas        = 1,
	EIngameEvent__Halloween        = 2,
	EIngameEvent__EIngameEvent_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MordhauOnlineSubsystem.PlayFabProfile
// 0x0030
struct FPlayFabProfile
{
	unsigned char                                      UnknownData_SMLV[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EPlatform                   Platform;                                                  // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2SKL[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlatformAccountID;                                         // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabEntity
// 0x0020
struct FPlayFabEntity
{
	unsigned char                                      UnknownData_9LF7[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ID;                                                        // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EEntityType                 Type;                                                      // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MGBR[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabPlayerEntity
// 0x0000 (0x0020 - 0x0020)
struct FPlayFabPlayerEntity : public FPlayFabEntity
{

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabPlayer
// 0x0030 (0x0060 - 0x0030)
struct FPlayFabPlayer : public FPlayFabProfile
{
	struct FPlayFabPlayerEntity                        Entity;                                                    // 0x0030(0x0020) (BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.LeaderboardEntry
// 0x0068
struct FLeaderboardEntry
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060) (BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Position;                                                  // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabMatchmakingAttributes
// 0x0060
struct FPlayFabMatchmakingAttributes
{
	MordhauOnlineSubsystem_EServerRegion               Region;                                                    // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K0UO[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MMR;                                                       // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OpenSlots;                                                 // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VI21[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<MordhauOnlineSubsystem_EServerLocation, int>  Pings;                                                     // 0x0010(0x0050) (BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabPort
// 0x0018
struct FPlayFabPort
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Num;                                                       // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3903[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabMatchmakingPlayer
// 0x0090
struct FPlayFabMatchmakingPlayer
{
	struct FPlayFabPlayerEntity                        Entity;                                                    // 0x0000(0x0020) (BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TeamID;                                                    // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabMatchmakingAttributes               Attributes;                                                // 0x0030(0x0060) (BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabServerDetails
// 0x0028
struct FPlayFabServerDetails
{
	struct FString                                     IPV4Address;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayFabPort>                        Ports;                                                     // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EServerRegion               Region;                                                    // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8I6E[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabMatchmakingMatch
// 0x00A8
struct FPlayFabMatchmakingMatch
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OwnerID;                                                   // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GroupID;                                                   // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EPlayFabMatchStatus         Status;                                                    // 0x0040(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T98L[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlayFabMatchmakingPlayer>           Members;                                                   // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RegisteredMembers;                                         // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabServerDetails                       ServerDetails;                                             // 0x0068(0x0028) (BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<MordhauOnlineSubsystem_EServerLocation>     LocationPreference;                                        // 0x0090(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EServerRegion               Region;                                                    // 0x00A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VIWP[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabGameServer
// 0x0100
struct FPlayFabGameServer
{
	struct FString                                     ServerId;                                                  // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EServerState                State;                                                     // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T70L[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   LastHeartbeat;                                             // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                                   Runtime;                                                   // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabServerDetails                       ServerDetails;                                             // 0x0028(0x0028) (BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0FBR[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerName;                                                // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapName;                                                   // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0078(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     QueueName;                                                 // 0x0088(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Players;                                                   // 0x0098(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                                // 0x00A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReservedSlots;                                             // 0x00AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsModded;                                                 // 0x00B0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOfficial;                                               // 0x00B1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowJoin;                                                // 0x00B2(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPasswordProtected;                                      // 0x00B3(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MHWG[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        Mods;                                                      // 0x00B8(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        Pings;                                                     // 0x00C8(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EServerLocation             Location;                                                  // 0x00D8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PV35[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AccountID;                                                 // 0x00E0(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OperatingSystem;                                           // 0x00F0(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.ModFile
// 0x0008
struct FModFile
{
	int                                                ID;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FileSizeInMb;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.ModInfo
// 0x0050
struct FModInfo
{
	int                                                ID;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DateUpdated;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Summary;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Thumbnail;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SubmittedBy;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModFile                                    ModFile;                                                   // 0x0048(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.ItemStack
// 0x0008
struct FItemStack
{
	int                                                ItemDefID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabMatch
// 0x0060
struct FPlayFabMatch
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerId;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Map;                                                       // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TopScore;                                                  // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AvgScore;                                                  // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HX7P[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            StartTimestamp;                                            // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            EndTimestamp;                                              // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.MountedMod
// 0x0060
struct FMountedMod
{
	TArray<struct FString>                             PakPaths;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModInfo                                    Mod;                                                       // 0x0010(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.InstalledMod
// 0x0060
struct FInstalledMod
{
	struct FString                                     Path;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModInfo                                    Mod;                                                       // 0x0010(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.QueuedModDownload
// 0x0068
struct FQueuedModDownload
{
	struct FString                                     Path;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Progress;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SizeInMb;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModInfo                                    Mod;                                                       // 0x0018(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabRequest
// 0x0020
struct FPlayFabRequest
{
	MordhauOnlineSubsystem_EPlayFabRequestType         Type;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DY2U[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxRetries;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RetryDelay;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Retries;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            Timestamp;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EPlayFabRequestPriority     Priority;                                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowMultiple;                                            // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DL6O[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct MordhauOnlineSubsystem.AuthenticatePlayerPlayFabRequest
// 0x0078 (0x0098 - 0x0020)
struct FAuthenticatePlayerPlayFabRequest : public FPlayFabRequest
{
	TWeakObjectPtr<class APlayerController>            PlayerController;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabPlayer                              PlayFabPlayer;                                             // 0x0028(0x0060) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionTicket;                                             // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.RefreshEntityTokenPlayFabRequest
// 0x0000 (0x0020 - 0x0020)
struct FRefreshEntityTokenPlayFabRequest : public FPlayFabRequest
{

};

// ScriptStruct MordhauOnlineSubsystem.LeaveMatchmakingMatchPlayFabRequest
// 0x00A8 (0x00C8 - 0x0020)
struct FLeaveMatchmakingMatchPlayFabRequest : public FPlayFabRequest
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0020(0x00A8) (NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.JoinMatchmakingMatchPlayFabRequest
// 0x00A8 (0x00C8 - 0x0020)
struct FJoinMatchmakingMatchPlayFabRequest : public FPlayFabRequest
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0020(0x00A8) (NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.UpdateAccountInfoPlayFabRequest
// 0x0000 (0x0020 - 0x0020)
struct FUpdateAccountInfoPlayFabRequest : public FPlayFabRequest
{

};

// ScriptStruct MordhauOnlineSubsystem.DeleteGroupRolePlayFabRequest
// 0x0020 (0x0040 - 0x0020)
struct FDeleteGroupRolePlayFabRequest : public FPlayFabRequest
{
	struct FString                                     GroupID;                                                   // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleId;                                                    // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.CreateGroupRolePlayFabRequest
// 0x0030 (0x0050 - 0x0020)
struct FCreateGroupRolePlayFabRequest : public FPlayFabRequest
{
	struct FString                                     GroupID;                                                   // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleId;                                                    // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleName;                                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.RemoveGroupMembersPlayFabRequest
// 0x0030 (0x0050 - 0x0020)
struct FRemoveGroupMembersPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     GroupID;                                                   // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleId;                                                    // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             MemberIDs;                                                 // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.ListGroupMembersPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FListGroupMembersPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     GroupID;                                                   // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.ListGroupMembershipOpportunitiesPlayFabRequest
// 0x0000 (0x0020 - 0x0020)
struct FListGroupMembershipOpportunitiesPlayFabRequest : public FPlayFabRequest
{

};

// ScriptStruct MordhauOnlineSubsystem.ListGroupMembershipPlayFabRequest
// 0x0000 (0x0020 - 0x0020)
struct FListGroupMembershipPlayFabRequest : public FPlayFabRequest
{

};

// ScriptStruct MordhauOnlineSubsystem.GetGroupPlayFabRequest
// 0x0020 (0x0040 - 0x0020)
struct FGetGroupPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     GroupID;                                                   // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GroupName;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.LeaveGroupPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FLeaveGroupPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     GroupID;                                                   // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.JoinGroupPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FJoinGroupPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     GroupID;                                                   // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.CreateGroupPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FCreateGroupPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     GroupName;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.SetObjectsPlayFabRequest
// 0x0030 (0x0050 - 0x0020)
struct FSetObjectsPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     EntityId;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EntityType;                                                // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HT3T[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct MordhauOnlineSubsystem.GetObjectsPlayFabRequest
// 0x0020 (0x0040 - 0x0020)
struct FGetObjectsPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     EntityId;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EntityType;                                                // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.CancelServerBackfillTicketForPlayerPlayFabRequest
// 0x0030 (0x0050 - 0x0020)
struct FCancelServerBackfillTicketForPlayerPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     QueueName;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabPlayerEntity                        PlayerEntity;                                              // 0x0030(0x0020) (HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.GetServerBackfillTicketForPlayerPlayFabRequest
// 0x0030 (0x0050 - 0x0020)
struct FGetServerBackfillTicketForPlayerPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     QueueName;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabPlayerEntity                        PlayerEntity;                                              // 0x0030(0x0020) (HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.CancelServerBackfillTicketPlayFabRequest
// 0x0020 (0x0040 - 0x0020)
struct FCancelServerBackfillTicketPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     QueueName;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TicketId;                                                  // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.GetServerBackfillTicketPlayFabRequest
// 0x0020 (0x0040 - 0x0020)
struct FGetServerBackfillTicketPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     QueueName;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TicketId;                                                  // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.CreateServerBackfillTicketPlayFabRequest
// 0x0050 (0x0070 - 0x0020)
struct FCreateServerBackfillTicketPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     QueueName;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabServerDetails                       ServerDetails;                                             // 0x0030(0x0028) (NativeAccessSpecifierPublic)
	TArray<struct FPlayFabMatchmakingPlayer>           Members;                                                   // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Timeout;                                                   // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AUTK[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct MordhauOnlineSubsystem.CancelMatchmakingTicketPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FCancelMatchmakingTicketPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     QueueName;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.GetMatchmakingMatchPlayFabRequest
// 0x0020 (0x0040 - 0x0020)
struct FGetMatchmakingMatchPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     QueueName;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.GetMatchmakingTicketPlayFabRequest
// 0x0020 (0x0040 - 0x0020)
struct FGetMatchmakingTicketPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     QueueName;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TicketId;                                                  // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.JoinMatchmakingTicketPlayFabRequest
// 0x0080 (0x00A0 - 0x0020)
struct FJoinMatchmakingTicketPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     QueueName;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TicketId;                                                  // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabMatchmakingAttributes               Attributes;                                                // 0x0040(0x0060) (HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.CreateMatchmakingTicketPlayFabRequest
// 0x0088 (0x00A8 - 0x0020)
struct FCreateMatchmakingTicketPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     QueueName;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabMatchmakingAttributes               Attributes;                                                // 0x0030(0x0060) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Members;                                                   // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Timeout;                                                   // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_01EP[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct MordhauOnlineSubsystem.ReportMatchEndedPlayFabRequest
// 0x0028 (0x0048 - 0x0020)
struct FReportMatchEndedPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     Region;                                                    // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Map;                                                       // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerSeconds;                                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WinnerTeam;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.ReportTimeLeftPlayFabRequest
// 0x0028 (0x0048 - 0x0020)
struct FReportTimeLeftPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     Map;                                                       // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerCount;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XGXT[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      TimeLeft;                                                  // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.ClearRestrictionPlayFabRequest
// 0x0018 (0x0038 - 0x0020)
struct FClearRestrictionPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EPlayFabRestriction         Restriction;                                               // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FHN9[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MordhauOnlineSubsystem.ApplyRestrictionPlayFabRequest
// 0x0008 (0x0040 - 0x0038)
struct FApplyRestrictionPlayFabRequest : public FClearRestrictionPlayFabRequest
{
	int64_t                                            EndTimestamp;                                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.EndMatchPlayFabRequest
// 0x0060 (0x0080 - 0x0020)
struct FEndMatchPlayFabRequest : public FPlayFabRequest
{
	struct FPlayFabMatch                               Match;                                                     // 0x0020(0x0060) (NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.StartMatchPlayFabRequest
// 0x0060 (0x0080 - 0x0020)
struct FStartMatchPlayFabRequest : public FPlayFabRequest
{
	struct FPlayFabMatch                               Match;                                                     // 0x0020(0x0060) (NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.RefreshGameServerPlayFabRequest
// 0x0000 (0x0020 - 0x0020)
struct FRefreshGameServerPlayFabRequest : public FPlayFabRequest
{

};

// ScriptStruct MordhauOnlineSubsystem.UpdateGameServerPlayFabRequest
// 0x00D0 (0x00F0 - 0x0020)
struct FUpdateGameServerPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     ServerName;                                                // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapName;                                                   // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     QueueName;                                                 // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Players;                                                   // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                                // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReservedSlots;                                             // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RegionName;                                                // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BeaconListenPort;                                          // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowJoin;                                                // 0x008C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPasswordProtected;                                      // 0x008D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q6S8[0x2];                                     // 0x008E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Mods;                                                      // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Pings;                                                     // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Location;                                                  // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OperatingSystem;                                           // 0x00C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DockerHost;                                                // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DockerServer;                                              // 0x00E0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.RegisterGameServerPlayFabRequest
// 0x0010 (0x0100 - 0x00F0)
struct FRegisterGameServerPlayFabRequest : public FUpdateGameServerPlayFabRequest
{
	struct FString                                     PublicIP;                                                  // 0x00F0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.AbortMatchPlayFabRequest
// 0x0020 (0x0040 - 0x0020)
struct FAbortMatchPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     ServerId;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.GetMatchRewardsPlayFabRequest
// 0x0020 (0x0040 - 0x0020)
struct FGetMatchRewardsPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     ServerId;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.GetLeaderboardPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FGetLeaderboardPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     LeaderboardName;                                           // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.GetServerInfoPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FGetServerInfoPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     ServerId;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.GetGameServersPlayFabRequest
// 0x00A0 (0x00C0 - 0x0020)
struct FGetGameServersPlayFabRequest : public FPlayFabRequest
{
	TMap<struct FString, struct FString>               IncludesFilter;                                            // 0x0020(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               ExcludesFilter;                                            // 0x0070(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.GrantItemsPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FGrantItemsPlayFabRequest : public FPlayFabRequest
{
	TArray<struct FString>                             ItemIds;                                                   // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.UnlockItemsPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FUnlockItemsPlayFabRequest : public FPlayFabRequest
{
	TArray<struct FString>                             ItemIds;                                                   // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.ImportInventoryPlayFabRequest
// 0x0000 (0x0020 - 0x0020)
struct FImportInventoryPlayFabRequest : public FPlayFabRequest
{

};

// ScriptStruct MordhauOnlineSubsystem.GetPlayFabIDsFromEpicIDsPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FGetPlayFabIDsFromEpicIDsPlayFabRequest : public FPlayFabRequest
{
	TArray<struct FString>                             AccountIDs;                                                // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.GetPlayFabIDsFromSteamIDsPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FGetPlayFabIDsFromSteamIDsPlayFabRequest : public FPlayFabRequest
{
	TArray<struct FString>                             SteamIDs;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.GetCatalogItemsPlayFabRequest
// 0x0000 (0x0020 - 0x0020)
struct FGetCatalogItemsPlayFabRequest : public FPlayFabRequest
{

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabStat
// 0x0020
struct FPlayFabStat
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDirty;                                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6983[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MordhauOnlineSubsystem.UpdatePlayerStatsPlayFabRequest
// 0x0060 (0x0080 - 0x0020)
struct FUpdatePlayerStatsPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FPlayFabStat>          Stats;                                                     // 0x0030(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.GetPlayerStatsPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FGetPlayerStatsPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.GetPlayerPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FGetPlayerPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.GetPlayerInventoryPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FGetPlayerInventoryPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.GetPlayerDataPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FGetPlayerDataPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     PlayFabId;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.GetTitleInternalDataPlayFabRequest
// 0x0000 (0x0020 - 0x0020)
struct FGetTitleInternalDataPlayFabRequest : public FPlayFabRequest
{

};

// ScriptStruct MordhauOnlineSubsystem.GetTitleDataPlayFabRequest
// 0x0000 (0x0020 - 0x0020)
struct FGetTitleDataPlayFabRequest : public FPlayFabRequest
{

};

// ScriptStruct MordhauOnlineSubsystem.UpdateTimeDriftPlayFabRequest
// 0x0000 (0x0020 - 0x0020)
struct FUpdateTimeDriftPlayFabRequest : public FPlayFabRequest
{

};

// ScriptStruct MordhauOnlineSubsystem.LoginWithServerPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FLoginWithServerPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     UniqueId;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.LoginWithEpicPlayFabRequest
// 0x0020 (0x0040 - 0x0020)
struct FLoginWithEpicPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     AccountID;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuthToken;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.LoginWithSteamPlayFabRequest
// 0x0010 (0x0030 - 0x0020)
struct FLoginWithSteamPlayFabRequest : public FPlayFabRequest
{
	struct FString                                     AuthTicket;                                                // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.GroupInvite
// 0x0048
struct FGroupInvite
{
	struct FString                                     GroupID;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleId;                                                    // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InvitedById;                                               // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InvitedId;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            Expires;                                                   // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabBackfillTicket
// 0x0090
struct FPlayFabBackfillTicket
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TicketId;                                                  // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MatchId;                                                   // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EPlayFabTicketStatus        Status;                                                    // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8CJ9[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   CreationTime;                                              // 0x0038(0x0008) (BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Timeout;                                                   // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SH1L[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlayFabMatchmakingPlayer>           Members;                                                   // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CancellationReason;                                        // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayFabServerDetails                       ServerDetails;                                             // 0x0068(0x0028) (BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.Reward
// 0x0018
struct FReward
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Gold;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                XP;                                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabServerInfo
// 0x0020
struct FPlayFabServerInfo
{
	struct FString                                     ServerId;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        Mods;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabStats
// 0x0050
struct FPlayFabStats
{
	TMap<struct FString, struct FPlayFabStat>          Stats;                                                     // 0x0000(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabPlayerData
// 0x0018
struct FPlayFabPlayerData
{
	bool                                               bImportedInventory;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H2XB[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlayFabMatch>                       Matches;                                                   // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabTitleInternalData
// 0x0020
struct FPlayFabTitleInternalData
{
	TArray<struct FString>                             OfficialAdmins;                                            // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             DevelopmentAdmins;                                         // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabRewardSettings
// 0x002C
struct FPlayFabRewardSettings
{
	float                                              XPBaseValue;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              XPPlaytimeFactor;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              XPAvgScoreFactor;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              XPTopScoreFactor;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GoldBaseValue;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GoldPlaytimeFactor;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GoldAvgScoreFactor;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GoldTopScoreFactor;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlacementGoldFirst;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlacementGoldSecond;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlacementGoldScoreFactor;                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabTitleData
// 0x0190
struct FPlayFabTitleData
{
	TArray<struct FString>                             BlacklistedServers;                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ProfaneWords;                                              // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EIngameEvent                IngameEvent;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T89T[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlayFabRewardSettings                      RewardSettings;                                            // 0x0024(0x002C) (NoDestructor, NativeAccessSpecifierPublic)
	TMap<struct FString, int64_t>                      GlobalBannedPlayers;                                       // 0x0050(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FString, int64_t>                      GlobalMutedPlayers;                                        // 0x00A0(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FString, int64_t>                      OfficialBannedPlayers;                                     // 0x00F0(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FString, int64_t>                      OfficialMutedPlayers;                                      // 0x0140(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabGroupEntity
// 0x0000 (0x0020 - 0x0020)
struct FPlayFabGroupEntity : public FPlayFabEntity
{

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabGroup
// 0x0068
struct FPlayFabGroup
{
	struct FPlayFabGroupEntity                         Entity;                                                    // 0x0000(0x0020) (BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   CreationTime;                                              // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AdminRoleId;                                               // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MemberRoleId;                                              // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Roles;                                                     // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MordhauOnlineSubsystem.PlayFabServer
// 0x0020 (0x0050 - 0x0030)
struct FPlayFabServer : public FPlayFabProfile
{
	struct FPlayFabEntity                              Entity;                                                    // 0x0030(0x0020) (BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

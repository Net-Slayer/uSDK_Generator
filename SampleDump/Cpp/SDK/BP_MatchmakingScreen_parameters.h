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

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Get_Rules_Visibility_1
struct UBP_MatchmakingScreen_C_Get_Rules_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.CreatePartyMatch
struct UBP_MatchmakingScreen_C_CreatePartyMatch_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetPartyMatchmakingTickts
struct UBP_MatchmakingScreen_C_GetPartyMatchmakingTickts_Params
{
	TMap<struct FString, struct FString>               Tickets_;                                                  // 0x0000(0x0050)  (Parm, OutParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetQueuesToJoin
struct UBP_MatchmakingScreen_C_GetQueuesToJoin_Params
{
	TArray<struct FString>                             QueueNames;                                                // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetBackButtonVisibility
struct UBP_MatchmakingScreen_C_GetBackButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetSearchButtonVisibility
struct UBP_MatchmakingScreen_C_GetSearchButtonVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsMatchLeaderInParty
struct UBP_MatchmakingScreen_C_IsMatchLeaderInParty_Params
{
	bool                                               IsInParty;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetGameModeAndSlotCount
struct UBP_MatchmakingScreen_C_GetGameModeAndSlotCount_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     GameMode;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int                                                SlotCount;                                                 // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetQueueNames
struct UBP_MatchmakingScreen_C_GetQueueNames_Params
{
	TArray<struct FString>                             _;                                                         // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetPlayerCounts
struct UBP_MatchmakingScreen_C_GetPlayerCounts_Params
{
	struct FString                                     GameMode;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<int>                                        _;                                                         // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.SetMatchmakingGameModes
struct UBP_MatchmakingScreen_C_SetMatchmakingGameModes_Params
{
	TArray<struct FString>                             Input;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetMatchmakingGameModes
struct UBP_MatchmakingScreen_C_GetMatchmakingGameModes_Params
{
	TArray<struct FString>                             Return_Value;                                              // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetDebugTextBoxVisibility
struct UBP_MatchmakingScreen_C_GetDebugTextBoxVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsPlayerPartyLeader
struct UBP_MatchmakingScreen_C_IsPlayerPartyLeader_Params
{
	bool                                               IsLeader;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetSearchFailureReason
struct UBP_MatchmakingScreen_C_GetSearchFailureReason_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.AddDebugMessage
struct UBP_MatchmakingScreen_C_AddDebugMessage_Params
{
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bEnabled;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetSelectedGameModes
struct UBP_MatchmakingScreen_C_GetSelectedGameModes_Params
{
	TArray<struct FString>                             GameModes;                                                 // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.CanPlayerSearch
struct UBP_MatchmakingScreen_C_CanPlayerSearch_Params
{
	bool                                               bCanSearch;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_672628444615C28A9006F0ACD500AEE3
struct UBP_MatchmakingScreen_C_OnFailure_672628444615C28A9006F0ACD500AEE3_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_672628444615C28A9006F0ACD500AEE3
struct UBP_MatchmakingScreen_C_OnSuccess_672628444615C28A9006F0ACD500AEE3_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_672628444615C28A9006F0AC56DE6ED4
struct UBP_MatchmakingScreen_C_OnFailure_672628444615C28A9006F0AC56DE6ED4_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_672628444615C28A9006F0AC56DE6ED4
struct UBP_MatchmakingScreen_C_OnSuccess_672628444615C28A9006F0AC56DE6ED4_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_344C14AC4FC53B61568784B01C6B576E
struct UBP_MatchmakingScreen_C_OnFailure_344C14AC4FC53B61568784B01C6B576E_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_344C14AC4FC53B61568784B01C6B576E
struct UBP_MatchmakingScreen_C_OnSuccess_344C14AC4FC53B61568784B01C6B576E_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_60F7531743547A48C86D09A814CDA395
struct UBP_MatchmakingScreen_C_OnFailure_60F7531743547A48C86D09A814CDA395_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_60F7531743547A48C86D09A814CDA395
struct UBP_MatchmakingScreen_C_OnSuccess_60F7531743547A48C86D09A814CDA395_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_8E9A20E64A29269662D6C4B29B196A96
struct UBP_MatchmakingScreen_C_OnFailure_8E9A20E64A29269662D6C4B29B196A96_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_8E9A20E64A29269662D6C4B29B196A96
struct UBP_MatchmakingScreen_C_OnSuccess_8E9A20E64A29269662D6C4B29B196A96_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_0F9B3B6544DF9CE6B1EFA7B4E638F24A
struct UBP_MatchmakingScreen_C_OnFailure_0F9B3B6544DF9CE6B1EFA7B4E638F24A_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_0F9B3B6544DF9CE6B1EFA7B4E638F24A
struct UBP_MatchmakingScreen_C_OnSuccess_0F9B3B6544DF9CE6B1EFA7B4E638F24A_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_672628444615C28A9006F0ACCA1EB912
struct UBP_MatchmakingScreen_C_OnFailure_672628444615C28A9006F0ACCA1EB912_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_672628444615C28A9006F0ACCA1EB912
struct UBP_MatchmakingScreen_C_OnSuccess_672628444615C28A9006F0ACCA1EB912_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_672628444615C28A9006F0AC1A1DFF46
struct UBP_MatchmakingScreen_C_OnFailure_672628444615C28A9006F0AC1A1DFF46_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_672628444615C28A9006F0AC1A1DFF46
struct UBP_MatchmakingScreen_C_OnSuccess_672628444615C28A9006F0AC1A1DFF46_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_8E9A20E64A29269662D6C4B2D5D232B2
struct UBP_MatchmakingScreen_C_OnFailure_8E9A20E64A29269662D6C4B2D5D232B2_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_8E9A20E64A29269662D6C4B2D5D232B2
struct UBP_MatchmakingScreen_C_OnSuccess_8E9A20E64A29269662D6C4B2D5D232B2_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_67F6983E4A4400B48FA2EA924013F6EF
struct UBP_MatchmakingScreen_C_OnFailure_67F6983E4A4400B48FA2EA924013F6EF_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_67F6983E4A4400B48FA2EA924013F6EF
struct UBP_MatchmakingScreen_C_OnSuccess_67F6983E4A4400B48FA2EA924013F6EF_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_B0A1AA9741161B5376ACF5B7683DAF0E
struct UBP_MatchmakingScreen_C_OnFailure_B0A1AA9741161B5376ACF5B7683DAF0E_Params
{
	struct FPlayFabPlayerEntity                        PlayerEntity;                                              // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int                                                LeaveCount;                                                // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                                   LeaveTime;                                                 // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                                   BanEndTime;                                                // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_B0A1AA9741161B5376ACF5B7683DAF0E
struct UBP_MatchmakingScreen_C_OnSuccess_B0A1AA9741161B5376ACF5B7683DAF0E_Params
{
	struct FPlayFabPlayerEntity                        PlayerEntity;                                              // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int                                                LeaveCount;                                                // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                                   LeaveTime;                                                 // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                                   BanEndTime;                                                // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_C9398F5545CC7EBA29C50D98595DDA52
struct UBP_MatchmakingScreen_C_OnFailure_C9398F5545CC7EBA29C50D98595DDA52_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_C9398F5545CC7EBA29C50D98595DDA52
struct UBP_MatchmakingScreen_C_OnSuccess_C9398F5545CC7EBA29C50D98595DDA52_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_803BB389473F1682ABB0D18EB08C27B6
struct UBP_MatchmakingScreen_C_OnFailure_803BB389473F1682ABB0D18EB08C27B6_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_803BB389473F1682ABB0D18EB08C27B6
struct UBP_MatchmakingScreen_C_OnSuccess_803BB389473F1682ABB0D18EB08C27B6_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_EAE6415A4E9D4278139810AFF2CA6E91
struct UBP_MatchmakingScreen_C_OnFailure_EAE6415A4E9D4278139810AFF2CA6E91_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_EAE6415A4E9D4278139810AFF2CA6E91
struct UBP_MatchmakingScreen_C_OnSuccess_EAE6415A4E9D4278139810AFF2CA6E91_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_769A86204547BF36B6EE2F887D997169
struct UBP_MatchmakingScreen_C_OnFailure_769A86204547BF36B6EE2F887D997169_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     TicketId;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	MordhauOnlineSubsystem_EPlayFabTicketStatus        TicketStatus;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     CancellationReason;                                        // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     MatchId;                                                   // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_769A86204547BF36B6EE2F887D997169
struct UBP_MatchmakingScreen_C_OnSuccess_769A86204547BF36B6EE2F887D997169_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     TicketId;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	MordhauOnlineSubsystem_EPlayFabTicketStatus        TicketStatus;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     CancellationReason;                                        // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     MatchId;                                                   // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_593B3DE445187D64F38A78AC7464E5BF
struct UBP_MatchmakingScreen_C_OnFailure_593B3DE445187D64F38A78AC7464E5BF_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_593B3DE445187D64F38A78AC7464E5BF
struct UBP_MatchmakingScreen_C_OnSuccess_593B3DE445187D64F38A78AC7464E5BF_Params
{
	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_850913F04E7E28DE6BBF3BB67BE5C4E5
struct UBP_MatchmakingScreen_C_OnFailure_850913F04E7E28DE6BBF3BB67BE5C4E5_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_850913F04E7E28DE6BBF3BB67BE5C4E5
struct UBP_MatchmakingScreen_C_OnSuccess_850913F04E7E28DE6BBF3BB67BE5C4E5_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_0698FD2E4159E23FE2230DA18E150DBD
struct UBP_MatchmakingScreen_C_OnFailure_0698FD2E4159E23FE2230DA18E150DBD_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     TicketId;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_0698FD2E4159E23FE2230DA18E150DBD
struct UBP_MatchmakingScreen_C_OnSuccess_0698FD2E4159E23FE2230DA18E150DBD_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     TicketId;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_E36938C940390430D770FA897A0E77CD
struct UBP_MatchmakingScreen_C_OnFailure_E36938C940390430D770FA897A0E77CD_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_E36938C940390430D770FA897A0E77CD
struct UBP_MatchmakingScreen_C_OnSuccess_E36938C940390430D770FA897A0E77CD_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_B742674A43952F3CD1897591AB8CAF21
struct UBP_MatchmakingScreen_C_OnFailure_B742674A43952F3CD1897591AB8CAF21_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     TicketId;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_B742674A43952F3CD1897591AB8CAF21
struct UBP_MatchmakingScreen_C_OnSuccess_B742674A43952F3CD1897591AB8CAF21_Params
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     TicketId;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_527F32434AB11E7ADC849FB48EB7AE48
struct UBP_MatchmakingScreen_C_OnFailure_527F32434AB11E7ADC849FB48EB7AE48_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFull_527F32434AB11E7ADC849FB48EB7AE48
struct UBP_MatchmakingScreen_C_OnFull_527F32434AB11E7ADC849FB48EB7AE48_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_527F32434AB11E7ADC849FB48EB7AE48
struct UBP_MatchmakingScreen_C_OnSuccess_527F32434AB11E7ADC849FB48EB7AE48_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_F52C3F6641F7B816D62418B84AA964CB
struct UBP_MatchmakingScreen_C_OnFailure_F52C3F6641F7B816D62418B84AA964CB_Params
{
	TArray<struct FPlayFabGameServer>                  Servers;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_F52C3F6641F7B816D62418B84AA964CB
struct UBP_MatchmakingScreen_C_OnSuccess_F52C3F6641F7B816D62418B84AA964CB_Params
{
	TArray<struct FPlayFabGameServer>                  Servers;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_A776E9454B061B5288E2CFA61D35F10E
struct UBP_MatchmakingScreen_C_OnFailure_A776E9454B061B5288E2CFA61D35F10E_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_A776E9454B061B5288E2CFA61D35F10E
struct UBP_MatchmakingScreen_C_OnSuccess_A776E9454B061B5288E2CFA61D35F10E_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_MatchmakingScreen_C_BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.UpdateWidgets
struct UBP_MatchmakingScreen_C_UpdateWidgets_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Construct
struct UBP_MatchmakingScreen_C_Construct_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.StartSearch
struct UBP_MatchmakingScreen_C_StartSearch_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.CancelSearch
struct UBP_MatchmakingScreen_C_CancelSearch_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.StartSearchTimer
struct UBP_MatchmakingScreen_C_StartSearchTimer_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.TickSearch
struct UBP_MatchmakingScreen_C_TickSearch_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
struct UBP_MatchmakingScreen_C_BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FText                                       SelectedItem;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.UpdatePartyValues
struct UBP_MatchmakingScreen_C_UpdatePartyValues_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSelectionChanged
struct UBP_MatchmakingScreen_C_OnSelectionChanged_Params
{
	bool                                               bIsSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnPartyUpdated
struct UBP_MatchmakingScreen_C_OnPartyUpdated_Params
{
	TArray<struct FPlayFabPlayer>                      PartyMembers;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnOkClicked
struct UBP_MatchmakingScreen_C_OnOkClicked_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnMatchmakingRegionsDetermined
struct UBP_MatchmakingScreen_C_OnMatchmakingRegionsDetermined_Params
{
	MordhauOnlineSubsystem_EServerRegion               CasualMatchmakingRegion;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	MordhauOnlineSubsystem_EServerRegion               RankedMatchmakingRegion;                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSearchFailureDialogOkClicked
struct UBP_MatchmakingScreen_C_OnSearchFailureDialogOkClicked_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__BP_GameModeCategory_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
struct UBP_MatchmakingScreen_C_BndEvt__BP_GameModeCategory_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__BP_GameModeCategory_0_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
struct UBP_MatchmakingScreen_C_BndEvt__BP_GameModeCategory_0_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Switch to ranked tab
struct UBP_MatchmakingScreen_C_Switch_to_ranked_tab_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UBP_MatchmakingScreen_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__BP_DuelGameModeEntry_K2Node_ComponentBoundEvent_7_OnHover__DelegateSignature
struct UBP_MatchmakingScreen_C_BndEvt__BP_DuelGameModeEntry_K2Node_ComponentBoundEvent_7_OnHover__DelegateSignature_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__BP_TeamFightGameModeEntry_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature
struct UBP_MatchmakingScreen_C_BndEvt__BP_TeamFightGameModeEntry_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.RestartSearch
struct UBP_MatchmakingScreen_C_RestartSearch_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UBP_MatchmakingScreen_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__RankedRegionComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
struct UBP_MatchmakingScreen_C_BndEvt__RankedRegionComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FText                                       SelectedItem;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.ExecuteUbergraph_BP_MatchmakingScreen
struct UBP_MatchmakingScreen_C_ExecuteUbergraph_BP_MatchmakingScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_MordhauGameState.BP_MordhauGameState_C.FinishVoteKick
struct ABP_MordhauGameState_C_FinishVoteKick_Params
{
	TEnumAsByte<E_VoteKickResult_E_VoteKickResult>     Result;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.OnRep_VoteKickInfo
struct ABP_MordhauGameState_C_OnRep_VoteKickInfo_Params
{
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.ShouldHideSpawnInfoText
struct ABP_MordhauGameState_C_ShouldHideSpawnInfoText_Params
{
	bool                                               Hide;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.ReceiveKillNotify
struct ABP_MordhauGameState_C_ReceiveKillNotify_Params
{
	class APlayerState*                                Killer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                                Killed;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Weapon;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Flags;                                                     // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.AddKillNotify
struct ABP_MordhauGameState_C_AddKillNotify_Params
{
	class APlayerState*                                Killer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                                Killed;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Weapon;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Mordhau_EMordhauDamageType                         DamageType;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.GetChatColor
struct ABP_MordhauGameState_C_GetChatColor_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.GetKillfeedColor
struct ABP_MordhauGameState_C_GetKillfeedColor_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.HandleMatchEndInfo
struct ABP_MordhauGameState_C_HandleMatchEndInfo_Params
{
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.OnRep_MatchEndInfo
struct ABP_MordhauGameState_C_OnRep_MatchEndInfo_Params
{
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardTeamObjectiveValue
struct ABP_MordhauGameState_C_GetScoreboardTeamObjectiveValue_Params
{
	int                                                Team;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Output;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardObjectiveName
struct ABP_MordhauGameState_C_GetScoreboardObjectiveName_Params
{
	struct FText                                       NewParam;                                                  // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardTimeInProgress
struct ABP_MordhauGameState_C_GetScoreboardTimeInProgress_Params
{
	struct FTimespan                                   Time;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardTime
struct ABP_MordhauGameState_C_GetScoreboardTime_Params
{
	struct FTimespan                                   Time;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.ReceiveTick
struct ABP_MordhauGameState_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.ReplicatedKillNotify
struct ABP_MordhauGameState_C_ReplicatedKillNotify_Params
{
	class APlayerState*                                Killer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                                Killed;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Weapon;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Flags;                                                     // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.ShowScoreboardDelayed
struct ABP_MordhauGameState_C_ShowScoreboardDelayed_Params
{
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.OnRequestedVoteKick
struct ABP_MordhauGameState_C_OnRequestedVoteKick_Params
{
	class AMordhauPlayerState*                         Initiator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauPlayerState*                         Target;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.TallyVoteKickVotes
struct ABP_MordhauGameState_C_TallyVoteKickVotes_Params
{
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.OnRequestedVoteCancel
struct ABP_MordhauGameState_C_OnRequestedVoteCancel_Params
{
	class AMordhauPlayerState*                         Initiator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.OnVoteKickVote
struct ABP_MordhauGameState_C_OnVoteKickVote_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               VotedYes;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MordhauGameState.BP_MordhauGameState_C.ExecuteUbergraph_BP_MordhauGameState
struct ABP_MordhauGameState_C_ExecuteUbergraph_BP_MordhauGameState_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

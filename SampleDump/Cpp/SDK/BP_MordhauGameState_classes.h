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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MordhauGameState.BP_MordhauGameState_C
// 0x00F8 (FullSize[0x0888] - InheritedSize[0x0790])
class ABP_MordhauGameState_C : public AMordhauGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0790(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSTRUCT_MatchEndInfo                        MatchEndInfo;                                              // 0x07A0(0x0018) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FSTRUCT_VoteKickInfo                        VoteKickInfo;                                              // 0x07B8(0x0018) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               MatchEndInfoReplicated;                                    // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UsesSpawnSelectScreen;                                     // 0x07D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NoAmmoBoxes;                                               // 0x07D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NoPreplacedEquipment;                                      // 0x07D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HideTargetNamesIfAlive;                                    // 0x07D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OnlyLivingPlayersInScoreboard;                             // 0x07D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NoScoreInScoreboard;                                       // 0x07D6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsVoteOngoing;                                             // 0x07D7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                VoteYesVotes;                                              // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                VoteNoVotes;                                               // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Voters[0x50];                                              // 0x07E0(0x0050) UNKNOWN PROPERTY: SetProperty
	bool                                               AllowsVoteKick;                                            // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UsesCompetitiveRank;                                       // 0x0831(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_ScoreboardEntryTypes_E_ScoreboardEntryTypes> Scoreboard_Entry_Type;                                     // 0x0832(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ACAA[0x5];                                     // 0x0833(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, float>                        LastVoteKickRequestTime;                                   // 0x0838(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauGameState.BP_MordhauGameState_C");
		return ptr;
	}



	void FinishVoteKick(TEnumAsByte<E_VoteKickResult_E_VoteKickResult> Result);
	void OnRep_VoteKickInfo();
	void ShouldHideSpawnInfoText(bool* Hide);
	void ReceiveKillNotify(class APlayerState* Killer, class APlayerState* Killed, class UClass* Weapon, unsigned char Flags);
	void AddKillNotify(class APlayerState* Killer, class APlayerState* Killed, class AActor* Weapon, Mordhau_EMordhauDamageType DamageType);
	void GetChatColor(class APlayerState* PlayerState, struct FLinearColor* Color);
	void GetKillfeedColor(class APlayerState* PlayerState, struct FLinearColor* Color);
	void HandleMatchEndInfo();
	void OnRep_MatchEndInfo();
	void GetScoreboardTeamObjectiveValue(int Team, struct FString* Output);
	void GetScoreboardObjectiveName(struct FText* NewParam);
	void GetScoreboardTimeInProgress(struct FTimespan* Time);
	void GetScoreboardTime(struct FTimespan* Time);
	void ReceiveTick(float DeltaSeconds);
	void ReplicatedKillNotify(class APlayerState* Killer, class APlayerState* Killed, class UClass* Weapon, unsigned char Flags);
	void ShowScoreboardDelayed();
	void OnRequestedVoteKick(class AMordhauPlayerState* Initiator, class AMordhauPlayerState* Target);
	void TallyVoteKickVotes();
	void OnRequestedVoteCancel(class AMordhauPlayerState* Initiator);
	void OnVoteKickVote(class APlayerController* Controller, bool VotedYes);
	void ExecuteUbergraph_BP_MordhauGameState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

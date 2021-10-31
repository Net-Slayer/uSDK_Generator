// Name: Mordhau, Version: Patch23

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
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.FinishVoteKick
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_VoteKickResult_E_VoteKickResult>     Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauGameState_C::FinishVoteKick(TEnumAsByte<E_VoteKickResult_E_VoteKickResult> Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.FinishVoteKick");

	ABP_MordhauGameState_C_FinishVoteKick_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.OnRep_VoteKickInfo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauGameState_C::OnRep_VoteKickInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.OnRep_VoteKickInfo");

	ABP_MordhauGameState_C_OnRep_VoteKickInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.ShouldHideSpawnInfoText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Hide                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MordhauGameState_C::ShouldHideSpawnInfoText(bool* Hide)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.ShouldHideSpawnInfoText");

	ABP_MordhauGameState_C_ShouldHideSpawnInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Hide != nullptr)
		*Hide = params.Hide;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.ReceiveKillNotify
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerState*                                Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      Flags                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauGameState_C::ReceiveKillNotify(class APlayerState* Killer, class APlayerState* Killed, class UClass* Weapon, unsigned char Flags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.ReceiveKillNotify");

	ABP_MordhauGameState_C_ReceiveKillNotify_Params params;
	params.Killer = Killer;
	params.Killed = Killed;
	params.Weapon = Weapon;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.AddKillNotify
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerState*                                Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Mordhau_EMordhauDamageType                         DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauGameState_C::AddKillNotify(class APlayerState* Killer, class APlayerState* Killed, class AActor* Weapon, Mordhau_EMordhauDamageType DamageType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.AddKillNotify");

	ABP_MordhauGameState_C_AddKillNotify_Params params;
	params.Killer = Killer;
	params.Killed = Killed;
	params.Weapon = Weapon;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.GetChatColor
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauGameState_C::GetChatColor(class APlayerState* PlayerState, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.GetChatColor");

	ABP_MordhauGameState_C_GetChatColor_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.GetKillfeedColor
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauGameState_C::GetKillfeedColor(class APlayerState* PlayerState, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.GetKillfeedColor");

	ABP_MordhauGameState_C_GetKillfeedColor_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.HandleMatchEndInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauGameState_C::HandleMatchEndInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.HandleMatchEndInfo");

	ABP_MordhauGameState_C_HandleMatchEndInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.OnRep_MatchEndInfo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_MordhauGameState_C::OnRep_MatchEndInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.OnRep_MatchEndInfo");

	ABP_MordhauGameState_C_OnRep_MatchEndInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardTeamObjectiveValue
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Output                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_MordhauGameState_C::GetScoreboardTeamObjectiveValue(int Team, struct FString* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardTeamObjectiveValue");

	ABP_MordhauGameState_C_GetScoreboardTeamObjectiveValue_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardObjectiveName
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       NewParam                                                   (Parm, OutParm)
void ABP_MordhauGameState_C::GetScoreboardObjectiveName(struct FText* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardObjectiveName");

	ABP_MordhauGameState_C_GetScoreboardObjectiveName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardTimeInProgress
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FTimespan                                   Time                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauGameState_C::GetScoreboardTimeInProgress(struct FTimespan* Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardTimeInProgress");

	ABP_MordhauGameState_C_GetScoreboardTimeInProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardTime
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FTimespan                                   Time                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauGameState_C::GetScoreboardTime(struct FTimespan* Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.GetScoreboardTime");

	ABP_MordhauGameState_C_GetScoreboardTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauGameState_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.ReceiveTick");

	ABP_MordhauGameState_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.ReplicatedKillNotify
//		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerState*                                Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      Flags                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauGameState_C::ReplicatedKillNotify(class APlayerState* Killer, class APlayerState* Killed, class UClass* Weapon, unsigned char Flags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.ReplicatedKillNotify");

	ABP_MordhauGameState_C_ReplicatedKillNotify_Params params;
	params.Killer = Killer;
	params.Killed = Killed;
	params.Weapon = Weapon;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.ShowScoreboardDelayed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_MordhauGameState_C::ShowScoreboardDelayed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.ShowScoreboardDelayed");

	ABP_MordhauGameState_C_ShowScoreboardDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.OnRequestedVoteKick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauPlayerState*                         Initiator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AMordhauPlayerState*                         Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauGameState_C::OnRequestedVoteKick(class AMordhauPlayerState* Initiator, class AMordhauPlayerState* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.OnRequestedVoteKick");

	ABP_MordhauGameState_C_OnRequestedVoteKick_Params params;
	params.Initiator = Initiator;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.TallyVoteKickVotes
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_MordhauGameState_C::TallyVoteKickVotes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.TallyVoteKickVotes");

	ABP_MordhauGameState_C_TallyVoteKickVotes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.OnRequestedVoteCancel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauPlayerState*                         Initiator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauGameState_C::OnRequestedVoteCancel(class AMordhauPlayerState* Initiator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.OnRequestedVoteCancel");

	ABP_MordhauGameState_C_OnRequestedVoteCancel_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.OnVoteKickVote
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               VotedYes                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MordhauGameState_C::OnVoteKickVote(class APlayerController* Controller, bool VotedYes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.OnVoteKickVote");

	ABP_MordhauGameState_C_OnVoteKickVote_Params params;
	params.Controller = Controller;
	params.VotedYes = VotedYes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameState.BP_MordhauGameState_C.ExecuteUbergraph_BP_MordhauGameState
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauGameState_C::ExecuteUbergraph_BP_MordhauGameState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameState.BP_MordhauGameState_C.ExecuteUbergraph_BP_MordhauGameState");

	ABP_MordhauGameState_C_ExecuteUbergraph_BP_MordhauGameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

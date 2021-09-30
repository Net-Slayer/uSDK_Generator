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
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Get_Rules_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_MatchmakingScreen_C::Get_Rules_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Get_Rules_Visibility_1");

	UBP_MatchmakingScreen_C_Get_Rules_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.CreatePartyMatch
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::CreatePartyMatch(const struct FString& QueueName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.CreatePartyMatch");

	UBP_MatchmakingScreen_C_CreatePartyMatch_Params params;
	params.QueueName = QueueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetPartyMatchmakingTickts
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TMap<struct FString, struct FString>               Tickets_                                                   (Parm, OutParm)
void UBP_MatchmakingScreen_C::GetPartyMatchmakingTickts(TMap<struct FString, struct FString>* Tickets_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetPartyMatchmakingTickts");

	UBP_MatchmakingScreen_C_GetPartyMatchmakingTickts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tickets_ != nullptr)
		*Tickets_ = params.Tickets_;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetQueuesToJoin
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FString>                             QueueNames                                                 (Parm, OutParm, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::GetQueuesToJoin(TArray<struct FString>* QueueNames)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetQueuesToJoin");

	UBP_MatchmakingScreen_C_GetQueuesToJoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QueueNames != nullptr)
		*QueueNames = params.QueueNames;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetBackButtonVisibility
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_MatchmakingScreen_C::GetBackButtonVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetBackButtonVisibility");

	UBP_MatchmakingScreen_C_GetBackButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetSearchButtonVisibility
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_MatchmakingScreen_C::GetSearchButtonVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetSearchButtonVisibility");

	UBP_MatchmakingScreen_C_GetSearchButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsMatchLeaderInParty
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsInParty                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MatchmakingScreen_C::IsMatchLeaderInParty(bool* IsInParty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsMatchLeaderInParty");

	UBP_MatchmakingScreen_C_IsMatchLeaderInParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInParty != nullptr)
		*IsInParty = params.IsInParty;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetGameModeAndSlotCount
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     GameMode                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                SlotCount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::GetGameModeAndSlotCount(const struct FString& QueueName, struct FString* GameMode, int* SlotCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetGameModeAndSlotCount");

	UBP_MatchmakingScreen_C_GetGameModeAndSlotCount_Params params;
	params.QueueName = QueueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameMode != nullptr)
		*GameMode = params.GameMode;
	if (SlotCount != nullptr)
		*SlotCount = params.SlotCount;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetQueueNames
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FString>                             _                                                          (Parm, OutParm, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::GetQueueNames(TArray<struct FString>* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetQueueNames");

	UBP_MatchmakingScreen_C_GetQueueNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetPlayerCounts
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TArray<int>                                        _                                                          (Parm, OutParm, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::GetPlayerCounts(const struct FString& GameMode, TArray<int>* _)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetPlayerCounts");

	UBP_MatchmakingScreen_C_GetPlayerCounts_Params params;
	params.GameMode = GameMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.SetMatchmakingGameModes
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FString>                             Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::SetMatchmakingGameModes(TArray<struct FString>* Input)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.SetMatchmakingGameModes");

	UBP_MatchmakingScreen_C_SetMatchmakingGameModes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Input != nullptr)
		*Input = params.Input;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetMatchmakingGameModes
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             Return_Value                                               (Parm, OutParm, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::GetMatchmakingGameModes(TArray<struct FString>* Return_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetMatchmakingGameModes");

	UBP_MatchmakingScreen_C_GetMatchmakingGameModes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetDebugTextBoxVisibility
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_MatchmakingScreen_C::GetDebugTextBoxVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetDebugTextBoxVisibility");

	UBP_MatchmakingScreen_C_GetDebugTextBoxVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsPlayerPartyLeader
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsLeader                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MatchmakingScreen_C::IsPlayerPartyLeader(bool* IsLeader)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.IsPlayerPartyLeader");

	UBP_MatchmakingScreen_C_IsPlayerPartyLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsLeader != nullptr)
		*IsLeader = params.IsLeader;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetSearchFailureReason
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_MatchmakingScreen_C::GetSearchFailureReason()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetSearchFailureReason");

	UBP_MatchmakingScreen_C_GetSearchFailureReason_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.AddDebugMessage
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MatchmakingScreen_C::AddDebugMessage(const struct FString& Message, bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.AddDebugMessage");

	UBP_MatchmakingScreen_C_AddDebugMessage_Params params;
	params.Message = Message;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetSelectedGameModes
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FString>                             GameModes                                                  (Parm, OutParm, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::GetSelectedGameModes(TArray<struct FString>* GameModes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.GetSelectedGameModes");

	UBP_MatchmakingScreen_C_GetSelectedGameModes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameModes != nullptr)
		*GameModes = params.GameModes;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.CanPlayerSearch
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bCanSearch                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MatchmakingScreen_C::CanPlayerSearch(bool* bCanSearch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.CanPlayerSearch");

	UBP_MatchmakingScreen_C_CanPlayerSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bCanSearch != nullptr)
		*bCanSearch = params.bCanSearch;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_672628444615C28A9006F0ACD500AEE3
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnFailure_672628444615C28A9006F0ACD500AEE3(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_672628444615C28A9006F0ACD500AEE3");

	UBP_MatchmakingScreen_C_OnFailure_672628444615C28A9006F0ACD500AEE3_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_672628444615C28A9006F0ACD500AEE3
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnSuccess_672628444615C28A9006F0ACD500AEE3(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_672628444615C28A9006F0ACD500AEE3");

	UBP_MatchmakingScreen_C_OnSuccess_672628444615C28A9006F0ACD500AEE3_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_672628444615C28A9006F0AC56DE6ED4
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnFailure_672628444615C28A9006F0AC56DE6ED4(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_672628444615C28A9006F0AC56DE6ED4");

	UBP_MatchmakingScreen_C_OnFailure_672628444615C28A9006F0AC56DE6ED4_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_672628444615C28A9006F0AC56DE6ED4
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnSuccess_672628444615C28A9006F0AC56DE6ED4(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_672628444615C28A9006F0AC56DE6ED4");

	UBP_MatchmakingScreen_C_OnSuccess_672628444615C28A9006F0AC56DE6ED4_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_344C14AC4FC53B61568784B01C6B576E
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnFailure_344C14AC4FC53B61568784B01C6B576E(const struct FString& QueueName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_344C14AC4FC53B61568784B01C6B576E");

	UBP_MatchmakingScreen_C_OnFailure_344C14AC4FC53B61568784B01C6B576E_Params params;
	params.QueueName = QueueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_344C14AC4FC53B61568784B01C6B576E
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnSuccess_344C14AC4FC53B61568784B01C6B576E(const struct FString& QueueName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_344C14AC4FC53B61568784B01C6B576E");

	UBP_MatchmakingScreen_C_OnSuccess_344C14AC4FC53B61568784B01C6B576E_Params params;
	params.QueueName = QueueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_60F7531743547A48C86D09A814CDA395
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnFailure_60F7531743547A48C86D09A814CDA395(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_60F7531743547A48C86D09A814CDA395");

	UBP_MatchmakingScreen_C_OnFailure_60F7531743547A48C86D09A814CDA395_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_60F7531743547A48C86D09A814CDA395
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnSuccess_60F7531743547A48C86D09A814CDA395(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_60F7531743547A48C86D09A814CDA395");

	UBP_MatchmakingScreen_C_OnSuccess_60F7531743547A48C86D09A814CDA395_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_8E9A20E64A29269662D6C4B29B196A96
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnFailure_8E9A20E64A29269662D6C4B29B196A96(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_8E9A20E64A29269662D6C4B29B196A96");

	UBP_MatchmakingScreen_C_OnFailure_8E9A20E64A29269662D6C4B29B196A96_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_8E9A20E64A29269662D6C4B29B196A96
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnSuccess_8E9A20E64A29269662D6C4B29B196A96(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_8E9A20E64A29269662D6C4B29B196A96");

	UBP_MatchmakingScreen_C_OnSuccess_8E9A20E64A29269662D6C4B29B196A96_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_0F9B3B6544DF9CE6B1EFA7B4E638F24A
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnFailure_0F9B3B6544DF9CE6B1EFA7B4E638F24A(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_0F9B3B6544DF9CE6B1EFA7B4E638F24A");

	UBP_MatchmakingScreen_C_OnFailure_0F9B3B6544DF9CE6B1EFA7B4E638F24A_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_0F9B3B6544DF9CE6B1EFA7B4E638F24A
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnSuccess_0F9B3B6544DF9CE6B1EFA7B4E638F24A(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_0F9B3B6544DF9CE6B1EFA7B4E638F24A");

	UBP_MatchmakingScreen_C_OnSuccess_0F9B3B6544DF9CE6B1EFA7B4E638F24A_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_672628444615C28A9006F0ACCA1EB912
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnFailure_672628444615C28A9006F0ACCA1EB912(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_672628444615C28A9006F0ACCA1EB912");

	UBP_MatchmakingScreen_C_OnFailure_672628444615C28A9006F0ACCA1EB912_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_672628444615C28A9006F0ACCA1EB912
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnSuccess_672628444615C28A9006F0ACCA1EB912(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_672628444615C28A9006F0ACCA1EB912");

	UBP_MatchmakingScreen_C_OnSuccess_672628444615C28A9006F0ACCA1EB912_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_672628444615C28A9006F0AC1A1DFF46
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnFailure_672628444615C28A9006F0AC1A1DFF46(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_672628444615C28A9006F0AC1A1DFF46");

	UBP_MatchmakingScreen_C_OnFailure_672628444615C28A9006F0AC1A1DFF46_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_672628444615C28A9006F0AC1A1DFF46
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnSuccess_672628444615C28A9006F0AC1A1DFF46(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_672628444615C28A9006F0AC1A1DFF46");

	UBP_MatchmakingScreen_C_OnSuccess_672628444615C28A9006F0AC1A1DFF46_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_8E9A20E64A29269662D6C4B2D5D232B2
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnFailure_8E9A20E64A29269662D6C4B2D5D232B2(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_8E9A20E64A29269662D6C4B2D5D232B2");

	UBP_MatchmakingScreen_C_OnFailure_8E9A20E64A29269662D6C4B2D5D232B2_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_8E9A20E64A29269662D6C4B2D5D232B2
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnSuccess_8E9A20E64A29269662D6C4B2D5D232B2(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_8E9A20E64A29269662D6C4B2D5D232B2");

	UBP_MatchmakingScreen_C_OnSuccess_8E9A20E64A29269662D6C4B2D5D232B2_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_67F6983E4A4400B48FA2EA924013F6EF
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnFailure_67F6983E4A4400B48FA2EA924013F6EF(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_67F6983E4A4400B48FA2EA924013F6EF");

	UBP_MatchmakingScreen_C_OnFailure_67F6983E4A4400B48FA2EA924013F6EF_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_67F6983E4A4400B48FA2EA924013F6EF
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnSuccess_67F6983E4A4400B48FA2EA924013F6EF(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_67F6983E4A4400B48FA2EA924013F6EF");

	UBP_MatchmakingScreen_C_OnSuccess_67F6983E4A4400B48FA2EA924013F6EF_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_B0A1AA9741161B5376ACF5B7683DAF0E
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabPlayerEntity                        PlayerEntity                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		int                                                LeaveCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FDateTime                                   LeaveTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
//		struct FDateTime                                   BanEndTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnFailure_B0A1AA9741161B5376ACF5B7683DAF0E(const struct FPlayFabPlayerEntity& PlayerEntity, int LeaveCount, const struct FDateTime& LeaveTime, const struct FDateTime& BanEndTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_B0A1AA9741161B5376ACF5B7683DAF0E");

	UBP_MatchmakingScreen_C_OnFailure_B0A1AA9741161B5376ACF5B7683DAF0E_Params params;
	params.PlayerEntity = PlayerEntity;
	params.LeaveCount = LeaveCount;
	params.LeaveTime = LeaveTime;
	params.BanEndTime = BanEndTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_B0A1AA9741161B5376ACF5B7683DAF0E
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabPlayerEntity                        PlayerEntity                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		int                                                LeaveCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FDateTime                                   LeaveTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
//		struct FDateTime                                   BanEndTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnSuccess_B0A1AA9741161B5376ACF5B7683DAF0E(const struct FPlayFabPlayerEntity& PlayerEntity, int LeaveCount, const struct FDateTime& LeaveTime, const struct FDateTime& BanEndTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_B0A1AA9741161B5376ACF5B7683DAF0E");

	UBP_MatchmakingScreen_C_OnSuccess_B0A1AA9741161B5376ACF5B7683DAF0E_Params params;
	params.PlayerEntity = PlayerEntity;
	params.LeaveCount = LeaveCount;
	params.LeaveTime = LeaveTime;
	params.BanEndTime = BanEndTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_C9398F5545CC7EBA29C50D98595DDA52
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnFailure_C9398F5545CC7EBA29C50D98595DDA52(const struct FString& QueueName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_C9398F5545CC7EBA29C50D98595DDA52");

	UBP_MatchmakingScreen_C_OnFailure_C9398F5545CC7EBA29C50D98595DDA52_Params params;
	params.QueueName = QueueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_C9398F5545CC7EBA29C50D98595DDA52
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnSuccess_C9398F5545CC7EBA29C50D98595DDA52(const struct FString& QueueName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_C9398F5545CC7EBA29C50D98595DDA52");

	UBP_MatchmakingScreen_C_OnSuccess_C9398F5545CC7EBA29C50D98595DDA52_Params params;
	params.QueueName = QueueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_803BB389473F1682ABB0D18EB08C27B6
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingScreen_C::OnFailure_803BB389473F1682ABB0D18EB08C27B6()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_803BB389473F1682ABB0D18EB08C27B6");

	UBP_MatchmakingScreen_C_OnFailure_803BB389473F1682ABB0D18EB08C27B6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_803BB389473F1682ABB0D18EB08C27B6
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingScreen_C::OnSuccess_803BB389473F1682ABB0D18EB08C27B6()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_803BB389473F1682ABB0D18EB08C27B6");

	UBP_MatchmakingScreen_C_OnSuccess_803BB389473F1682ABB0D18EB08C27B6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_EAE6415A4E9D4278139810AFF2CA6E91
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnFailure_EAE6415A4E9D4278139810AFF2CA6E91(const struct FString& QueueName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_EAE6415A4E9D4278139810AFF2CA6E91");

	UBP_MatchmakingScreen_C_OnFailure_EAE6415A4E9D4278139810AFF2CA6E91_Params params;
	params.QueueName = QueueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_EAE6415A4E9D4278139810AFF2CA6E91
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnSuccess_EAE6415A4E9D4278139810AFF2CA6E91(const struct FString& QueueName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_EAE6415A4E9D4278139810AFF2CA6E91");

	UBP_MatchmakingScreen_C_OnSuccess_EAE6415A4E9D4278139810AFF2CA6E91_Params params;
	params.QueueName = QueueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_769A86204547BF36B6EE2F887D997169
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     TicketId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		MordhauOnlineSubsystem_EPlayFabTicketStatus        TicketStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     CancellationReason                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     MatchId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnFailure_769A86204547BF36B6EE2F887D997169(const struct FString& QueueName, const struct FString& TicketId, MordhauOnlineSubsystem_EPlayFabTicketStatus TicketStatus, const struct FString& CancellationReason, const struct FString& MatchId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_769A86204547BF36B6EE2F887D997169");

	UBP_MatchmakingScreen_C_OnFailure_769A86204547BF36B6EE2F887D997169_Params params;
	params.QueueName = QueueName;
	params.TicketId = TicketId;
	params.TicketStatus = TicketStatus;
	params.CancellationReason = CancellationReason;
	params.MatchId = MatchId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_769A86204547BF36B6EE2F887D997169
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     TicketId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		MordhauOnlineSubsystem_EPlayFabTicketStatus        TicketStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     CancellationReason                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     MatchId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnSuccess_769A86204547BF36B6EE2F887D997169(const struct FString& QueueName, const struct FString& TicketId, MordhauOnlineSubsystem_EPlayFabTicketStatus TicketStatus, const struct FString& CancellationReason, const struct FString& MatchId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_769A86204547BF36B6EE2F887D997169");

	UBP_MatchmakingScreen_C_OnSuccess_769A86204547BF36B6EE2F887D997169_Params params;
	params.QueueName = QueueName;
	params.TicketId = TicketId;
	params.TicketStatus = TicketStatus;
	params.CancellationReason = CancellationReason;
	params.MatchId = MatchId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_593B3DE445187D64F38A78AC7464E5BF
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnFailure_593B3DE445187D64F38A78AC7464E5BF(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_593B3DE445187D64F38A78AC7464E5BF");

	UBP_MatchmakingScreen_C_OnFailure_593B3DE445187D64F38A78AC7464E5BF_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_593B3DE445187D64F38A78AC7464E5BF
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabMatchmakingMatch                    Match                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MatchmakingScreen_C::OnSuccess_593B3DE445187D64F38A78AC7464E5BF(const struct FPlayFabMatchmakingMatch& Match)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_593B3DE445187D64F38A78AC7464E5BF");

	UBP_MatchmakingScreen_C_OnSuccess_593B3DE445187D64F38A78AC7464E5BF_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_850913F04E7E28DE6BBF3BB67BE5C4E5
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnFailure_850913F04E7E28DE6BBF3BB67BE5C4E5(const struct FString& QueueName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_850913F04E7E28DE6BBF3BB67BE5C4E5");

	UBP_MatchmakingScreen_C_OnFailure_850913F04E7E28DE6BBF3BB67BE5C4E5_Params params;
	params.QueueName = QueueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_850913F04E7E28DE6BBF3BB67BE5C4E5
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnSuccess_850913F04E7E28DE6BBF3BB67BE5C4E5(const struct FString& QueueName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_850913F04E7E28DE6BBF3BB67BE5C4E5");

	UBP_MatchmakingScreen_C_OnSuccess_850913F04E7E28DE6BBF3BB67BE5C4E5_Params params;
	params.QueueName = QueueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_0698FD2E4159E23FE2230DA18E150DBD
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     TicketId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnFailure_0698FD2E4159E23FE2230DA18E150DBD(const struct FString& QueueName, const struct FString& TicketId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_0698FD2E4159E23FE2230DA18E150DBD");

	UBP_MatchmakingScreen_C_OnFailure_0698FD2E4159E23FE2230DA18E150DBD_Params params;
	params.QueueName = QueueName;
	params.TicketId = TicketId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_0698FD2E4159E23FE2230DA18E150DBD
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     TicketId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnSuccess_0698FD2E4159E23FE2230DA18E150DBD(const struct FString& QueueName, const struct FString& TicketId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_0698FD2E4159E23FE2230DA18E150DBD");

	UBP_MatchmakingScreen_C_OnSuccess_0698FD2E4159E23FE2230DA18E150DBD_Params params;
	params.QueueName = QueueName;
	params.TicketId = TicketId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_E36938C940390430D770FA897A0E77CD
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnFailure_E36938C940390430D770FA897A0E77CD(const struct FString& QueueName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_E36938C940390430D770FA897A0E77CD");

	UBP_MatchmakingScreen_C_OnFailure_E36938C940390430D770FA897A0E77CD_Params params;
	params.QueueName = QueueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_E36938C940390430D770FA897A0E77CD
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnSuccess_E36938C940390430D770FA897A0E77CD(const struct FString& QueueName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_E36938C940390430D770FA897A0E77CD");

	UBP_MatchmakingScreen_C_OnSuccess_E36938C940390430D770FA897A0E77CD_Params params;
	params.QueueName = QueueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_B742674A43952F3CD1897591AB8CAF21
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     TicketId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnFailure_B742674A43952F3CD1897591AB8CAF21(const struct FString& QueueName, const struct FString& TicketId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_B742674A43952F3CD1897591AB8CAF21");

	UBP_MatchmakingScreen_C_OnFailure_B742674A43952F3CD1897591AB8CAF21_Params params;
	params.QueueName = QueueName;
	params.TicketId = TicketId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_B742674A43952F3CD1897591AB8CAF21
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     TicketId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnSuccess_B742674A43952F3CD1897591AB8CAF21(const struct FString& QueueName, const struct FString& TicketId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_B742674A43952F3CD1897591AB8CAF21");

	UBP_MatchmakingScreen_C_OnSuccess_B742674A43952F3CD1897591AB8CAF21_Params params;
	params.QueueName = QueueName;
	params.TicketId = TicketId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_527F32434AB11E7ADC849FB48EB7AE48
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingScreen_C::OnFailure_527F32434AB11E7ADC849FB48EB7AE48()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_527F32434AB11E7ADC849FB48EB7AE48");

	UBP_MatchmakingScreen_C_OnFailure_527F32434AB11E7ADC849FB48EB7AE48_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFull_527F32434AB11E7ADC849FB48EB7AE48
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingScreen_C::OnFull_527F32434AB11E7ADC849FB48EB7AE48()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFull_527F32434AB11E7ADC849FB48EB7AE48");

	UBP_MatchmakingScreen_C_OnFull_527F32434AB11E7ADC849FB48EB7AE48_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_527F32434AB11E7ADC849FB48EB7AE48
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingScreen_C::OnSuccess_527F32434AB11E7ADC849FB48EB7AE48()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_527F32434AB11E7ADC849FB48EB7AE48");

	UBP_MatchmakingScreen_C_OnSuccess_527F32434AB11E7ADC849FB48EB7AE48_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_F52C3F6641F7B816D62418B84AA964CB
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPlayFabGameServer>                  Servers                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnFailure_F52C3F6641F7B816D62418B84AA964CB(TArray<struct FPlayFabGameServer> Servers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_F52C3F6641F7B816D62418B84AA964CB");

	UBP_MatchmakingScreen_C_OnFailure_F52C3F6641F7B816D62418B84AA964CB_Params params;
	params.Servers = Servers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_F52C3F6641F7B816D62418B84AA964CB
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPlayFabGameServer>                  Servers                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnSuccess_F52C3F6641F7B816D62418B84AA964CB(TArray<struct FPlayFabGameServer> Servers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_F52C3F6641F7B816D62418B84AA964CB");

	UBP_MatchmakingScreen_C_OnSuccess_F52C3F6641F7B816D62418B84AA964CB_Params params;
	params.Servers = Servers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_A776E9454B061B5288E2CFA61D35F10E
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingScreen_C::OnFailure_A776E9454B061B5288E2CFA61D35F10E()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnFailure_A776E9454B061B5288E2CFA61D35F10E");

	UBP_MatchmakingScreen_C_OnFailure_A776E9454B061B5288E2CFA61D35F10E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_A776E9454B061B5288E2CFA61D35F10E
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingScreen_C::OnSuccess_A776E9454B061B5288E2CFA61D35F10E()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSuccess_A776E9454B061B5288E2CFA61D35F10E");

	UBP_MatchmakingScreen_C_OnSuccess_A776E9454B061B5288E2CFA61D35F10E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MatchmakingScreen_C::BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_MatchmakingScreen_C_BndEvt__SearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.UpdateWidgets
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingScreen_C::UpdateWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.UpdateWidgets");

	UBP_MatchmakingScreen_C_UpdateWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MatchmakingScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Construct");

	UBP_MatchmakingScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.StartSearch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingScreen_C::StartSearch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.StartSearch");

	UBP_MatchmakingScreen_C_StartSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.CancelSearch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingScreen_C::CancelSearch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.CancelSearch");

	UBP_MatchmakingScreen_C_CancelSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.StartSearchTimer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingScreen_C::StartSearchTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.StartSearchTimer");

	UBP_MatchmakingScreen_C_StartSearchTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.TickSearch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingScreen_C::TickSearch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.TickSearch");

	UBP_MatchmakingScreen_C_TickSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FText                                       SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	UBP_MatchmakingScreen_C_BndEvt__RegionComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.UpdatePartyValues
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingScreen_C::UpdatePartyValues()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.UpdatePartyValues");

	UBP_MatchmakingScreen_C_UpdatePartyValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSelectionChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MatchmakingScreen_C::OnSelectionChanged(bool bIsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSelectionChanged");

	UBP_MatchmakingScreen_C_OnSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnPartyUpdated
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPlayFabPlayer>                      PartyMembers                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnPartyUpdated(TArray<struct FPlayFabPlayer> PartyMembers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnPartyUpdated");

	UBP_MatchmakingScreen_C_OnPartyUpdated_Params params;
	params.PartyMembers = PartyMembers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnOkClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingScreen_C::OnOkClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnOkClicked");

	UBP_MatchmakingScreen_C_OnOkClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnMatchmakingRegionsDetermined
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		MordhauOnlineSubsystem_EServerRegion               CasualMatchmakingRegion                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		MordhauOnlineSubsystem_EServerRegion               RankedMatchmakingRegion                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::OnMatchmakingRegionsDetermined(MordhauOnlineSubsystem_EServerRegion CasualMatchmakingRegion, MordhauOnlineSubsystem_EServerRegion RankedMatchmakingRegion)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnMatchmakingRegionsDetermined");

	UBP_MatchmakingScreen_C_OnMatchmakingRegionsDetermined_Params params;
	params.CasualMatchmakingRegion = CasualMatchmakingRegion;
	params.RankedMatchmakingRegion = RankedMatchmakingRegion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSearchFailureDialogOkClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingScreen_C::OnSearchFailureDialogOkClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.OnSearchFailureDialogOkClicked");

	UBP_MatchmakingScreen_C_OnSearchFailureDialogOkClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__BP_GameModeCategory_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MatchmakingScreen_C::BndEvt__BP_GameModeCategory_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__BP_GameModeCategory_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	UBP_MatchmakingScreen_C_BndEvt__BP_GameModeCategory_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__BP_GameModeCategory_0_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MatchmakingScreen_C::BndEvt__BP_GameModeCategory_0_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__BP_GameModeCategory_0_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");

	UBP_MatchmakingScreen_C_BndEvt__BP_GameModeCategory_0_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Switch to ranked tab
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingScreen_C::Switch_to_ranked_tab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.Switch to ranked tab");

	UBP_MatchmakingScreen_C_Switch_to_ranked_tab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MatchmakingScreen_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UBP_MatchmakingScreen_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__BP_DuelGameModeEntry_K2Node_ComponentBoundEvent_7_OnHover__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MatchmakingScreen_C::BndEvt__BP_DuelGameModeEntry_K2Node_ComponentBoundEvent_7_OnHover__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__BP_DuelGameModeEntry_K2Node_ComponentBoundEvent_7_OnHover__DelegateSignature");

	UBP_MatchmakingScreen_C_BndEvt__BP_DuelGameModeEntry_K2Node_ComponentBoundEvent_7_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__BP_TeamFightGameModeEntry_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MatchmakingScreen_C::BndEvt__BP_TeamFightGameModeEntry_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__BP_TeamFightGameModeEntry_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature");

	UBP_MatchmakingScreen_C_BndEvt__BP_TeamFightGameModeEntry_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.RestartSearch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingScreen_C::RestartSearch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.RestartSearch");

	UBP_MatchmakingScreen_C_RestartSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MatchmakingScreen_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBP_MatchmakingScreen_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__RankedRegionComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FText                                       SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::BndEvt__RankedRegionComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.BndEvt__RankedRegionComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");

	UBP_MatchmakingScreen_C_BndEvt__RankedRegionComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.ExecuteUbergraph_BP_MatchmakingScreen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MatchmakingScreen_C::ExecuteUbergraph_BP_MatchmakingScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingScreen.BP_MatchmakingScreen_C.ExecuteUbergraph_BP_MatchmakingScreen");

	UBP_MatchmakingScreen_C_ExecuteUbergraph_BP_MatchmakingScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

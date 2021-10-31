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
//		Name   -> Function BP_PushGameState.BP_PushGameState_C.GetScoreboardTimeInProgress
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FTimespan                                   Time                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ABP_PushGameState_C::GetScoreboardTimeInProgress(struct FTimespan* Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushGameState.BP_PushGameState_C.GetScoreboardTimeInProgress");

	ABP_PushGameState_C_GetScoreboardTimeInProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushGameState.BP_PushGameState_C.GetScoreboardObjectiveName
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       NewParam                                                   (Parm, OutParm)
void ABP_PushGameState_C::GetScoreboardObjectiveName(struct FText* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushGameState.BP_PushGameState_C.GetScoreboardObjectiveName");

	ABP_PushGameState_C_GetScoreboardObjectiveName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushGameState.BP_PushGameState_C.GetScoreboardTeamObjectiveValue
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Output                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_PushGameState_C::GetScoreboardTeamObjectiveValue(int Team, struct FString* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushGameState.BP_PushGameState_C.GetScoreboardTeamObjectiveValue");

	ABP_PushGameState_C_GetScoreboardTeamObjectiveValue_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushGameState.BP_PushGameState_C.HandleMatchEndInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_PushGameState_C::HandleMatchEndInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushGameState.BP_PushGameState_C.HandleMatchEndInfo");

	ABP_PushGameState_C_HandleMatchEndInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushGameState.BP_PushGameState_C.ExecuteUbergraph_BP_PushGameState
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PushGameState_C::ExecuteUbergraph_BP_PushGameState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushGameState.BP_PushGameState_C.ExecuteUbergraph_BP_PushGameState");

	ABP_PushGameState_C_ExecuteUbergraph_BP_PushGameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

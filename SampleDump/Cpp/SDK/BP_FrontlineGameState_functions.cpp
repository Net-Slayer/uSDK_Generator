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
//		Name   -> Function BP_FrontlineGameState.BP_FrontlineGameState_C.DrainTickets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_MordhauGameMode_C*                       GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineGameState_C::DrainTickets(class ABP_MordhauGameMode_C* GameMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameState.BP_FrontlineGameState_C.DrainTickets");

	ABP_FrontlineGameState_C_DrainTickets_Params params;
	params.GameMode = GameMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineGameState.BP_FrontlineGameState_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_FrontlineGameState_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameState.BP_FrontlineGameState_C.ReceiveBeginPlay");

	ABP_FrontlineGameState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineGameState.BP_FrontlineGameState_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineGameState_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameState.BP_FrontlineGameState_C.ReceiveTick");

	ABP_FrontlineGameState_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineGameState.BP_FrontlineGameState_C.HandleMatchEndInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineGameState_C::HandleMatchEndInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameState.BP_FrontlineGameState_C.HandleMatchEndInfo");

	ABP_FrontlineGameState_C_HandleMatchEndInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineGameState.BP_FrontlineGameState_C.LocalPlayerChangedTeam
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_FrontlineGameState_C::LocalPlayerChangedTeam()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameState.BP_FrontlineGameState_C.LocalPlayerChangedTeam");

	ABP_FrontlineGameState_C_LocalPlayerChangedTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineGameState.BP_FrontlineGameState_C.TriggerWinDelayed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_FrontlineGameState_C::TriggerWinDelayed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameState.BP_FrontlineGameState_C.TriggerWinDelayed");

	ABP_FrontlineGameState_C_TriggerWinDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineGameState.BP_FrontlineGameState_C.ExecuteUbergraph_BP_FrontlineGameState
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineGameState_C::ExecuteUbergraph_BP_FrontlineGameState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameState.BP_FrontlineGameState_C.ExecuteUbergraph_BP_FrontlineGameState");

	ABP_FrontlineGameState_C_ExecuteUbergraph_BP_FrontlineGameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

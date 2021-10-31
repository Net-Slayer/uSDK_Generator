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
//		Name   -> Function BP_HordeGameState.BP_HordeGameState_C.ShouldHideSpawnInfoText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Hide                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HordeGameState_C::ShouldHideSpawnInfoText(bool* Hide)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameState.BP_HordeGameState_C.ShouldHideSpawnInfoText");

	ABP_HordeGameState_C_ShouldHideSpawnInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Hide != nullptr)
		*Hide = params.Hide;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameState.BP_HordeGameState_C.OnRep_ReplicatedHordeMatchInfo
//		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeGameState_C::OnRep_ReplicatedHordeMatchInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameState.BP_HordeGameState_C.OnRep_ReplicatedHordeMatchInfo");

	ABP_HordeGameState_C_OnRep_ReplicatedHordeMatchInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameState.BP_HordeGameState_C.UpdateNextPurchasableVisuals
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeGameState_C::UpdateNextPurchasableVisuals()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameState.BP_HordeGameState_C.UpdateNextPurchasableVisuals");

	ABP_HordeGameState_C_UpdateNextPurchasableVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameState.BP_HordeGameState_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_HordeGameState_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameState.BP_HordeGameState_C.ReceiveBeginPlay");

	ABP_HordeGameState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameState.BP_HordeGameState_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeGameState_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameState.BP_HordeGameState_C.ReceiveTick");

	ABP_HordeGameState_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameState.BP_HordeGameState_C.HandleMatchEndInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_HordeGameState_C::HandleMatchEndInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameState.BP_HordeGameState_C.HandleMatchEndInfo");

	ABP_HordeGameState_C_HandleMatchEndInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameState.BP_HordeGameState_C.ExecuteUbergraph_BP_HordeGameState
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeGameState_C::ExecuteUbergraph_BP_HordeGameState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameState.BP_HordeGameState_C.ExecuteUbergraph_BP_HordeGameState");

	ABP_HordeGameState_C_ExecuteUbergraph_BP_HordeGameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

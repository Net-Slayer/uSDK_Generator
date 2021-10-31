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
//		Name   -> Function BP_HordePlayerGrave.BP_HordePlayerGrave_C.OnRep_AssociatedPlayerState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordePlayerGrave_C::OnRep_AssociatedPlayerState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerGrave.BP_HordePlayerGrave_C.OnRep_AssociatedPlayerState");

	ABP_HordePlayerGrave_C_OnRep_AssociatedPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerGrave.BP_HordePlayerGrave_C.CanInteract
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HordePlayerGrave_C::CanInteract(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerGrave.BP_HordePlayerGrave_C.CanInteract");

	ABP_HordePlayerGrave_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerGrave.BP_HordePlayerGrave_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerGrave_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerGrave.BP_HordePlayerGrave_C.ReceiveTick");

	ABP_HordePlayerGrave_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerGrave.BP_HordePlayerGrave_C.OnHeldInteractionStart
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerGrave_C::OnHeldInteractionStart(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerGrave.BP_HordePlayerGrave_C.OnHeldInteractionStart");

	ABP_HordePlayerGrave_C_OnHeldInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerGrave.BP_HordePlayerGrave_C.OnInteractionMaintained
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerGrave_C::OnInteractionMaintained(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerGrave.BP_HordePlayerGrave_C.OnInteractionMaintained");

	ABP_HordePlayerGrave_C_OnInteractionMaintained_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerGrave.BP_HordePlayerGrave_C.ExecuteUbergraph_BP_HordePlayerGrave
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerGrave_C::ExecuteUbergraph_BP_HordePlayerGrave(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerGrave.BP_HordePlayerGrave_C.ExecuteUbergraph_BP_HordePlayerGrave");

	ABP_HordePlayerGrave_C_ExecuteUbergraph_BP_HordePlayerGrave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

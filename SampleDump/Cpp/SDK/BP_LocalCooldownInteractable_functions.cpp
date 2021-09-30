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
//		Name   -> Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.UpdateValue
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_LocalCooldownInteractable_C::UpdateValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.UpdateValue");

	ABP_LocalCooldownInteractable_C_UpdateValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.CanInteract
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_LocalCooldownInteractable_C::CanInteract(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.CanInteract");

	ABP_LocalCooldownInteractable_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.OnInteractionStart
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LocalCooldownInteractable_C::OnInteractionStart(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.OnInteractionStart");

	ABP_LocalCooldownInteractable_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.AvailableInteractionStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LocalCooldownInteractable_C::AvailableInteractionStart(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.AvailableInteractionStart");

	ABP_LocalCooldownInteractable_C_AvailableInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.NotAvailableInteractionStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LocalCooldownInteractable_C::NotAvailableInteractionStart(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.NotAvailableInteractionStart");

	ABP_LocalCooldownInteractable_C_NotAvailableInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.Depleted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_LocalCooldownInteractable_C::Depleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.Depleted");

	ABP_LocalCooldownInteractable_C_Depleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.Refilled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_LocalCooldownInteractable_C::Refilled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.Refilled");

	ABP_LocalCooldownInteractable_C_Refilled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.Deplete
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LocalCooldownInteractable_C::Deplete(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.Deplete");

	ABP_LocalCooldownInteractable_C_Deplete_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.PopCooldown
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_LocalCooldownInteractable_C::PopCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.PopCooldown");

	ABP_LocalCooldownInteractable_C_PopCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.ExecuteUbergraph_BP_LocalCooldownInteractable
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LocalCooldownInteractable_C::ExecuteUbergraph_BP_LocalCooldownInteractable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.ExecuteUbergraph_BP_LocalCooldownInteractable");

	ABP_LocalCooldownInteractable_C_ExecuteUbergraph_BP_LocalCooldownInteractable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

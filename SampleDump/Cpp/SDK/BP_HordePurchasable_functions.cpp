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
//		Name   -> Function BP_HordePurchasable.BP_HordePurchasable_C.UpdateVisuals
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordePurchasable_C::UpdateVisuals()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePurchasable.BP_HordePurchasable_C.UpdateVisuals");

	ABP_HordePurchasable_C_UpdateVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePurchasable.BP_HordePurchasable_C.InitializeDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordePurchasable_C::InitializeDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePurchasable.BP_HordePurchasable_C.InitializeDisplay");

	ABP_HordePurchasable_C_InitializeDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePurchasable.BP_HordePurchasable_C.SpawnItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_BattleRoyaleCharacter_C*                 ForCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePurchasable_C::SpawnItem(class ABP_BattleRoyaleCharacter_C* ForCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePurchasable.BP_HordePurchasable_C.SpawnItem");

	ABP_HordePurchasable_C_SpawnItem_Params params;
	params.ForCharacter = ForCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePurchasable.BP_HordePurchasable_C.SetAvailability
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               NewAvailable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HordePurchasable_C::SetAvailability(bool NewAvailable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePurchasable.BP_HordePurchasable_C.SetAvailability");

	ABP_HordePurchasable_C_SetAvailability_Params params;
	params.NewAvailable = NewAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePurchasable.BP_HordePurchasable_C.CanInteract
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HordePurchasable_C::CanInteract(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePurchasable.BP_HordePurchasable_C.CanInteract");

	ABP_HordePurchasable_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePurchasable.BP_HordePurchasable_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_HordePurchasable_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePurchasable.BP_HordePurchasable_C.ReceiveBeginPlay");

	ABP_HordePurchasable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePurchasable.BP_HordePurchasable_C.OnInteractionStart
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePurchasable_C::OnInteractionStart(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePurchasable.BP_HordePurchasable_C.OnInteractionStart");

	ABP_HordePurchasable_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePurchasable.BP_HordePurchasable_C.ExecuteUbergraph_BP_HordePurchasable
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePurchasable_C::ExecuteUbergraph_BP_HordePurchasable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePurchasable.BP_HordePurchasable_C.ExecuteUbergraph_BP_HordePurchasable");

	ABP_HordePurchasable_C_ExecuteUbergraph_BP_HordePurchasable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

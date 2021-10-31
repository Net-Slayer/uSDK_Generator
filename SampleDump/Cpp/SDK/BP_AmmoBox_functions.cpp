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
//		Name   -> Function BP_AmmoBox.BP_AmmoBox_C.CanInteract
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AmmoBox_C::CanInteract(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.CanInteract");

	ABP_AmmoBox_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AmmoBox.BP_AmmoBox_C.UpdateWidgetVisibilityOverride
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_AmmoBox_C::UpdateWidgetVisibilityOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.UpdateWidgetVisibilityOverride");

	ABP_AmmoBox_C_UpdateWidgetVisibilityOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AmmoBox.BP_AmmoBox_C.Restock
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AmmoBox_C::Restock(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.Restock");

	ABP_AmmoBox_C_Restock_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AmmoBox.BP_AmmoBox_C.AvailableInteractionStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AmmoBox_C::AvailableInteractionStart(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.AvailableInteractionStart");

	ABP_AmmoBox_C_AvailableInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AmmoBox.BP_AmmoBox_C.Deplete
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AmmoBox_C::Deplete(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.Deplete");

	ABP_AmmoBox_C_Deplete_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AmmoBox.BP_AmmoBox_C.Refill
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_AmmoBox_C::Refill()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.Refill");

	ABP_AmmoBox_C_Refill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AmmoBox.BP_AmmoBox_C.ExecuteUbergraph_BP_AmmoBox
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AmmoBox_C::ExecuteUbergraph_BP_AmmoBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AmmoBox.BP_AmmoBox_C.ExecuteUbergraph_BP_AmmoBox");

	ABP_AmmoBox_C_ExecuteUbergraph_BP_AmmoBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

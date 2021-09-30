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
//		Name   -> Function BP_SwitchInteractable.BP_SwitchInteractable_C.OnRep_Value
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_SwitchInteractable_C::OnRep_Value()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SwitchInteractable.BP_SwitchInteractable_C.OnRep_Value");

	ABP_SwitchInteractable_C_OnRep_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_SwitchInteractable.BP_SwitchInteractable_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_SwitchInteractable_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SwitchInteractable.BP_SwitchInteractable_C.ReceiveBeginPlay");

	ABP_SwitchInteractable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_SwitchInteractable.BP_SwitchInteractable_C.OnInteractionStart
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SwitchInteractable_C::OnInteractionStart(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SwitchInteractable.BP_SwitchInteractable_C.OnInteractionStart");

	ABP_SwitchInteractable_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_SwitchInteractable.BP_SwitchInteractable_C.PreventInteraction
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_SwitchInteractable_C::PreventInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SwitchInteractable.BP_SwitchInteractable_C.PreventInteraction");

	ABP_SwitchInteractable_C_PreventInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_SwitchInteractable.BP_SwitchInteractable_C.OnValueToggled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_SwitchInteractable_C::OnValueToggled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SwitchInteractable.BP_SwitchInteractable_C.OnValueToggled");

	ABP_SwitchInteractable_C_OnValueToggled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_SwitchInteractable.BP_SwitchInteractable_C.ToggleValue
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_SwitchInteractable_C::ToggleValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SwitchInteractable.BP_SwitchInteractable_C.ToggleValue");

	ABP_SwitchInteractable_C_ToggleValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_SwitchInteractable.BP_SwitchInteractable_C.ExecuteUbergraph_BP_SwitchInteractable
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SwitchInteractable_C::ExecuteUbergraph_BP_SwitchInteractable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SwitchInteractable.BP_SwitchInteractable_C.ExecuteUbergraph_BP_SwitchInteractable");

	ABP_SwitchInteractable_C_ExecuteUbergraph_BP_SwitchInteractable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function BP_Bow.BP_Bow_C.OnRep_FireArrows
//		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Bow_C::OnRep_FireArrows()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.OnRep_FireArrows");

	ABP_Bow_C_OnRep_FireArrows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Bow.BP_Bow_C.ClearFireEffects
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Bow_C::ClearFireEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.ClearFireEffects");

	ABP_Bow_C_ClearFireEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Bow.BP_Bow_C.GetUsesFireArrows
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               UsesFireArrows                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Bow_C::GetUsesFireArrows(bool* UsesFireArrows)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.GetUsesFireArrows");

	ABP_Bow_C_GetUsesFireArrows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UsesFireArrows != nullptr)
		*UsesFireArrows = params.UsesFireArrows;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Bow.BP_Bow_C.SetUseFireArrows
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               UseFire                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Bow_C::SetUseFireArrows(bool UseFire)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.SetUseFireArrows");

	ABP_Bow_C_SetUseFireArrows_Params params;
	params.UseFire = UseFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Bow.BP_Bow_C.OnLoadedChanged
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_Bow_C::OnLoadedChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.OnLoadedChanged");

	ABP_Bow_C_OnLoadedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Bow.BP_Bow_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Bow_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.ReceiveBeginPlay");

	ABP_Bow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Bow.BP_Bow_C.UpdateEquipmentVisualState
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Bow_C::UpdateEquipmentVisualState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.UpdateEquipmentVisualState");

	ABP_Bow_C_UpdateEquipmentVisualState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Bow.BP_Bow_C.ReceiveDestroyed
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_Bow_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.ReceiveDestroyed");

	ABP_Bow_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Bow.BP_Bow_C.ExecuteUbergraph_BP_Bow
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Bow_C::ExecuteUbergraph_BP_Bow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Bow.BP_Bow_C.ExecuteUbergraph_BP_Bow");

	ABP_Bow_C_ExecuteUbergraph_BP_Bow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

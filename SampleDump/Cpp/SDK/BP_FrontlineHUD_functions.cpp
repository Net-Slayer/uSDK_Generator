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
//		Name   -> Function BP_FrontlineHUD.BP_FrontlineHUD_C.ShowObjectives
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FrontlineHUD_C::ShowObjectives()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineHUD.BP_FrontlineHUD_C.ShowObjectives");

	ABP_FrontlineHUD_C_ShowObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineHUD.BP_FrontlineHUD_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_FrontlineHUD_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineHUD.BP_FrontlineHUD_C.ReceiveBeginPlay");

	ABP_FrontlineHUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineHUD.BP_FrontlineHUD_C.UseMinimalHUD
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineHUD_C::UseMinimalHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineHUD.BP_FrontlineHUD_C.UseMinimalHUD");

	ABP_FrontlineHUD_C_UseMinimalHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineHUD.BP_FrontlineHUD_C.UseFullHUD
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineHUD_C::UseFullHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineHUD.BP_FrontlineHUD_C.UseFullHUD");

	ABP_FrontlineHUD_C_UseFullHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineHUD.BP_FrontlineHUD_C.OnGameStateReplicated
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineHUD_C::OnGameStateReplicated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineHUD.BP_FrontlineHUD_C.OnGameStateReplicated");

	ABP_FrontlineHUD_C_OnGameStateReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineHUD.BP_FrontlineHUD_C.HideMainMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineHUD_C::HideMainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineHUD.BP_FrontlineHUD_C.HideMainMenu");

	ABP_FrontlineHUD_C_HideMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineHUD.BP_FrontlineHUD_C.ShowMainMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_ArmoryStates_E_ArmoryStates>         Armory_State                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineHUD_C::ShowMainMenu(TEnumAsByte<E_ArmoryStates_E_ArmoryStates> Armory_State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineHUD.BP_FrontlineHUD_C.ShowMainMenu");

	ABP_FrontlineHUD_C_ShowMainMenu_Params params;
	params.Armory_State = Armory_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineHUD.BP_FrontlineHUD_C.ExecuteUbergraph_BP_FrontlineHUD
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineHUD_C::ExecuteUbergraph_BP_FrontlineHUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineHUD.BP_FrontlineHUD_C.ExecuteUbergraph_BP_FrontlineHUD");

	ABP_FrontlineHUD_C_ExecuteUbergraph_BP_FrontlineHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

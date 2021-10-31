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
//		Name   -> Function BP_HordeHUD.BP_HordeHUD_C.ShowSkillTree
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_HordeHUD_C::ShowSkillTree()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.ShowSkillTree");

	ABP_HordeHUD_C_ShowSkillTree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeHUD.BP_HordeHUD_C.CreateSkillTree
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeHUD_C::CreateSkillTree()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.CreateSkillTree");

	ABP_HordeHUD_C_CreateSkillTree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeHUD.BP_HordeHUD_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_HordeHUD_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.ReceiveBeginPlay");

	ABP_HordeHUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeHUD.BP_HordeHUD_C.UseMinimalHUD
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_HordeHUD_C::UseMinimalHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.UseMinimalHUD");

	ABP_HordeHUD_C_UseMinimalHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeHUD.BP_HordeHUD_C.UseFullHUD
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_HordeHUD_C::UseFullHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.UseFullHUD");

	ABP_HordeHUD_C_UseFullHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeHUD.BP_HordeHUD_C.OnGameStateReplicated
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_HordeHUD_C::OnGameStateReplicated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.OnGameStateReplicated");

	ABP_HordeHUD_C_OnGameStateReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeHUD.BP_HordeHUD_C.HideMainMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_HordeHUD_C::HideMainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.HideMainMenu");

	ABP_HordeHUD_C_HideMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeHUD.BP_HordeHUD_C.ShowMainMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_ArmoryStates_E_ArmoryStates>         Armory_State                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeHUD_C::ShowMainMenu(TEnumAsByte<E_ArmoryStates_E_ArmoryStates> Armory_State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.ShowMainMenu");

	ABP_HordeHUD_C_ShowMainMenu_Params params;
	params.Armory_State = Armory_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeHUD.BP_HordeHUD_C.ExecuteUbergraph_BP_HordeHUD
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeHUD_C::ExecuteUbergraph_BP_HordeHUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeHUD.BP_HordeHUD_C.ExecuteUbergraph_BP_HordeHUD");

	ABP_HordeHUD_C_ExecuteUbergraph_BP_HordeHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

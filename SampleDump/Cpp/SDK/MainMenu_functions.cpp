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
//		Name   -> Function MainMenu.MainMenu_C.ShowHalloween
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AMainMenu_C::ShowHalloween()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ShowHalloween");

	AMainMenu_C_ShowHalloween_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function MainMenu.MainMenu_C.SetNewsVisibility
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMainMenu_C::SetNewsVisibility(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.SetNewsVisibility");

	AMainMenu_C_SetNewsVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function MainMenu.MainMenu_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainMenu_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ReceiveTick");

	AMainMenu_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function MainMenu.MainMenu_C.OnPartyUpdated
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPlayFabPlayer>                      PartyMembers                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void AMainMenu_C::OnPartyUpdated(TArray<struct FPlayFabPlayer> PartyMembers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnPartyUpdated");

	AMainMenu_C_OnPartyUpdated_Params params;
	params.PartyMembers = PartyMembers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function MainMenu.MainMenu_C.AddTestCharacter
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMainMenu_C::AddTestCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.AddTestCharacter");

	AMainMenu_C_AddTestCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainMenu_C::ExecuteUbergraph_MainMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu");

	AMainMenu_C_ExecuteUbergraph_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

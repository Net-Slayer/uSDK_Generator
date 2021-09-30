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
//		Name   -> Function BP_PlayerStatsMenu.BP_PlayerStatsMenu_C.RefreshStats
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_PlayerStatsMenu_C::RefreshStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerStatsMenu.BP_PlayerStatsMenu_C.RefreshStats");

	UBP_PlayerStatsMenu_C_RefreshStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PlayerStatsMenu.BP_PlayerStatsMenu_C.OnShown
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_PlayerStatsMenu_C::OnShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerStatsMenu.BP_PlayerStatsMenu_C.OnShown");

	UBP_PlayerStatsMenu_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PlayerStatsMenu.BP_PlayerStatsMenu_C.ExecuteUbergraph_BP_PlayerStatsMenu
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PlayerStatsMenu_C::ExecuteUbergraph_BP_PlayerStatsMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerStatsMenu.BP_PlayerStatsMenu_C.ExecuteUbergraph_BP_PlayerStatsMenu");

	UBP_PlayerStatsMenu_C_ExecuteUbergraph_BP_PlayerStatsMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

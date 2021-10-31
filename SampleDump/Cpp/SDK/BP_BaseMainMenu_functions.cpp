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
//		Name   -> Function BP_BaseMainMenu.BP_BaseMainMenu_C.HideMainMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_BaseMainMenu_C::HideMainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BaseMainMenu.BP_BaseMainMenu_C.HideMainMenu");

	UBP_BaseMainMenu_C_HideMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BaseMainMenu.BP_BaseMainMenu_C.ShowMainMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_ArmoryStates_E_ArmoryStates>         ArmoryState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BaseMainMenu_C::ShowMainMenu(TEnumAsByte<E_ArmoryStates_E_ArmoryStates> ArmoryState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BaseMainMenu.BP_BaseMainMenu_C.ShowMainMenu");

	UBP_BaseMainMenu_C_ShowMainMenu_Params params;
	params.ArmoryState = ArmoryState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

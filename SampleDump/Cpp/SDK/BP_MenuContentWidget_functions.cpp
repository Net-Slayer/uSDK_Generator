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
//		Name   -> Function BP_MenuContentWidget.BP_MenuContentWidget_C.OnHidden
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_MenuContentWidget_C::OnHidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MenuContentWidget.BP_MenuContentWidget_C.OnHidden");

	UBP_MenuContentWidget_C_OnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MenuContentWidget.BP_MenuContentWidget_C.OnShown
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_MenuContentWidget_C::OnShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MenuContentWidget.BP_MenuContentWidget_C.OnShown");

	UBP_MenuContentWidget_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

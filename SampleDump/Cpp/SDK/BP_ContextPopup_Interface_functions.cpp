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
//		Name   -> Function BP_ContextPopup_Interface.BP_ContextPopup_Interface_C.ClearEntries
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_ContextPopup_Interface_C::ClearEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopup_Interface.BP_ContextPopup_Interface_C.ClearEntries");

	UBP_ContextPopup_Interface_C_ClearEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ContextPopup_Interface.BP_ContextPopup_Interface_C.AddButtonEntry
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     ButtonOption                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FText                                       HoverText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UBP_ContextPopupWrapper_Interface_C*         Wrapper                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ContextPopup_Interface_C::AddButtonEntry(const struct FString& ButtonOption, const struct FText& HoverText, class UBP_ContextPopupWrapper_Interface_C* Wrapper)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopup_Interface.BP_ContextPopup_Interface_C.AddButtonEntry");

	UBP_ContextPopup_Interface_C_AddButtonEntry_Params params;
	params.ButtonOption = ButtonOption;
	params.HoverText = HoverText;
	params.Wrapper = Wrapper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

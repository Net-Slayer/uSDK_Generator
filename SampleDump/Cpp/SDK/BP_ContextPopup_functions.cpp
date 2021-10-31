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
//		Name   -> Function BP_ContextPopup.BP_ContextPopup_C.Clear Entries
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_ContextPopup_C::Clear_Entries()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopup.BP_ContextPopup_C.Clear Entries");

	UBP_ContextPopup_C_Clear_Entries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ContextPopup.BP_ContextPopup_C.Add Button Entry
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ButtonLabel                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                ButtonIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Hover_Text                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_ContextPopup_C::Add_Button_Entry(const struct FText& ButtonLabel, int ButtonIndex, const struct FText& Hover_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopup.BP_ContextPopup_C.Add Button Entry");

	UBP_ContextPopup_C_Add_Button_Entry_Params params;
	params.ButtonLabel = ButtonLabel;
	params.ButtonIndex = ButtonIndex;
	params.Hover_Text = Hover_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

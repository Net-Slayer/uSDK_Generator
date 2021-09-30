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
//		Name   -> Function BP_StatePopupText.BP_StatePopupText_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_StatePopupText_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatePopupText.BP_StatePopupText_C.GetVisibility_1");

	UBP_StatePopupText_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_StatePopupText.BP_StatePopupText_C.Activate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StatePopupText_C::Activate(const struct FText& Text, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatePopupText.BP_StatePopupText_C.Activate");

	UBP_StatePopupText_C_Activate_Params params;
	params.Text = Text;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_StatePopupText.BP_StatePopupText_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_StatePopupText_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatePopupText.BP_StatePopupText_C.Construct");

	UBP_StatePopupText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_StatePopupText.BP_StatePopupText_C.Entry Anim Finished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_StatePopupText_C::Entry_Anim_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatePopupText.BP_StatePopupText_C.Entry Anim Finished");

	UBP_StatePopupText_C_Entry_Anim_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_StatePopupText.BP_StatePopupText_C.ExecuteUbergraph_BP_StatePopupText
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StatePopupText_C::ExecuteUbergraph_BP_StatePopupText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatePopupText.BP_StatePopupText_C.ExecuteUbergraph_BP_StatePopupText");

	UBP_StatePopupText_C_ExecuteUbergraph_BP_StatePopupText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

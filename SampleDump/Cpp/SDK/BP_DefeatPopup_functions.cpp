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
//		Name   -> Function BP_DefeatPopup.BP_DefeatPopup_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_DefeatPopup_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DefeatPopup.BP_DefeatPopup_C.GetVisibility_1");

	UBP_DefeatPopup_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DefeatPopup.BP_DefeatPopup_C.Timer Done
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_DefeatPopup_C::Timer_Done()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DefeatPopup.BP_DefeatPopup_C.Timer Done");

	UBP_DefeatPopup_C_Timer_Done_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DefeatPopup.BP_DefeatPopup_C.On Animation Finished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_DefeatPopup_C::On_Animation_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DefeatPopup.BP_DefeatPopup_C.On Animation Finished");

	UBP_DefeatPopup_C_On_Animation_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DefeatPopup.BP_DefeatPopup_C.Show
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Main_Text                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Sub_Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DefeatPopup_C::Show(const struct FText& Main_Text, const struct FText& Sub_Text, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DefeatPopup.BP_DefeatPopup_C.Show");

	UBP_DefeatPopup_C_Show_Params params;
	params.Main_Text = Main_Text;
	params.Sub_Text = Sub_Text;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DefeatPopup.BP_DefeatPopup_C.ExecuteUbergraph_BP_DefeatPopup
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DefeatPopup_C::ExecuteUbergraph_BP_DefeatPopup(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DefeatPopup.BP_DefeatPopup_C.ExecuteUbergraph_BP_DefeatPopup");

	UBP_DefeatPopup_C_ExecuteUbergraph_BP_DefeatPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

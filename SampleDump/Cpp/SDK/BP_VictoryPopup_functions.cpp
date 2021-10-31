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
//		Name   -> Function BP_VictoryPopup.BP_VictoryPopup_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_VictoryPopup_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VictoryPopup.BP_VictoryPopup_C.GetVisibility_1");

	UBP_VictoryPopup_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VictoryPopup.BP_VictoryPopup_C.Timer Done
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_VictoryPopup_C::Timer_Done()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VictoryPopup.BP_VictoryPopup_C.Timer Done");

	UBP_VictoryPopup_C_Timer_Done_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VictoryPopup.BP_VictoryPopup_C.On Animation Finished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_VictoryPopup_C::On_Animation_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VictoryPopup.BP_VictoryPopup_C.On Animation Finished");

	UBP_VictoryPopup_C_On_Animation_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VictoryPopup.BP_VictoryPopup_C.Show
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Main_Text                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Sub_Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_VictoryPopup_C::Show(const struct FText& Main_Text, const struct FText& Sub_Text, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VictoryPopup.BP_VictoryPopup_C.Show");

	UBP_VictoryPopup_C_Show_Params params;
	params.Main_Text = Main_Text;
	params.Sub_Text = Sub_Text;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VictoryPopup.BP_VictoryPopup_C.ExecuteUbergraph_BP_VictoryPopup
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_VictoryPopup_C::ExecuteUbergraph_BP_VictoryPopup(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VictoryPopup.BP_VictoryPopup_C.ExecuteUbergraph_BP_VictoryPopup");

	UBP_VictoryPopup_C_ExecuteUbergraph_BP_VictoryPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

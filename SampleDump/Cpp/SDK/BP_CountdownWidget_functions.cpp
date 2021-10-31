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
//		Name   -> Function BP_CountdownWidget.BP_CountdownWidget_C.Get_CountdownText_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_CountdownWidget_C::Get_CountdownText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CountdownWidget.BP_CountdownWidget_C.Get_CountdownText_Text_1");

	UBP_CountdownWidget_C_Get_CountdownText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CountdownWidget.BP_CountdownWidget_C.PlayCountdownAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_CountdownWidget_C::PlayCountdownAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CountdownWidget.BP_CountdownWidget_C.PlayCountdownAnim");

	UBP_CountdownWidget_C_PlayCountdownAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CountdownWidget.BP_CountdownWidget_C.OnAnimFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_CountdownWidget_C::OnAnimFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CountdownWidget.BP_CountdownWidget_C.OnAnimFinished");

	UBP_CountdownWidget_C_OnAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CountdownWidget.BP_CountdownWidget_C.ExecuteUbergraph_BP_CountdownWidget
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CountdownWidget_C::ExecuteUbergraph_BP_CountdownWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CountdownWidget.BP_CountdownWidget_C.ExecuteUbergraph_BP_CountdownWidget");

	UBP_CountdownWidget_C_ExecuteUbergraph_BP_CountdownWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

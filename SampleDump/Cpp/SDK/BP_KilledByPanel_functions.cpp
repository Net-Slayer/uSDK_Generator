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
//		Name   -> Function BP_KilledByPanel.BP_KilledByPanel_C.Hide
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_KilledByPanel_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.Hide");

	UBP_KilledByPanel_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_KilledByPanel.BP_KilledByPanel_C.Show
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauPlayerState*                         Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_KilledByPanel_C::Show(class AMordhauPlayerState* Killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.Show");

	UBP_KilledByPanel_C_Show_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_KilledByPanel.BP_KilledByPanel_C.Get_HealthProgressBar_Percent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_KilledByPanel_C::Get_HealthProgressBar_Percent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.Get_HealthProgressBar_Percent_1");

	UBP_KilledByPanel_C_Get_HealthProgressBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_KilledByPanel.BP_KilledByPanel_C.Get_StamProgressBar_Percent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_KilledByPanel_C::Get_StamProgressBar_Percent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.Get_StamProgressBar_Percent_1");

	UBP_KilledByPanel_C_Get_StamProgressBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_KilledByPanel.BP_KilledByPanel_C.GetText_2
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_KilledByPanel_C::GetText_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.GetText_2");

	UBP_KilledByPanel_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_KilledByPanel.BP_KilledByPanel_C.GetText_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_KilledByPanel_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.GetText_1");

	UBP_KilledByPanel_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_KilledByPanel.BP_KilledByPanel_C.TakeFromKiller
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauPlayerState*                         KilledBy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_KilledByPanel_C::TakeFromKiller(class AMordhauPlayerState* KilledBy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.TakeFromKiller");

	UBP_KilledByPanel_C_TakeFromKiller_Params params;
	params.KilledBy = KilledBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_KilledByPanel.BP_KilledByPanel_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_KilledByPanel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.Tick");

	UBP_KilledByPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_KilledByPanel.BP_KilledByPanel_C.OnAnimationFinished
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_KilledByPanel_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.OnAnimationFinished");

	UBP_KilledByPanel_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_KilledByPanel.BP_KilledByPanel_C.ExecuteUbergraph_BP_KilledByPanel
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_KilledByPanel_C::ExecuteUbergraph_BP_KilledByPanel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KilledByPanel.BP_KilledByPanel_C.ExecuteUbergraph_BP_KilledByPanel");

	UBP_KilledByPanel_C_ExecuteUbergraph_BP_KilledByPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.GetVisibility_5
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_HUDButtonPrompts_C::GetVisibility_5()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.GetVisibility_5");

	UBP_HUDButtonPrompts_C_GetVisibility_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.GetVisibility_4
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_HUDButtonPrompts_C::GetVisibility_4()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.GetVisibility_4");

	UBP_HUDButtonPrompts_C_GetVisibility_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.GetVisibility_2
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_HUDButtonPrompts_C::GetVisibility_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.GetVisibility_2");

	UBP_HUDButtonPrompts_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Get_BP_ButtonPrompt_PrimarySpecAction_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_HUDButtonPrompts_C::Get_BP_ButtonPrompt_PrimarySpecAction_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Get_BP_ButtonPrompt_PrimarySpecAction_Visibility_1");

	UBP_HUDButtonPrompts_C_Get_BP_ButtonPrompt_PrimarySpecAction_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Clear Vehicle Prompts
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_HUDButtonPrompts_C::Clear_Vehicle_Prompts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Clear Vehicle Prompts");

	UBP_HUDButtonPrompts_C_Clear_Vehicle_Prompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Add Vehicle Prompt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ActionName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       DisplayedText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_HUDButtonPrompts_C::Add_Vehicle_Prompt(const struct FName& ActionName, const struct FText& DisplayedText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Add Vehicle Prompt");

	UBP_HUDButtonPrompts_C_Add_Vehicle_Prompt_Params params;
	params.ActionName = ActionName;
	params.DisplayedText = DisplayedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Get_Overlay_SpectatorActionPrompts_Visibility_2
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_HUDButtonPrompts_C::Get_Overlay_SpectatorActionPrompts_Visibility_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Get_Overlay_SpectatorActionPrompts_Visibility_2");

	UBP_HUDButtonPrompts_C_Get_Overlay_SpectatorActionPrompts_Visibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Get_Overlay_VehiclePrompts_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_HUDButtonPrompts_C::Get_Overlay_VehiclePrompts_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Get_Overlay_VehiclePrompts_Visibility_1");

	UBP_HUDButtonPrompts_C_Get_Overlay_VehiclePrompts_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_HUDButtonPrompts_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.GetVisibility_1");

	UBP_HUDButtonPrompts_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Update Spectator Prompts
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauSpectator*                           MordhauSpectator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HUDButtonPrompts_C::Update_Spectator_Prompts(class AMordhauSpectator* MordhauSpectator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Update Spectator Prompts");

	UBP_HUDButtonPrompts_C_Update_Spectator_Prompts_Params params;
	params.MordhauSpectator = MordhauSpectator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Get_Overlay_SpectatorActionPrompts_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_HUDButtonPrompts_C::Get_Overlay_SpectatorActionPrompts_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Get_Overlay_SpectatorActionPrompts_Visibility_1");

	UBP_HUDButtonPrompts_C_Get_Overlay_SpectatorActionPrompts_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Update Action Prompts
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_HUDButtonPrompts_C::Update_Action_Prompts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Update Action Prompts");

	UBP_HUDButtonPrompts_C_Update_Action_Prompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Clear Equipment Prompts
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_HUDButtonPrompts_C::Clear_Equipment_Prompts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Clear Equipment Prompts");

	UBP_HUDButtonPrompts_C_Clear_Equipment_Prompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Add Prompt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ActionName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       DisplayedText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_HUDButtonPrompts_C::Add_Prompt(const struct FName& ActionName, const struct FText& DisplayedText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Add Prompt");

	UBP_HUDButtonPrompts_C_Add_Prompt_Params params;
	params.ActionName = ActionName;
	params.DisplayedText = DisplayedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_HUDButtonPrompts_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Construct");

	UBP_HUDButtonPrompts_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Hide Equipment Prompts
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_HUDButtonPrompts_C::Hide_Equipment_Prompts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Hide Equipment Prompts");

	UBP_HUDButtonPrompts_C_Hide_Equipment_Prompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Show Equipment Prompts
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_HUDButtonPrompts_C::Show_Equipment_Prompts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Show Equipment Prompts");

	UBP_HUDButtonPrompts_C_Show_Equipment_Prompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Play Vanish Anim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_HUDButtonPrompts_C::Play_Vanish_Anim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Play Vanish Anim");

	UBP_HUDButtonPrompts_C_Play_Vanish_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Vanish
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_HUDButtonPrompts_C::Vanish()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.Vanish");

	UBP_HUDButtonPrompts_C_Vanish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.ExecuteUbergraph_BP_HUDButtonPrompts
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HUDButtonPrompts_C::ExecuteUbergraph_BP_HUDButtonPrompts(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HUDButtonPrompts.BP_HUDButtonPrompts_C.ExecuteUbergraph_BP_HUDButtonPrompts");

	UBP_HUDButtonPrompts_C_ExecuteUbergraph_BP_HUDButtonPrompts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function BP_VoiceMenu.BP_VoiceMenu_C.DoVoiceCommand
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_VoiceMenu_C::DoVoiceCommand(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VoiceMenu.BP_VoiceMenu_C.DoVoiceCommand");

	UBP_VoiceMenu_C_DoVoiceCommand_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VoiceMenu.BP_VoiceMenu_C.OptionChosen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Choice                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_VoiceMenu_C::OptionChosen(int Choice)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VoiceMenu.BP_VoiceMenu_C.OptionChosen");

	UBP_VoiceMenu_C_OptionChosen_Params params;
	params.Choice = Choice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VoiceMenu.BP_VoiceMenu_C.Show
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_VoiceMenu_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VoiceMenu.BP_VoiceMenu_C.Show");

	UBP_VoiceMenu_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VoiceMenu.BP_VoiceMenu_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_VoiceMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VoiceMenu.BP_VoiceMenu_C.Tick");

	UBP_VoiceMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VoiceMenu.BP_VoiceMenu_C.ExecuteUbergraph_BP_VoiceMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_VoiceMenu_C::ExecuteUbergraph_BP_VoiceMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VoiceMenu.BP_VoiceMenu_C.ExecuteUbergraph_BP_VoiceMenu");

	UBP_VoiceMenu_C_ExecuteUbergraph_BP_VoiceMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function BP_ChoiceMenu.BP_ChoiceMenu_C.SetChoicesPerPage
//		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Keyboard                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ChoicePerPageChange                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ChoiceMenu_C::SetChoicesPerPage(int Keyboard, int Controller, bool* ChoicePerPageChange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenu.BP_ChoiceMenu_C.SetChoicesPerPage");

	UBP_ChoiceMenu_C_SetChoicesPerPage_Params params;
	params.Keyboard = Keyboard;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ChoicePerPageChange != nullptr)
		*ChoicePerPageChange = params.ChoicePerPageChange;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChoiceMenu.BP_ChoiceMenu_C.Choose
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Choice                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChoiceMenu_C::Choose(int Choice)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenu.BP_ChoiceMenu_C.Choose");

	UBP_ChoiceMenu_C_Choose_Params params;
	params.Choice = Choice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChoiceMenu.BP_ChoiceMenu_C.UpdateCurrentPage
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ChoiceMenu_C::UpdateCurrentPage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenu.BP_ChoiceMenu_C.UpdateCurrentPage");

	UBP_ChoiceMenu_C_UpdateCurrentPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChoiceMenu.BP_ChoiceMenu_C.OptionChosen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Choice                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChoiceMenu_C::OptionChosen(int Choice)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenu.BP_ChoiceMenu_C.OptionChosen");

	UBP_ChoiceMenu_C_OptionChosen_Params params;
	params.Choice = Choice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChoiceMenu.BP_ChoiceMenu_C.Hide
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ChoiceMenu_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenu.BP_ChoiceMenu_C.Hide");

	UBP_ChoiceMenu_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChoiceMenu.BP_ChoiceMenu_C.Show
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ChoiceMenu_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenu.BP_ChoiceMenu_C.Show");

	UBP_ChoiceMenu_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChoiceMenu.BP_ChoiceMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_ChoiceMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenu.BP_ChoiceMenu_C.Construct");

	UBP_ChoiceMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChoiceMenu.BP_ChoiceMenu_C.ExecuteUbergraph_BP_ChoiceMenu
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChoiceMenu_C::ExecuteUbergraph_BP_ChoiceMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenu.BP_ChoiceMenu_C.ExecuteUbergraph_BP_ChoiceMenu");

	UBP_ChoiceMenu_C_ExecuteUbergraph_BP_ChoiceMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

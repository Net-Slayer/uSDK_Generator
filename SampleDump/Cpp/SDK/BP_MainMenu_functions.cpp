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
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.SetNavBarVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		UMG_ESlateVisibility                               InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_C::SetNavBarVisibility(UMG_ESlateVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.SetNavBarVisibility");

	UBP_MainMenu_C_SetNavBarVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.Request Sub Tab Navigation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_C::Request_Sub_Tab_Navigation(int Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Request Sub Tab Navigation");

	UBP_MainMenu_C_Request_Sub_Tab_Navigation_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.Init Nav Struct
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_MainMenu_C::Init_Nav_Struct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Init Nav Struct");

	UBP_MainMenu_C_Init_Nav_Struct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.Get_ReturnButton_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_MainMenu_C::Get_ReturnButton_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Get_ReturnButton_Visibility_1");

	UBP_MainMenu_C_Get_ReturnButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.IsMenuContentWidgetVisible
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_MenuContentWidget_C*                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsVisible                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MainMenu_C::IsMenuContentWidgetVisible(class UBP_MenuContentWidget_C* Widget, bool* bIsVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.IsMenuContentWidgetVisible");

	UBP_MainMenu_C_IsMenuContentWidgetVisible_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsVisible != nullptr)
		*bIsVisible = params.bIsVisible;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.Request Main Navigation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_C::Request_Main_Navigation(int Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Request Main Navigation");

	UBP_MainMenu_C_Request_Main_Navigation_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.Get_ArmorySubNav_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_MainMenu_C::Get_ArmorySubNav_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Get_ArmorySubNav_Visibility_1");

	UBP_MainMenu_C_Get_ArmorySubNav_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.AskHUDToHideUs
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_MainMenu_C::AskHUDToHideUs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.AskHUDToHideUs");

	UBP_MainMenu_C_AskHUDToHideUs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.HideErrorDialog
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::HideErrorDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.HideErrorDialog");

	UBP_MainMenu_C_HideErrorDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.ShowErrorDialog
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ErrorMessage                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_MainMenu_C::ShowErrorDialog(const struct FText& ErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.ShowErrorDialog");

	UBP_MainMenu_C_ShowErrorDialog_Params params;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.CreateErrorDialog
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_MainMenu_C::CreateErrorDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.CreateErrorDialog");

	UBP_MainMenu_C_CreateErrorDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.HideQuitMatchDialog
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::HideQuitMatchDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.HideQuitMatchDialog");

	UBP_MainMenu_C_HideQuitMatchDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.ShowQuitMatchDialog
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_MainMenu_C::ShowQuitMatchDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.ShowQuitMatchDialog");

	UBP_MainMenu_C_ShowQuitMatchDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.CreateQuitMatchDialog
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_MainMenu_C::CreateQuitMatchDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.CreateQuitMatchDialog");

	UBP_MainMenu_C_CreateQuitMatchDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.QuitGame
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::QuitGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.QuitGame");

	UBP_MainMenu_C_QuitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.HideQuitGameDialog
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::HideQuitGameDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.HideQuitGameDialog");

	UBP_MainMenu_C_HideQuitGameDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.ShowQuitGameDialog
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_MainMenu_C::ShowQuitGameDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.ShowQuitGameDialog");

	UBP_MainMenu_C_ShowQuitGameDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.CreateQuitGameDialog
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_MainMenu_C::CreateQuitGameDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.CreateQuitGameDialog");

	UBP_MainMenu_C_CreateQuitGameDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.OnPreviewKeyDown
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_MainMenu_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnPreviewKeyDown");

	UBP_MainMenu_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.SetContentWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_MenuContentWidget_C*                     NewWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_C::SetContentWidget(class UBP_MenuContentWidget_C* NewWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.SetContentWidget");

	UBP_MainMenu_C_SetContentWidget_Params params;
	params.NewWidget = NewWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.UpdateNavAndSubNavButtons
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_MainMenu_C::UpdateNavAndSubNavButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.UpdateNavAndSubNavButtons");

	UBP_MainMenu_C_UpdateNavAndSubNavButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.CleanUpCustomization
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_MainMenu_C::CleanUpCustomization()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.CleanUpCustomization");

	UBP_MainMenu_C_CleanUpCustomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.Show
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_ArmoryStates_E_ArmoryStates>         Armory_State                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_C::Show(TEnumAsByte<E_ArmoryStates_E_ArmoryStates> Armory_State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Show");

	UBP_MainMenu_C_Show_Params params;
	params.Armory_State = Armory_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.Hide
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_MainMenu_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Hide");

	UBP_MainMenu_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.OnFailure_03195FFE4CF4F9BC52C6D0A8D1D5E5E7
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::OnFailure_03195FFE4CF4F9BC52C6D0A8D1D5E5E7()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnFailure_03195FFE4CF4F9BC52C6D0A8D1D5E5E7");

	UBP_MainMenu_C_OnFailure_03195FFE4CF4F9BC52C6D0A8D1D5E5E7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.OnSuccess_03195FFE4CF4F9BC52C6D0A8D1D5E5E7
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::OnSuccess_03195FFE4CF4F9BC52C6D0A8D1D5E5E7()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnSuccess_03195FFE4CF4F9BC52C6D0A8D1D5E5E7");

	UBP_MainMenu_C_OnSuccess_03195FFE4CF4F9BC52C6D0A8D1D5E5E7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.OnShow
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_ArmoryStates_E_ArmoryStates>         Armory_State                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_C::OnShow(TEnumAsByte<E_ArmoryStates_E_ArmoryStates> Armory_State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.OnShow");

	UBP_MainMenu_C_OnShow_Params params;
	params.Armory_State = Armory_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MainMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Construct");

	UBP_MainMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_821_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_821_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_821_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_821_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__ArmoryButton_K2Node_ComponentBoundEvent_833_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__ArmoryButton_K2Node_ComponentBoundEvent_833_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__ArmoryButton_K2Node_ComponentBoundEvent_833_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__ArmoryButton_K2Node_ComponentBoundEvent_833_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_845_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__QuitButton_K2Node_ComponentBoundEvent_845_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_845_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_845_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__GameButton_K2Node_ComponentBoundEvent_857_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__GameButton_K2Node_ComponentBoundEvent_857_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__GameButton_K2Node_ComponentBoundEvent_857_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__GameButton_K2Node_ComponentBoundEvent_857_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_879_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__ControlsButton_K2Node_ComponentBoundEvent_879_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_879_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__ControlsButton_K2Node_ComponentBoundEvent_879_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_17_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_116_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_116_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_116_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_116_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__VideoButton_K2Node_ComponentBoundEvent_74_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__VideoButton_K2Node_ComponentBoundEvent_74_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__VideoButton_K2Node_ComponentBoundEvent_74_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__VideoButton_K2Node_ComponentBoundEvent_74_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__AudioButton_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__AudioButton_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__AudioButton_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__HomeButton_K2Node_ComponentBoundEvent_425_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__HomeButton_K2Node_ComponentBoundEvent_425_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__HomeButton_K2Node_ComponentBoundEvent_425_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__HomeButton_K2Node_ComponentBoundEvent_425_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__LocalGameButton_K2Node_ComponentBoundEvent_124_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__LocalGameButton_K2Node_ComponentBoundEvent_124_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__LocalGameButton_K2Node_ComponentBoundEvent_124_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__LocalGameButton_K2Node_ComponentBoundEvent_124_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__KeyBindingsButton_K2Node_ComponentBoundEvent_111_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__KeyBindingsButton_K2Node_ComponentBoundEvent_111_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__KeyBindingsButton_K2Node_ComponentBoundEvent_111_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__KeyBindingsButton_K2Node_ComponentBoundEvent_111_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.QuitMatch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::QuitMatch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.QuitMatch");

	UBP_MainMenu_C_QuitMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__ProgressButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__ProgressButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__ProgressButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__ProgressButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__StatsButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__StatsButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__StatsButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__StatsButton_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__MiscButton_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__SocialButton_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__SocialButton_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__SocialButton_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__SocialButton_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__HordeBRButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__HordeBRButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__HordeBRButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__HordeBRButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Tick");

	UBP_MainMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.GoToMatchMaking
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::GoToMatchMaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.GoToMatchMaking");

	UBP_MainMenu_C_GoToMatchMaking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__TrainingButton_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__TrainingButton_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__TrainingButton_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__TrainingButton_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__ModsButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__ModsButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__ModsButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__ModsButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.ShowNotConnectedErrorDialog
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::ShowNotConnectedErrorDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.ShowNotConnectedErrorDialog");

	UBP_MainMenu_C_ShowNotConnectedErrorDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__ReturnButton_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__ReturnButton_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__ReturnButton_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__ReturnButton_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__HomeSubNavButton_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__HomeSubNavButton_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__HomeSubNavButton_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__HomeSubNavButton_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.ShowMainMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_ArmoryStates_E_ArmoryStates>         ArmoryState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_C::ShowMainMenu(TEnumAsByte<E_ArmoryStates_E_ArmoryStates> ArmoryState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.ShowMainMenu");

	UBP_MainMenu_C_ShowMainMenu_Params params;
	params.ArmoryState = ArmoryState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.HideMainMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::HideMainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.HideMainMenu");

	UBP_MainMenu_C_HideMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.Show Menu Scoreboard
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::Show_Menu_Scoreboard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Show Menu Scoreboard");

	UBP_MainMenu_C_Show_Menu_Scoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.SelectPlayTab
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::SelectPlayTab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.SelectPlayTab");

	UBP_MainMenu_C_SelectPlayTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.SelectSettingsTab
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::SelectSettingsTab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.SelectSettingsTab");

	UBP_MainMenu_C_SelectSettingsTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.Select Home Tab
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::Select_Home_Tab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Select Home Tab");

	UBP_MainMenu_C_Select_Home_Tab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.Select Armory Tab
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::Select_Armory_Tab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Select Armory Tab");

	UBP_MainMenu_C_Select_Armory_Tab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.Select PlayerMenu Tab
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::Select_PlayerMenu_Tab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Select PlayerMenu Tab");

	UBP_MainMenu_C_Select_PlayerMenu_Tab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.Select Misc Tab
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::Select_Misc_Tab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Select Misc Tab");

	UBP_MainMenu_C_Select_Misc_Tab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.Select Quit Tab
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::Select_Quit_Tab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.Select Quit Tab");

	UBP_MainMenu_C_Select_Quit_Tab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.BndEvt__CustomizationButton_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MainMenu_C::BndEvt__CustomizationButton_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.BndEvt__CustomizationButton_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature");

	UBP_MainMenu_C_BndEvt__CustomizationButton_K2Node_ComponentBoundEvent_13_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.ShowOnlineBanErrorDialog
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MainMenu_C::ShowOnlineBanErrorDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.ShowOnlineBanErrorDialog");

	UBP_MainMenu_C_ShowOnlineBanErrorDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MainMenu.BP_MainMenu_C.ExecuteUbergraph_BP_MainMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MainMenu_C::ExecuteUbergraph_BP_MainMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MainMenu.BP_MainMenu_C.ExecuteUbergraph_BP_MainMenu");

	UBP_MainMenu_C_ExecuteUbergraph_BP_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

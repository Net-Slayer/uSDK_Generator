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
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.CollapseIfConsole
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_KeyBindingsSettings_C::CollapseIfConsole()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.CollapseIfConsole");

	UBP_KeyBindingsSettings_C_CollapseIfConsole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.SetWidgetBinding
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_KeyBindingElementWidget_C*               Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		bool                                               bIsPrimary                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_KeyBindingsSettings_C::SetWidgetBinding(class UBP_KeyBindingElementWidget_C* Widget, const struct FKey& Key, bool bIsPrimary)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.SetWidgetBinding");

	UBP_KeyBindingsSettings_C_SetWidgetBinding_Params params;
	params.Widget = Widget;
	params.Key = Key;
	params.bIsPrimary = bIsPrimary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.FindDuplicateBindingWidget
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		bool                                               bIsPrimary                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UBP_KeyBindingElementWidget_C*               Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_KeyBindingsSettings_C::FindDuplicateBindingWidget(const struct FKey& Key, bool bIsPrimary, class UBP_KeyBindingElementWidget_C** Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.FindDuplicateBindingWidget");

	UBP_KeyBindingsSettings_C_FindDuplicateBindingWidget_Params params;
	params.Key = Key;
	params.bIsPrimary = bIsPrimary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.SelectWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_KeyBindingElementWidget_C*               Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_KeyBindingsSettings_C::SelectWidget(class UBP_KeyBindingElementWidget_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.SelectWidget");

	UBP_KeyBindingsSettings_C_SelectWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnMouseWheel
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_KeyBindingsSettings_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnMouseWheel");

	UBP_KeyBindingsSettings_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnPreviewMouseButtonDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_KeyBindingsSettings_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnPreviewMouseButtonDown");

	UBP_KeyBindingsSettings_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnMouseMove
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_KeyBindingsSettings_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnMouseMove");

	UBP_KeyBindingsSettings_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.FindWidgetByName
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UBP_KeyBindingElementWidget_C*               Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_KeyBindingsSettings_C::FindWidgetByName(const struct FName& ActionName, class UBP_KeyBindingElementWidget_C** Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.FindWidgetByName");

	UBP_KeyBindingsSettings_C_FindWidgetByName_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.PopulateCustomBindings
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                SourceScheme                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_KeyBindingsSettings_C::PopulateCustomBindings(int SourceScheme)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.PopulateCustomBindings");

	UBP_KeyBindingsSettings_C_PopulateCustomBindings_Params params;
	params.SourceScheme = SourceScheme;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.HandleInputEvent
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		bool                                               bIsAxis                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FEventReply                                 _Handled                                                   (Parm, OutParm)
void UBP_KeyBindingsSettings_C::HandleInputEvent(const struct FKey& Key, bool bIsAxis, struct FEventReply* _Handled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.HandleInputEvent");

	UBP_KeyBindingsSettings_C_HandleInputEvent_Params params;
	params.Key = Key;
	params.bIsAxis = bIsAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (_Handled != nullptr)
		*_Handled = params._Handled;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnAnalogValueChanged
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_KeyBindingsSettings_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnAnalogValueChanged");

	UBP_KeyBindingsSettings_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnPreviewKeyDown
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_KeyBindingsSettings_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnPreviewKeyDown");

	UBP_KeyBindingsSettings_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_KeyBindingsSettings_C::BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_KeyBindingsSettings_C_BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_KeyBindingsSettings_C::BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UBP_KeyBindingsSettings_C_BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_KeyBindingsSettings_C::BndEvt__ControlsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_KeyBindingsSettings_C_BndEvt__ControlsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_KeyBindingsSettings_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.Construct");

	UBP_KeyBindingsSettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnYesClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_KeyBindingsSettings_C::OnYesClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnYesClicked");

	UBP_KeyBindingsSettings_C_OnYesClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnNoClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_KeyBindingsSettings_C::OnNoClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnNoClicked");

	UBP_KeyBindingsSettings_C_OnNoClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.ApplyKeyBindings
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_KeyBindingsSettings_C::ApplyKeyBindings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.ApplyKeyBindings");

	UBP_KeyBindingsSettings_C_ApplyKeyBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.ResetConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_KeyBindingsSettings_C::ResetConfirm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.ResetConfirm");

	UBP_KeyBindingsSettings_C_ResetConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.ResetCancel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_KeyBindingsSettings_C::ResetCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.ResetCancel");

	UBP_KeyBindingsSettings_C_ResetCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.ExecuteUbergraph_BP_KeyBindingsSettings
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_KeyBindingsSettings_C::ExecuteUbergraph_BP_KeyBindingsSettings(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.ExecuteUbergraph_BP_KeyBindingsSettings");

	UBP_KeyBindingsSettings_C_ExecuteUbergraph_BP_KeyBindingsSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

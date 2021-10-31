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
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.UnhideMouse
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_CustomizationPreview_C::UnhideMouse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.UnhideMouse");

	UBP_CustomizationPreview_C_UnhideMouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.HideMouse
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_CustomizationPreview_C::HideMouse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.HideMouse");

	UBP_CustomizationPreview_C_HideMouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_CustomizationPreview_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnKeyDown");

	UBP_CustomizationPreview_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseButtonUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_CustomizationPreview_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseButtonUp");

	UBP_CustomizationPreview_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseButtonDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_CustomizationPreview_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseButtonDown");

	UBP_CustomizationPreview_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.UnbindEvents
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_CustomizationPreview_C::UnbindEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.UnbindEvents");

	UBP_CustomizationPreview_C_UnbindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseWheel
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_CustomizationPreview_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseWheel");

	UBP_CustomizationPreview_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseMove
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_CustomizationPreview_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseMove");

	UBP_CustomizationPreview_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseLeave
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_CustomizationPreview_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseLeave");

	UBP_CustomizationPreview_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseEnter
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_CustomizationPreview_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseEnter");

	UBP_CustomizationPreview_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CustomizationPreview_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.Tick");

	UBP_CustomizationPreview_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.ExecuteUbergraph_BP_CustomizationPreview
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CustomizationPreview_C::ExecuteUbergraph_BP_CustomizationPreview(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.ExecuteUbergraph_BP_CustomizationPreview");

	UBP_CustomizationPreview_C_ExecuteUbergraph_BP_CustomizationPreview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnKeyPressed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        KeyName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBP_CustomizationPreview_C::OnKeyPressed__DelegateSignature(const struct FKey& KeyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnKeyPressed__DelegateSignature");

	UBP_CustomizationPreview_C_OnKeyPressed__DelegateSignature_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMMBReleased__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CustomizationPreview_C::OnMMBReleased__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMMBReleased__DelegateSignature");

	UBP_CustomizationPreview_C_OnMMBReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMMBPressed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CustomizationPreview_C::OnMMBPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMMBPressed__DelegateSignature");

	UBP_CustomizationPreview_C_OnMMBPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnRMBReleased__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CustomizationPreview_C::OnRMBReleased__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnRMBReleased__DelegateSignature");

	UBP_CustomizationPreview_C_OnRMBReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnRMBPressed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CustomizationPreview_C::OnRMBPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnRMBPressed__DelegateSignature");

	UBP_CustomizationPreview_C_OnRMBPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnLMBReleased__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CustomizationPreview_C::OnLMBReleased__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnLMBReleased__DelegateSignature");

	UBP_CustomizationPreview_C_OnLMBReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnLMBPressed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CustomizationPreview_C::OnLMBPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnLMBPressed__DelegateSignature");

	UBP_CustomizationPreview_C_OnLMBPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseAxis__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Movement                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CustomizationPreview_C::OnMouseAxis__DelegateSignature(const struct FVector2D& Movement)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseAxis__DelegateSignature");

	UBP_CustomizationPreview_C_OnMouseAxis__DelegateSignature_Params params;
	params.Movement = Movement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseWheelScrolling__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ScrollDelta                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CustomizationPreview_C::OnMouseWheelScrolling__DelegateSignature(float ScrollDelta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseWheelScrolling__DelegateSignature");

	UBP_CustomizationPreview_C_OnMouseWheelScrolling__DelegateSignature_Params params;
	params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnDrag__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaDistance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CustomizationPreview_C::OnDrag__DelegateSignature(float DeltaDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnDrag__DelegateSignature");

	UBP_CustomizationPreview_C_OnDrag__DelegateSignature_Params params;
	params.DeltaDistance = DeltaDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

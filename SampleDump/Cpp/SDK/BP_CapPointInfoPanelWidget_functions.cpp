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
//		Name   -> Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.GetFillColorAndOpacity_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UBP_CapPointInfoPanelWidget_C::GetFillColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.GetFillColorAndOpacity_1");

	UBP_CapPointInfoPanelWidget_C_GetFillColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.GetPercent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_CapPointInfoPanelWidget_C::GetPercent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.GetPercent_1");

	UBP_CapPointInfoPanelWidget_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Get_Icon_Brush_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UBP_CapPointInfoPanelWidget_C::Get_Icon_Brush_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Get_Icon_Brush_1");

	UBP_CapPointInfoPanelWidget_C_Get_Icon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Get_CapPointState_Text_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_CapPointInfoPanelWidget_C::Get_CapPointState_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Get_CapPointState_Text_1");

	UBP_CapPointInfoPanelWidget_C_Get_CapPointState_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CapPointInfoPanelWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Tick");

	UBP_CapPointInfoPanelWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Show
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_CapturePoint_C*                          Capture_Point_Ref                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CapPointInfoPanelWidget_C::Show(class ABP_CapturePoint_C* Capture_Point_Ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Show");

	UBP_CapPointInfoPanelWidget_C_Show_Params params;
	params.Capture_Point_Ref = Capture_Point_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Hide
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_CapPointInfoPanelWidget_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Hide");

	UBP_CapPointInfoPanelWidget_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.ExecuteUbergraph_BP_CapPointInfoPanelWidget
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CapPointInfoPanelWidget_C::ExecuteUbergraph_BP_CapPointInfoPanelWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.ExecuteUbergraph_BP_CapPointInfoPanelWidget");

	UBP_CapPointInfoPanelWidget_C_ExecuteUbergraph_BP_CapPointInfoPanelWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

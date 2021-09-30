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
//		Name   -> Function BP_BannerSelection.BP_BannerSelection_C.UpdatePreviewWidget
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Banner_ID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BannerSelection_C::UpdatePreviewWidget(int Banner_ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BannerSelection.BP_BannerSelection_C.UpdatePreviewWidget");

	UBP_BannerSelection_C_UpdatePreviewWidget_Params params;
	params.Banner_ID = Banner_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BannerSelection.BP_BannerSelection_C.Clear
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_BannerSelection_C::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BannerSelection.BP_BannerSelection_C.Clear");

	UBP_BannerSelection_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BannerSelection.BP_BannerSelection_C.Populate Grid
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_BannerSelection_C::Populate_Grid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BannerSelection.BP_BannerSelection_C.Populate Grid");

	UBP_BannerSelection_C_Populate_Grid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BannerSelection.BP_BannerSelection_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_BannerSelection_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BannerSelection.BP_BannerSelection_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_BannerSelection_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BannerSelection.BP_BannerSelection_C.CloseMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_BannerSelection_C::CloseMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BannerSelection.BP_BannerSelection_C.CloseMenu");

	UBP_BannerSelection_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BannerSelection.BP_BannerSelection_C.Update
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_BannerSelection_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BannerSelection.BP_BannerSelection_C.Update");

	UBP_BannerSelection_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BannerSelection.BP_BannerSelection_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BannerSelection_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BannerSelection.BP_BannerSelection_C.Tick");

	UBP_BannerSelection_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_BannerSelection.BP_BannerSelection_C.ExecuteUbergraph_BP_BannerSelection
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BannerSelection_C::ExecuteUbergraph_BP_BannerSelection(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BannerSelection.BP_BannerSelection_C.ExecuteUbergraph_BP_BannerSelection");

	UBP_BannerSelection_C_ExecuteUbergraph_BP_BannerSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function BP_PerksCustomization.BP_PerksCustomization_C.UpdateWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_PerksCustomization_C::UpdateWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.UpdateWidget");

	UBP_PerksCustomization_C_UpdateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerksCustomization.BP_PerksCustomization_C.RegisterPreviewEvents
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_PerksCustomization_C::RegisterPreviewEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.RegisterPreviewEvents");

	UBP_PerksCustomization_C_RegisterPreviewEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerksCustomization.BP_PerksCustomization_C.OnDrag
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaDistance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PerksCustomization_C::OnDrag(float DeltaDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.OnDrag");

	UBP_PerksCustomization_C_OnDrag_Params params;
	params.DeltaDistance = DeltaDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerksCustomization.BP_PerksCustomization_C.OnScroll
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ScrollDelta                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PerksCustomization_C::OnScroll(float ScrollDelta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.OnScroll");

	UBP_PerksCustomization_C_OnScroll_Params params;
	params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerksCustomization.BP_PerksCustomization_C.UpdateProfileAndPreview
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_PerksCustomization_C::UpdateProfileAndPreview()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.UpdateProfileAndPreview");

	UBP_PerksCustomization_C_UpdateProfileAndPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerksCustomization.BP_PerksCustomization_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_PerksCustomization_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.Construct");

	UBP_PerksCustomization_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerksCustomization.BP_PerksCustomization_C.PerkClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      NewId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PerksCustomization_C::PerkClicked(unsigned char NewId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.PerkClicked");

	UBP_PerksCustomization_C_PerkClicked_Params params;
	params.NewId = NewId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerksCustomization.BP_PerksCustomization_C.SetActive
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_PerksCustomization_C::SetActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.SetActive");

	UBP_PerksCustomization_C_SetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerksCustomization.BP_PerksCustomization_C.OnProfileChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_PerksCustomization_C::OnProfileChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.OnProfileChanged");

	UBP_PerksCustomization_C_OnProfileChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerksCustomization.BP_PerksCustomization_C.PerkHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PerksCustomization_C::PerkHovered(int Cost, bool Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.PerkHovered");

	UBP_PerksCustomization_C_PerkHovered_Params params;
	params.Cost = Cost;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PerksCustomization.BP_PerksCustomization_C.ExecuteUbergraph_BP_PerksCustomization
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PerksCustomization_C::ExecuteUbergraph_BP_PerksCustomization(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PerksCustomization.BP_PerksCustomization_C.ExecuteUbergraph_BP_PerksCustomization");

	UBP_PerksCustomization_C_ExecuteUbergraph_BP_PerksCustomization_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

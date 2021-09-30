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
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.SetEditingDefaultTier
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewTier                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::SetEditingDefaultTier(int NewTier)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.SetEditingDefaultTier");

	UBP_ArmorCustomization_C_SetEditingDefaultTier_Params params;
	params.NewTier = NewTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.UpdateCharacterDollWrapped
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               OnlyUpdateMaterials                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               InstantEquipmentSwitch                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ArmorCustomization_C::UpdateCharacterDollWrapped(bool OnlyUpdateMaterials, bool InstantEquipmentSwitch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.UpdateCharacterDollWrapped");

	UBP_ArmorCustomization_C_UpdateCharacterDollWrapped_Params params;
	params.OnlyUpdateMaterials = OnlyUpdateMaterials;
	params.InstantEquipmentSwitch = InstantEquipmentSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.MetalTintColorHovered
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ColorId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::MetalTintColorHovered(int ColorId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.MetalTintColorHovered");

	UBP_ArmorCustomization_C_MetalTintColorHovered_Params params;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.EmblemColorHovered
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Idx                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ColorId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::EmblemColorHovered(int Idx, int ColorId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.EmblemColorHovered");

	UBP_ArmorCustomization_C_EmblemColorHovered_Params params;
	params.Idx = Idx;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.EmblemSelectionClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::EmblemSelectionClicked(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.EmblemSelectionClicked");

	UBP_ArmorCustomization_C_EmblemSelectionClicked_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.EmblemSelectionHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::EmblemSelectionHovered(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.EmblemSelectionHovered");

	UBP_ArmorCustomization_C_EmblemSelectionHovered_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.ShowEmblemChoiceList
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::ShowEmblemChoiceList(int CurrentId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.ShowEmblemChoiceList");

	UBP_ArmorCustomization_C_ShowEmblemChoiceList_Params params;
	params.CurrentId = CurrentId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.ResetWrapperToTierDefault
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ArmorCustomization_C::ResetWrapperToTierDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.ResetWrapperToTierDefault");

	UBP_ArmorCustomization_C_ResetWrapperToTierDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ArmorCustomization_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.GetVisibility_1");

	UBP_ArmorCustomization_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.Get_MovementSpeedBar_Percent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_ArmorCustomization_C::Get_MovementSpeedBar_Percent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.Get_MovementSpeedBar_Percent_1");

	UBP_ArmorCustomization_C_Get_MovementSpeedBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.WearableSelectionCanceled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ArmorCustomization_C::WearableSelectionCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.WearableSelectionCanceled");

	UBP_ArmorCustomization_C_WearableSelectionCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.WearableSelectionHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::WearableSelectionHovered(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.WearableSelectionHovered");

	UBP_ArmorCustomization_C_WearableSelectionHovered_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.WearableSelectionClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::WearableSelectionClicked(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.WearableSelectionClicked");

	UBP_ArmorCustomization_C_WearableSelectionClicked_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.ShowWearableChoiceList
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UClass*>                              Wearables                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		Mordhau_EWearableSlot                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                CurrentId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::ShowWearableChoiceList(TArray<class UClass*>* Wearables, Mordhau_EWearableSlot Slot, int CurrentId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.ShowWearableChoiceList");

	UBP_ArmorCustomization_C_ShowWearableChoiceList_Params params;
	params.Slot = Slot;
	params.CurrentId = CurrentId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Wearables != nullptr)
		*Wearables = params.Wearables;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.GetValues
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Emblem                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                EmblemColor1                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                EmblemColor2                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MetalRoughnesScale                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MetalTint                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UClass*>                              EmblemColors                                               (Parm, OutParm, HasGetValueTypeHash)
//		int                                                metalroughnessscaleLength                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UClass*>                              MetalTintColors                                            (Parm, OutParm, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::GetValues(int* Emblem, int* EmblemColor1, int* EmblemColor2, int* MetalRoughnesScale, int* MetalTint, TArray<class UClass*>* EmblemColors, int* metalroughnessscaleLength, TArray<class UClass*>* MetalTintColors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.GetValues");

	UBP_ArmorCustomization_C_GetValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Emblem != nullptr)
		*Emblem = params.Emblem;
	if (EmblemColor1 != nullptr)
		*EmblemColor1 = params.EmblemColor1;
	if (EmblemColor2 != nullptr)
		*EmblemColor2 = params.EmblemColor2;
	if (MetalRoughnesScale != nullptr)
		*MetalRoughnesScale = params.MetalRoughnesScale;
	if (MetalTint != nullptr)
		*MetalTint = params.MetalTint;
	if (EmblemColors != nullptr)
		*EmblemColors = params.EmblemColors;
	if (metalroughnessscaleLength != nullptr)
		*metalroughnessscaleLength = params.metalroughnessscaleLength;
	if (MetalTintColors != nullptr)
		*MetalTintColors = params.MetalTintColors;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.UpdateWidgets
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ArmorCustomization_C::UpdateWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.UpdateWidgets");

	UBP_ArmorCustomization_C_UpdateWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.OnDrag
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaDistance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::OnDrag(float DeltaDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.OnDrag");

	UBP_ArmorCustomization_C_OnDrag_Params params;
	params.DeltaDistance = DeltaDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.RegisterPreviewEvents
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ArmorCustomization_C::RegisterPreviewEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.RegisterPreviewEvents");

	UBP_ArmorCustomization_C_RegisterPreviewEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.OnScroll
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ScrollDelta                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::OnScroll(float ScrollDelta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.OnScroll");

	UBP_ArmorCustomization_C_OnScroll_Params params;
	params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                ColorIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(int ColorIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UBP_ArmorCustomization_C_BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;
	params.ColorIndex = ColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature");

	UBP_ArmorCustomization_C_BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_19_OnClosed__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_19_OnClosed__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_19_OnClosed__DelegateSignature");

	UBP_ArmorCustomization_C_BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_19_OnClosed__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_68_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                ColorIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_68_OnClicked__DelegateSignature(int ColorIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_68_OnClicked__DelegateSignature");

	UBP_ArmorCustomization_C_BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_68_OnClicked__DelegateSignature_Params params;
	params.ColorIndex = ColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_80_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_80_OnHovered__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_80_OnHovered__DelegateSignature");

	UBP_ArmorCustomization_C_BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_80_OnHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_90_OnClosed__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_90_OnClosed__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_90_OnClosed__DelegateSignature");

	UBP_ArmorCustomization_C_BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_90_OnClosed__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__MetalRoughnessScaleSlider_K2Node_ComponentBoundEvent_98_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::BndEvt__MetalRoughnessScaleSlider_K2Node_ComponentBoundEvent_98_OnValueChanged__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__MetalRoughnessScaleSlider_K2Node_ComponentBoundEvent_98_OnValueChanged__DelegateSignature");

	UBP_ArmorCustomization_C_BndEvt__MetalRoughnessScaleSlider_K2Node_ComponentBoundEvent_98_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_107_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                ColorIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_107_OnClicked__DelegateSignature(int ColorIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_107_OnClicked__DelegateSignature");

	UBP_ArmorCustomization_C_BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_107_OnClicked__DelegateSignature_Params params;
	params.ColorIndex = ColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_123_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_123_OnHovered__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_123_OnHovered__DelegateSignature");

	UBP_ArmorCustomization_C_BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_123_OnHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_137_OnClosed__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_137_OnClosed__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_137_OnClosed__DelegateSignature");

	UBP_ArmorCustomization_C_BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_137_OnClosed__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ArmorCustomization_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature");

	UBP_ArmorCustomization_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.SetActive
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_ArmorCustomization_C::SetActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.SetActive");

	UBP_ArmorCustomization_C_SetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.OnProfileChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_ArmorCustomization_C::OnProfileChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.OnProfileChanged");

	UBP_ArmorCustomization_C_OnProfileChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_ArmorCustomization_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.Construct");

	UBP_ArmorCustomization_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Tier0Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ArmorCustomization_C::BndEvt__Tier0Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Tier0Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBP_ArmorCustomization_C_BndEvt__Tier0Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Tier1Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ArmorCustomization_C::BndEvt__Tier1Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Tier1Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UBP_ArmorCustomization_C_BndEvt__Tier1Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Tier2Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ArmorCustomization_C::BndEvt__Tier2Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Tier2Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UBP_ArmorCustomization_C_BndEvt__Tier2Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Tier3Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ArmorCustomization_C::BndEvt__Tier3Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Tier3Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UBP_ArmorCustomization_C_BndEvt__Tier3Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ArmorCustomization_C::BndEvt__EmblemButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UBP_ArmorCustomization_C_BndEvt__EmblemButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Dropdown_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FText                                       SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::BndEvt__Dropdown_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Dropdown_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	UBP_ArmorCustomization_C_BndEvt__Dropdown_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.UpdateTeamColorsPreview
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ArmorCustomization_C::UpdateTeamColorsPreview()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.UpdateTeamColorsPreview");

	UBP_ArmorCustomization_C_UpdateTeamColorsPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ArmorCustomization.BP_ArmorCustomization_C.ExecuteUbergraph_BP_ArmorCustomization
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ArmorCustomization_C::ExecuteUbergraph_BP_ArmorCustomization(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ArmorCustomization.BP_ArmorCustomization_C.ExecuteUbergraph_BP_ArmorCustomization");

	UBP_ArmorCustomization_C_ExecuteUbergraph_BP_ArmorCustomization_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

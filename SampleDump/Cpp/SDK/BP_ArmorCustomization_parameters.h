#pragma once

// Name: Mordhau, Version: 4_25_hotfix


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.SetEditingDefaultTier
struct UBP_ArmorCustomization_C_SetEditingDefaultTier_Params
{
	int                                                NewTier;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.UpdateCharacterDollWrapped
struct UBP_ArmorCustomization_C_UpdateCharacterDollWrapped_Params
{
	bool                                               OnlyUpdateMaterials;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InstantEquipmentSwitch;                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.MetalTintColorHovered
struct UBP_ArmorCustomization_C_MetalTintColorHovered_Params
{
	int                                                ColorId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.EmblemColorHovered
struct UBP_ArmorCustomization_C_EmblemColorHovered_Params
{
	int                                                Idx;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ColorId;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.EmblemSelectionClicked
struct UBP_ArmorCustomization_C_EmblemSelectionClicked_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.EmblemSelectionHovered
struct UBP_ArmorCustomization_C_EmblemSelectionHovered_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.ShowEmblemChoiceList
struct UBP_ArmorCustomization_C_ShowEmblemChoiceList_Params
{
	int                                                CurrentId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.ResetWrapperToTierDefault
struct UBP_ArmorCustomization_C_ResetWrapperToTierDefault_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.GetVisibility_1
struct UBP_ArmorCustomization_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.Get_MovementSpeedBar_Percent_1
struct UBP_ArmorCustomization_C_Get_MovementSpeedBar_Percent_1_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.WearableSelectionCanceled
struct UBP_ArmorCustomization_C_WearableSelectionCanceled_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.WearableSelectionHovered
struct UBP_ArmorCustomization_C_WearableSelectionHovered_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.WearableSelectionClicked
struct UBP_ArmorCustomization_C_WearableSelectionClicked_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.ShowWearableChoiceList
struct UBP_ArmorCustomization_C_ShowWearableChoiceList_Params
{
	TArray<class UClass*>                              Wearables;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	Mordhau_EWearableSlot                              Slot;                                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentId;                                                 // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.GetValues
struct UBP_ArmorCustomization_C_GetValues_Params
{
	int                                                Emblem;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EmblemColor1;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EmblemColor2;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MetalRoughnesScale;                                        // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MetalTint;                                                 // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              EmblemColors;                                              // 0x0018(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	int                                                metalroughnessscaleLength;                                 // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              MetalTintColors;                                           // 0x0030(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.UpdateWidgets
struct UBP_ArmorCustomization_C_UpdateWidgets_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.OnDrag
struct UBP_ArmorCustomization_C_OnDrag_Params
{
	float                                              DeltaDistance;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.RegisterPreviewEvents
struct UBP_ArmorCustomization_C_RegisterPreviewEvents_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.OnScroll
struct UBP_ArmorCustomization_C_OnScroll_Params
{
	float                                              ScrollDelta;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
	int                                                ColorIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_19_OnClosed__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_19_OnClosed__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_68_OnClicked__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_68_OnClicked__DelegateSignature_Params
{
	int                                                ColorIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_80_OnHovered__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_80_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_90_OnClosed__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_90_OnClosed__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__MetalRoughnessScaleSlider_K2Node_ComponentBoundEvent_98_OnValueChanged__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__MetalRoughnessScaleSlider_K2Node_ComponentBoundEvent_98_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_107_OnClicked__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_107_OnClicked__DelegateSignature_Params
{
	int                                                ColorIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_123_OnHovered__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_123_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_137_OnClosed__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_137_OnClosed__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.SetActive
struct UBP_ArmorCustomization_C_SetActive_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.OnProfileChanged
struct UBP_ArmorCustomization_C_OnProfileChanged_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.Construct
struct UBP_ArmorCustomization_C_Construct_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Tier0Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__Tier0Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Tier1Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__Tier1Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Tier2Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__Tier2Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Tier3Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__Tier3Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__EmblemButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__EmblemButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.BndEvt__Dropdown_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct UBP_ArmorCustomization_C_BndEvt__Dropdown_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FText                                       SelectedItem;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.UpdateTeamColorsPreview
struct UBP_ArmorCustomization_C_UpdateTeamColorsPreview_Params
{
};

// Function BP_ArmorCustomization.BP_ArmorCustomization_C.ExecuteUbergraph_BP_ArmorCustomization
struct UBP_ArmorCustomization_C_ExecuteUbergraph_BP_ArmorCustomization_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

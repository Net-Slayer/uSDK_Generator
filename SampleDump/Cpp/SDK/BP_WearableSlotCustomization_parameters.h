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

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.GetVisibility_1
struct UBP_WearableSlotCustomization_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.ColorHovered
struct UBP_WearableSlotCustomization_C_ColorHovered_Params
{
	int                                                Idx;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ColorId;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.Get_TextBlock_26_Text_1
struct UBP_WearableSlotCustomization_C_Get_TextBlock_26_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.Get_armorTier_ToolTipText
struct UBP_WearableSlotCustomization_C_Get_armorTier_ToolTipText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.GetTierIconVisibility
struct UBP_WearableSlotCustomization_C_GetTierIconVisibility_Params
{
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.Get_SubSlotText_Visibility_1
struct UBP_WearableSlotCustomization_C_Get_SubSlotText_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.Get_MainSlotText_Visibility_1
struct UBP_WearableSlotCustomization_C_Get_MainSlotText_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.GetColor2Visibility
struct UBP_WearableSlotCustomization_C_GetColor2Visibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.GetColor1Visibility
struct UBP_WearableSlotCustomization_C_GetColor1Visibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.GetPatternVisibility
struct UBP_WearableSlotCustomization_C_GetPatternVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.RebuildWidget
struct UBP_WearableSlotCustomization_C_RebuildWidget_Params
{
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.GetValues
struct UBP_WearableSlotCustomization_C_GetValues_Params
{
	struct FText                                       WearableName;                                              // 0x0000(0x0018)  (Parm, OutParm)
	unsigned char                                      WearableColor1Index;                                       // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      WearableColor2Index;                                       // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Pattern;                                                   // 0x001A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PatternLength;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              WearableColors1;                                           // 0x0020(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	TArray<class UClass*>                              WearableColors2;                                           // 0x0030(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	bool                                               HasColor1;                                                 // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HasColor2;                                                 // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      ArmorClass;                                                // 0x0042(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Cost;                                                      // 0x0044(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemDefID;                                                 // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Mordhau_EItemRarity                                ItemRarity;                                                // 0x004C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.UpdateWearableColor
struct UBP_WearableSlotCustomization_C_UpdateWearableColor_Params
{
	int                                                ColorIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ColorValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.UpdateWearablePattern
struct UBP_WearableSlotCustomization_C_UpdateWearablePattern_Params
{
	int                                                Pattern;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.UpdateWearable
struct UBP_WearableSlotCustomization_C_UpdateWearable_Params
{
	int                                                NewId;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DoNotUpdateWidget;                                         // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.BndEvt__HeadWearableColors1_K2Node_ComponentBoundEvent_229_OnClicked__DelegateSignature
struct UBP_WearableSlotCustomization_C_BndEvt__HeadWearableColors1_K2Node_ComponentBoundEvent_229_OnClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.BndEvt__HeadWearableColorPicker2_K2Node_ComponentBoundEvent_3539_OnClicked__DelegateSignature
struct UBP_WearableSlotCustomization_C_BndEvt__HeadWearableColorPicker2_K2Node_ComponentBoundEvent_3539_OnClicked__DelegateSignature_Params
{
	int                                                ColorIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.BndEvt__HeadWearableColorPicker1_K2Node_ComponentBoundEvent_2683_OnHovered__DelegateSignature
struct UBP_WearableSlotCustomization_C_BndEvt__HeadWearableColorPicker1_K2Node_ComponentBoundEvent_2683_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.BndEvt__HeadWearableColorPicker2_K2Node_ComponentBoundEvent_2717_OnHovered__DelegateSignature
struct UBP_WearableSlotCustomization_C_BndEvt__HeadWearableColorPicker2_K2Node_ComponentBoundEvent_2717_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.BndEvt__HeadWearableColorPicker1_K2Node_ComponentBoundEvent_4518_OnClosed__DelegateSignature
struct UBP_WearableSlotCustomization_C_BndEvt__HeadWearableColorPicker1_K2Node_ComponentBoundEvent_4518_OnClosed__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.BndEvt__HeadWearableColorPicker2_K2Node_ComponentBoundEvent_4554_OnClosed__DelegateSignature
struct UBP_WearableSlotCustomization_C_BndEvt__HeadWearableColorPicker2_K2Node_ComponentBoundEvent_4554_OnClosed__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.BndEvt__Pattern_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
struct UBP_WearableSlotCustomization_C_BndEvt__Pattern_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.BndEvt__PickWearableButton_K2Node_ComponentBoundEvent_606_OnButtonClickedEvent__DelegateSignature
struct UBP_WearableSlotCustomization_C_BndEvt__PickWearableButton_K2Node_ComponentBoundEvent_606_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.Construct
struct UBP_WearableSlotCustomization_C_Construct_Params
{
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.OnItemsUnlocked
struct UBP_WearableSlotCustomization_C_OnItemsUnlocked_Params
{
	bool                                               bWasSuccessful;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FItemStack>                          ItemStacks;                                                // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BP_WearableSlotCustomization.BP_WearableSlotCustomization_C.ExecuteUbergraph_BP_WearableSlotCustomization
struct UBP_WearableSlotCustomization_C_ExecuteUbergraph_BP_WearableSlotCustomization_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

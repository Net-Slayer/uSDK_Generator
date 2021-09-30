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

// Function BP_BodyCustomization.BP_BodyCustomization_C.SkinColorHovered
struct UBP_BodyCustomization_C_SkinColorHovered_Params
{
	int                                                NewSkinColor;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.UpdateDoll
struct UBP_BodyCustomization_C_UpdateDoll_Params
{
	bool                                               OnlyUpdateMaterials;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.UpdateWidget
struct UBP_BodyCustomization_C_UpdateWidget_Params
{
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.GetValues
struct UBP_BodyCustomization_C_GetValues_Params
{
	int                                                Voice;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Fat;                                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Skinny;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Strong;                                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SkinColor;                                                 // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                VoiceCount;                                                // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FatCount;                                                  // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SkinnyCount;                                               // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StrongCount;                                               // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFemale;                                                  // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__FatSlider_K2Node_ComponentBoundEvent_427_OnValueChanged__DelegateSignature
struct UBP_BodyCustomization_C_BndEvt__FatSlider_K2Node_ComponentBoundEvent_427_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinnySlider_K2Node_ComponentBoundEvent_430_OnValueChanged__DelegateSignature
struct UBP_BodyCustomization_C_BndEvt__SkinnySlider_K2Node_ComponentBoundEvent_430_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__StrongSlider_K2Node_ComponentBoundEvent_434_OnValueChanged__DelegateSignature
struct UBP_BodyCustomization_C_BndEvt__StrongSlider_K2Node_ComponentBoundEvent_434_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.RegisterPreviewEvents
struct UBP_BodyCustomization_C_RegisterPreviewEvents_Params
{
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.OnDrag
struct UBP_BodyCustomization_C_OnDrag_Params
{
	float                                              DeltaDistance;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.OnScroll
struct UBP_BodyCustomization_C_OnScroll_Params
{
	float                                              ScrollDelta;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__MaleButton_K2Node_ComponentBoundEvent_238_OnCheckBoxComponentStateChanged__DelegateSignature
struct UBP_BodyCustomization_C_BndEvt__MaleButton_K2Node_ComponentBoundEvent_238_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__FemaleButton_K2Node_ComponentBoundEvent_251_OnCheckBoxComponentStateChanged__DelegateSignature
struct UBP_BodyCustomization_C_BndEvt__FemaleButton_K2Node_ComponentBoundEvent_251_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_108_OnColorClicked__DelegateSignature
struct UBP_BodyCustomization_C_BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_108_OnColorClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_115_OnColorHovered__DelegateSignature
struct UBP_BodyCustomization_C_BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_115_OnColorHovered__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_127_OnColorPickerClosed__DelegateSignature
struct UBP_BodyCustomization_C_BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_127_OnColorPickerClosed__DelegateSignature_Params
{
	int                                                LstSelectedColorIndex;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.SetActive
struct UBP_BodyCustomization_C_SetActive_Params
{
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.OnProfileChanged
struct UBP_BodyCustomization_C_OnProfileChanged_Params
{
};

// Function BP_BodyCustomization.BP_BodyCustomization_C.ExecuteUbergraph_BP_BodyCustomization
struct UBP_BodyCustomization_C_ExecuteUbergraph_BP_BodyCustomization_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

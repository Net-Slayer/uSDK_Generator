#pragma once

// Name: Mordhau, Version: Patch23


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

// Function BP_FaceCustomization.BP_FaceCustomization_C.HairColorHovered
struct UBP_FaceCustomization_C_HairColorHovered_Params
{
	int                                                ColorId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.EyeColorHovered
struct UBP_FaceCustomization_C_EyeColorHovered_Params
{
	int                                                ColorId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.ShowEyebrowList
struct UBP_FaceCustomization_C_ShowEyebrowList_Params
{
	int                                                CurrentEyebrow;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.ShowFacialHairList
struct UBP_FaceCustomization_C_ShowFacialHairList_Params
{
	int                                                CurrentFace;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentFacialHair;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.ShowHairList
struct UBP_FaceCustomization_C_ShowHairList_Params
{
	int                                                CurrentFace;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentHair;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.EyebrowSelectionClicked
struct UBP_FaceCustomization_C_EyebrowSelectionClicked_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.EyebrowSelectionHovered
struct UBP_FaceCustomization_C_EyebrowSelectionHovered_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.FacialHairSelectionClicked
struct UBP_FaceCustomization_C_FacialHairSelectionClicked_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.FacialHairSelectionHovered
struct UBP_FaceCustomization_C_FacialHairSelectionHovered_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.HairSelectionClicked
struct UBP_FaceCustomization_C_HairSelectionClicked_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.HairSelectionHovered
struct UBP_FaceCustomization_C_HairSelectionHovered_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.FaceSelectionClicked
struct UBP_FaceCustomization_C_FaceSelectionClicked_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.FaceSelectionHovered
struct UBP_FaceCustomization_C_FaceSelectionHovered_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.ShowFaceList
struct UBP_FaceCustomization_C_ShowFaceList_Params
{
	int                                                CurrentFace;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.SelectionCanceled
struct UBP_FaceCustomization_C_SelectionCanceled_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.VoiceSelectionClicked
struct UBP_FaceCustomization_C_VoiceSelectionClicked_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.VoiceSelectionHovered
struct UBP_FaceCustomization_C_VoiceSelectionHovered_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.ShowVoiceList
struct UBP_FaceCustomization_C_ShowVoiceList_Params
{
	int                                                CurrentVoice;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.UpdateDoll
struct UBP_FaceCustomization_C_UpdateDoll_Params
{
	bool                                               OnlyMaterials;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.AddCurrentWrapperToHistory
struct UBP_FaceCustomization_C_AddCurrentWrapperToHistory_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.SaveCurrentToWrapperProfile
struct UBP_FaceCustomization_C_SaveCurrentToWrapperProfile_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.ApplyFaceTransformDelta
struct UBP_FaceCustomization_C_ApplyFaceTransformDelta_Params
{
	struct FVector                                     Delta;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TransformType;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneName;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Remaining;                                                 // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.UpdateWidget
struct UBP_FaceCustomization_C_UpdateWidget_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.GetValues
struct UBP_FaceCustomization_C_GetValues_Params
{
	int                                                Voice;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                VoicePitch;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Face;                                                      // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EyeColor;                                                  // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HairColor;                                                 // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Hair;                                                      // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FacialHair;                                                // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Eyebrows;                                                  // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Age;                                                       // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__HairSlider_K2Node_ComponentBoundEvent_470_OnValueChanged__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__HairSlider_K2Node_ComponentBoundEvent_470_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__FacialHairSlider_K2Node_ComponentBoundEvent_480_OnValueChanged__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__FacialHairSlider_K2Node_ComponentBoundEvent_480_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__EyebrowsSlider_K2Node_ComponentBoundEvent_491_OnValueChanged__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__EyebrowsSlider_K2Node_ComponentBoundEvent_491_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.RegisterPreviewEvents
struct UBP_FaceCustomization_C_RegisterPreviewEvents_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.OnDrag
struct UBP_FaceCustomization_C_OnDrag_Params
{
	float                                              DeltaDistance;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.OnScroll
struct UBP_FaceCustomization_C_OnScroll_Params
{
	float                                              ScrollDelta;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.Tick
struct UBP_FaceCustomization_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.RMBPress
struct UBP_FaceCustomization_C_RMBPress_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.RMBRelease
struct UBP_FaceCustomization_C_RMBRelease_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.LMBPress
struct UBP_FaceCustomization_C_LMBPress_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.LMBRelease
struct UBP_FaceCustomization_C_LMBRelease_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.MMBPress
struct UBP_FaceCustomization_C_MMBPress_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.MMBRelease
struct UBP_FaceCustomization_C_MMBRelease_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.Undo
struct UBP_FaceCustomization_C_Undo_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.WheelUp
struct UBP_FaceCustomization_C_WheelUp_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.WheelDown
struct UBP_FaceCustomization_C_WheelDown_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.ToggleSymmetry
struct UBP_FaceCustomization_C_ToggleSymmetry_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.TranslateMode
struct UBP_FaceCustomization_C_TranslateMode_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.RotateMode
struct UBP_FaceCustomization_C_RotateMode_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.ScaleMode
struct UBP_FaceCustomization_C_ScaleMode_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.MouseX
struct UBP_FaceCustomization_C_MouseX_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.MouseY
struct UBP_FaceCustomization_C_MouseY_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.OnMouseAxis
struct UBP_FaceCustomization_C_OnMouseAxis_Params
{
	struct FVector2D                                   Movement;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.OnKeyPressed
struct UBP_FaceCustomization_C_OnKeyPressed_Params
{
	struct FKey                                        KeyName;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_113_OnColorClicked__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_113_OnColorClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_120_OnColorHovered__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_120_OnColorHovered__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_134_OnColorPickerClosed__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_134_OnColorPickerClosed__DelegateSignature_Params
{
	int                                                LstSelectedColorIndex;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_146_OnColorClicked__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_146_OnColorClicked__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_165_OnColorHovered__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_165_OnColorHovered__DelegateSignature_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_182_OnColorPickerClosed__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_182_OnColorPickerClosed__DelegateSignature_Params
{
	int                                                LstSelectedColorIndex;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.SetActive
struct UBP_FaceCustomization_C_SetActive_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.OnProfileChanged
struct UBP_FaceCustomization_C_OnProfileChanged_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.OnCharacterDollUpdated
struct UBP_FaceCustomization_C_OnCharacterDollUpdated_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__VoiceSlider_K2Node_ComponentBoundEvent_15_OnStartedTouching__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__VoiceSlider_K2Node_ComponentBoundEvent_15_OnStartedTouching__DelegateSignature_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__RandomizeFaceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__RandomizeFaceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.ChangeVoice
struct UBP_FaceCustomization_C_ChangeVoice_Params
{
	int                                                NewId;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__VoiceButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__VoiceButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__FaceButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__FaceButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__FacialHairButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__FacialHairButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__EyebrowsButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__EyebrowsButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__BP_MordhauSlider_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__BP_MordhauSlider_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__BP_MordhauSlider_K2Node_ComponentBoundEvent_9_OnMouseCapture__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__BP_MordhauSlider_K2Node_ComponentBoundEvent_9_OnMouseCapture__DelegateSignature_Params
{
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__BP_MordhauSlider_Voice_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature
struct UBP_FaceCustomization_C_BndEvt__BP_MordhauSlider_Voice_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FaceCustomization.BP_FaceCustomization_C.ExecuteUbergraph_BP_FaceCustomization
struct UBP_FaceCustomization_C_ExecuteUbergraph_BP_FaceCustomization_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

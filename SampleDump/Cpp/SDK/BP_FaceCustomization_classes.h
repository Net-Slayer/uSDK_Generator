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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_FaceCustomization.BP_FaceCustomization_C
// 0x0198 (FullSize[0x04C4] - InheritedSize[0x032C])
class UBP_FaceCustomization_C : public UBP_CustomizationTab_C
{
public:
	unsigned char                                      UnknownData_082W[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_DiscreteSlider_C*                        AgeSlider;                                                 // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     BackButton;                                                // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_1;                                                  // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_2;                                                  // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_3;                                                  // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_4;                                                  // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_5;                                                  // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_6;                                                  // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_7;                                                  // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_8;                                                  // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_9;                                                  // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  EntriesTitle;                                              // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     EyebrowsButton;                                            // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  EyebrowsText;                                              // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ColorPicker_C*                           EyeColorPicker;                                            // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     FaceButton;                                                // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  FaceText;                                                  // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     FacialHairButton;                                          // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  FacialHairText;                                            // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     HairButton;                                                // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ColorPicker_C*                           HairColorPicker;                                           // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  HairText;                                                  // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                   // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ItemEntriesBox;                                            // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     RandomizeFaceButton;                                       // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ResetFaceButton;                                           // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     VoiceButton;                                               // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  VoiceName;                                                 // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DiscreteSlider_C*                        VoicePitchSlider;                                          // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              WheelCooldown;                                             // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HoldingLMB;                                                // 0x0434(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HoldingRMB;                                                // 0x0435(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HoldingMMB;                                                // 0x0436(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J9LJ[0x1];                                     // 0x0437(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       LastSelectedSymmetryBoneName;                              // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LastSelectedBoneName;                                      // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CharacterDoll_C*                         LastSelectedDoll;                                          // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentLevel;                                              // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Symmetry;                                                  // 0x0454(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JHH9[0x3];                                     // 0x0455(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LastSelectedBoneFaceIdx;                                   // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasChangedAnything;                                        // 0x045C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GZ4H[0x3];                                     // 0x045D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   SavedMousePos;                                             // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AccumulatedMouseX;                                         // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AccumulatedMouseY;                                         // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFaceCustomization>                  History;                                                   // 0x0470(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                Mode;                                                      // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ChangeVector;                                              // 0x0484(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UDecalComponent*>                     PreviousDecals;                                            // 0x0490(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FVector                                     ChangeVectorLeftover;                                      // 0x04A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BIF0[0x4];                                     // 0x04AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        RandomVoiceCommands;                                       // 0x04B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              RandomExp;                                                 // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FaceCustomization.BP_FaceCustomization_C");
		return ptr;
	}



	void HairColorHovered(int ColorId);
	void EyeColorHovered(int ColorId);
	void ShowEyebrowList(int CurrentEyebrow);
	void ShowFacialHairList(int CurrentFace, int CurrentFacialHair);
	void ShowHairList(int CurrentFace, int CurrentHair);
	void EyebrowSelectionClicked(int ID);
	void EyebrowSelectionHovered(int ID);
	void FacialHairSelectionClicked(int ID);
	void FacialHairSelectionHovered(int ID);
	void HairSelectionClicked(int ID);
	void HairSelectionHovered(int ID);
	void FaceSelectionClicked(int ID);
	void FaceSelectionHovered(int ID);
	void ShowFaceList(int CurrentFace);
	void SelectionCanceled();
	void VoiceSelectionClicked(int ID);
	void VoiceSelectionHovered(int ID);
	void ShowVoiceList(int CurrentVoice);
	void UpdateDoll(bool OnlyMaterials);
	void AddCurrentWrapperToHistory();
	void SaveCurrentToWrapperProfile();
	void ApplyFaceTransformDelta(const struct FVector& Delta, int TransformType, const struct FName& BoneName, struct FVector* Remaining);
	void UpdateWidget();
	void GetValues(int* Voice, int* VoicePitch, int* Face, int* EyeColor, int* HairColor, int* Hair, int* FacialHair, int* Eyebrows, int* Age);
	void BndEvt__HairSlider_K2Node_ComponentBoundEvent_470_OnValueChanged__DelegateSignature(int Index);
	void BndEvt__FacialHairSlider_K2Node_ComponentBoundEvent_480_OnValueChanged__DelegateSignature(int Index);
	void BndEvt__EyebrowsSlider_K2Node_ComponentBoundEvent_491_OnValueChanged__DelegateSignature(int Index);
	void RegisterPreviewEvents();
	void OnDrag(float DeltaDistance);
	void OnScroll(float ScrollDelta);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void RMBPress();
	void RMBRelease();
	void LMBPress();
	void LMBRelease();
	void MMBPress();
	void MMBRelease();
	void Undo();
	void WheelUp();
	void WheelDown();
	void ToggleSymmetry();
	void TranslateMode();
	void RotateMode();
	void ScaleMode();
	void MouseX(float AxisValue);
	void MouseY(float AxisValue);
	void OnMouseAxis(const struct FVector2D& Movement);
	void OnKeyPressed(const struct FKey& KeyName);
	void BndEvt__AgeSlider_K2Node_ComponentBoundEvent_60_OnValueChanged__DelegateSignature(int Index);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_113_OnColorClicked__DelegateSignature(int Index);
	void BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_120_OnColorHovered__DelegateSignature(int Index);
	void BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_134_OnColorPickerClosed__DelegateSignature(int LstSelectedColorIndex);
	void BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_146_OnColorClicked__DelegateSignature(int Index);
	void BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_165_OnColorHovered__DelegateSignature(int Index);
	void BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_182_OnColorPickerClosed__DelegateSignature(int LstSelectedColorIndex);
	void SetActive();
	void OnProfileChanged();
	void OnCharacterDollUpdated(class AMordhauCharacter* Character);
	void BndEvt__VoicePitchSlider_K2Node_ComponentBoundEvent_81_OnValueChanged__DelegateSignature(int Index);
	void BndEvt__VoicePitchSlider_K2Node_ComponentBoundEvent_14_OnStartedTouching__DelegateSignature();
	void BndEvt__VoiceSlider_K2Node_ComponentBoundEvent_15_OnStartedTouching__DelegateSignature();
	void BndEvt__RandomizeFaceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ChangeVoice(int NewId);
	void BndEvt__VoiceButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__FaceButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HairButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__FacialHairButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EyebrowsButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_BP_FaceCustomization(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

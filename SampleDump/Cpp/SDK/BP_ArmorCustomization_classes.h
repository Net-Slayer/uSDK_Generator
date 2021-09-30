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

// WidgetBlueprintGeneratedClass BP_ArmorCustomization.BP_ArmorCustomization_C
// 0x0668 (FullSize[0x0994] - InheritedSize[0x032C])
class UBP_ArmorCustomization_C : public UBP_CustomizationTab_C
{
public:
	unsigned char                                      UnknownData_NM7X[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_WearableSlotCustomization_C*             ArmsSlot;                                                  // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     BackButton;                                                // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_1;                                                  // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_2;                                                  // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_3;                                                  // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_4;                                                  // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_WearableSlotCustomization_C*             CoifSlot;                                                  // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      DownArrow;                                                 // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     EmblemButton;                                              // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CustomizationColorPicker_C*              EmblemColorPicker1;                                        // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CustomizationColorPicker_C*              EmblemColorPicker2;                                        // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  EmblemName;                                                // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  EntriesTitle;                                              // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_WearableSlotCustomization_C*             FeetSlot;                                                  // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_WearableSlotCustomization_C*             HandsSlot;                                                 // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_WearableSlotCustomization_C*             HeadSlot;                                                  // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalBox_5;                                           // 0x03B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                   // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_4;                                                   // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ItemEntriesBox;                                            // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_WearableSlotCustomization_C*             LegsSlot;                                                  // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_WearableSlotCustomization_C*             LowerChestSlot;                                            // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DiscreteSlider_C*                        MetalRoughnessScaleSlider;                                 // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CustomizationColorPicker_C*              MetalTintColorPicker;                                      // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_WearableSlotCustomization_C*             ShouldersSlot;                                             // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxText*                               TeamColorPreviewDropdown;                                  // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Tier0Button;                                               // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Tier1Button;                                               // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Tier2Button;                                               // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Tier3Button;                                               // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_WearableSlotCustomization_C*             UpperChestSlot;                                            // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UBP_WearableSlotCustomization_C*>     SlotWidgets;                                               // 0x0448(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	Mordhau_EWearableSlot                              ItemChoosingForSlot;                                       // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6PRR[0x3];                                     // 0x0459(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EditingDefaultTier;                                        // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              HeadDefaultCustomizationDefaults;                          // 0x0460(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UClass*>                              ChestDefaultCustomizationDefaults;                         // 0x0470(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UClass*>                              LegsDefaultCustomizationDefaults;                          // 0x0480(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FButtonStyle                                TierButtonStyleSelected;                                   // 0x0490(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                                TierButtonStyleUnselected;                                 // 0x0708(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               TeamColorPreviewOptions;                                   // 0x0980(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	int                                                TeamColorsPreviewMode;                                     // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ArmorCustomization.BP_ArmorCustomization_C");
		return ptr;
	}



	void SetEditingDefaultTier(int NewTier);
	void UpdateCharacterDollWrapped(bool OnlyUpdateMaterials, bool InstantEquipmentSwitch);
	void MetalTintColorHovered(int ColorId);
	void EmblemColorHovered(int Idx, int ColorId);
	void EmblemSelectionClicked(int ID);
	void EmblemSelectionHovered(int ID);
	void ShowEmblemChoiceList(int CurrentId);
	void ResetWrapperToTierDefault();
	UMG_ESlateVisibility GetVisibility_1();
	float Get_MovementSpeedBar_Percent_1();
	void WearableSelectionCanceled();
	void WearableSelectionHovered(int ID);
	void WearableSelectionClicked(int ID);
	void ShowWearableChoiceList(TArray<class UClass*>* Wearables, Mordhau_EWearableSlot Slot, int CurrentId);
	void GetValues(int* Emblem, int* EmblemColor1, int* EmblemColor2, int* MetalRoughnesScale, int* MetalTint, TArray<class UClass*>* EmblemColors, int* metalroughnessscaleLength, TArray<class UClass*>* MetalTintColors);
	void UpdateWidgets();
	void OnDrag(float DeltaDistance);
	void RegisterPreviewEvents();
	void OnScroll(float ScrollDelta);
	void BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(int ColorIndex);
	void BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature(int Index);
	void BndEvt__EmblemColorPicker1_K2Node_ComponentBoundEvent_19_OnClosed__DelegateSignature(int Index);
	void BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_68_OnClicked__DelegateSignature(int ColorIndex);
	void BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_80_OnHovered__DelegateSignature(int Index);
	void BndEvt__EmblemColorPicker2_K2Node_ComponentBoundEvent_90_OnClosed__DelegateSignature(int Index);
	void BndEvt__MetalRoughnessScaleSlider_K2Node_ComponentBoundEvent_98_OnValueChanged__DelegateSignature(int Index);
	void BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_107_OnClicked__DelegateSignature(int ColorIndex);
	void BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_123_OnHovered__DelegateSignature(int Index);
	void BndEvt__MetalTintColorPicker_K2Node_ComponentBoundEvent_137_OnClosed__DelegateSignature(int Index);
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_180_OnButtonClickedEvent__DelegateSignature();
	void SetActive();
	void OnProfileChanged();
	void Construct();
	void BndEvt__Tier0Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Tier1Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Tier2Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Tier3Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EmblemButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Dropdown_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void UpdateTeamColorsPreview();
	void ExecuteUbergraph_BP_ArmorCustomization(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

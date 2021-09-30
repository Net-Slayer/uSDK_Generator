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

// WidgetBlueprintGeneratedClass BP_WearableSlotCustomization.BP_WearableSlotCustomization_C
// 0x0102 (FullSize[0x0332] - InheritedSize[0x0230])
class UBP_WearableSlotCustomization_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border_5;                                                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_1;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ic_armorTier_2;                                            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ic_armorTier_3;                                            // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ic_armorTier_4;                                            // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ic_head;                                                   // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ic_legs;                                                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ic_torso;                                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_5;                                                   // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_391;                                                 // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  MainSlotText;                                              // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CircularList_C*                          Pattern;                                                   // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     PickWearableButton;                                        // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SelectedWearableName;                                      // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_2;                                                 // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_21;                                                // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SubSlotText;                                               // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_27;                                              // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    TierIconBackground;                                        // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CustomizationColorPicker_C*              WearableColorPicker1;                                      // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CustomizationColorPicker_C*              WearableColorPicker2;                                      // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	Mordhau_EWearableSlot                              WearableSlot;                                              // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasColor1;                                                 // 0x02E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasColor2;                                                 // 0x02E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasPatterns;                                               // 0x02E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RZHJ[0x4];                                     // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Text;                                                      // 0x02E8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       WearableName;                                              // 0x0300(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Cost;                                                      // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_60MA[0x4];                                     // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBP_ArmorCustomization_C*                    ArmorCustomization;                                        // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_CustomizationColorPicker_C*              WearableColorPicker2_1;                                    // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInvalidDefaultCustomizationMode;                         // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HideSlot;                                                  // 0x0331(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_WearableSlotCustomization.BP_WearableSlotCustomization_C");
		return ptr;
	}



	UMG_ESlateVisibility GetVisibility_1();
	void ColorHovered(int Idx, int ColorId);
	struct FText Get_TextBlock_26_Text_1();
	struct FText Get_armorTier_ToolTipText();
	void GetTierIconVisibility();
	UMG_ESlateVisibility Get_SubSlotText_Visibility_1();
	UMG_ESlateVisibility Get_MainSlotText_Visibility_1();
	UMG_ESlateVisibility GetColor2Visibility();
	UMG_ESlateVisibility GetColor1Visibility();
	UMG_ESlateVisibility GetPatternVisibility();
	void RebuildWidget();
	void GetValues(struct FText* WearableName, unsigned char* WearableColor1Index, unsigned char* WearableColor2Index, unsigned char* Pattern, int* PatternLength, TArray<class UClass*>* WearableColors1, TArray<class UClass*>* WearableColors2, bool* HasColor1, bool* HasColor2, unsigned char* ArmorClass, int* Cost, int* ItemDefID, Mordhau_EItemRarity* ItemRarity);
	void UpdateWearableColor(int ColorIndex, int ColorValue);
	void UpdateWearablePattern(int Pattern);
	void UpdateWearable(int NewId, bool DoNotUpdateWidget);
	void BndEvt__HeadWearableColors1_K2Node_ComponentBoundEvent_229_OnClicked__DelegateSignature(int Index);
	void BndEvt__HeadWearableColorPicker2_K2Node_ComponentBoundEvent_3539_OnClicked__DelegateSignature(int ColorIndex);
	void BndEvt__HeadWearableColorPicker1_K2Node_ComponentBoundEvent_2683_OnHovered__DelegateSignature(int Index);
	void BndEvt__HeadWearableColorPicker2_K2Node_ComponentBoundEvent_2717_OnHovered__DelegateSignature(int Index);
	void BndEvt__HeadWearableColorPicker1_K2Node_ComponentBoundEvent_4518_OnClosed__DelegateSignature(int Index);
	void BndEvt__HeadWearableColorPicker2_K2Node_ComponentBoundEvent_4554_OnClosed__DelegateSignature(int Index);
	void BndEvt__Pattern_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int Value);
	void BndEvt__PickWearableButton_K2Node_ComponentBoundEvent_606_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void OnItemsUnlocked(bool bWasSuccessful, TArray<struct FItemStack> ItemStacks);
	void ExecuteUbergraph_BP_WearableSlotCustomization(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

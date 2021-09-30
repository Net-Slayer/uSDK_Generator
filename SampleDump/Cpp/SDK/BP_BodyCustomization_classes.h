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

// WidgetBlueprintGeneratedClass BP_BodyCustomization.BP_BodyCustomization_C
// 0x006C (FullSize[0x0398] - InheritedSize[0x032C])
class UBP_BodyCustomization_C : public UBP_CustomizationTab_C
{
public:
	unsigned char                                      UnknownData_ALCK[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     Button_1;                                                  // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_2;                                                  // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_3;                                                  // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_4;                                                  // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_5;                                                  // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   CheckBox_3;                                                // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   EntryCheckbox;                                             // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DiscreteSlider_C*                        FatSlider;                                                 // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ColorPicker_C*                           SkinColorPicker;                                           // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DiscreteSlider_C*                        SkinnySlider;                                              // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DiscreteSlider_C*                        StrongSlider;                                              // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_BodyCustomization.BP_BodyCustomization_C");
		return ptr;
	}



	void SkinColorHovered(int NewSkinColor);
	void UpdateDoll(bool OnlyUpdateMaterials);
	void UpdateWidget();
	void GetValues(int* Voice, int* Fat, int* Skinny, int* Strong, int* SkinColor, int* VoiceCount, int* FatCount, int* SkinnyCount, int* StrongCount, bool* IsFemale);
	void BndEvt__FatSlider_K2Node_ComponentBoundEvent_427_OnValueChanged__DelegateSignature(int Index);
	void BndEvt__SkinnySlider_K2Node_ComponentBoundEvent_430_OnValueChanged__DelegateSignature(int Index);
	void BndEvt__StrongSlider_K2Node_ComponentBoundEvent_434_OnValueChanged__DelegateSignature(int Index);
	void RegisterPreviewEvents();
	void OnDrag(float DeltaDistance);
	void OnScroll(float ScrollDelta);
	void BndEvt__MaleButton_K2Node_ComponentBoundEvent_238_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__FemaleButton_K2Node_ComponentBoundEvent_251_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_108_OnColorClicked__DelegateSignature(int Index);
	void BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_115_OnColorHovered__DelegateSignature(int Index);
	void BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_127_OnColorPickerClosed__DelegateSignature(int LstSelectedColorIndex);
	void SetActive();
	void OnProfileChanged();
	void ExecuteUbergraph_BP_BodyCustomization(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

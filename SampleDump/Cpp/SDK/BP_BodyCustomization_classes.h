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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_BodyCustomization.BP_BodyCustomization_C
// 0x006C (FullSize[0x0398] - InheritedSize[0x032C])
class UBP_BodyCustomization_C : public UBP_CustomizationTab_C
{
public:
	unsigned char                                      UnknownData_VXQP[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_MordhauSlider_C*                         BP_MordhauSlider_Fat;                                      // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MordhauSlider_C*                         BP_MordhauSlider_Skinny;                                   // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MordhauSlider_C*                         BP_MordhauSlider_Strong;                                   // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_1;                                                  // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_2;                                                  // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_3;                                                  // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_4;                                                  // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_5;                                                  // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   CheckBox_3;                                                // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   EntryCheckbox;                                             // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ColorPicker_C*                           SkinColorPicker;                                           // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_BodyCustomization.BP_BodyCustomization_C");
		return ptr;
	}



	void SkinColorHovered(int NewSkinColor);
	void UpdateDoll(bool OnlyUpdateMaterials);
	void UpdateWidget();
	void GetValues(int* Voice, int* Fat, int* Skinny, int* Strong, int* SkinColor, int* VoiceCount, int* FatCount, int* SkinnyCount, int* StrongCount, bool* IsFemale);
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
	void BndEvt__BP_MordhauSlider_Fat_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__BP_MordhauSlider_Skinny_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__BP_MordhauSlider_Strong_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float Value);
	void ExecuteUbergraph_BP_BodyCustomization(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

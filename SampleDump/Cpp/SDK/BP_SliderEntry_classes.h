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

// WidgetBlueprintGeneratedClass BP_SliderEntry.BP_SliderEntry_C
// 0x006F (FullSize[0x02A0] - InheritedSize[0x0231])
class UBP_SliderEntry_C : public UBP_SettingEntryParent_C
{
public:
	unsigned char                                      UnknownData_HQ88[0x7];                                     // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_MordhauSlider_C*                         BP_MordhauSlider;                                          // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     sliderEntry;                                               // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_24;                                              // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       EntryText;                                                 // 0x0268(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnHovered;                                                 // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FS_MordhauSlider                            Slider_Struct;                                             // 0x0290(0x0010) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_SliderEntry.BP_SliderEntry_C");
		return ptr;
	}



	void Update_Slider(const struct FS_MordhauSlider& Slider_Struct);
	void GetValue(float* Value);
	void SetValue(float Value);
	void Construct();
	void BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BP_MordhauSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float Value);
	void ExecuteUbergraph_BP_SliderEntry(int EntryPoint);
	void OnHovered__DelegateSignature();
	void OnValueChanged__DelegateSignature(float Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

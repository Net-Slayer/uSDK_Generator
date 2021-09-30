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

// WidgetBlueprintGeneratedClass BP_CustomizationColorPicker.BP_CustomizationColorPicker_C
// 0x0040 (FullSize[0x0270] - InheritedSize[0x0230])
class UBP_CustomizationColorPicker_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_ColorPicker_C*                           BP_MordhauColorPicker;                                     // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnHovered;                                                 // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnClosed;                                                  // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_CustomizationColorPicker.BP_CustomizationColorPicker_C");
		return ptr;
	}



	void SetColorsAndIndex(TArray<class UClass*>* Colors, int Index);
	void BndEvt__BP_MordhauColorPicker_K2Node_ComponentBoundEvent_2611_OnColorHovered__DelegateSignature(int Index);
	void BndEvt__BP_MordhauColorPicker_K2Node_ComponentBoundEvent_4366_OnColorClicked__DelegateSignature(int Index);
	void BndEvt__BP_MordhauColorPicker_K2Node_ComponentBoundEvent_4374_OnColorPickerClosed__DelegateSignature(int LstSelectedColorIndex);
	void ExecuteUbergraph_BP_CustomizationColorPicker(int EntryPoint);
	void OnClosed__DelegateSignature(int Index);
	void OnHovered__DelegateSignature(int Index);
	void OnClicked__DelegateSignature(int ColorIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass BP_ColorPicker.BP_ColorPicker_C
// 0x0068 (FullSize[0x0298] - InheritedSize[0x0230])
class UBP_ColorPicker_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border;                                                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ImageButton;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ColorPickerContainer_C*                  ColorPickerContainer;                                      // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              Colors;                                                    // 0x0250(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnColorClicked;                                            // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                SelectedIndex;                                             // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5A7I[0x4];                                     // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnColorHovered;                                            // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnColorPickerClosed;                                       // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ColorPicker.BP_ColorPicker_C");
		return ptr;
	}



	void CloseColorPicker();
	void SetColorsAndIndex(TArray<class UClass*>* Colors, int Index);
	void GetSelectedColors(TArray<class UClass*>* Colors);
	void SetIndex(int Index);
	void GetSelectedIndex(int* Index);
	void SetColors(TArray<class UClass*>* Colors);
	void OnClicked(int ColorIndex);
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_10201_OnButtonClickedEvent__DelegateSignature();
	void OnHovered(int Index);
	void UpdatePreviewColor(const struct FLinearColor& Color);
	void OnColsed();
	void ExecuteUbergraph_BP_ColorPicker(int EntryPoint);
	void OnColorPickerClosed__DelegateSignature(int LstSelectedColorIndex);
	void OnColorHovered__DelegateSignature(int Index);
	void OnColorClicked__DelegateSignature(int Index);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

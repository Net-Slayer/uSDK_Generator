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

// WidgetBlueprintGeneratedClass BP_DropdownEntry.BP_DropdownEntry_C
// 0x0077 (FullSize[0x02A8] - InheritedSize[0x0231])
class UBP_DropdownEntry_C : public UBP_SettingEntryParent_C
{
public:
	unsigned char                                      UnknownData_UQHW[0x7];                                     // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      DownArrow;                                                 // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxText*                               Dropdown;                                                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     dropdownEntry;                                             // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_2;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       EntryText;                                                 // 0x0260(0x0018) (Edit, BlueprintVisible)
	TArray<struct FText>                               Options;                                                   // 0x0278(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnHovered;                                                 // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_DropdownEntry.BP_DropdownEntry_C");
		return ptr;
	}



	void Construct();
	void BndEvt__dropdownEntry_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ComboBoxText_90_K2Node_ComponentBoundEvent_115_OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void ExecuteUbergraph_BP_DropdownEntry(int EntryPoint);
	void OnHovered__DelegateSignature();
	void OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

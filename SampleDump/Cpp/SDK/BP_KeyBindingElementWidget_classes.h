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

// WidgetBlueprintGeneratedClass BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C
// 0x00A0 (FullSize[0x02D1] - InheritedSize[0x0231])
class UBP_KeyBindingElementWidget_C : public UBP_SettingEntryParent_C
{
public:
	unsigned char                                      UnknownData_0PU6[0x7];                                     // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  ActionText;                                                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     PrimaryKeyButton;                                          // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  PrimaryKeyText;                                            // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     SecondaryKeyButton;                                        // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SecondaryKeyText;                                          // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_KeyBindingsSettings_C*                   ParentWidget;                                              // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsAxis;                                                   // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H8KS[0x7];                                     // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKey>                                Bindings;                                                  // 0x0278(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FKey                                        NoneKey;                                                   // 0x0288(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FName                                       ActionName;                                                // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsEditingPrimary;                                         // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsEditingSecondary;                                       // 0x02A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G9PP[0x6];                                     // 0x02AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKey>                                PrimaryBindings;                                           // 0x02B0(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FKey>                                SecondaryBindings;                                         // 0x02C0(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                               bIsConsoleKey;                                             // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_KeyBindingElementWidget.BP_KeyBindingElementWidget_C");
		return ptr;
	}



	void EndEditBinding();
	struct FText GetActionNameText();
	void GetCustomBinding(bool bIsPrimary, struct FKey* Key);
	void SetCustomBinding(const struct FKey& Key, bool bIsPrimary);
	void GetKeyText(const struct FKey& Key, bool bIsEditingBinding, struct FText* KeyText);
	struct FText GetSecondaryKeyText();
	struct FText GetPrimaryKeyText();
	void AddCustomBinding(const struct FKey& Key);
	void StartEditBinding(bool bIsPrimary);
	void Construct();
	void BndEvt__Button_4_K2Node_ComponentBoundEvent_442_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_5_K2Node_ComponentBoundEvent_460_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_BP_KeyBindingElementWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

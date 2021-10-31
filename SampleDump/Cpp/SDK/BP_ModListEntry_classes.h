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

// WidgetBlueprintGeneratedClass BP_ModListEntry.BP_ModListEntry_C
// 0x00E0 (FullSize[0x0310] - InheritedSize[0x0230])
class UBP_ModListEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     Button;                                                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_24;                                              // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       Name;                                                      // 0x0258(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnHovered;                                                 // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       Description;                                               // 0x0290(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       Author;                                                    // 0x02A8(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FModInfo                                    Mod;                                                       // 0x02C0(0x0050) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ModListEntry.BP_ModListEntry_C");
		return ptr;
	}



	void BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__sliderEntry_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_BP_ModListEntry(int EntryPoint);
	void OnClicked__DelegateSignature();
	void OnHovered__DelegateSignature(class UBP_ModListEntry_C* Ref);
	void OnValueChanged__DelegateSignature(float Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

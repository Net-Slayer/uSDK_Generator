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

// WidgetBlueprintGeneratedClass BP_ProfileSelectButton.BP_ProfileSelectButton_C
// 0x004C (FullSize[0x027C] - InheritedSize[0x0230])
class UBP_ProfileSelectButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            HoverAnim;                                                 // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     Button_2;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_2;                                               // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       ProfileName;                                               // 0x0250(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnProfileButtonClicked;                                    // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                ProfileId;                                                 // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ProfileSelectButton.BP_ProfileSelectButton_C");
		return ptr;
	}



	void BndEvt__Button_1_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_369_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_380_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_BP_ProfileSelectButton(int EntryPoint);
	void OnProfileButtonClicked__DelegateSignature(int ProfileId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

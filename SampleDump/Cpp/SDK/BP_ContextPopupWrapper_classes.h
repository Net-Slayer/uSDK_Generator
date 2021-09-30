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

// WidgetBlueprintGeneratedClass BP_ContextPopupWrapper.BP_ContextPopupWrapper_C
// 0x0098 (FullSize[0x02C8] - InheritedSize[0x0230])
class UBP_ContextPopupWrapper_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     Button_1;                                                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                CanvasPanel_Wrapper;                                       // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 MenuAnchor_1;                                              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ContextPopup_C*                          Context_Popup;                                             // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             Options;                                                   // 0x0258(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    ContextButtonClicked;                                      // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<struct FString, struct FText>                 Context_Button_Option_Map;                                 // 0x0278(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ContextPopupWrapper.BP_ContextPopupWrapper_C");
		return ptr;
	}



	UMG_ESlateVisibility GetVisibility_1();
	class UWidget* OnGetMenuContent_1();
	void Close_Menu();
	void Open_Menu();
	void Construct_Context_Menu(TMap<struct FString, struct FText> Option_Map, class UBP_ContextPopupWrapper_C** Wrapper);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_BP_ContextPopupWrapper(int EntryPoint);
	void ContextButtonClicked__DelegateSignature(int Button_Index);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

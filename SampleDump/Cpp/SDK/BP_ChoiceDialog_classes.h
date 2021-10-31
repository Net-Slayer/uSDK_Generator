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

// WidgetBlueprintGeneratedClass BP_ChoiceDialog.BP_ChoiceDialog_C
// 0x0060 (FullSize[0x0290] - InheritedSize[0x0230])
class UBP_ChoiceDialog_C : public UMordhauDialog
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_TwoButtonDialog_C*                       BP_TwoButtonDialog;                                        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                           Loading;                                                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    LeftButtonClicked;                                         // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    RightButtonClicked;                                        // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       ChoiceText;                                                // 0x0278(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ChoiceDialog.BP_ChoiceDialog_C");
		return ptr;
	}



	void SetWaitingMode(bool IsWaitingMode);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FText GetChoiceText();
	void SetTitleText(const struct FText& Title);
	void SetRightButtonText(const struct FText& Text);
	void SetLeftButtonText(const struct FText& Text);
	void BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature();
	void BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature();
	void Show();
	void Hide();
	void ExecuteUbergraph_BP_ChoiceDialog(int EntryPoint);
	void RightButtonClicked__DelegateSignature();
	void LeftButtonClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

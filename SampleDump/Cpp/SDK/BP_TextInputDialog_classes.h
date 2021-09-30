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

// WidgetBlueprintGeneratedClass BP_TextInputDialog.BP_TextInputDialog_C
// 0x0080 (FullSize[0x02B0] - InheritedSize[0x0230])
class UBP_TextInputDialog_C : public UMordhauDialog
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_TwoButtonDialog_C*                       BP_TwoButtonDialog;                                        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            NormalTextBox;                                             // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            PasswordTextBox;                                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       HintText;                                                  // 0x0250(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    LeftButtonClicked;                                         // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    RightButtonClicked;                                        // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bIsPassword;                                               // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3G3I[0x7];                                     // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    TextCommitted;                                             // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    TextChanged;                                               // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_TextInputDialog.BP_TextInputDialog_C");
		return ptr;
	}



	void SetEnteredText(const struct FText& EnteredText);
	void GetEnteredText(struct FText* Text);
	void SetTitleText(const struct FText& Title);
	void SetRightButtonText(const struct FText& Text);
	void SetLeftButtonText(const struct FText& Text);
	struct FText GetHintText();
	void BndEvt__PasswordTextbox_K2Node_ComponentBoundEvent_23_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature();
	void BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature();
	void Show();
	void Hide();
	void BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void BndEvt__NormalTextBox_K2Node_ComponentBoundEvent_19_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_20_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void ExecuteUbergraph_BP_TextInputDialog(int EntryPoint);
	void TextChanged__DelegateSignature(const struct FText& Text);
	void TextCommitted__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> Commit_Method);
	void RightButtonClicked__DelegateSignature();
	void LeftButtonClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

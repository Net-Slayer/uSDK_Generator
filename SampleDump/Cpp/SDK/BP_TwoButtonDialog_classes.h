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

// WidgetBlueprintGeneratedClass BP_TwoButtonDialog.BP_TwoButtonDialog_C
// 0x00A0 (FullSize[0x02D0] - InheritedSize[0x0230])
class UBP_TwoButtonDialog_C : public UMordhauDialog
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_BaseDialog_C*                            BP_BaseDialog;                                             // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     LeftButton;                                                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     RightButton;                                               // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_3;                                               // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Textcancel;                                                // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  TwoButtonContent;                                          // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       LeftButtonText;                                            // 0x0268(0x0018) (Edit, BlueprintVisible)
	struct FText                                       TitleText;                                                 // 0x0280(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    LeftButtonClicked;                                         // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       RightButtonText;                                           // 0x02A8(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    RightButtonClicked;                                        // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_TwoButtonDialog.BP_TwoButtonDialog_C");
		return ptr;
	}



	struct FText GetRightButtonText();
	struct FText Get_LeftButtonText();
	void Construct();
	void BndEvt__Button_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__RightButton_K2Node_ComponentBoundEvent_204_OnButtonClickedEvent__DelegateSignature();
	void Show();
	void Hide();
	void ExecuteUbergraph_BP_TwoButtonDialog(int EntryPoint);
	void RightButtonClicked__DelegateSignature();
	void LeftButtonClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

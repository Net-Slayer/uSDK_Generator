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

// WidgetBlueprintGeneratedClass BP_BaseDialog.BP_BaseDialog_C
// 0x0148 (FullSize[0x0378] - InheritedSize[0x0230])
class UBP_BaseDialog_C : public UMordhauDialog
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                                  BaseButtons;                                               // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  BaseContent;                                               // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TitleTextBlock;                                            // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSessionSearchResult                        Session;                                                   // 0x0258(0x0108) (Edit, BlueprintVisible)
	struct FText                                       TitleText;                                                 // 0x0360(0x0018) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_BaseDialog.BP_BaseDialog_C");
		return ptr;
	}



	struct FText GetTitleText();
	struct FEventReply OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Show();
	void Hide();
	void ExecuteUbergraph_BP_BaseDialog(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

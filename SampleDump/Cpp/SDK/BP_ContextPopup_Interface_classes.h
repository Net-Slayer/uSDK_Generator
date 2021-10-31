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

// WidgetBlueprintGeneratedClass BP_ContextPopup_Interface.BP_ContextPopup_Interface_C
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class UBP_ContextPopup_Interface_C : public UUserWidget
{
public:
	class UImage*                                      Image_1;                                                   // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_2;                                             // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ContextPopup_Interface.BP_ContextPopup_Interface_C");
		return ptr;
	}



	void ClearEntries();
	void AddButtonEntry(const struct FString& ButtonOption, const struct FText& HoverText, class UBP_ContextPopupWrapper_Interface_C* Wrapper);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

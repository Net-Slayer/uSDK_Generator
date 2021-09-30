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

// WidgetBlueprintGeneratedClass BP_ContextPopup.BP_ContextPopup_C
// 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
class UBP_ContextPopup_C : public UUserWidget
{
public:
	class UImage*                                      Image_1;                                                   // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_2;                                             // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ContextPopupWrapper_C*                   Wrapper;                                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ContextPopup.BP_ContextPopup_C");
		return ptr;
	}



	void Clear_Entries();
	void Add_Button_Entry(const struct FText& ButtonLabel, int ButtonIndex, const struct FText& Hover_Text);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

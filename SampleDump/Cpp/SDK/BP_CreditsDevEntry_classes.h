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

// WidgetBlueprintGeneratedClass BP_CreditsDevEntry.BP_CreditsDevEntry_C
// 0x0040 (FullSize[0x0270] - InheritedSize[0x0230])
class UBP_CreditsDevEntry_C : public UUserWidget
{
public:
	class UTextBlock*                                  NameText;                                                  // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_6;                                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TitleText;                                                 // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Title;                                                     // 0x0248(0x0018) (Edit, BlueprintVisible)
	struct FString                                     Name;                                                      // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_CreditsDevEntry.BP_CreditsDevEntry_C");
		return ptr;
	}



	UMG_ESlateVisibility Get_TitleText_Visibility_1();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

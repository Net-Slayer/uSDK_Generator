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

// WidgetBlueprintGeneratedClass BP_CustomizationTab.BP_CustomizationTab_C
// 0x00FC (FullSize[0x032C] - InheritedSize[0x0230])
class UBP_CustomizationTab_C : public UUserWidget
{
public:
	TArray<class UBP_CustomizationItemEntry_C*>        CustomizationItemEntries;                                  // 0x0230(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	int                                                ItemChoosingOriginalId;                                    // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5WJV[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCharacterProfile                           ItemChoosingOriginalProfile;                               // 0x0248(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SelectionEntriesTitle;                                     // 0x0300(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UCharacterProfileBPWrapper*                  ProfileWrapper;                                            // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ProfileCustomization_C*                  ProfileCustomization;                                      // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SelectedId;                                                // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_CustomizationTab.BP_CustomizationTab_C");
		return ptr;
	}



	void CreateSimpleItemEntries(TArray<class UClass*>* Items, int Selected, class UBP_CustomizationItemEntry_C** SelectedEntry);
	void ClearCustomizationItemEntries();
	void GetCustomizationPlatform(class ABP_MordhauCustomizationPlatform_C** Platform);
	void OnCharacterDollUpdated(class AMordhauCharacter* Character);
	void OnProfileChanged();
	void CompareItemEntries(class UBP_CustomizationItemEntry_C* A, class UBP_CustomizationItemEntry_C* B, bool* AIsLess);
	void SortItemEntries();
	void SetActive();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

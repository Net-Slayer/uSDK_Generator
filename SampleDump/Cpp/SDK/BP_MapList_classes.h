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

// WidgetBlueprintGeneratedClass BP_MapList.BP_MapList_C
// 0x0038 (FullSize[0x0268] - InheritedSize[0x0230])
class UBP_MapList_C : public UUserWidget
{
public:
	class UBP_MapEntryLocalPlay_C*                     BP_MapEntryLocalPlay;                                      // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MapEntryLocalPlay_C*                     BP_MapEntryLocalPlay_1;                                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MapEntryLocalPlay_C*                     BP_MapEntryLocalPlay_2;                                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MapEntryLocalPlay_C*                     BP_MapEntryLocalPlay_3;                                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MapEntryLocalPlay_C*                     BP_MapEntryLocalPlay_4;                                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                                    EntryGrid;                                                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MapEntryLocalPlay_C*                     SelectedEntry;                                             // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapList.BP_MapList_C");
		return ptr;
	}



	void GetSelectedEntry(class UBP_MapEntryLocalPlay_C** SelectedEntry);
	void SelectFirstEntry();
	void OnEntrySelected(class UBP_MapEntryLocalPlay_C* Entry);
	void AddEntry(const struct FString& GameModeMapName, class UGameModeMetadata* GameModeMetadata, class UMapMetadata* MapMetadata);
	void ClearEntries();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

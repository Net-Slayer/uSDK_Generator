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

// WidgetBlueprintGeneratedClass BP_LoadoutPicker.BP_LoadoutPicker_C
// 0x01C5 (FullSize[0x04F1] - InheritedSize[0x032C])
class UBP_LoadoutPicker_C : public UBP_CustomizationTab_C
{
public:
	unsigned char                                      UnknownData_8L0L[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  Defaults;                                                  // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ItemEntriesBox;                                            // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    SelectMercBar;                                             // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ToggleDefaultLoadouts;                                     // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UBP_LoadoutEntry_C*>                  LoadoutEntries;                                            // 0x0360(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_CustomizationItemEntry_C*                Selected_Entry_Widget;                                     // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterProfile                           Selected_Profile;                                          // 0x0378(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCharacterProfile                           Hovered_Profile;                                           // 0x0430(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Hovered_Id;                                                // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RandomPoseOffset;                                          // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DefaultsHidden;                                            // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_LoadoutPicker.BP_LoadoutPicker_C");
		return ptr;
	}



	struct FText Get_Defaults_Text_1();
	void GetDefaultOrCustomProfileFromSingleton(int SelectedIdx, struct FCharacterProfile* Profile);
	void GetSelectedIDInCustomProfiles(int* SelectedId);
	void Set_Spawn_Loadout(int ID, int* Selected_Character_Profile);
	void Move_Entry(int ID_to_move, int New_ID);
	void Remove_Entry(int ID);
	void Add_Entry(int ID);
	void Set_Selected_Entry(int ID, int* Selected_ID, class UBP_LoadoutEntry_C** Selected_Loadout_Entry, struct FCharacterProfile* Selected_Profile);
	void Clear_Entry_Widgets();
	void Generate_Entry_Widgets();
	void UpdateWidget();
	void RegisterPreviewEvents();
	void OnDrag(float DeltaDistance);
	void OnScroll(float ScrollDelta);
	void UpdatePreviewDoll(const struct FCharacterProfile& New_Profile);
	void SetActive();
	void OnClick(bool Listen_for_Double_Click, int Entry_Id);
	void OnHover(int Entry_Id);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void BndEvt__ToggleDefaultLoadouts_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ToggleShowDefaultLoadouts();
	void ExecuteUbergraph_BP_LoadoutPicker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

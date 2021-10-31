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

// BlueprintGeneratedClass BP_WearablePickup.BP_WearablePickup_C
// 0x0088 (FullSize[0x0408] - InheritedSize[0x0380])
class ABP_WearablePickup_C : public ASkeletalMeshMordhauActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TMap<Mordhau_EWearableSlot, struct FWearableCustomization> Wearables;                                                 // 0x0388(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Tier;                                                      // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HQRO[0x4];                                     // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   EquipSound;                                                // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Mordhau_EMainWearableSlot                          MainSlot;                                                  // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D9J8[0x7];                                     // 0x03E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Name;                                                      // 0x03F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_WearablePickup.BP_WearablePickup_C");
		return ptr;
	}



	void EquipIfUpgrade(class AMordhauCharacter* Char);
	void Equip(class AMordhauCharacter* Char);
	void IsAnUpgrade(class AMordhauCharacter* Char, bool* Value);
	void AssignToCharacter(class AMordhauCharacter* Character, class ACustomizationReplicationActor* CustomizatonReplicationActor);
	void OnInteractionStart(class AMordhauCharacter* Character);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WearablePickup(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

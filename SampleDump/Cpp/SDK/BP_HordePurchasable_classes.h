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

// BlueprintGeneratedClass BP_HordePurchasable.BP_HordePurchasable_C
// 0x005C (FullSize[0x03DC] - InheritedSize[0x0380])
class ABP_HordePurchasable_C : public ABP_MordhauActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULODSkeletalMeshComponent*                   LODSkeletalMesh;                                           // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                Cost;                                                      // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isAvailable;                                               // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CGB9[0x3];                                     // 0x039D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PurchasableClass;                                          // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Initialized;                                               // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C2MR[0x7];                                     // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMordhauWidgetComponent*                     Widget;                                                    // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAmmoRestock;                                             // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsValid;                                                   // 0x03B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MKU5[0x6];                                     // 0x03BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Name;                                                      // 0x03C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AmmoRestockAmount;                                         // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordePurchasable.BP_HordePurchasable_C");
		return ptr;
	}



	void UpdateVisuals();
	void InitializeDisplay();
	void SpawnItem(class ABP_BattleRoyaleCharacter_C* ForCharacter);
	void SetAvailability(bool NewAvailable);
	bool CanInteract(class AMordhauCharacter* Character);
	void ReceiveBeginPlay();
	void OnInteractionStart(class AMordhauCharacter* Character);
	void ExecuteUbergraph_BP_HordePurchasable(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C
// 0x0098 (FullSize[0x0410] - InheritedSize[0x0378])
class ABP_ItemDeliverySpawn_C : public AMordhauActor
{
public:
	unsigned char                                      UnknownData_A2NC[0x8];                                     // 0x0378(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMordhauWidgetComponent*                     MordhauWidget;                                             // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_CapturePoint_C*                          CapturePoint;                                              // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      DeliverableClass;                                          // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_DeliverableEquipment_C*>          SpawnedDeliverables;                                       // 0x03A8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<class AMordhauCharacter*, class AMordhauEquipment*> SpawnedByCharacter;                                        // 0x03B8(0x0050) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UTexture2D*                                  Icon;                                                      // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C");
		return ptr;
	}



	void Disable();
	void Activate();
	bool CanInteract(class AMordhauCharacter* Character);
	void OnInteractionStart(class AMordhauCharacter* Character);
	void ExecuteUbergraph_BP_ItemDeliverySpawn(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

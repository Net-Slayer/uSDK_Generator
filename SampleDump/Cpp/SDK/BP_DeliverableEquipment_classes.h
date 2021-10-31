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

// BlueprintGeneratedClass BP_DeliverableEquipment.BP_DeliverableEquipment_C
// 0x002A (FullSize[0x0CF2] - InheritedSize[0x0CC8])
class ABP_DeliverableEquipment_C : public AMordhauEquipment
{
public:
	unsigned char                                      UnknownData_50I7[0x8];                                     // 0x0CC8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               DeliverableCollision;                                      // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               Consumed;                                                  // 0x0CE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               MustThrow;                                                 // 0x0CE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DestroysOnDelivery;                                        // 0x0CE2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CEFS[0x5];                                     // 0x0CE3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMordhauPlayerController*                    LastEquippedByPlayerController;                            // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Broke;                                                     // 0x0CF0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UsableByTeam;                                              // 0x0CF1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeliverableEquipment.BP_DeliverableEquipment_C");
		return ptr;
	}



	bool CanInteract(class AMordhauCharacter* Character);
	bool CanHeldInteract(class AMordhauCharacter* Character);
	void Break();
	void OnRep_Broke();
	void Consume();
	void UserConstructionScript();
	void OnThud();
	void FireProjectile(const struct FVector& Origin, const struct FRotator& Orientation, class AController* OwningController, float ExpectedDelay);
	void OnPickedUp(class AMordhauCharacter* Character);
	void OnBroken();
	void OnHeldInteractionStart(class AMordhauCharacter* Character);
	void ExecuteUbergraph_BP_DeliverableEquipment(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

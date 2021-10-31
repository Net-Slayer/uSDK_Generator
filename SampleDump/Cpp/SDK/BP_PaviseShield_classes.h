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

// BlueprintGeneratedClass BP_PaviseShield.BP_PaviseShield_C
// 0x004C (FullSize[0x1C94] - InheritedSize[0x1C48])
class ABP_PaviseShield_C : public ABP_MordhauShield_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1C48(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBuildingSystemComponent*                    BuildingSystem;                                            // 0x1C50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               MovementBlocker;                                           // 0x1C58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AController*                                 PlanterController;                                         // 0x1C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReceivedDamage;                                            // 0x1C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageToDestroy;                                           // 0x1C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ParryMaskUnplanted;                                        // 0x1C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ParryMaskPlanted;                                          // 0x1C74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauCharacter*                           PlanterCharacter;                                          // 0x1C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                                   DestroySound;                                              // 0x1C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PlaceableArrayName;                                        // 0x1C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxPlaceables;                                             // 0x1C90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PaviseShield.BP_PaviseShield_C");
		return ptr;
	}



	bool CanHeldInteract(class AMordhauCharacter* Character);
	void HandleTakeDamage(float Damage);
	bool CanInteract(class AMordhauCharacter* Character);
	bool OnRequestFire(class AMordhauCharacter* Character);
	bool ShouldShine();
	void ValidatePlantSpot(const struct FVector& PlantLocation, const struct FRotator& CameraRotation1P, bool* Succeeded, struct FVector* Location, struct FRotator* Rotation, class USceneComponent** AttachToComponent);
	void FireProjectile(const struct FVector& Origin, const struct FRotator& Orientation, class AController* OwningController, float ExpectedDelay);
	void OnLoadedChanged();
	void OnInteractionStart(class AMordhauCharacter* Character);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void BndEvt__MovementBlocker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void PlanterDestroyed(class AAdvancedCharacter* Character);
	void PlanterDied(class AAdvancedCharacter* Character);
	void OnAmmoChanged();
	void OnHeldInteractionStart(class AMordhauCharacter* Character);
	void UpdateEquipmentState();
	void ExecuteUbergraph_BP_PaviseShield(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

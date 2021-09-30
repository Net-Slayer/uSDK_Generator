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

// BlueprintGeneratedClass BP_BearTrap.BP_BearTrap_C
// 0x0080 (FullSize[0x0D48] - InheritedSize[0x0CC8])
class ABP_BearTrap_C : public AMordhauEquipment
{
public:
	unsigned char                                      UnknownData_NWF5[0x8];                                     // 0x0CC8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBuildingSystemComponent*                    BuildingSystem;                                            // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0CE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AController*                                 PlanterController;                                         // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SafeTime;                                                  // 0x0CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ORLV[0x4];                                     // 0x0CF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      DamageByArmorTier;                                         // 0x0CF8(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                              DamageToHorse;                                             // 0x0D08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7X5D[0x4];                                     // 0x0D0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   TrapTriggerSound;                                          // 0x0D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauCharacter*                           PlanterCharacter;                                          // 0x0D18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxTrapsPerPlayer;                                         // 0x0D20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PlaceableLimitName;                                        // 0x0D24(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReactivateAmount;                                          // 0x0D2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReactivateDelay;                                           // 0x0D30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JTMI[0x4];                                     // 0x0D34(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APlayerState*                                PlanterState;                                              // 0x0D38(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UMordhauWidgetComponent*                     TrapWidget;                                                // 0x0D40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_BearTrap.BP_BearTrap_C");
		return ptr;
	}



	void OnRep_PlanterState();
	bool CanHeldInteract(class AMordhauCharacter* Character);
	bool ShouldShine();
	bool CanInteract(class AMordhauCharacter* Character);
	void DealDamage(class AAdvancedCharacter* Character);
	void ValidatePlantSpot(const struct FVector& CameraLocation1P, const struct FRotator& CameraRotattion1P, bool* Succeeded, struct FVector* Location, struct FRotator* Rotation, class USceneComponent** AttachToComponent);
	bool OnRequestFire(class AMordhauCharacter* Character);
	void OnLoadedChanged();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void FireProjectile(const struct FVector& Origin, const struct FRotator& Orientation, class AController* OwningController, float ExpectedDelay);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnUsedToKillOther(class AAdvancedCharacter* Character, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source);
	void OnPostDismemberedOther(const struct FName& bone, class ASeparatedBodyPart* Part);
	void OnAmmoChanged();
	void PlanterDied(class AAdvancedCharacter* Character);
	void PlanterDestroyed(class AAdvancedCharacter* Character);
	void OnInteractionStart(class AMordhauCharacter* Character);
	void OnHeldInteractionStart(class AMordhauCharacter* Character);
	void UpdateEquipmentState();
	void LocalPlayerLateTick(float DeltaTime);
	void ExecuteUbergraph_BP_BearTrap(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

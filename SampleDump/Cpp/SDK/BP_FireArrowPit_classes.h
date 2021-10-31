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

// BlueprintGeneratedClass BP_FireArrowPit.BP_FireArrowPit_C
// 0x0034 (FullSize[0x0494] - InheritedSize[0x0460])
class ABP_FireArrowPit_C : public ABP_DestroyableActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio;                                                     // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Area;                                                      // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_Fire_Torch;                                              // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              OverlappingInternal;                                       // 0x0480(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              LifetimeDuration;                                          // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FireArrowPit.BP_FireArrowPit_C");
		return ptr;
	}



	void SetOnFire(class UProjectileArmShooterComponent* ProjectileArmComponent, class UProjectileTurretShooterComponent* ProjectileTurretComponent);
	void ReceiveBeginPlay();
	void GiveBuffs();
	void ExecuteUbergraph_BP_FireArrowPit(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

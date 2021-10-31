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

// BlueprintGeneratedClass BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C
// 0x0040 (FullSize[0x04A0] - InheritedSize[0x0460])
class ABP_DestroyableDeploySpikeWall_C : public ABP_DestroyableActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                       // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             ImpalePoint;                                               // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsHandleComponent*                     PhysicsHandle;                                             // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              MinVelocityToTrigger;                                      // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      MinHealthToActivate;                                       // 0x0484(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TN0A[0x3];                                     // 0x0485(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   ImpalementSound;                                           // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VelocityDamageFactor;                                      // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HorseDamageFactor;                                         // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 PlanterController;                                         // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C");
		return ptr;
	}



	void HandleCollision(class AAdvancedCharacter* Char, float Velocity, float DamageFactor);
	void Impale(class AAdvancedCharacter* Character);
	void OnUsedToKillOther(class AAdvancedCharacter* Character, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnReplicatedHealthChanged();
	void ExecuteUbergraph_BP_DestroyableDeploySpikeWall(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

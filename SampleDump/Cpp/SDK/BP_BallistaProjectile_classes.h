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

// BlueprintGeneratedClass BP_BallistaProjectile.BP_BallistaProjectile_C
// 0x0015 (FullSize[0x07E9] - InheritedSize[0x07D4])
class ABP_BallistaProjectile_C : public ABP_MordhauProjectile_C
{
public:
	unsigned char                                      UnknownData_0M83[0x4];                                     // 0x07D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPhysicsHandleComponent*                     PhysicsHandle;                                             // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               DoNotAttachToPawns;                                        // 0x07E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_BallistaProjectile.BP_BallistaProjectile_C");
		return ptr;
	}



	bool AttachProjectile(const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void OnUsedToKillOther(class AAdvancedCharacter* Character, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source);
	void OnPostDismemberedOther(const struct FName& bone, class ASeparatedBodyPart* Part);
	void OnProjectileHit(const struct FVector& HitLocation, const struct FVector& HitNormal, float BounceForce, unsigned char Surface, bool bHasHitWorld, bool bHasStopped);
	void ExecuteUbergraph_BP_BallistaProjectile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

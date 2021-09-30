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

// BlueprintGeneratedClass BP_ThrownWeaponProjectile.BP_ThrownWeaponProjectile_C
// 0x000C (FullSize[0x07D0] - InheritedSize[0x07C4])
class ABP_ThrownWeaponProjectile_C : public ABP_MordhauProjectile_C
{
public:
	unsigned char                                      UnknownData_JI6P[0x4];                                     // 0x07C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ThrownWeaponProjectile.BP_ThrownWeaponProjectile_C");
		return ptr;
	}



	void OnProjectileHit(const struct FVector& HitLocation, const struct FVector& HitNormal, float BounceForce, unsigned char Surface, bool bHasHitWorld, bool bHasStopped);
	void ExecuteUbergraph_BP_ThrownWeaponProjectile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

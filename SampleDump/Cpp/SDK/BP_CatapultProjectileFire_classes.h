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

// BlueprintGeneratedClass BP_CatapultProjectileFire.BP_CatapultProjectileFire_C
// 0x0008 (FullSize[0x07D8] - InheritedSize[0x07D0])
class ABP_CatapultProjectileFire_C : public ABP_CatapultProjectile_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_CatapultProjectileFire.BP_CatapultProjectileFire_C");
		return ptr;
	}



	void OnProjectileHit(const struct FVector& HitLocation, const struct FVector& HitNormal, float BounceForce, unsigned char Surface, bool bHasHitWorld, bool bHasStopped);
	void ExecuteUbergraph_BP_CatapultProjectileFire(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

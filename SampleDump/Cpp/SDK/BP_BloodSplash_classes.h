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

// BlueprintGeneratedClass BP_BloodSplash.BP_BloodSplash_C
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class ABP_BloodSplash_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_BloodSplash.BP_BloodSplash_C");
		return ptr;
	}



	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat);
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_3_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem);
	void ExecuteUbergraph_BP_BloodSplash(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

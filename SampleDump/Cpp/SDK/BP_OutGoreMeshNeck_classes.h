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

// BlueprintGeneratedClass BP_OutGoreMeshNeck.BP_OutGoreMeshNeck_C
// 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
class ABP_OutGoreMeshNeck_C : public ABP_BaseGoreMesh_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_OutGoreMeshNeck.BP_OutGoreMeshNeck_C");
		return ptr;
	}



	void BndEvt__Particle_K2Node_ComponentBoundEvent_0_ParticleCollisionSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat);
	void ExecuteUbergraph_BP_OutGoreMeshNeck(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

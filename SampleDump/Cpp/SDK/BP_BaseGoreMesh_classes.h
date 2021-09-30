﻿#pragma once

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

// BlueprintGeneratedClass BP_BaseGoreMesh.BP_BaseGoreMesh_C
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class ABP_BaseGoreMesh_C : public AGoreActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Particle;                                                  // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseGoreMesh.BP_BaseGoreMesh_C");
		return ptr;
	}



	void UserConstructionScript();
	void BndEvt__Particle_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem);
	void ExecuteUbergraph_BP_BaseGoreMesh(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_LocalInteractableChest.BP_LocalInteractableChest_C
// 0x0028 (FullSize[0x03D8] - InheritedSize[0x03B0])
class ABP_LocalInteractableChest_C : public ABP_LocalCooldownInteractable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio;                                                     // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        ContentsMesh;                                              // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      BoxMesh;                                                   // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_LocalInteractableChest.BP_LocalInteractableChest_C");
		return ptr;
	}



	void Refilled();
	void Depleted();
	void ExecuteUbergraph_BP_LocalInteractableChest(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

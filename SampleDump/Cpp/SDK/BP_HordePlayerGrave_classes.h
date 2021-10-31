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

// BlueprintGeneratedClass BP_HordePlayerGrave.BP_HordePlayerGrave_C
// 0x0040 (FullSize[0x03B8] - InheritedSize[0x0378])
class ABP_HordePlayerGrave_C : public AMordhauActor
{
public:
	unsigned char                                      UnknownData_HG8A[0x8];                                     // 0x0378(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMordhauWidgetComponent*                     MordhauWidget;                                             // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh1;                                               // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AMordhauPlayerState*                         AssociatedPlayerState;                                     // 0x03A0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ReplicatedLifeSpanSeconds;                                 // 0x03A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VVZE[0x3];                                     // 0x03A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RevivePeriod;                                              // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BeingInteractedWith;                                       // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PCZ3[0x3];                                     // 0x03B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PreviousRevivedCount;                                      // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordePlayerGrave.BP_HordePlayerGrave_C");
		return ptr;
	}



	void OnRep_AssociatedPlayerState();
	bool CanInteract(class AMordhauCharacter* Character);
	void ReceiveTick(float DeltaSeconds);
	void OnHeldInteractionStart(class AMordhauCharacter* Character);
	void OnInteractionMaintained(class AMordhauCharacter* Character);
	void ExecuteUbergraph_BP_HordePlayerGrave(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_HordeGameState.BP_HordeGameState_C
// 0x002F (FullSize[0x08B7] - InheritedSize[0x0888])
class ABP_HordeGameState_C : public ABP_MordhauGameState_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0888(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSTRUCT_HordeMatchInfo                      ReplicatedHordeMatchInfo;                                  // 0x0890(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RPG2[0x4];                                     // 0x089C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              Purchasables;                                              // 0x08A0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                PurchasableIndex;                                          // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      LastReplicatedEnemiesRemaining;                            // 0x08B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ShowIconsForEnemiesNumber;                                 // 0x08B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      LastSpawnedEnemies;                                        // 0x08B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeGameState.BP_HordeGameState_C");
		return ptr;
	}



	void ShouldHideSpawnInfoText(bool* Hide);
	void OnRep_ReplicatedHordeMatchInfo();
	void UpdateNextPurchasableVisuals();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void HandleMatchEndInfo();
	void ExecuteUbergraph_BP_HordeGameState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

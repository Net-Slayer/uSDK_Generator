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

// BlueprintGeneratedClass BP_HordeKillObjective.BP_HordeKillObjective_C
// 0x00F8 (FullSize[0x13B0] - InheritedSize[0x12B8])
class ABP_HordeKillObjective_C : public ABP_MordhauCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x12B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMordhauWidgetComponent*                     MordhauWidget;                                             // 0x12C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              EquipmentToSpawn;                                          // 0x12C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                CurrentPatrolIdx;                                          // 0x12D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4TI0[0x4];                                     // 0x12DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABP_FrontlinePatrolPoint_C*>          PatrolPoints;                                              // 0x12E0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	class UClass*                                      BehaviorProfile;                                           // 0x12F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FrontlinePatrolPoint_C*                  HomePoint;                                                 // 0x12F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EngagementDistance2DFromHomePoint;                         // 0x1300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      DefenseUpgrades;                                           // 0x1304(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      OffenseUpgrades;                                           // 0x1305(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V0VL[0x2];                                     // 0x1306(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, class UClass*>                           WaveToEquipmentMap;                                        // 0x1308(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int, struct FCharacterProfile>                DefenseLevelToProfileMap;                                  // 0x1358(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AMordhauEquipment*                           LastSpawnedEquipment;                                      // 0x13A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeKillObjective.BP_HordeKillObjective_C");
		return ptr;
	}



	void OnWaveProgressed(int NewWave);
	void OnRep_OffenseUpgrades();
	void OnRep_DefenseUpgrades();
	void SpawnOurEquipment();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnDied(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	void OnHealthChanged();
	void ExecuteUbergraph_BP_HordeKillObjective(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

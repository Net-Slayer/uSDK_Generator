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

// BlueprintGeneratedClass BP_HordeGameMode.BP_HordeGameMode_C
// 0x0220 (FullSize[0x07E8] - InheritedSize[0x05C8])
class ABP_HordeGameMode_C : public ABP_MordhauGameMode_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ABP_HordeAIController_C*>             AIControllers;                                             // 0x05D0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class ABP_HordeSpawn_C*>                    HordeSpawns;                                               // 0x05E0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                Wave;                                                      // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasStarted;                                                // 0x05F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AGKB[0x3];                                     // 0x05F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WaveStartTime;                                             // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaveEnemySpawnOffset;                                      // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WaveHasSpawned;                                            // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XKM9[0x7];                                     // 0x0601(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSTRUCT_HordeWaveInfo>               Waves;                                                     // 0x0608(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AAdvancedCharacter*>                  SpawnedEnemies;                                            // 0x0618(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                EnemiesRemaining;                                          // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5XV9[0x4];                                     // 0x062C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, struct FSTRUCT_HordeEnemyInfo>  EnemyDatabase;                                             // 0x0630(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DeadWaveCompletionMultiplier;                              // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TeamKillCoinPunishment;                                    // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 ReceivedDamageByPlayerNum;                                 // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HordeGameConfiguration_C*                HordeGameConfiguration;                                    // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HordeKillObjective_C*                    KillObjectiveCached;                                       // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_HordeTask_C*>                     HordeTasks;                                                // 0x06A0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                TotalAwardedGoldPerPlayer;                                 // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O796[0x4];                                     // 0x06B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      LeaverPlayFabIDs[0x50];                                    // 0x06B4(0x0050) UNKNOWN PROPERTY: SetProperty
	float                                              NewPlayerOnJoinGoldMultiplier;                             // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxNewPlayerOnJoinGold;                                    // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FName, struct FArrayOfActor>           EnemyVariantCustomizationActor;                            // 0x0710(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSTRUCT_HordeSquadWaveInfo>          SquadWaves;                                                // 0x0760(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class USquadInfo*>                          SquadsToSpawnInWave;                                       // 0x0770(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSTRUCT_HordeWaveSpawningData               WaveSpawningData;                                          // 0x0780(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsSquadSpawningEnabled;                                    // 0x07B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_75MP[0x7];                                     // 0x07B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USquadInfo*>                          SquadDatabase;                                             // 0x07C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              MinPlayerDifficultyModifier;                               // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxPlayerDifficultyModifier;                               // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxEnemiesInWave;                                          // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinPlayerDelayModifier;                                    // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxPlayerDelayModifier;                                    // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EnemiesSpawned;                                            // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeGameMode.BP_HordeGameMode_C");
		return ptr;
	}



	void GetSpawnDelayRatio(float* DelayModifier, int* AmountOfPlayers);
	void GetDifficultyRatio(float* DifficultyModifier, int* AmountOfPlayers);
	void Sort_by_Squad_Difficulty(class UObject* ObjA, class UObject* ObjB, bool* RetVal);
	void ClearSquadWaveSpawningData();
	void SpawnSquad(class USquadInfo* SquadToSpawn, float DefaultDelay, float ModifiedDelay);
	void Generate_Squads_in_Wave();
	void Find_Squad(float MinDifficulty, class USquadInfo** SquadInfo);
	void SpawnSquadWave();
	void HandlePostLogin(class APlayerController* Controller);
	void TriggerDefeat();
	void SpawnEquipmentFor(TArray<class UClass*>* EquipList, class AMordhauCharacter* Char);
	void PrepareAIControllers();
	void SetupCustomizationReplicationActors();
	void ProgressWave();
	void StartHordeMatch();
	void SpawnWave();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnKilled(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, Mordhau_EMordhauDamageType Type, unsigned char SubType, class AActor* DamageSource, class AActor* DamageAgent);
	void K2_PostLogin(class APlayerController* NewPlayer);
	void K2_OnLogout(class AController* ExitingController);
	void ExecuteUbergraph_BP_HordeGameMode(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

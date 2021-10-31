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

// BlueprintGeneratedClass BP_FrontlineKillObjective.BP_FrontlineKillObjective_C
// 0x0150 (FullSize[0x1408] - InheritedSize[0x12B8])
class ABP_FrontlineKillObjective_C : public ABP_MordhauCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x12B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMordhauWidgetComponent*                     MordhauWidget;                                             // 0x12C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FCharacterProfile                           ProfileToAssign;                                           // 0x12C8(0x00B8) (Edit, BlueprintVisible)
	float                                              OriginalReceivedDamageModifier;                            // 0x1380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NYOV[0x4];                                     // 0x1384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_CapturePoint_C*                          Point;                                                     // 0x1388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              EquipmentToSpawn;                                          // 0x1390(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	int                                                CurrentPatrolIdx;                                          // 0x13A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_USLX[0x4];                                     // 0x13A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABP_FrontlinePatrolPoint_C*>          PatrolPoints;                                              // 0x13A8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	class UClass*                                      BehaviorProfile;                                           // 0x13B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScorePerDamageMultiplier;                                  // 0x13C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AwardedKillPoints;                                         // 0x13C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JTGC[0x3];                                     // 0x13C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ScorePerKill;                                              // 0x13C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EngagementDistance2DFromHomePoint;                         // 0x13CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OfferPlayersToPossess;                                     // 0x13D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KYKG[0x3];                                     // 0x13D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentCandidateTimeLeft;                                  // 0x13D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_FrontlinePlayerController_C*>     CandidatesForPossess;                                      // 0x13D8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              CandidateTimeToDecline;                                    // 0x13E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ObjectiveWasCompleted;                                     // 0x13EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Destroyed;                                                 // 0x13ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2Y12[0x2];                                     // 0x13EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DefaultKnockbackFlinch;                                    // 0x13F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultKnockbackClash;                                     // 0x13F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultKnockbackParry;                                     // 0x13F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultKnockbackWorld;                                     // 0x13FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FrontlinePatrolPoint_C*                  HomePoint;                                                 // 0x1400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlineKillObjective.BP_FrontlineKillObjective_C");
		return ptr;
	}



	void IsInObjectiveArea(const struct FVector& Location, bool* InArea);
	void IsCompleted(bool* Completed);
	void GetObjectiveProgress(float* Progress);
	void AwardScorePointsIfApplicable(class AController* Instigator, int Points);
	void CompileCandidatesList();
	void IsCandidateValidForPossession(class ABP_FrontlinePlayerController_C* Candidate, bool* Valid);
	void NotifyCandidateForPossession();
	void UpdateUIWidgets();
	void SpawnOurEquipment();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnEnemyGainedPrerequisites();
	void OnEnemyLostPrerequisites();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnInitialize(class ABP_CapturePoint_C* Point);
	void OnDied(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	void OnUpdateUIWidgets();
	void OnHealthChanged();
	void BPLODTick(float DeltaTime);
	void OnAnyObjectiveProgressChanged();
	void MoveBlockedBySlow(const struct FHitResult& Impact);
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_FrontlineKillObjective(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

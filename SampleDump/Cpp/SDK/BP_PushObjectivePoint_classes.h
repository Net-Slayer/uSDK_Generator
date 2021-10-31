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

// BlueprintGeneratedClass BP_PushObjectivePoint.BP_PushObjectivePoint_C
// 0x0080 (FullSize[0x04B8] - InheritedSize[0x0438])
class ABP_PushObjectivePoint_C : public ABP_CapturePoint_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TimeBoostOnCapture;                                        // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GU4G[0x4];                                     // 0x0444(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       AnnouncementAttackersText;                                 // 0x0448(0x0018) (Edit, BlueprintVisible)
	struct FText                                       AnnouncementDefendersText;                                 // 0x0460(0x0018) (Edit, BlueprintVisible)
	TArray<class ABP_PushSpawnProtectionBox_C*>        Team1SpawnProtection;                                      // 0x0478(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class ABP_PushSpawnProtectionBox_C*>        Team2SpawnProtection;                                      // 0x0488(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class ABP_VehicleSpawner_C*>                SpawnsToActivateOnCompletion;                              // 0x0498(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class ABP_VehicleSpawner_C*>                SpawnsToDeactivateOnCompletion;                            // 0x04A8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PushObjectivePoint.BP_PushObjectivePoint_C");
		return ptr;
	}



	void UpdateSpawnProtection();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void EnemyGainedPrerequisites();
	void OnOwningTeamChanged();
	void ShowPushAttackerAnnouncement();
	void ShowPushDefenderAnnouncement();
	void OnObjectivesCompleted();
	void ExecuteUbergraph_BP_PushObjectivePoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_FrontlineGameState.BP_FrontlineGameState_C
// 0x0058 (FullSize[0x08E0] - InheritedSize[0x0888])
class ABP_FrontlineGameState_C : public ABP_MordhauGameState_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0888(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TicketDrainInterval;                                       // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GVF1[0x4];                                     // 0x0894(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        LivingPlayersPerTeam;                                      // 0x0898(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              TicketDrainCounter;                                        // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TicketDrainAmount;                                         // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Team1StartingTickets;                                      // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Team2StartingTickets;                                      // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPushMode;                                                // 0x08B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DUR3[0x3];                                     // 0x08B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StageEndTime;                                              // 0x08BC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      AttackingTeam;                                             // 0x08C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      DefendingTeam;                                             // 0x08C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9D9N[0x2];                                     // 0x08C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InitialStageTime;                                          // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AllObjectivesCompletedTime;                                // 0x08C8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PushWinDelay;                                              // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_DeployableSpawn_C*>               DeployableSpawns;                                          // 0x08D0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlineGameState.BP_FrontlineGameState_C");
		return ptr;
	}



	void DrainTickets(class ABP_MordhauGameMode_C* GameMode);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void HandleMatchEndInfo();
	void LocalPlayerChangedTeam();
	void TriggerWinDelayed();
	void ExecuteUbergraph_BP_FrontlineGameState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

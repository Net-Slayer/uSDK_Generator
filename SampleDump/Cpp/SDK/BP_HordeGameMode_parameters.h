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
// Parameters
//---------------------------------------------------------------------------

// Function BP_HordeGameMode.BP_HordeGameMode_C.GetSpawnDelayRatio
struct ABP_HordeGameMode_C_GetSpawnDelayRatio_Params
{
	float                                              DelayModifier;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AmountOfPlayers;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.GetDifficultyRatio
struct ABP_HordeGameMode_C_GetDifficultyRatio_Params
{
	float                                              DifficultyModifier;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AmountOfPlayers;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.Sort by Squad Difficulty
struct ABP_HordeGameMode_C_Sort_by_Squad_Difficulty_Params
{
	class UObject*                                     ObjA;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ObjB;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RetVal;                                                    // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.ClearSquadWaveSpawningData
struct ABP_HordeGameMode_C_ClearSquadWaveSpawningData_Params
{
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.SpawnSquad
struct ABP_HordeGameMode_C_SpawnSquad_Params
{
	class USquadInfo*                                  SquadToSpawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultDelay;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ModifiedDelay;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.Generate Squads in Wave
struct ABP_HordeGameMode_C_Generate_Squads_in_Wave_Params
{
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.Find Squad
struct ABP_HordeGameMode_C_Find_Squad_Params
{
	float                                              MinDifficulty;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USquadInfo*                                  SquadInfo;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.SpawnSquadWave
struct ABP_HordeGameMode_C_SpawnSquadWave_Params
{
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.HandlePostLogin
struct ABP_HordeGameMode_C_HandlePostLogin_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.TriggerDefeat
struct ABP_HordeGameMode_C_TriggerDefeat_Params
{
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.SpawnEquipmentFor
struct ABP_HordeGameMode_C_SpawnEquipmentFor_Params
{
	TArray<class UClass*>                              EquipList;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class AMordhauCharacter*                           Char;                                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.PrepareAIControllers
struct ABP_HordeGameMode_C_PrepareAIControllers_Params
{
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.SetupCustomizationReplicationActors
struct ABP_HordeGameMode_C_SetupCustomizationReplicationActors_Params
{
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.ProgressWave
struct ABP_HordeGameMode_C_ProgressWave_Params
{
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.StartHordeMatch
struct ABP_HordeGameMode_C_StartHordeMatch_Params
{
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.SpawnWave
struct ABP_HordeGameMode_C_SpawnWave_Params
{
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.ReceiveBeginPlay
struct ABP_HordeGameMode_C_ReceiveBeginPlay_Params
{
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.ReceiveTick
struct ABP_HordeGameMode_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.OnKilled
struct ABP_HordeGameMode_C_OnKilled_Params
{
	class AController*                                 Killer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 KilledPlayer;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       KilledPawn;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SubType;                                                   // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageSource;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageAgent;                                               // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.K2_PostLogin
struct ABP_HordeGameMode_C_K2_PostLogin_Params
{
	class APlayerController*                           NewPlayer;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.K2_OnLogout
struct ABP_HordeGameMode_C_K2_OnLogout_Params
{
	class AController*                                 ExitingController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeGameMode.BP_HordeGameMode_C.ExecuteUbergraph_BP_HordeGameMode
struct ABP_HordeGameMode_C_ExecuteUbergraph_BP_HordeGameMode_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

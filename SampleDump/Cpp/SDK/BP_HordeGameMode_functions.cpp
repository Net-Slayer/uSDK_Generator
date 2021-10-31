// Name: Mordhau, Version: Patch23

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.GetSpawnDelayRatio
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DelayModifier                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                AmountOfPlayers                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeGameMode_C::GetSpawnDelayRatio(float* DelayModifier, int* AmountOfPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.GetSpawnDelayRatio");

	ABP_HordeGameMode_C_GetSpawnDelayRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DelayModifier != nullptr)
		*DelayModifier = params.DelayModifier;
	if (AmountOfPlayers != nullptr)
		*AmountOfPlayers = params.AmountOfPlayers;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.GetDifficultyRatio
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DifficultyModifier                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                AmountOfPlayers                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeGameMode_C::GetDifficultyRatio(float* DifficultyModifier, int* AmountOfPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.GetDifficultyRatio");

	ABP_HordeGameMode_C_GetDifficultyRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DifficultyModifier != nullptr)
		*DifficultyModifier = params.DifficultyModifier;
	if (AmountOfPlayers != nullptr)
		*AmountOfPlayers = params.AmountOfPlayers;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.Sort by Squad Difficulty
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     ObjA                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     ObjB                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               RetVal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HordeGameMode_C::Sort_by_Squad_Difficulty(class UObject* ObjA, class UObject* ObjB, bool* RetVal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.Sort by Squad Difficulty");

	ABP_HordeGameMode_C_Sort_by_Squad_Difficulty_Params params;
	params.ObjA = ObjA;
	params.ObjB = ObjB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RetVal != nullptr)
		*RetVal = params.RetVal;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.ClearSquadWaveSpawningData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_HordeGameMode_C::ClearSquadWaveSpawningData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.ClearSquadWaveSpawningData");

	ABP_HordeGameMode_C_ClearSquadWaveSpawningData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.SpawnSquad
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USquadInfo*                                  SquadToSpawn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DefaultDelay                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ModifiedDelay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeGameMode_C::SpawnSquad(class USquadInfo* SquadToSpawn, float DefaultDelay, float ModifiedDelay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.SpawnSquad");

	ABP_HordeGameMode_C_SpawnSquad_Params params;
	params.SquadToSpawn = SquadToSpawn;
	params.DefaultDelay = DefaultDelay;
	params.ModifiedDelay = ModifiedDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.Generate Squads in Wave
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeGameMode_C::Generate_Squads_in_Wave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.Generate Squads in Wave");

	ABP_HordeGameMode_C_Generate_Squads_in_Wave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.Find Squad
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              MinDifficulty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USquadInfo*                                  SquadInfo                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeGameMode_C::Find_Squad(float MinDifficulty, class USquadInfo** SquadInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.Find Squad");

	ABP_HordeGameMode_C_Find_Squad_Params params;
	params.MinDifficulty = MinDifficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SquadInfo != nullptr)
		*SquadInfo = params.SquadInfo;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.SpawnSquadWave
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeGameMode_C::SpawnSquadWave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.SpawnSquadWave");

	ABP_HordeGameMode_C_SpawnSquadWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.HandlePostLogin
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeGameMode_C::HandlePostLogin(class APlayerController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.HandlePostLogin");

	ABP_HordeGameMode_C_HandlePostLogin_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.TriggerDefeat
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeGameMode_C::TriggerDefeat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.TriggerDefeat");

	ABP_HordeGameMode_C_TriggerDefeat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.SpawnEquipmentFor
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UClass*>                              EquipList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		class AMordhauCharacter*                           Char                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeGameMode_C::SpawnEquipmentFor(TArray<class UClass*>* EquipList, class AMordhauCharacter* Char)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.SpawnEquipmentFor");

	ABP_HordeGameMode_C_SpawnEquipmentFor_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EquipList != nullptr)
		*EquipList = params.EquipList;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.PrepareAIControllers
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeGameMode_C::PrepareAIControllers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.PrepareAIControllers");

	ABP_HordeGameMode_C_PrepareAIControllers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.SetupCustomizationReplicationActors
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeGameMode_C::SetupCustomizationReplicationActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.SetupCustomizationReplicationActors");

	ABP_HordeGameMode_C_SetupCustomizationReplicationActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.ProgressWave
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeGameMode_C::ProgressWave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.ProgressWave");

	ABP_HordeGameMode_C_ProgressWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.StartHordeMatch
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_HordeGameMode_C::StartHordeMatch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.StartHordeMatch");

	ABP_HordeGameMode_C_StartHordeMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.SpawnWave
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeGameMode_C::SpawnWave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.SpawnWave");

	ABP_HordeGameMode_C_SpawnWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_HordeGameMode_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.ReceiveBeginPlay");

	ABP_HordeGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeGameMode_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.ReceiveTick");

	ABP_HordeGameMode_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.OnKilled
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 KilledPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       KilledPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Mordhau_EMordhauDamageType                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DamageSource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DamageAgent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeGameMode_C::OnKilled(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, Mordhau_EMordhauDamageType Type, unsigned char SubType, class AActor* DamageSource, class AActor* DamageAgent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.OnKilled");

	ABP_HordeGameMode_C_OnKilled_Params params;
	params.Killer = Killer;
	params.KilledPlayer = KilledPlayer;
	params.KilledPawn = KilledPawn;
	params.Type = Type;
	params.SubType = SubType;
	params.DamageSource = DamageSource;
	params.DamageAgent = DamageAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.K2_PostLogin
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class APlayerController*                           NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeGameMode_C::K2_PostLogin(class APlayerController* NewPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.K2_PostLogin");

	ABP_HordeGameMode_C_K2_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.K2_OnLogout
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 ExitingController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeGameMode_C::K2_OnLogout(class AController* ExitingController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.K2_OnLogout");

	ABP_HordeGameMode_C_K2_OnLogout_Params params;
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeGameMode.BP_HordeGameMode_C.ExecuteUbergraph_BP_HordeGameMode
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeGameMode_C::ExecuteUbergraph_BP_HordeGameMode(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeGameMode.BP_HordeGameMode_C.ExecuteUbergraph_BP_HordeGameMode");

	ABP_HordeGameMode_C_ExecuteUbergraph_BP_HordeGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

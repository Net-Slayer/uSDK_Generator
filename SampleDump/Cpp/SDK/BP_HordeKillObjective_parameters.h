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

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnWaveProgressed
struct ABP_HordeKillObjective_C_OnWaveProgressed_Params
{
	int                                                NewWave;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnRep_OffenseUpgrades
struct ABP_HordeKillObjective_C_OnRep_OffenseUpgrades_Params
{
};

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnRep_DefenseUpgrades
struct ABP_HordeKillObjective_C_OnRep_DefenseUpgrades_Params
{
};

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.SpawnOurEquipment
struct ABP_HordeKillObjective_C_SpawnOurEquipment_Params
{
};

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.UserConstructionScript
struct ABP_HordeKillObjective_C_UserConstructionScript_Params
{
};

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.ReceiveBeginPlay
struct ABP_HordeKillObjective_C_ReceiveBeginPlay_Params
{
};

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.ReceiveTick
struct ABP_HordeKillObjective_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnDied
struct ABP_HordeKillObjective_C_OnDied_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SubType;                                                   // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Point;                                                     // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Source;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Agent;                                                     // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnHealthChanged
struct ABP_HordeKillObjective_C_OnHealthChanged_Params
{
};

// Function BP_HordeKillObjective.BP_HordeKillObjective_C.ExecuteUbergraph_BP_HordeKillObjective
struct ABP_HordeKillObjective_C_ExecuteUbergraph_BP_HordeKillObjective_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

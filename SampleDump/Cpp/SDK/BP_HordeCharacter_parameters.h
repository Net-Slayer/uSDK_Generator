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

// Function BP_HordeCharacter.BP_HordeCharacter_C.SaveEquipmentToPlayerState
struct ABP_HordeCharacter_C_SaveEquipmentToPlayerState_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnRep_DivineFavorCounter
struct ABP_HordeCharacter_C_OnRep_DivineFavorCounter_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.AwardHealthOnKillToTeammates
struct ABP_HordeCharacter_C_AwardHealthOnKillToTeammates_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnKilledEnemy
struct ABP_HordeCharacter_C_OnKilledEnemy_Params
{
	class ABP_HordeEnemy_C*                            Enemy;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.SpecialCooldown
struct ABP_HordeCharacter_C_SpecialCooldown_Params
{
	float                                              Duration;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.DoSpecialAbility
struct ABP_HordeCharacter_C_DoSpecialAbility_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Vanish
struct ABP_HordeCharacter_C_Stage2Vanish_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.BeginVanish
struct ABP_HordeCharacter_C_BeginVanish_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Immortality
struct ABP_HordeCharacter_C_Stage2Immortality_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.BeginImmortality
struct ABP_HordeCharacter_C_BeginImmortality_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2DivineFavor
struct ABP_HordeCharacter_C_Stage2DivineFavor_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.BeginDivineFavor
struct ABP_HordeCharacter_C_BeginDivineFavor_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Taunt
struct ABP_HordeCharacter_C_Stage2Taunt_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.BeginTaunt
struct ABP_HordeCharacter_C_BeginTaunt_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Shockwave
struct ABP_HordeCharacter_C_Stage2Shockwave_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Hookshot
struct ABP_HordeCharacter_C_Stage2Hookshot_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.BeginShockwave
struct ABP_HordeCharacter_C_BeginShockwave_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.BeginHookshot
struct ABP_HordeCharacter_C_BeginHookshot_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.ModifyDamage
struct ABP_HordeCharacter_C_ModifyDamage_Params
{
	float                                              DamageAmount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMordhauDamageInfo                          DamageInfo;                                                // 0x0008(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	class AController*                                 EventInstigator;                                           // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x00B8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.ApplySkillsToEquipment
struct ABP_HordeCharacter_C_ApplySkillsToEquipment_Params
{
	class AMordhauEquipment*                           Equip;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.ModifyOutgoingDamage
struct ABP_HordeCharacter_C_ModifyOutgoingDamage_Params
{
	class AActor*                                      Receiver;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Mordhau_EMordhauDamageType                         DamageType;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitInfo;                                                   // 0x000C(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                      Agent;                                                     // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InDamage;                                                  // 0x00A0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OutDamage;                                                 // 0x00A4(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.GetSkillFloat
struct ABP_HordeCharacter_C_GetSkillFloat_Params
{
	TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.RoundEnded
struct ABP_HordeCharacter_C_RoundEnded_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.ApplySkills
struct ABP_HordeCharacter_C_ApplySkills_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.GetSkill
struct ABP_HordeCharacter_C_GetSkill_Params
{
	TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Level;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnRep_ReplicatedSkills
struct ABP_HordeCharacter_C_OnRep_ReplicatedSkills_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.ReceiveBeginPlay
struct ABP_HordeCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnDied
struct ABP_HordeCharacter_C_OnDied_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SubType;                                                   // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Point;                                                     // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Source;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Agent;                                                     // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnArmorReplicated
struct ABP_HordeCharacter_C_OnArmorReplicated_Params
{
	Mordhau_EWearableSlot                              Slot;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnKilled
struct ABP_HordeCharacter_C_OnKilled_Params
{
	class AController*                                 EventInstigator;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnPickedUp
struct ABP_HordeCharacter_C_OnPickedUp_Params
{
	class AMordhauEquipment*                           Eq;                                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnBlockedMelee
struct ABP_HordeCharacter_C_OnBlockedMelee_Params
{
	struct FHitResult                                  HitResult;                                                 // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AMordhauCharacter*                           Attacker;                                                  // 0x0088(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.OnAttackStarted
struct ABP_HordeCharacter_C_OnAttackStarted_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.TriggerImmortality
struct ABP_HordeCharacter_C_TriggerImmortality_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.Unvanish
struct ABP_HordeCharacter_C_Unvanish_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.ReceiveDestroyed
struct ABP_HordeCharacter_C_ReceiveDestroyed_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.RegenerationTick
struct ABP_HordeCharacter_C_RegenerationTick_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.MaintenanceTick
struct ABP_HordeCharacter_C_MaintenanceTick_Params
{
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.RequestVolley
struct ABP_HordeCharacter_C_RequestVolley_Params
{
	struct FRotator                                    Aim;                                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeCharacter.BP_HordeCharacter_C.ExecuteUbergraph_BP_HordeCharacter
struct ABP_HordeCharacter_C_ExecuteUbergraph_BP_HordeCharacter_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

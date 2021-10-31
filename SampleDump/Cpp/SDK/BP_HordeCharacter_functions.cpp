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
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.SaveEquipmentToPlayerState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeCharacter_C::SaveEquipmentToPlayerState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.SaveEquipmentToPlayerState");

	ABP_HordeCharacter_C_SaveEquipmentToPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.OnRep_DivineFavorCounter
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeCharacter_C::OnRep_DivineFavorCounter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.OnRep_DivineFavorCounter");

	ABP_HordeCharacter_C_OnRep_DivineFavorCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.AwardHealthOnKillToTeammates
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeCharacter_C::AwardHealthOnKillToTeammates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.AwardHealthOnKillToTeammates");

	ABP_HordeCharacter_C_AwardHealthOnKillToTeammates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.OnKilledEnemy
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_HordeEnemy_C*                            Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeCharacter_C::OnKilledEnemy(class ABP_HordeEnemy_C* Enemy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.OnKilledEnemy");

	ABP_HordeCharacter_C_OnKilledEnemy_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.SpecialCooldown
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeCharacter_C::SpecialCooldown(float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.SpecialCooldown");

	ABP_HordeCharacter_C_SpecialCooldown_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.DoSpecialAbility
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HordeCharacter_C::DoSpecialAbility(bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.DoSpecialAbility");

	ABP_HordeCharacter_C_DoSpecialAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Vanish
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeCharacter_C::Stage2Vanish()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Vanish");

	ABP_HordeCharacter_C_Stage2Vanish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.BeginVanish
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeCharacter_C::BeginVanish()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.BeginVanish");

	ABP_HordeCharacter_C_BeginVanish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Immortality
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeCharacter_C::Stage2Immortality()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Immortality");

	ABP_HordeCharacter_C_Stage2Immortality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.BeginImmortality
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeCharacter_C::BeginImmortality()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.BeginImmortality");

	ABP_HordeCharacter_C_BeginImmortality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2DivineFavor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeCharacter_C::Stage2DivineFavor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2DivineFavor");

	ABP_HordeCharacter_C_Stage2DivineFavor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.BeginDivineFavor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeCharacter_C::BeginDivineFavor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.BeginDivineFavor");

	ABP_HordeCharacter_C_BeginDivineFavor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Taunt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeCharacter_C::Stage2Taunt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Taunt");

	ABP_HordeCharacter_C_Stage2Taunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.BeginTaunt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeCharacter_C::BeginTaunt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.BeginTaunt");

	ABP_HordeCharacter_C_BeginTaunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Shockwave
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeCharacter_C::Stage2Shockwave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Shockwave");

	ABP_HordeCharacter_C_Stage2Shockwave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Hookshot
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeCharacter_C::Stage2Hookshot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.Stage2Hookshot");

	ABP_HordeCharacter_C_Stage2Hookshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.BeginShockwave
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeCharacter_C::BeginShockwave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.BeginShockwave");

	ABP_HordeCharacter_C_BeginShockwave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.BeginHookshot
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeCharacter_C::BeginHookshot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.BeginHookshot");

	ABP_HordeCharacter_C_BeginHookshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.ModifyDamage
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DamageAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FMordhauDamageInfo                          DamageInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
//		class AController*                                 EventInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_HordeCharacter_C::ModifyDamage(float DamageAmount, const struct FMordhauDamageInfo& DamageInfo, class AController* EventInstigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.ModifyDamage");

	ABP_HordeCharacter_C_ModifyDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageInfo = DamageInfo;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.ApplySkillsToEquipment
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauEquipment*                           Equip                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeCharacter_C::ApplySkillsToEquipment(class AMordhauEquipment* Equip)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.ApplySkillsToEquipment");

	ABP_HordeCharacter_C_ApplySkillsToEquipment_Params params;
	params.Equip = Equip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.ModifyOutgoingDamage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Receiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Mordhau_EMordhauDamageType                         DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  HitInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		class AActor*                                      Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InDamage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OutDamage                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeCharacter_C::ModifyOutgoingDamage(class AActor* Receiver, Mordhau_EMordhauDamageType DamageType, struct FHitResult* HitInfo, class AActor* Agent, float InDamage, float* OutDamage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.ModifyOutgoingDamage");

	ABP_HordeCharacter_C_ModifyOutgoingDamage_Params params;
	params.Receiver = Receiver;
	params.DamageType = DamageType;
	params.Agent = Agent;
	params.InDamage = InDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;
	if (OutDamage != nullptr)
		*OutDamage = params.OutDamage;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.GetSkillFloat
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeCharacter_C::GetSkillFloat(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill, float* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.GetSkillFloat");

	ABP_HordeCharacter_C_GetSkillFloat_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.RoundEnded
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeCharacter_C::RoundEnded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.RoundEnded");

	ABP_HordeCharacter_C_RoundEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.ApplySkills
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeCharacter_C::ApplySkills()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.ApplySkills");

	ABP_HordeCharacter_C_ApplySkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.GetSkill
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      Level                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeCharacter_C::GetSkill(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill, unsigned char* Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.GetSkill");

	ABP_HordeCharacter_C_GetSkill_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Level != nullptr)
		*Level = params.Level;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.OnRep_ReplicatedSkills
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_HordeCharacter_C::OnRep_ReplicatedSkills()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.OnRep_ReplicatedSkills");

	ABP_HordeCharacter_C_OnRep_ReplicatedSkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_HordeCharacter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.ReceiveBeginPlay");

	ABP_HordeCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.OnDied
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Mordhau_EMordhauDamageType                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeCharacter_C::OnDied(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.OnDied");

	ABP_HordeCharacter_C_OnDied_Params params;
	params.Angle = Angle;
	params.Type = Type;
	params.SubType = SubType;
	params.bone = bone;
	params.Point = Point;
	params.Source = Source;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.OnArmorReplicated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Mordhau_EWearableSlot                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeCharacter_C::OnArmorReplicated(Mordhau_EWearableSlot Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.OnArmorReplicated");

	ABP_HordeCharacter_C_OnArmorReplicated_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.OnKilled
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 EventInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeCharacter_C::OnKilled(class AController* EventInstigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.OnKilled");

	ABP_HordeCharacter_C_OnKilled_Params params;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.OnPickedUp
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AMordhauEquipment*                           Eq                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeCharacter_C::OnPickedUp(class AMordhauEquipment* Eq)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.OnPickedUp");

	ABP_HordeCharacter_C_OnPickedUp_Params params;
	params.Eq = Eq;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.OnBlockedMelee
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		class AMordhauCharacter*                           Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeCharacter_C::OnBlockedMelee(const struct FHitResult& HitResult, class AMordhauCharacter* Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.OnBlockedMelee");

	ABP_HordeCharacter_C_OnBlockedMelee_Params params;
	params.HitResult = HitResult;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.OnAttackStarted
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_HordeCharacter_C::OnAttackStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.OnAttackStarted");

	ABP_HordeCharacter_C_OnAttackStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.TriggerImmortality
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_HordeCharacter_C::TriggerImmortality()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.TriggerImmortality");

	ABP_HordeCharacter_C_TriggerImmortality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.Unvanish
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_HordeCharacter_C::Unvanish()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.Unvanish");

	ABP_HordeCharacter_C_Unvanish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.ReceiveDestroyed
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_HordeCharacter_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.ReceiveDestroyed");

	ABP_HordeCharacter_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.RegenerationTick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_HordeCharacter_C::RegenerationTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.RegenerationTick");

	ABP_HordeCharacter_C_RegenerationTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.MaintenanceTick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_HordeCharacter_C::MaintenanceTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.MaintenanceTick");

	ABP_HordeCharacter_C_MaintenanceTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.RequestVolley
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FRotator                                    Aim                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeCharacter_C::RequestVolley(const struct FRotator& Aim, const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.RequestVolley");

	ABP_HordeCharacter_C_RequestVolley_Params params;
	params.Aim = Aim;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeCharacter.BP_HordeCharacter_C.ExecuteUbergraph_BP_HordeCharacter
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeCharacter_C::ExecuteUbergraph_BP_HordeCharacter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeCharacter.BP_HordeCharacter_C.ExecuteUbergraph_BP_HordeCharacter");

	ABP_HordeCharacter_C_ExecuteUbergraph_BP_HordeCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

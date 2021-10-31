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
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.AttemptClimb
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Succeeded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HordeEnemy_C::AttemptClimb(bool* Succeeded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.AttemptClimb");

	ABP_HordeEnemy_C_AttemptClimb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.HandleObstructionRemoval
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  Impact                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_HordeEnemy_C::HandleObstructionRemoval(const struct FHitResult& Impact)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.HandleObstructionRemoval");

	ABP_HordeEnemy_C_HandleObstructionRemoval_Params params;
	params.Impact = Impact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.OnRep_StunnedBySkillCounter
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_HordeEnemy_C::OnRep_StunnedBySkillCounter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.OnRep_StunnedBySkillCounter");

	ABP_HordeEnemy_C_OnRep_StunnedBySkillCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.GetEnragedTarget
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           OutTarget                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeEnemy_C::GetEnragedTarget(class AMordhauCharacter** OutTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.GetEnragedTarget");

	ABP_HordeEnemy_C_GetEnragedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutTarget != nullptr)
		*OutTarget = params.OutTarget;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.ModifyParryResult
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		class AMordhauCharacter*                           Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HordeEnemy_C::ModifyParryResult(bool InResult, const struct FHitResult& HitResult, class AMordhauCharacter* Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.ModifyParryResult");

	ABP_HordeEnemy_C_ModifyParryResult_Params params;
	params.InResult = InResult;
	params.HitResult = HitResult;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.ModifyDamage
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DamageAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FMordhauDamageInfo                          DamageInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
//		class AController*                                 EventInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_HordeEnemy_C::ModifyDamage(float DamageAmount, const struct FMordhauDamageInfo& DamageInfo, class AController* EventInstigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.ModifyDamage");

	ABP_HordeEnemy_C_ModifyDamage_Params params;
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
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_HordeEnemy_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.ReceiveBeginPlay");

	ABP_HordeEnemy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.OnDied
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Mordhau_EMordhauDamageType                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeEnemy_C::OnDied(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.OnDied");

	ABP_HordeEnemy_C_OnDied_Params params;
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
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.MoveBlockedBySlow
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  Impact                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_HordeEnemy_C::MoveBlockedBySlow(const struct FHitResult& Impact)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.MoveBlockedBySlow");

	ABP_HordeEnemy_C_MoveBlockedBySlow_Params params;
	params.Impact = Impact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.CompleteTask
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_HordeEnemy_C::CompleteTask()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.CompleteTask");

	ABP_HordeEnemy_C_CompleteTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.ReceiveMordhauDamage
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		Mordhau_EMordhauDamageType                         DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      SubDamageType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 EventInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeEnemy_C::ReceiveMordhauDamage(float Damage, const struct FHitResult& HitResult, Mordhau_EMordhauDamageType DamageType, unsigned char SubDamageType, class AActor* Source, class AActor* Agent, class AController* EventInstigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.ReceiveMordhauDamage");

	ABP_HordeEnemy_C_ReceiveMordhauDamage_Params params;
	params.Damage = Damage;
	params.HitResult = HitResult;
	params.DamageType = DamageType;
	params.SubDamageType = SubDamageType;
	params.Source = Source;
	params.Agent = Agent;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.LegSweep
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_HordeEnemy_C::LegSweep()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.LegSweep");

	ABP_HordeEnemy_C_LegSweep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.OnBlockedMelee
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		class AMordhauCharacter*                           Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeEnemy_C::OnBlockedMelee(const struct FHitResult& HitResult, class AMordhauCharacter* Attacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.OnBlockedMelee");

	ABP_HordeEnemy_C_OnBlockedMelee_Params params;
	params.HitResult = HitResult;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.Recoil
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_HordeEnemy_C::Recoil()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.Recoil");

	ABP_HordeEnemy_C_Recoil_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.Cripple
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeEnemy_C::Cripple(float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.Cripple");

	ABP_HordeEnemy_C_Cripple_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.Enrage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeEnemy_C::Enrage(class AMordhauCharacter* Target, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.Enrage");

	ABP_HordeEnemy_C_Enrage_Params params;
	params.Target = Target;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.OnKilled
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 EventInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeEnemy_C::OnKilled(class AController* EventInstigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.OnKilled");

	ABP_HordeEnemy_C_OnKilled_Params params;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.ReceivePossessed
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeEnemy_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.ReceivePossessed");

	ABP_HordeEnemy_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeEnemy.BP_HordeEnemy_C.ExecuteUbergraph_BP_HordeEnemy
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeEnemy_C::ExecuteUbergraph_BP_HordeEnemy(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy.BP_HordeEnemy_C.ExecuteUbergraph_BP_HordeEnemy");

	ABP_HordeEnemy_C_ExecuteUbergraph_BP_HordeEnemy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

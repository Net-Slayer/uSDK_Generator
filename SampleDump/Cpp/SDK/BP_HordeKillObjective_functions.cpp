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
//		Name   -> Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnWaveProgressed
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewWave                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeKillObjective_C::OnWaveProgressed(int NewWave)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnWaveProgressed");

	ABP_HordeKillObjective_C_OnWaveProgressed_Params params;
	params.NewWave = NewWave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnRep_OffenseUpgrades
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_HordeKillObjective_C::OnRep_OffenseUpgrades()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnRep_OffenseUpgrades");

	ABP_HordeKillObjective_C_OnRep_OffenseUpgrades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnRep_DefenseUpgrades
//		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeKillObjective_C::OnRep_DefenseUpgrades()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnRep_DefenseUpgrades");

	ABP_HordeKillObjective_C_OnRep_DefenseUpgrades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeKillObjective.BP_HordeKillObjective_C.SpawnOurEquipment
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeKillObjective_C::SpawnOurEquipment()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.SpawnOurEquipment");

	ABP_HordeKillObjective_C_SpawnOurEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeKillObjective.BP_HordeKillObjective_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_HordeKillObjective_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.UserConstructionScript");

	ABP_HordeKillObjective_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeKillObjective.BP_HordeKillObjective_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_HordeKillObjective_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.ReceiveBeginPlay");

	ABP_HordeKillObjective_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeKillObjective.BP_HordeKillObjective_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeKillObjective_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.ReceiveTick");

	ABP_HordeKillObjective_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnDied
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Mordhau_EMordhauDamageType                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeKillObjective_C::OnDied(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnDied");

	ABP_HordeKillObjective_C_OnDied_Params params;
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
//		Name   -> Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnHealthChanged
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_HordeKillObjective_C::OnHealthChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.OnHealthChanged");

	ABP_HordeKillObjective_C_OnHealthChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeKillObjective.BP_HordeKillObjective_C.ExecuteUbergraph_BP_HordeKillObjective
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeKillObjective_C::ExecuteUbergraph_BP_HordeKillObjective(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeKillObjective.BP_HordeKillObjective_C.ExecuteUbergraph_BP_HordeKillObjective");

	ABP_HordeKillObjective_C_ExecuteUbergraph_BP_HordeKillObjective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

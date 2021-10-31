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
//		Name   -> Function BP_MordhauGameMode.BP_MordhauGameMode_C.UnpossessAndDestroyPawn
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               RestartPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MordhauGameMode_C::UnpossessAndDestroyPawn(class AController* Controller, bool RestartPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameMode.BP_MordhauGameMode_C.UnpossessAndDestroyPawn");

	ABP_MordhauGameMode_C_UnpossessAndDestroyPawn_Params params;
	params.Controller = Controller;
	params.RestartPlayer = RestartPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameMode.BP_MordhauGameMode_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_MordhauGameMode_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameMode.BP_MordhauGameMode_C.ReceiveBeginPlay");

	ABP_MordhauGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameMode.BP_MordhauGameMode_C.OnKilled
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 KilledPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       KilledPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Mordhau_EMordhauDamageType                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DamageSource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DamageAgent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauGameMode_C::OnKilled(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, Mordhau_EMordhauDamageType Type, unsigned char SubType, class AActor* DamageSource, class AActor* DamageAgent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameMode.BP_MordhauGameMode_C.OnKilled");

	ABP_MordhauGameMode_C_OnKilled_Params params;
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
//		Name   -> Function BP_MordhauGameMode.BP_MordhauGameMode_C.AddBots
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauGameMode_C::AddBots(int Amount, int Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameMode.BP_MordhauGameMode_C.AddBots");

	ABP_MordhauGameMode_C_AddBots_Params params;
	params.Amount = Amount;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameMode.BP_MordhauGameMode_C.RemoveBots
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauGameMode_C::RemoveBots(int Amount, int Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameMode.BP_MordhauGameMode_C.RemoveBots");

	ABP_MordhauGameMode_C_RemoveBots_Params params;
	params.Amount = Amount;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameMode.BP_MordhauGameMode_C.OnMatchStateChanged
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FName                                       OldState                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       NewState                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauGameMode_C::OnMatchStateChanged(const struct FName& OldState, const struct FName& NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameMode.BP_MordhauGameMode_C.OnMatchStateChanged");

	ABP_MordhauGameMode_C_OnMatchStateChanged_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameMode.BP_MordhauGameMode_C.K2_OnLogout
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 ExitingController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauGameMode_C::K2_OnLogout(class AController* ExitingController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameMode.BP_MordhauGameMode_C.K2_OnLogout");

	ABP_MordhauGameMode_C_K2_OnLogout_Params params;
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauGameMode.BP_MordhauGameMode_C.ExecuteUbergraph_BP_MordhauGameMode
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauGameMode_C::ExecuteUbergraph_BP_MordhauGameMode(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauGameMode.BP_MordhauGameMode_C.ExecuteUbergraph_BP_MordhauGameMode");

	ABP_MordhauGameMode_C_ExecuteUbergraph_BP_MordhauGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

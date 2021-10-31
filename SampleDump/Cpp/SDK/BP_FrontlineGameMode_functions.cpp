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
//		Name   -> Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.MatchTimeRanOut
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_FrontlineGameMode_C::MatchTimeRanOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.MatchTimeRanOut");

	ABP_FrontlineGameMode_C_MatchTimeRanOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.OnTeamScoreChanged
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OldValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineGameMode_C::OnTeamScoreChanged(int Team, float OldValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.OnTeamScoreChanged");

	ABP_FrontlineGameMode_C_OnTeamScoreChanged_Params params;
	params.Team = Team;
	params.OldValue = OldValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.OnKilled
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 KilledPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       KilledPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Mordhau_EMordhauDamageType                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DamageSource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DamageAgent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineGameMode_C::OnKilled(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, Mordhau_EMordhauDamageType Type, unsigned char SubType, class AActor* DamageSource, class AActor* DamageAgent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.OnKilled");

	ABP_FrontlineGameMode_C_OnKilled_Params params;
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
//		Name   -> Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.ExecuteUbergraph_BP_FrontlineGameMode
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineGameMode_C::ExecuteUbergraph_BP_FrontlineGameMode(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineGameMode.BP_FrontlineGameMode_C.ExecuteUbergraph_BP_FrontlineGameMode");

	ABP_FrontlineGameMode_C_ExecuteUbergraph_BP_FrontlineGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

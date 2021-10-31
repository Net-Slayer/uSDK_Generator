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
//		Name   -> Function BP_HordePlayerState.BP_HordePlayerState_C.CopyFromOtherState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_HordePlayerState_C*                      OtherState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerState_C::CopyFromOtherState(class ABP_HordePlayerState_C* OtherState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerState.BP_HordePlayerState_C.CopyFromOtherState");

	ABP_HordePlayerState_C_CopyFromOtherState_Params params;
	params.OtherState = OtherState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerState.BP_HordePlayerState_C.OnRep_ReplicatedSkills
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordePlayerState_C::OnRep_ReplicatedSkills()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerState.BP_HordePlayerState_C.OnRep_ReplicatedSkills");

	ABP_HordePlayerState_C_OnRep_ReplicatedSkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerState.BP_HordePlayerState_C.OnRep_SkillPoints
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_HordePlayerState_C::OnRep_SkillPoints()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerState.BP_HordePlayerState_C.OnRep_SkillPoints");

	ABP_HordePlayerState_C_OnRep_SkillPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerState.BP_HordePlayerState_C.GetDiscountedPrice
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                BasePrice                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                DiscountedPrice                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerState_C::GetDiscountedPrice(int BasePrice, int* DiscountedPrice)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerState.BP_HordePlayerState_C.GetDiscountedPrice");

	ABP_HordePlayerState_C_GetDiscountedPrice_Params params;
	params.BasePrice = BasePrice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DiscountedPrice != nullptr)
		*DiscountedPrice = params.DiscountedPrice;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerState.BP_HordePlayerState_C.OnRep_Coins
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_HordePlayerState_C::OnRep_Coins()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerState.BP_HordePlayerState_C.OnRep_Coins");

	ABP_HordePlayerState_C_OnRep_Coins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerState.BP_HordePlayerState_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordePlayerState_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerState.BP_HordePlayerState_C.UserConstructionScript");

	ABP_HordePlayerState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerState.BP_HordePlayerState_C.ReceiveCopyProperties
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APlayerState*                                NewPlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerState_C::ReceiveCopyProperties(class APlayerState* NewPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerState.BP_HordePlayerState_C.ReceiveCopyProperties");

	ABP_HordePlayerState_C_ReceiveCopyProperties_Params params;
	params.NewPlayerState = NewPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerState.BP_HordePlayerState_C.ExecuteUbergraph_BP_HordePlayerState
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerState_C::ExecuteUbergraph_BP_HordePlayerState(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerState.BP_HordePlayerState_C.ExecuteUbergraph_BP_HordePlayerState");

	ABP_HordePlayerState_C_ExecuteUbergraph_BP_HordePlayerState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

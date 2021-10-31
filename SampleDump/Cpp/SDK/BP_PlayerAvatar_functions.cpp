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
//		Name   -> Function BP_PlayerAvatar.BP_PlayerAvatar_C.Update
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabPlayer                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBP_PlayerAvatar_C::Update(const struct FPlayFabPlayer& Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerAvatar.BP_PlayerAvatar_C.Update");

	UBP_PlayerAvatar_C_Update_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PlayerAvatar.BP_PlayerAvatar_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PlayerAvatar_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerAvatar.BP_PlayerAvatar_C.PreConstruct");

	UBP_PlayerAvatar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PlayerAvatar.BP_PlayerAvatar_C.OnPlayerInformationReceived
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabPlayer                              Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UBP_PlayerAvatar_C::OnPlayerInformationReceived(const struct FPlayFabPlayer& Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerAvatar.BP_PlayerAvatar_C.OnPlayerInformationReceived");

	UBP_PlayerAvatar_C_OnPlayerInformationReceived_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PlayerAvatar.BP_PlayerAvatar_C.ExecuteUbergraph_BP_PlayerAvatar
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PlayerAvatar_C::ExecuteUbergraph_BP_PlayerAvatar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerAvatar.BP_PlayerAvatar_C.ExecuteUbergraph_BP_PlayerAvatar");

	UBP_PlayerAvatar_C_ExecuteUbergraph_BP_PlayerAvatar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

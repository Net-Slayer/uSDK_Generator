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
//		Name   -> Function BP_BuildableComponent.BP_BuildableComponent_C.Notify Actor Death
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_BuildableComponent_C::Notify_Actor_Death()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuildableComponent.BP_BuildableComponent_C.Notify Actor Death");

	UBP_BuildableComponent_C_Notify_Actor_Death_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BuildableComponent.BP_BuildableComponent_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_BuildableComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuildableComponent.BP_BuildableComponent_C.ReceiveBeginPlay");

	UBP_BuildableComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BuildableComponent.BP_BuildableComponent_C.ReceiveEndPlay
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BuildableComponent_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuildableComponent.BP_BuildableComponent_C.ReceiveEndPlay");

	UBP_BuildableComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BuildableComponent.BP_BuildableComponent_C.OnParentCharacterDied
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAdvancedCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BuildableComponent_C::OnParentCharacterDied(class AAdvancedCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuildableComponent.BP_BuildableComponent_C.OnParentCharacterDied");

	UBP_BuildableComponent_C_OnParentCharacterDied_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BuildableComponent.BP_BuildableComponent_C.ExecuteUbergraph_BP_BuildableComponent
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BuildableComponent_C::ExecuteUbergraph_BP_BuildableComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BuildableComponent.BP_BuildableComponent_C.ExecuteUbergraph_BP_BuildableComponent");

	UBP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

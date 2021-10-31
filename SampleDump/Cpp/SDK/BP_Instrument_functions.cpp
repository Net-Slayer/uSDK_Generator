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
//		Name   -> Function BP_Instrument.BP_Instrument_C.CanPlay
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Instrument_C::CanPlay(bool* Return)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Instrument.BP_Instrument_C.CanPlay");

	ABP_Instrument_C_CanPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Instrument.BP_Instrument_C.ServerSetToneAndPlay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      Tone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Instrument_C::ServerSetToneAndPlay(unsigned char Tone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Instrument.BP_Instrument_C.ServerSetToneAndPlay");

	ABP_Instrument_C_ServerSetToneAndPlay_Params params;
	params.Tone = Tone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Instrument.BP_Instrument_C.RequestBlock
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Mordhau_EBlockType                                 BlockType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bAllowFTP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Instrument_C::RequestBlock(Mordhau_EBlockType BlockType, bool bAllowFTP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Instrument.BP_Instrument_C.RequestBlock");

	ABP_Instrument_C_RequestBlock_Params params;
	params.BlockType = BlockType;
	params.bAllowFTP = bAllowFTP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Instrument.BP_Instrument_C.GetToneFromAttack
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Mordhau_EAttackMove                                Move                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      Tone                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Instrument_C::GetToneFromAttack(Mordhau_EAttackMove Move, float Angle, unsigned char* Tone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Instrument.BP_Instrument_C.GetToneFromAttack");

	ABP_Instrument_C_GetToneFromAttack_Params params;
	params.Move = Move;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tone != nullptr)
		*Tone = params.Tone;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Instrument.BP_Instrument_C.PlayTone
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      Tone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Instrument_C::PlayTone(unsigned char Tone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Instrument.BP_Instrument_C.PlayTone");

	ABP_Instrument_C_PlayTone_Params params;
	params.Tone = Tone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Instrument.BP_Instrument_C.OnRep_ReplicatedTone
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Instrument_C::OnRep_ReplicatedTone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Instrument.BP_Instrument_C.OnRep_ReplicatedTone");

	ABP_Instrument_C_OnRep_ReplicatedTone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Instrument.BP_Instrument_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Instrument_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Instrument.BP_Instrument_C.UserConstructionScript");

	ABP_Instrument_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Instrument.BP_Instrument_C.RequestAttack
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		Mordhau_EAttackMove                                Move                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Instrument_C::RequestAttack(Mordhau_EAttackMove Move, float Angle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Instrument.BP_Instrument_C.RequestAttack");

	ABP_Instrument_C_RequestAttack_Params params;
	params.Move = Move;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Instrument.BP_Instrument_C.ServerSetTone
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      Tone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Instrument_C::ServerSetTone(unsigned char Tone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Instrument.BP_Instrument_C.ServerSetTone");

	ABP_Instrument_C_ServerSetTone_Params params;
	params.Tone = Tone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Instrument.BP_Instrument_C.EquipmentCommand
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                Command                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Instrument_C::EquipmentCommand(int Command)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Instrument.BP_Instrument_C.EquipmentCommand");

	ABP_Instrument_C_EquipmentCommand_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Instrument.BP_Instrument_C.ExecuteUbergraph_BP_Instrument
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Instrument_C::ExecuteUbergraph_BP_Instrument(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Instrument.BP_Instrument_C.ExecuteUbergraph_BP_Instrument");

	ABP_Instrument_C_ExecuteUbergraph_BP_Instrument_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

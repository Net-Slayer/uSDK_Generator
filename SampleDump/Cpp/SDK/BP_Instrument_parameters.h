#pragma once

// Name: Mordhau, Version: 4_25_hotfix


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

// Function BP_Instrument.BP_Instrument_C.ServerSetToneAndPlay
struct ABP_Instrument_C_ServerSetToneAndPlay_Params
{
	unsigned char                                      Tone;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Instrument.BP_Instrument_C.RequestBlock
struct ABP_Instrument_C_RequestBlock_Params
{
	Mordhau_EBlockType                                 BlockType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAllowFTP;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Instrument.BP_Instrument_C.GetToneFromAttack
struct ABP_Instrument_C_GetToneFromAttack_Params
{
	Mordhau_EAttackMove                                Move;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Angle;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Tone;                                                      // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Instrument.BP_Instrument_C.PlayTone
struct ABP_Instrument_C_PlayTone_Params
{
	unsigned char                                      Tone;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Instrument.BP_Instrument_C.OnRep_ReplicatedTone
struct ABP_Instrument_C_OnRep_ReplicatedTone_Params
{
};

// Function BP_Instrument.BP_Instrument_C.UserConstructionScript
struct ABP_Instrument_C_UserConstructionScript_Params
{
};

// Function BP_Instrument.BP_Instrument_C.RequestAttack
struct ABP_Instrument_C_RequestAttack_Params
{
	Mordhau_EAttackMove                                Move;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Angle;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Instrument.BP_Instrument_C.ServerSetTone
struct ABP_Instrument_C_ServerSetTone_Params
{
	unsigned char                                      Tone;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Instrument.BP_Instrument_C.EquipmentCommand
struct ABP_Instrument_C_EquipmentCommand_Params
{
	int                                                Command;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Instrument.BP_Instrument_C.ExecuteUbergraph_BP_Instrument
struct ABP_Instrument_C_ExecuteUbergraph_BP_Instrument_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

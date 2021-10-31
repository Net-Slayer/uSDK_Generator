#pragma once

// Name: Mordhau, Version: Patch23


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

// Function BP_Executioner_katzbalger.BP_Executioner_katzbalger_C.ReceiveBeginPlay
struct UBP_Executioner_katzbalger_C_ReceiveBeginPlay_Params
{
};

// Function BP_Executioner_katzbalger.BP_Executioner_katzbalger_C.ReceiveActorBeginOverlap
struct UBP_Executioner_katzbalger_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Executioner_katzbalger.BP_Executioner_katzbalger_C.ReceiveTick
struct UBP_Executioner_katzbalger_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Executioner_katzbalger.BP_Executioner_katzbalger_C.ExecuteUbergraph_BP_Executioner_katzbalger
struct UBP_Executioner_katzbalger_C_ExecuteUbergraph_BP_Executioner_katzbalger_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

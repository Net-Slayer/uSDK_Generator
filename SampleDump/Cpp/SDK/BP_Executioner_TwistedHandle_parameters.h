﻿#pragma once

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

// Function BP_Executioner_TwistedHandle.BP_Executioner_TwistedHandle_C.ReceiveBeginPlay
struct UBP_Executioner_TwistedHandle_C_ReceiveBeginPlay_Params
{
};

// Function BP_Executioner_TwistedHandle.BP_Executioner_TwistedHandle_C.ReceiveActorBeginOverlap
struct UBP_Executioner_TwistedHandle_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Executioner_TwistedHandle.BP_Executioner_TwistedHandle_C.ReceiveTick
struct UBP_Executioner_TwistedHandle_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Executioner_TwistedHandle.BP_Executioner_TwistedHandle_C.ExecuteUbergraph_BP_Executioner_TwistedHandle
struct UBP_Executioner_TwistedHandle_C_ExecuteUbergraph_BP_Executioner_TwistedHandle_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
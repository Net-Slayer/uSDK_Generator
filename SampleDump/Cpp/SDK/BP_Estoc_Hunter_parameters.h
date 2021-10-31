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

// Function BP_Estoc_Hunter.BP_Estoc_Hunter_C.ReceiveBeginPlay
struct UBP_Estoc_Hunter_C_ReceiveBeginPlay_Params
{
};

// Function BP_Estoc_Hunter.BP_Estoc_Hunter_C.ReceiveActorBeginOverlap
struct UBP_Estoc_Hunter_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Estoc_Hunter.BP_Estoc_Hunter_C.ReceiveTick
struct UBP_Estoc_Hunter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Estoc_Hunter.BP_Estoc_Hunter_C.ExecuteUbergraph_BP_Estoc_Hunter
struct UBP_Estoc_Hunter_C_ExecuteUbergraph_BP_Estoc_Hunter_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

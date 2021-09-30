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

// Function BP_claymore_AncestralHandle.BP_claymore_AncestralHandle_C.ReceiveBeginPlay
struct UBP_claymore_AncestralHandle_C_ReceiveBeginPlay_Params
{
};

// Function BP_claymore_AncestralHandle.BP_claymore_AncestralHandle_C.ReceiveActorBeginOverlap
struct UBP_claymore_AncestralHandle_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_claymore_AncestralHandle.BP_claymore_AncestralHandle_C.ReceiveTick
struct UBP_claymore_AncestralHandle_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_claymore_AncestralHandle.BP_claymore_AncestralHandle_C.ExecuteUbergraph_BP_claymore_AncestralHandle
struct UBP_claymore_AncestralHandle_C_ExecuteUbergraph_BP_claymore_AncestralHandle_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_Mace_FringeHead.BP_Mace_FringeHead_C.ReceiveBeginPlay
struct UBP_Mace_FringeHead_C_ReceiveBeginPlay_Params
{
};

// Function BP_Mace_FringeHead.BP_Mace_FringeHead_C.ReceiveActorBeginOverlap
struct UBP_Mace_FringeHead_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Mace_FringeHead.BP_Mace_FringeHead_C.ReceiveTick
struct UBP_Mace_FringeHead_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Mace_FringeHead.BP_Mace_FringeHead_C.ExecuteUbergraph_BP_Mace_FringeHead
struct UBP_Mace_FringeHead_C_ExecuteUbergraph_BP_Mace_FringeHead_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

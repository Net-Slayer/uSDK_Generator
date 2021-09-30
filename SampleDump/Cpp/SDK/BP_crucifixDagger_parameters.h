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

// Function BP_crucifixDagger.BP_crucifixDagger_C.ReceiveBeginPlay
struct UBP_crucifixDagger_C_ReceiveBeginPlay_Params
{
};

// Function BP_crucifixDagger.BP_crucifixDagger_C.ReceiveActorBeginOverlap
struct UBP_crucifixDagger_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_crucifixDagger.BP_crucifixDagger_C.ReceiveTick
struct UBP_crucifixDagger_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_crucifixDagger.BP_crucifixDagger_C.ExecuteUbergraph_BP_crucifixDagger
struct UBP_crucifixDagger_C_ExecuteUbergraph_BP_crucifixDagger_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

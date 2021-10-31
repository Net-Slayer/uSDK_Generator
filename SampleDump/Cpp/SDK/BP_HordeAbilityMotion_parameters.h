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

// Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.OnBegin
struct UBP_HordeAbilityMotion_C_OnBegin_Params
{
};

// Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.OnLeave
struct UBP_HordeAbilityMotion_C_OnLeave_Params
{
	bool                                               Interrupted;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.OnTick
struct UBP_HordeAbilityMotion_C_OnTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.ExecuteUbergraph_BP_HordeAbilityMotion
struct UBP_HordeAbilityMotion_C_ExecuteUbergraph_BP_HordeAbilityMotion_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

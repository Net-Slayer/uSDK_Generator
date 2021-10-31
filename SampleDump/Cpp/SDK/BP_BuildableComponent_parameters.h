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

// Function BP_BuildableComponent.BP_BuildableComponent_C.Notify Actor Death
struct UBP_BuildableComponent_C_Notify_Actor_Death_Params
{
};

// Function BP_BuildableComponent.BP_BuildableComponent_C.ReceiveBeginPlay
struct UBP_BuildableComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_BuildableComponent.BP_BuildableComponent_C.ReceiveEndPlay
struct UBP_BuildableComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BuildableComponent.BP_BuildableComponent_C.OnParentCharacterDied
struct UBP_BuildableComponent_C_OnParentCharacterDied_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BuildableComponent.BP_BuildableComponent_C.ExecuteUbergraph_BP_BuildableComponent
struct UBP_BuildableComponent_C_ExecuteUbergraph_BP_BuildableComponent_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

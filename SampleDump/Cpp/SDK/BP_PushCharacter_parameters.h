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

// Function BP_PushCharacter.BP_PushCharacter_C.GetOutOfBoundsText
struct ABP_PushCharacter_C_GetOutOfBoundsText_Params
{
	struct FText                                       Header;                                                    // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_PushCharacter.BP_PushCharacter_C.GetOutOfBoundsSubtext
struct ABP_PushCharacter_C_GetOutOfBoundsSubtext_Params
{
	struct FText                                       Subtext;                                                   // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_PushCharacter.BP_PushCharacter_C.OnExceededTimeOutOfBounds
struct ABP_PushCharacter_C_OnExceededTimeOutOfBounds_Params
{
};

// Function BP_PushCharacter.BP_PushCharacter_C.ExecuteUbergraph_BP_PushCharacter
struct ABP_PushCharacter_C_ExecuteUbergraph_BP_PushCharacter_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

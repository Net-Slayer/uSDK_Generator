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

// Function BP_StatePopupText.BP_StatePopupText_C.GetVisibility_1
struct UBP_StatePopupText_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatePopupText.BP_StatePopupText_C.Activate
struct UBP_StatePopupText_C_Activate_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                Color;                                                     // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatePopupText.BP_StatePopupText_C.Construct
struct UBP_StatePopupText_C_Construct_Params
{
};

// Function BP_StatePopupText.BP_StatePopupText_C.Entry Anim Finished
struct UBP_StatePopupText_C_Entry_Anim_Finished_Params
{
};

// Function BP_StatePopupText.BP_StatePopupText_C.ExecuteUbergraph_BP_StatePopupText
struct UBP_StatePopupText_C_ExecuteUbergraph_BP_StatePopupText_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

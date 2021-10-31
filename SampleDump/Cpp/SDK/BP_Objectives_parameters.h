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

// Function BP_Objectives.BP_Objectives_C.Get_ObjectiveBorder_Visibility_1
struct UBP_Objectives_C_Get_ObjectiveBorder_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Objectives.BP_Objectives_C.Update Team Image
struct UBP_Objectives_C_Update_Team_Image_Params
{
};

// Function BP_Objectives.BP_Objectives_C.Hide
struct UBP_Objectives_C_Hide_Params
{
};

// Function BP_Objectives.BP_Objectives_C.Show
struct UBP_Objectives_C_Show_Params
{
	struct FText                                       Description;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Header;                                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Icon;                                                      // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Objectives.BP_Objectives_C.FadeOutDone
struct UBP_Objectives_C_FadeOutDone_Params
{
};

// Function BP_Objectives.BP_Objectives_C.ExecuteUbergraph_BP_Objectives
struct UBP_Objectives_C_ExecuteUbergraph_BP_Objectives_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

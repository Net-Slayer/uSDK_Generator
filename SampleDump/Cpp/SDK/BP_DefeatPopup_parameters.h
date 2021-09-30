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

// Function BP_DefeatPopup.BP_DefeatPopup_C.GetVisibility_1
struct UBP_DefeatPopup_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DefeatPopup.BP_DefeatPopup_C.Timer Done
struct UBP_DefeatPopup_C_Timer_Done_Params
{
};

// Function BP_DefeatPopup.BP_DefeatPopup_C.On Animation Finished
struct UBP_DefeatPopup_C_On_Animation_Finished_Params
{
};

// Function BP_DefeatPopup.BP_DefeatPopup_C.Show
struct UBP_DefeatPopup_C_Show_Params
{
	struct FText                                       Main_Text;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Sub_Text;                                                  // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Duration;                                                  // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DefeatPopup.BP_DefeatPopup_C.ExecuteUbergraph_BP_DefeatPopup
struct UBP_DefeatPopup_C_ExecuteUbergraph_BP_DefeatPopup_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

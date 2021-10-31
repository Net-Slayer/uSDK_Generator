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

// Function BP_ButtonPrompt.BP_ButtonPrompt_C.Initialize
struct UBP_ButtonPrompt_C_Initialize_Params
{
	struct FName                                       Action_Name;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Displayed_Text;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ButtonPrompt.BP_ButtonPrompt_C.Update from Action bind
struct UBP_ButtonPrompt_C_Update_from_Action_bind_Params
{
};

// Function BP_ButtonPrompt.BP_ButtonPrompt_C.Update from forced key
struct UBP_ButtonPrompt_C_Update_from_forced_key_Params
{
};

// Function BP_ButtonPrompt.BP_ButtonPrompt_C.RefreshIcon
struct UBP_ButtonPrompt_C_RefreshIcon_Params
{
};

// Function BP_ButtonPrompt.BP_ButtonPrompt_C.Update
struct UBP_ButtonPrompt_C_Update_Params
{
};

// Function BP_ButtonPrompt.BP_ButtonPrompt_C.Construct
struct UBP_ButtonPrompt_C_Construct_Params
{
};

// Function BP_ButtonPrompt.BP_ButtonPrompt_C.PreConstruct
struct UBP_ButtonPrompt_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ButtonPrompt.BP_ButtonPrompt_C.ExecuteUbergraph_BP_ButtonPrompt
struct UBP_ButtonPrompt_C_ExecuteUbergraph_BP_ButtonPrompt_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_ChoiceMenu.BP_ChoiceMenu_C.SetChoicesPerPage
struct UBP_ChoiceMenu_C_SetChoicesPerPage_Params
{
	int                                                Keyboard;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Controller;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ChoicePerPageChange;                                       // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ChoiceMenu.BP_ChoiceMenu_C.Choose
struct UBP_ChoiceMenu_C_Choose_Params
{
	int                                                Choice;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChoiceMenu.BP_ChoiceMenu_C.UpdateCurrentPage
struct UBP_ChoiceMenu_C_UpdateCurrentPage_Params
{
};

// Function BP_ChoiceMenu.BP_ChoiceMenu_C.OptionChosen
struct UBP_ChoiceMenu_C_OptionChosen_Params
{
	int                                                Choice;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ChoiceMenu.BP_ChoiceMenu_C.Hide
struct UBP_ChoiceMenu_C_Hide_Params
{
};

// Function BP_ChoiceMenu.BP_ChoiceMenu_C.Show
struct UBP_ChoiceMenu_C_Show_Params
{
};

// Function BP_ChoiceMenu.BP_ChoiceMenu_C.Construct
struct UBP_ChoiceMenu_C_Construct_Params
{
};

// Function BP_ChoiceMenu.BP_ChoiceMenu_C.ExecuteUbergraph_BP_ChoiceMenu
struct UBP_ChoiceMenu_C_ExecuteUbergraph_BP_ChoiceMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

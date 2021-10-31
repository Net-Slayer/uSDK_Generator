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

// Function BP_EmoteMenu.BP_EmoteMenu_C.DoEmote
struct UBP_EmoteMenu_C_DoEmote_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EmoteMenu.BP_EmoteMenu_C.OptionChosen
struct UBP_EmoteMenu_C_OptionChosen_Params
{
	int                                                Choice;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EmoteMenu.BP_EmoteMenu_C.Show
struct UBP_EmoteMenu_C_Show_Params
{
};

// Function BP_EmoteMenu.BP_EmoteMenu_C.Tick
struct UBP_EmoteMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EmoteMenu.BP_EmoteMenu_C.RebuildEmoteList
struct UBP_EmoteMenu_C_RebuildEmoteList_Params
{
};

// Function BP_EmoteMenu.BP_EmoteMenu_C.ExecuteUbergraph_BP_EmoteMenu
struct UBP_EmoteMenu_C_ExecuteUbergraph_BP_EmoteMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

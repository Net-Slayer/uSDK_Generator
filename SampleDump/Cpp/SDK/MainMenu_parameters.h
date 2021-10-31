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

// Function MainMenu.MainMenu_C.ShowHalloween
struct AMainMenu_C_ShowHalloween_Params
{
};

// Function MainMenu.MainMenu_C.SetNewsVisibility
struct AMainMenu_C_SetNewsVisibility_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainMenu.MainMenu_C.ReceiveTick
struct AMainMenu_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu.MainMenu_C.OnPartyUpdated
struct AMainMenu_C_OnPartyUpdated_Params
{
	TArray<struct FPlayFabPlayer>                      PartyMembers;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function MainMenu.MainMenu_C.AddTestCharacter
struct AMainMenu_C_AddTestCharacter_Params
{
};

// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
struct AMainMenu_C_ExecuteUbergraph_MainMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

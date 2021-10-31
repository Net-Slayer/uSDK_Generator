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

// Function BP_TeamSelect.BP_TeamSelect_C.OnPreviewKeyDown
struct UBP_TeamSelect_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function BP_TeamSelect.BP_TeamSelect_C.Hide
struct UBP_TeamSelect_C_Hide_Params
{
};

// Function BP_TeamSelect.BP_TeamSelect_C.GetMapName
struct UBP_TeamSelect_C_GetMapName_Params
{
	struct FString                                     NewParam;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_TeamSelect.BP_TeamSelect_C.GetGameModeName
struct UBP_TeamSelect_C_GetGameModeName_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_TeamSelect.BP_TeamSelect_C.Show
struct UBP_TeamSelect_C_Show_Params
{
};

// Function BP_TeamSelect.BP_TeamSelect_C.SelectTeam
struct UBP_TeamSelect_C_SelectTeam_Params
{
	int                                                Team;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

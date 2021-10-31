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

// Function BP_SpawnScreen.BP_SpawnScreen_C.GetText_1
struct UBP_SpawnScreen_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_SpawnScreen.BP_SpawnScreen_C.SetColor
struct UBP_SpawnScreen_C_SetColor_Params
{
	class UImage*                                      Image;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                        Team_Color_Array;                                          // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	unsigned char                                      Team;                                                      // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                                PlayerState;                                               // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SpawnScreen.BP_SpawnScreen_C.UpdateSpawnScreenIcons
struct UBP_SpawnScreen_C_UpdateSpawnScreenIcons_Params
{
	class UCanvasPanel*                                Canvas_Panel;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SpawnScreen.BP_SpawnScreen_C.OnKeyDown
struct UBP_SpawnScreen_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function BP_SpawnScreen.BP_SpawnScreen_C.UpdateSpawnPointWidgets
struct UBP_SpawnScreen_C_UpdateSpawnPointWidgets_Params
{
};

// Function BP_SpawnScreen.BP_SpawnScreen_C.Show
struct UBP_SpawnScreen_C_Show_Params
{
};

// Function BP_SpawnScreen.BP_SpawnScreen_C.Hide
struct UBP_SpawnScreen_C_Hide_Params
{
};

// Function BP_SpawnScreen.BP_SpawnScreen_C.ExecuteUbergraph_BP_SpawnScreen
struct UBP_SpawnScreen_C_ExecuteUbergraph_BP_SpawnScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SpawnScreen.BP_SpawnScreen_C.Open Loadout Selection__DelegateSignature
struct UBP_SpawnScreen_C_Open_Loadout_Selection__DelegateSignature_Params
{
};

// Function BP_SpawnScreen.BP_SpawnScreen_C.Updated Spawn Point Widgets__DelegateSignature
struct UBP_SpawnScreen_C_Updated_Spawn_Point_Widgets__DelegateSignature_Params
{
	class UBP_SpawnScreenPoint_C*                      Selected_Screen_Point;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

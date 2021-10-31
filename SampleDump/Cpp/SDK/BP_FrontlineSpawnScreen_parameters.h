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

// Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.AddSpawnScreenPoint
struct UBP_FrontlineSpawnScreen_C_AddSpawnScreenPoint_Params
{
	class ABP_CapturePoint_C*                          InCapturePoint;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DeployableSpawn_C*                       InDeployableSpawn;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SpawnScreenPoint_C*                      NewPoint;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.ShowFrontlineSpawnScreen
struct UBP_FrontlineSpawnScreen_C_ShowFrontlineSpawnScreen_Params
{
};

// Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.Tick
struct UBP_FrontlineSpawnScreen_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.BndEvt__ChangeLoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_FrontlineSpawnScreen_C_BndEvt__ChangeLoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.Show
struct UBP_FrontlineSpawnScreen_C_Show_Params
{
};

// Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.Construct
struct UBP_FrontlineSpawnScreen_C_Construct_Params
{
};

// Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.Show Loadout Selection
struct UBP_FrontlineSpawnScreen_C_Show_Loadout_Selection_Params
{
};

// Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.ExecuteUbergraph_BP_FrontlineSpawnScreen
struct UBP_FrontlineSpawnScreen_C_ExecuteUbergraph_BP_FrontlineSpawnScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

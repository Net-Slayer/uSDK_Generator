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

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.UpdateScreenPosition
struct UBP_SpawnScreenPoint_C_UpdateScreenPosition_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.SetSelected
struct UBP_SpawnScreenPoint_C_SetSelected_Params
{
	bool                                               Value;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Update
struct UBP_SpawnScreenPoint_C_Update_Params
{
};

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Initialize
struct UBP_SpawnScreenPoint_C_Initialize_Params
{
	class ABP_CapturePoint_C*                          InCapturePoint;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DeployableSpawn_C*                       InDeployableSpawn;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SpawnScreen_C*                           SpawnScreen_Ref;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_SpawnScreenPoint_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature
struct UBP_SpawnScreenPoint_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Tick
struct UBP_SpawnScreenPoint_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Select
struct UBP_SpawnScreenPoint_C_Select_Params
{
};

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Destruct
struct UBP_SpawnScreenPoint_C_Destruct_Params
{
};

// Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.ExecuteUbergraph_BP_SpawnScreenPoint
struct UBP_SpawnScreenPoint_C_ExecuteUbergraph_BP_SpawnScreenPoint_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

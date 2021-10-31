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

// Function BP_ToolBox.BP_ToolBox_C.ValidateDeployableSpawnConditions
struct ABP_ToolBox_C_ValidateDeployableSpawnConditions_Params
{
	int                                                Result;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ToolBox.BP_ToolBox_C.Update Trace Text
struct ABP_ToolBox_C_Update_Trace_Text_Params
{
	struct FText                                       Trace_Placement_Text;                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IgnoreLastText;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Valid_Placement;                                           // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ToolBox.BP_ToolBox_C.OnHideWidget
struct ABP_ToolBox_C_OnHideWidget_Params
{
};

// Function BP_ToolBox.BP_ToolBox_C.OnShowWidget
struct ABP_ToolBox_C_OnShowWidget_Params
{
};

// Function BP_ToolBox.BP_ToolBox_C.UpdateEquipmentUI
struct ABP_ToolBox_C_UpdateEquipmentUI_Params
{
};

// Function BP_ToolBox.BP_ToolBox_C.GetAmountOfPlacedEquipment
struct ABP_ToolBox_C_GetAmountOfPlacedEquipment_Params
{
	struct FName                                       PlaceableEquipmentName;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Amount;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ToolBox.BP_ToolBox_C.ValidateSpotWithBuildingSystem
struct ABP_ToolBox_C_ValidateSpotWithBuildingSystem_Params
{
	struct FVector                                     Offset;                                                    // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisplayObjectPreview;                                      // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Succeeded;                                                 // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USceneComponent*                             AttachToComponent;                                         // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ToolBox.BP_ToolBox_C.CycleObjectType
struct ABP_ToolBox_C_CycleObjectType_Params
{
};

// Function BP_ToolBox.BP_ToolBox_C.SetupMeshPreview
struct ABP_ToolBox_C_SetupMeshPreview_Params
{
};

// Function BP_ToolBox.BP_ToolBox_C.DestroyMeshPreview
struct ABP_ToolBox_C_DestroyMeshPreview_Params
{
};

// Function BP_ToolBox.BP_ToolBox_C.AddStaticMeshPreviewIfNone
struct ABP_ToolBox_C_AddStaticMeshPreviewIfNone_Params
{
	class UStaticMesh*                                 StaticMesh;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ToolBox.BP_ToolBox_C.AddSkeletalMeshPreviewIfNone
struct ABP_ToolBox_C_AddSkeletalMeshPreviewIfNone_Params
{
	class USkeletalMesh*                               SkeletalMesh;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ToolBox.BP_ToolBox_C.RequestPlant
struct ABP_ToolBox_C_RequestPlant_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      ObjectType;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             AttachTo;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ToolBox.BP_ToolBox_C.OnRequestModeSwitch
struct ABP_ToolBox_C_OnRequestModeSwitch_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_ToolBox.BP_ToolBox_C.OnRequestFire
struct ABP_ToolBox_C_OnRequestFire_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_ToolBox.BP_ToolBox_C.UpdateEquipmentState
struct ABP_ToolBox_C_UpdateEquipmentState_Params
{
};

// Function BP_ToolBox.BP_ToolBox_C.LocalPlayerLateTick
struct ABP_ToolBox_C_LocalPlayerLateTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ToolBox.BP_ToolBox_C.ServerRequestPlant
struct ABP_ToolBox_C_ServerRequestPlant_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      ObjectType;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             AttachTo;                                                  // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ToolBox.BP_ToolBox_C.BndEvt__BuildingSystem_K2Node_ComponentBoundEvent_0_OnMeshPreviewCreated__DelegateSignature
struct ABP_ToolBox_C_BndEvt__BuildingSystem_K2Node_ComponentBoundEvent_0_OnMeshPreviewCreated__DelegateSignature_Params
{
};

// Function BP_ToolBox.BP_ToolBox_C.BndEvt__BuildingSystem_K2Node_ComponentBoundEvent_1_OnMeshPreviewDestroyed__DelegateSignature
struct ABP_ToolBox_C_BndEvt__BuildingSystem_K2Node_ComponentBoundEvent_1_OnMeshPreviewDestroyed__DelegateSignature_Params
{
};

// Function BP_ToolBox.BP_ToolBox_C.K2_OnBecomeViewTarget
struct ABP_ToolBox_C_K2_OnBecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ToolBox.BP_ToolBox_C.OnBindEventToPlaceablesUpdate
struct ABP_ToolBox_C_OnBindEventToPlaceablesUpdate_Params
{
};

// Function BP_ToolBox.BP_ToolBox_C.EventOnPlaceablesUpdate
struct ABP_ToolBox_C_EventOnPlaceablesUpdate_Params
{
};

// Function BP_ToolBox.BP_ToolBox_C.OnUnbindEventToPlaceablesUpdate
struct ABP_ToolBox_C_OnUnbindEventToPlaceablesUpdate_Params
{
};

// Function BP_ToolBox.BP_ToolBox_C.ExecuteUbergraph_BP_ToolBox
struct ABP_ToolBox_C_ExecuteUbergraph_BP_ToolBox_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

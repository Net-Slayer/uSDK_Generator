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

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.GetProfileWrapper
struct ABP_MordhauCustomizationPlatform_C_GetProfileWrapper_Params
{
	class UCharacterProfileBPWrapper*                  Wrapper;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateEquipmentDollRotation
struct ABP_MordhauCustomizationPlatform_C_UpdateEquipmentDollRotation_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateCharacterDollRotation
struct ABP_MordhauCustomizationPlatform_C_UpdateCharacterDollRotation_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.TryUpdateCharacterDollInternal
struct ABP_MordhauCustomizationPlatform_C_TryUpdateCharacterDollInternal_Params
{
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateCharacterDoll
struct ABP_MordhauCustomizationPlatform_C_UpdateCharacterDoll_Params
{
	struct FCharacterProfile                           Profile;                                                   // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               OnlyUpdateMaterials;                                       // 0x00B8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InstantEquipmentSwitch;                                    // 0x00B9(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DoPreviewPose;                                             // 0x00BA(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                PreviewPoseRandom;                                         // 0x00BC(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateCamera
struct ABP_MordhauCustomizationPlatform_C_UpdateCamera_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ZoomCharacterDoll
struct ABP_MordhauCustomizationPlatform_C_ZoomCharacterDoll_Params
{
	float                                              Delta;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ZoomEquipmentDoll
struct ABP_MordhauCustomizationPlatform_C_ZoomEquipmentDoll_Params
{
	float                                              Delta;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.RotateCharacterDoll
struct ABP_MordhauCustomizationPlatform_C_RotateCharacterDoll_Params
{
	float                                              Delta;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Smooth;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.DestroyCharacterDoll
struct ABP_MordhauCustomizationPlatform_C_DestroyCharacterDoll_Params
{
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.DestroyEquipmentDoll
struct ABP_MordhauCustomizationPlatform_C_DestroyEquipmentDoll_Params
{
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.RotateEquipmentDoll
struct ABP_MordhauCustomizationPlatform_C_RotateEquipmentDoll_Params
{
	float                                              Delta;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Smooth;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.SpawnCharacterDollIfNone
struct ABP_MordhauCustomizationPlatform_C_SpawnCharacterDollIfNone_Params
{
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.DestroyDolls
struct ABP_MordhauCustomizationPlatform_C_DestroyDolls_Params
{
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.SpawnEquipment
struct ABP_MordhauCustomizationPlatform_C_SpawnEquipment_Params
{
	int                                                EquipmentIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauEquipment*                           Equipment;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.Init
struct ABP_MordhauCustomizationPlatform_C_Init_Params
{
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ReceiveBeginPlay
struct ABP_MordhauCustomizationPlatform_C_ReceiveBeginPlay_Params
{
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ReceiveTick
struct ABP_MordhauCustomizationPlatform_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ExecuteUbergraph_BP_MordhauCustomizationPlatform
struct ABP_MordhauCustomizationPlatform_C_ExecuteUbergraph_BP_MordhauCustomizationPlatform_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

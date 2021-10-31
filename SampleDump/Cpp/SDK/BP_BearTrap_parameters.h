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

// Function BP_BearTrap.BP_BearTrap_C.OnRep_PlanterState
struct ABP_BearTrap_C_OnRep_PlanterState_Params
{
};

// Function BP_BearTrap.BP_BearTrap_C.CanHeldInteract
struct ABP_BearTrap_C_CanHeldInteract_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BearTrap.BP_BearTrap_C.ShouldShine
struct ABP_BearTrap_C_ShouldShine_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BearTrap.BP_BearTrap_C.CanInteract
struct ABP_BearTrap_C_CanInteract_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BearTrap.BP_BearTrap_C.DealDamage
struct ABP_BearTrap_C_DealDamage_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BearTrap.BP_BearTrap_C.ValidatePlantSpot
struct ABP_BearTrap_C_ValidatePlantSpot_Params
{
	struct FVector                                     CameraLocation1P;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    CameraRotattion1P;                                         // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Succeeded;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USceneComponent*                             AttachToComponent;                                         // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BearTrap.BP_BearTrap_C.OnRequestFire
struct ABP_BearTrap_C_OnRequestFire_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BearTrap.BP_BearTrap_C.OnLoadedChanged
struct ABP_BearTrap_C_OnLoadedChanged_Params
{
};

// Function BP_BearTrap.BP_BearTrap_C.ReceiveActorBeginOverlap
struct ABP_BearTrap_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BearTrap.BP_BearTrap_C.FireProjectile
struct ABP_BearTrap_C_FireProjectile_Params
{
	struct FVector                                     Origin;                                                    // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Orientation;                                               // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class AController*                                 OwningController;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExpectedDelay;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BearTrap.BP_BearTrap_C.ReceiveAnyDamage
struct ABP_BearTrap_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BearTrap.BP_BearTrap_C.OnUsedToKillOther
struct ABP_BearTrap_C_OnUsedToKillOther_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SubType;                                                   // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       bone;                                                      // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Point;                                                     // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Source;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BearTrap.BP_BearTrap_C.OnPostDismemberedOther
struct ABP_BearTrap_C_OnPostDismemberedOther_Params
{
	struct FName                                       bone;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASeparatedBodyPart*                          Part;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BearTrap.BP_BearTrap_C.OnAmmoChanged
struct ABP_BearTrap_C_OnAmmoChanged_Params
{
};

// Function BP_BearTrap.BP_BearTrap_C.PlanterDied
struct ABP_BearTrap_C_PlanterDied_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BearTrap.BP_BearTrap_C.PlanterDestroyed
struct ABP_BearTrap_C_PlanterDestroyed_Params
{
	class AAdvancedCharacter*                          Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BearTrap.BP_BearTrap_C.OnInteractionStart
struct ABP_BearTrap_C_OnInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BearTrap.BP_BearTrap_C.OnHeldInteractionStart
struct ABP_BearTrap_C_OnHeldInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BearTrap.BP_BearTrap_C.UpdateEquipmentState
struct ABP_BearTrap_C_UpdateEquipmentState_Params
{
};

// Function BP_BearTrap.BP_BearTrap_C.LocalPlayerLateTick
struct ABP_BearTrap_C_LocalPlayerLateTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BearTrap.BP_BearTrap_C.ExecuteUbergraph_BP_BearTrap
struct ABP_BearTrap_C_ExecuteUbergraph_BP_BearTrap_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

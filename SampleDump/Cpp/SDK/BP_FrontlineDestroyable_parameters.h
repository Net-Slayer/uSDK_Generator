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

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.IsInObjectiveArea
struct ABP_FrontlineDestroyable_C_IsInObjectiveArea_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InArea;                                                    // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.IsCompleted
struct ABP_FrontlineDestroyable_C_IsCompleted_Params
{
	bool                                               Completed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.GetObjectiveProgress
struct ABP_FrontlineDestroyable_C_GetObjectiveProgress_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.UpdateUIWidgets
struct ABP_FrontlineDestroyable_C_UpdateUIWidgets_Params
{
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.EnemyLostPrerequisites
struct ABP_FrontlineDestroyable_C_EnemyLostPrerequisites_Params
{
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.EnemyGainedPrerequisites
struct ABP_FrontlineDestroyable_C_EnemyGainedPrerequisites_Params
{
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.Initialize
struct ABP_FrontlineDestroyable_C_Initialize_Params
{
	class ABP_CapturePoint_C*                          InCapturePoint;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.ReceiveBeginPlay
struct ABP_FrontlineDestroyable_C_ReceiveBeginPlay_Params
{
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnReplicatedHealthChanged
struct ABP_FrontlineDestroyable_C_OnReplicatedHealthChanged_Params
{
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.ReceiveAnyDamage
struct ABP_FrontlineDestroyable_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnEnemyGainedPrerequisites
struct ABP_FrontlineDestroyable_C_OnEnemyGainedPrerequisites_Params
{
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnEnemyLostPrerequisites
struct ABP_FrontlineDestroyable_C_OnEnemyLostPrerequisites_Params
{
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnUpdateUIWidgets
struct ABP_FrontlineDestroyable_C_OnUpdateUIWidgets_Params
{
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnInitialize
struct ABP_FrontlineDestroyable_C_OnInitialize_Params
{
	class ABP_CapturePoint_C*                          Point;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnAnyObjectiveProgressChanged
struct ABP_FrontlineDestroyable_C_OnAnyObjectiveProgressChanged_Params
{
};

// Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.ExecuteUbergraph_BP_FrontlineDestroyable
struct ABP_FrontlineDestroyable_C_ExecuteUbergraph_BP_FrontlineDestroyable_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

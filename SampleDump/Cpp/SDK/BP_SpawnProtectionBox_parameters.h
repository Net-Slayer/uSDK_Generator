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

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.Disable
struct ABP_SpawnProtectionBox_C_Disable_Params
{
};

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.Enable
struct ABP_SpawnProtectionBox_C_Enable_Params
{
};

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.UserConstructionScript
struct ABP_SpawnProtectionBox_C_UserConstructionScript_Params
{
};

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ReceiveActorBeginOverlap
struct ABP_SpawnProtectionBox_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ReceiveActorEndOverlap
struct ABP_SpawnProtectionBox_C_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ExecuteUbergraph_BP_SpawnProtectionBox
struct ABP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

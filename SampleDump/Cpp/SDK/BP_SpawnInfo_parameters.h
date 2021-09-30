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

// Function BP_SpawnInfo.BP_SpawnInfo_C.Get_SpawnInfoText_Text_1
struct UBP_SpawnInfo_C_Get_SpawnInfoText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_SpawnInfo.BP_SpawnInfo_C.GetVisibility_2
struct UBP_SpawnInfo_C_GetVisibility_2_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SpawnInfo.BP_SpawnInfo_C.GetVisibility_1
struct UBP_SpawnInfo_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SpawnInfo.BP_SpawnInfo_C.GetSpawnCharacterName
struct UBP_SpawnInfo_C_GetSpawnCharacterName_Params
{
	struct FText                                       Name;                                                      // 0x0000(0x0018)  (Parm, OutParm)
};

// Function BP_SpawnInfo.BP_SpawnInfo_C.Tick
struct UBP_SpawnInfo_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SpawnInfo.BP_SpawnInfo_C.ExecuteUbergraph_BP_SpawnInfo
struct UBP_SpawnInfo_C_ExecuteUbergraph_BP_SpawnInfo_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

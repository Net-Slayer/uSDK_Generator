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

// Function BP_HoveredSetting.BP_HoveredSetting_C.SetPerformanceImpact
struct UBP_HoveredSetting_C_SetPerformanceImpact_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Prefix;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_HoveredSetting.BP_HoveredSetting_C.SetHoveredSetting
struct UBP_HoveredSetting_C_SetHoveredSetting_Params
{
	struct FText                                       Title;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                               // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bShowPerformanceImpact;                                    // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CPU_Impact;                                                // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GPU_Impact;                                                // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                VRAM_Impact;                                               // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Image;                                                     // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HoveredSetting.BP_HoveredSetting_C.Construct
struct UBP_HoveredSetting_C_Construct_Params
{
};

// Function BP_HoveredSetting.BP_HoveredSetting_C.ExecuteUbergraph_BP_HoveredSetting
struct UBP_HoveredSetting_C_ExecuteUbergraph_BP_HoveredSetting_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

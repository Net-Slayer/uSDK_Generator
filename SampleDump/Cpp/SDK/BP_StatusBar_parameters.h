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

// Function BP_StatusBar.BP_StatusBar_C.Get_VehicleNameText_Text_1
struct UBP_StatusBar_C_Get_VehicleNameText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_StatusBar.BP_StatusBar_C.GetVisibility_1
struct UBP_StatusBar_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatusBar.BP_StatusBar_C.Get_VehicleHealthBar_Percent_1
struct UBP_StatusBar_C_Get_VehicleHealthBar_Percent_1_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatusBar.BP_StatusBar_C.createDynamicMaterial
struct UBP_StatusBar_C_createDynamicMaterial_Params
{
	class UMaterialInterface*                          Parent_Material;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                                Progress_Bar;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Parameter_Name;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    MaterialInstanceDymanicReference;                          // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatusBar.BP_StatusBar_C.SetObservedCharacter
struct UBP_StatusBar_C_SetObservedCharacter_Params
{
	class AMordhauCharacter*                           NewObserved;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatusBar.BP_StatusBar_C.getDelayedStaminaPercentage
struct UBP_StatusBar_C_getDelayedStaminaPercentage_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatusBar.BP_StatusBar_C.getDelayedHealthPercentage
struct UBP_StatusBar_C_getDelayedHealthPercentage_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatusBar.BP_StatusBar_C.getStaminaPercetageText
struct UBP_StatusBar_C_getStaminaPercetageText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_StatusBar.BP_StatusBar_C.getHealthPercentageText
struct UBP_StatusBar_C_getHealthPercentageText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_StatusBar.BP_StatusBar_C.getStaminaPercetage
struct UBP_StatusBar_C_getStaminaPercetage_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatusBar.BP_StatusBar_C.getHealthPercentage
struct UBP_StatusBar_C_getHealthPercentage_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatusBar.BP_StatusBar_C.Construct
struct UBP_StatusBar_C_Construct_Params
{
};

// Function BP_StatusBar.BP_StatusBar_C.Tick
struct UBP_StatusBar_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_StatusBar.BP_StatusBar_C.ExecuteUbergraph_BP_StatusBar
struct UBP_StatusBar_C_ExecuteUbergraph_BP_StatusBar_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

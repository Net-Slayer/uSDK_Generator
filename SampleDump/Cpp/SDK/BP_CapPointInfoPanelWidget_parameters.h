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

// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.GetFillColorAndOpacity_1
struct UBP_CapPointInfoPanelWidget_C_GetFillColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.GetPercent_1
struct UBP_CapPointInfoPanelWidget_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Get_Icon_Brush_1
struct UBP_CapPointInfoPanelWidget_C_Get_Icon_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
};

// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Get_CapPointState_Text_1
struct UBP_CapPointInfoPanelWidget_C_Get_CapPointState_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Tick
struct UBP_CapPointInfoPanelWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Show
struct UBP_CapPointInfoPanelWidget_C_Show_Params
{
	class ABP_CapturePoint_C*                          Capture_Point_Ref;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.Hide
struct UBP_CapPointInfoPanelWidget_C_Hide_Params
{
};

// Function BP_CapPointInfoPanelWidget.BP_CapPointInfoPanelWidget_C.ExecuteUbergraph_BP_CapPointInfoPanelWidget
struct UBP_CapPointInfoPanelWidget_C_ExecuteUbergraph_BP_CapPointInfoPanelWidget_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

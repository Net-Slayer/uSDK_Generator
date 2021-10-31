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

// Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.SetProgressBarStyle
struct UBP_DeliverySpotWidgetFloater_C_SetProgressBarStyle_Params
{
};

// Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.UpdateProgress
struct UBP_DeliverySpotWidgetFloater_C_UpdateProgress_Params
{
	float                                              NewProgress;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Animate;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.Tick
struct UBP_DeliverySpotWidgetFloater_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.Construct
struct UBP_DeliverySpotWidgetFloater_C_Construct_Params
{
};

// Function BP_DeliverySpotWidgetFloater.BP_DeliverySpotWidgetFloater_C.ExecuteUbergraph_BP_DeliverySpotWidgetFloater
struct UBP_DeliverySpotWidgetFloater_C_ExecuteUbergraph_BP_DeliverySpotWidgetFloater_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

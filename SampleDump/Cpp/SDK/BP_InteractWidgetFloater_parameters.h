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

// Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.UpdateProgress
struct UBP_InteractWidgetFloater_C_UpdateProgress_Params
{
	float                                              NewProgress;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.Construct
struct UBP_InteractWidgetFloater_C_Construct_Params
{
};

// Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.Tick
struct UBP_InteractWidgetFloater_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.ExecuteUbergraph_BP_InteractWidgetFloater
struct UBP_InteractWidgetFloater_C_ExecuteUbergraph_BP_InteractWidgetFloater_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_PerksCustomization.BP_PerksCustomization_C.UpdateWidget
struct UBP_PerksCustomization_C_UpdateWidget_Params
{
};

// Function BP_PerksCustomization.BP_PerksCustomization_C.RegisterPreviewEvents
struct UBP_PerksCustomization_C_RegisterPreviewEvents_Params
{
};

// Function BP_PerksCustomization.BP_PerksCustomization_C.OnDrag
struct UBP_PerksCustomization_C_OnDrag_Params
{
	float                                              DeltaDistance;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PerksCustomization.BP_PerksCustomization_C.OnScroll
struct UBP_PerksCustomization_C_OnScroll_Params
{
	float                                              ScrollDelta;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PerksCustomization.BP_PerksCustomization_C.UpdateProfileAndPreview
struct UBP_PerksCustomization_C_UpdateProfileAndPreview_Params
{
};

// Function BP_PerksCustomization.BP_PerksCustomization_C.Construct
struct UBP_PerksCustomization_C_Construct_Params
{
};

// Function BP_PerksCustomization.BP_PerksCustomization_C.PerkClicked
struct UBP_PerksCustomization_C_PerkClicked_Params
{
	unsigned char                                      NewId;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PerksCustomization.BP_PerksCustomization_C.SetActive
struct UBP_PerksCustomization_C_SetActive_Params
{
};

// Function BP_PerksCustomization.BP_PerksCustomization_C.OnProfileChanged
struct UBP_PerksCustomization_C_OnProfileChanged_Params
{
};

// Function BP_PerksCustomization.BP_PerksCustomization_C.PerkHovered
struct UBP_PerksCustomization_C_PerkHovered_Params
{
	int                                                Cost;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Selected;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PerksCustomization.BP_PerksCustomization_C.ExecuteUbergraph_BP_PerksCustomization
struct UBP_PerksCustomization_C_ExecuteUbergraph_BP_PerksCustomization_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

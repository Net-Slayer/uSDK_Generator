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

// Function BP_Crosshair.BP_Crosshair_C.TriggerDamageIndicator
struct UBP_Crosshair_C_TriggerDamageIndicator_Params
{
	float                                              Render_Angle;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Crosshair.BP_Crosshair_C.UpdateCrosshair
struct UBP_Crosshair_C_UpdateCrosshair_Params
{
};

// Function BP_Crosshair.BP_Crosshair_C.PlayHitmarkerAnimation
struct UBP_Crosshair_C_PlayHitmarkerAnimation_Params
{
	class UWidgetAnimation*                            Anim;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Speed;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<UMG_EUMGSequencePlayMode>              PlayMode;                                                  // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Crosshair.BP_Crosshair_C.ClampAngleToSide
struct UBP_Crosshair_C_ClampAngleToSide_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isSideLeft;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ClampedAngle;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Crosshair.BP_Crosshair_C.ShowHitMarker
struct UBP_Crosshair_C_ShowHitMarker_Params
{
	int                                                HitZoneParam;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Crosshair.BP_Crosshair_C.ClampAngleToDirectionalZone
struct UBP_Crosshair_C_ClampAngleToDirectionalZone_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ClampedAngle;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Crosshair.BP_Crosshair_C.Get_Crosshair_Visibility_1
struct UBP_Crosshair_C_Get_Crosshair_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Crosshair.BP_Crosshair_C.Tick
struct UBP_Crosshair_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Crosshair.BP_Crosshair_C.On Hitmarker Animation Finish
struct UBP_Crosshair_C_On_Hitmarker_Animation_Finish_Params
{
};

// Function BP_Crosshair.BP_Crosshair_C.ExecuteUbergraph_BP_Crosshair
struct UBP_Crosshair_C_ExecuteUbergraph_BP_Crosshair_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

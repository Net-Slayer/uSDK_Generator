// Name: Mordhau, Version: 4_25_hotfix

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Crosshair.BP_Crosshair_C.TriggerDamageIndicator
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Render_Angle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Crosshair_C::TriggerDamageIndicator(float Render_Angle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.TriggerDamageIndicator");

	UBP_Crosshair_C_TriggerDamageIndicator_Params params;
	params.Render_Angle = Render_Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Crosshair.BP_Crosshair_C.UpdateCrosshair
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_Crosshair_C::UpdateCrosshair()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.UpdateCrosshair");

	UBP_Crosshair_C_UpdateCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Crosshair.BP_Crosshair_C.PlayHitmarkerAnimation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Anim                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<UMG_EUMGSequencePlayMode>              PlayMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Crosshair_C::PlayHitmarkerAnimation(class UWidgetAnimation* Anim, float Speed, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.PlayHitmarkerAnimation");

	UBP_Crosshair_C_PlayHitmarkerAnimation_Params params;
	params.Anim = Anim;
	params.Speed = Speed;
	params.PlayMode = PlayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Crosshair.BP_Crosshair_C.ClampAngleToSide
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               isSideLeft                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              ClampedAngle                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Crosshair_C::ClampAngleToSide(float Angle, bool isSideLeft, float* ClampedAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.ClampAngleToSide");

	UBP_Crosshair_C_ClampAngleToSide_Params params;
	params.Angle = Angle;
	params.isSideLeft = isSideLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClampedAngle != nullptr)
		*ClampedAngle = params.ClampedAngle;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Crosshair.BP_Crosshair_C.ShowHitMarker
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                HitZoneParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Crosshair_C::ShowHitMarker(int HitZoneParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.ShowHitMarker");

	UBP_Crosshair_C_ShowHitMarker_Params params;
	params.HitZoneParam = HitZoneParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Crosshair.BP_Crosshair_C.ClampAngleToDirectionalZone
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ClampedAngle                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Crosshair_C::ClampAngleToDirectionalZone(float Angle, float* ClampedAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.ClampAngleToDirectionalZone");

	UBP_Crosshair_C_ClampAngleToDirectionalZone_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClampedAngle != nullptr)
		*ClampedAngle = params.ClampedAngle;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Crosshair.BP_Crosshair_C.Get_Crosshair_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_Crosshair_C::Get_Crosshair_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.Get_Crosshair_Visibility_1");

	UBP_Crosshair_C_Get_Crosshair_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Crosshair.BP_Crosshair_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Crosshair_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.Tick");

	UBP_Crosshair_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Crosshair.BP_Crosshair_C.On Hitmarker Animation Finish
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Crosshair_C::On_Hitmarker_Animation_Finish()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.On Hitmarker Animation Finish");

	UBP_Crosshair_C_On_Hitmarker_Animation_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Crosshair.BP_Crosshair_C.ExecuteUbergraph_BP_Crosshair
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Crosshair_C::ExecuteUbergraph_BP_Crosshair(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crosshair.BP_Crosshair_C.ExecuteUbergraph_BP_Crosshair");

	UBP_Crosshair_C_ExecuteUbergraph_BP_Crosshair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

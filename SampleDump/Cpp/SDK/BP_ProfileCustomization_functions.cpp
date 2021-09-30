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
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TimerOverlay_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::Get_TimerOverlay_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TimerOverlay_Visibility_1");

	UBP_ProfileCustomization_C_Get_TimerOverlay_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TimerText_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_TimerText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TimerText_Text_1");

	UBP_ProfileCustomization_C_Get_TimerText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_AddNewProfileButton_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::Get_AddNewProfileButton_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_AddNewProfileButton_Visibility_1");

	UBP_ProfileCustomization_C_Get_AddNewProfileButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetProfileModificationButtonsVisibility
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::GetProfileModificationButtonsVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetProfileModificationButtonsVisibility");

	UBP_ProfileCustomization_C_GetProfileModificationButtonsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TextBlock_8_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_TextBlock_8_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TextBlock_8_Text_1");

	UBP_ProfileCustomization_C_Get_TextBlock_8_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_RegularCustomization_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::Get_RegularCustomization_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_RegularCustomization_Visibility_1");

	UBP_ProfileCustomization_C_Get_RegularCustomization_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.SetArmoryState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_ArmoryStates_E_ArmoryStates>         NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ProfileCustomization_C::SetArmoryState(TEnumAsByte<E_ArmoryStates_E_ArmoryStates> NewState, bool Animate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.SetArmoryState");

	UBP_ProfileCustomization_C_SetArmoryState_Params params;
	params.NewState = NewState;
	params.Animate = Animate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetVisibility_3
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::GetVisibility_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetVisibility_3");

	UBP_ProfileCustomization_C_GetVisibility_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_PointInfoElement_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::Get_PointInfoElement_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_PointInfoElement_Visibility_1");

	UBP_ProfileCustomization_C_Get_PointInfoElement_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.RibbonCostVisibility
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::RibbonCostVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.RibbonCostVisibility");

	UBP_ProfileCustomization_C_RibbonCostVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_NameRibbonSizeBox_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::Get_NameRibbonSizeBox_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_NameRibbonSizeBox_Visibility_1");

	UBP_ProfileCustomization_C_Get_NameRibbonSizeBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_EquipmentSlotButtons_Visibility
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::Get_EquipmentSlotButtons_Visibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_EquipmentSlotButtons_Visibility");

	UBP_ProfileCustomization_C_Get_EquipmentSlotButtons_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_Skills_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::Get_Skills_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_Skills_Visibility_1");

	UBP_ProfileCustomization_C_Get_Skills_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_CloneRenameDeleteAvailable
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_ProfileCustomization_C::Get_CloneRenameDeleteAvailable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_CloneRenameDeleteAvailable");

	UBP_ProfileCustomization_C_Get_CloneRenameDeleteAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.CompareToSavedProfile
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               AreProfilesEqual                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ProfileCustomization_C::CompareToSavedProfile(bool* AreProfilesEqual)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.CompareToSavedProfile");

	UBP_ProfileCustomization_C_CompareToSavedProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AreProfilesEqual != nullptr)
		*AreProfilesEqual = params.AreProfilesEqual;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_SpawnButtonOverlay_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::Get_SpawnButtonOverlay_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_SpawnButtonOverlay_Visibility_1");

	UBP_ProfileCustomization_C_Get_SpawnButtonOverlay_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_MenuToggleButtonOverlay_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::Get_MenuToggleButtonOverlay_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_MenuToggleButtonOverlay_Visibility_1");

	UBP_ProfileCustomization_C_Get_MenuToggleButtonOverlay_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_ArmorProtectionBarStatic_Percent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_ProfileCustomization_C::Get_ArmorProtectionBarStatic_Percent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_ArmorProtectionBarStatic_Percent_1");

	UBP_ProfileCustomization_C_Get_ArmorProtectionBarStatic_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_MovementSpeedBarStatic_Percent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_ProfileCustomization_C::Get_MovementSpeedBarStatic_Percent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_MovementSpeedBarStatic_Percent_1");

	UBP_ProfileCustomization_C_Get_MovementSpeedBarStatic_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_AdditionalPointsBar_Percent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_ProfileCustomization_C::Get_AdditionalPointsBar_Percent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_AdditionalPointsBar_Percent_1");

	UBP_ProfileCustomization_C_Get_AdditionalPointsBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetAllPointCosts
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Current_Points                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Equipment_Cost                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ArmorCost                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                EquipmentPreviewCost                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ArmorPreviewCost                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PerkCost                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PerkPreviewCost                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               isPreviewPerkSelected                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ProfileCustomization_C::GetAllPointCosts(int* Current_Points, int* Equipment_Cost, int* ArmorCost, int* EquipmentPreviewCost, int* ArmorPreviewCost, int* PerkCost, int* PerkPreviewCost, bool* isPreviewPerkSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetAllPointCosts");

	UBP_ProfileCustomization_C_GetAllPointCosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Current_Points != nullptr)
		*Current_Points = params.Current_Points;
	if (Equipment_Cost != nullptr)
		*Equipment_Cost = params.Equipment_Cost;
	if (ArmorCost != nullptr)
		*ArmorCost = params.ArmorCost;
	if (EquipmentPreviewCost != nullptr)
		*EquipmentPreviewCost = params.EquipmentPreviewCost;
	if (ArmorPreviewCost != nullptr)
		*ArmorPreviewCost = params.ArmorPreviewCost;
	if (PerkCost != nullptr)
		*PerkCost = params.PerkCost;
	if (PerkPreviewCost != nullptr)
		*PerkPreviewCost = params.PerkPreviewCost;
	if (isPreviewPerkSelected != nullptr)
		*isPreviewPerkSelected = params.isPreviewPerkSelected;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_NotEnoughPointsBar_Percent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_ProfileCustomization_C::Get_NotEnoughPointsBar_Percent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_NotEnoughPointsBar_Percent_1");

	UBP_ProfileCustomization_C_Get_NotEnoughPointsBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_PointInfoElement_ToolTipText_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_PointInfoElement_ToolTipText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_PointInfoElement_ToolTipText_1");

	UBP_ProfileCustomization_C_Get_PointInfoElement_ToolTipText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_CurrentPoints_ColorAndOpacity_2
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateColor UBP_ProfileCustomization_C::Get_CurrentPoints_ColorAndOpacity_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_CurrentPoints_ColorAndOpacity_2");

	UBP_ProfileCustomization_C_Get_CurrentPoints_ColorAndOpacity_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_CurrentPoints_Text_2
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_CurrentPoints_Text_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_CurrentPoints_Text_2");

	UBP_ProfileCustomization_C_Get_CurrentPoints_Text_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_Image_17_ColorAndOpacity_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UBP_ProfileCustomization_C::Get_Image_17_ColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_Image_17_ColorAndOpacity_1");

	UBP_ProfileCustomization_C_Get_Image_17_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetVisibility_2
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::GetVisibility_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetVisibility_2");

	UBP_ProfileCustomization_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_SaveButtonOverlay_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::Get_SaveButtonOverlay_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_SaveButtonOverlay_Visibility_1");

	UBP_ProfileCustomization_C_Get_SaveButtonOverlay_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.CloseMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ProfileCustomization_C::CloseMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.CloseMenu");

	UBP_ProfileCustomization_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_ArmorAmountBar_Percent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_ProfileCustomization_C::Get_ArmorAmountBar_Percent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_ArmorAmountBar_Percent_1");

	UBP_ProfileCustomization_C_Get_ArmorAmountBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.UpdateArmorBreakdownButtonStyle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Mordhau_EWearableSlot                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ProfileCustomization_C::UpdateArmorBreakdownButtonStyle(Mordhau_EWearableSlot Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.UpdateArmorBreakdownButtonStyle");

	UBP_ProfileCustomization_C_UpdateArmorBreakdownButtonStyle_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.UpdateGearBreakdownButtonStyle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ProfileCustomization_C::UpdateGearBreakdownButtonStyle(int Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.UpdateGearBreakdownButtonStyle");

	UBP_ProfileCustomization_C_UpdateGearBreakdownButtonStyle_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.ResetBreakdownButtonStyles
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ProfileCustomization_C::ResetBreakdownButtonStyles()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.ResetBreakdownButtonStyles");

	UBP_ProfileCustomization_C_ResetBreakdownButtonStyles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_Legs_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_Legs_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_Legs_Text_1");

	UBP_ProfileCustomization_C_Get_Legs_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_Torso_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_Torso_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_Torso_Text_1");

	UBP_ProfileCustomization_C_Get_Torso_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_Helmet_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_Helmet_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_Helmet_Text_1");

	UBP_ProfileCustomization_C_Get_Helmet_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.DisplayEquipmentSelectionList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_EquipmentSlotCustomization_C*            Equipment_Slot_Reference                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ProfileCustomization_C::DisplayEquipmentSelectionList(class UBP_EquipmentSlotCustomization_C* Equipment_Slot_Reference)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.DisplayEquipmentSelectionList");

	UBP_ProfileCustomization_C_DisplayEquipmentSelectionList_Params params;
	params.Equipment_Slot_Reference = Equipment_Slot_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.DisplayWearableSelectionList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Mordhau_EWearableSlot                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ProfileCustomization_C::DisplayWearableSelectionList(Mordhau_EWearableSlot Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.DisplayWearableSelectionList");

	UBP_ProfileCustomization_C_DisplayWearableSelectionList_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_CurrentPoints_ColorAndOpacity_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateColor UBP_ProfileCustomization_C::Get_CurrentPoints_ColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_CurrentPoints_ColorAndOpacity_1");

	UBP_ProfileCustomization_C_Get_CurrentPoints_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_MovementSpeedBar_Percent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_ProfileCustomization_C::Get_MovementSpeedBar_Percent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_MovementSpeedBar_Percent_1");

	UBP_ProfileCustomization_C_Get_MovementSpeedBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_PointsLeft_Percent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_ProfileCustomization_C::Get_PointsLeft_Percent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_PointsLeft_Percent_1");

	UBP_ProfileCustomization_C_Get_PointsLeft_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TertiaryWeaponText_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_TertiaryWeaponText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TertiaryWeaponText_Text_1");

	UBP_ProfileCustomization_C_Get_TertiaryWeaponText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_SecondaryWeaponText_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_SecondaryWeaponText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_SecondaryWeaponText_Text_1");

	UBP_ProfileCustomization_C_Get_SecondaryWeaponText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_PrimaryWeaponText_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_PrimaryWeaponText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_PrimaryWeaponText_Text_1");

	UBP_ProfileCustomization_C_Get_PrimaryWeaponText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.SetLoadoutRibbonStyle
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Hover                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ProfileCustomization_C::SetLoadoutRibbonStyle(bool Active, bool Hover)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.SetLoadoutRibbonStyle");

	UBP_ProfileCustomization_C_SetLoadoutRibbonStyle_Params params;
	params.Active = Active;
	params.Hover = Hover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Unselect Main Tabs
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ProfileCustomization_C::Unselect_Main_Tabs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Unselect Main Tabs");

	UBP_ProfileCustomization_C_Unselect_Main_Tabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Set Ribbon Text Name to selected profile's name
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::Set_Ribbon_Text_Name_to_selected_profiles_name()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Set Ribbon Text Name to selected profile's name");

	UBP_ProfileCustomization_C_Set_Ribbon_Text_Name_to_selected_profiles_name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_RibbonText_Text_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_RibbonText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_RibbonText_Text_1");

	UBP_ProfileCustomization_C_Get_RibbonText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.SetPointCostBreakdownEntries
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ProfileCustomization_C::SetPointCostBreakdownEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.SetPointCostBreakdownEntries");

	UBP_ProfileCustomization_C_SetPointCostBreakdownEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TertiaryCost_Visibility_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::Get_TertiaryCost_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TertiaryCost_Visibility_1");

	UBP_ProfileCustomization_C_Get_TertiaryCost_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_SecondaryCost_Visibility_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::Get_SecondaryCost_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_SecondaryCost_Visibility_1");

	UBP_ProfileCustomization_C_Get_SecondaryCost_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_PrimaryCost_Visibility_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::Get_PrimaryCost_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_PrimaryCost_Visibility_1");

	UBP_ProfileCustomization_C_Get_PrimaryCost_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_LegsCost_Visibility_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::Get_LegsCost_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_LegsCost_Visibility_1");

	UBP_ProfileCustomization_C_Get_LegsCost_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TorsoCost_Visibility_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::Get_TorsoCost_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TorsoCost_Visibility_1");

	UBP_ProfileCustomization_C_Get_TorsoCost_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_HelmetCost_Visibility_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::Get_HelmetCost_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_HelmetCost_Visibility_1");

	UBP_ProfileCustomization_C_Get_HelmetCost_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TorsoCost_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_TorsoCost_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TorsoCost_Text_1");

	UBP_ProfileCustomization_C_Get_TorsoCost_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_LegsCost_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_LegsCost_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_LegsCost_Text_1");

	UBP_ProfileCustomization_C_Get_LegsCost_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_SecondaryCost_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_SecondaryCost_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_SecondaryCost_Text_1");

	UBP_ProfileCustomization_C_Get_SecondaryCost_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TertiaryCost_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_TertiaryCost_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TertiaryCost_Text_1");

	UBP_ProfileCustomization_C_Get_TertiaryCost_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_PrimaryCost_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_PrimaryCost_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_PrimaryCost_Text_1");

	UBP_ProfileCustomization_C_Get_PrimaryCost_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetCostEquipmentSlot
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Cost                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Name                                                       (Parm, OutParm)
void UBP_ProfileCustomization_C::GetCostEquipmentSlot(int Slot, int* Cost, struct FText* Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetCostEquipmentSlot");

	UBP_ProfileCustomization_C_GetCostEquipmentSlot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Cost != nullptr)
		*Cost = params.Cost;
	if (Name != nullptr)
		*Name = params.Name;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetCostArmorSlot
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Mordhau_EWearableSlot                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Cost                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Name                                                       (Parm, OutParm)
void UBP_ProfileCustomization_C::GetCostArmorSlot(Mordhau_EWearableSlot Slot, int* Cost, struct FText* Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetCostArmorSlot");

	UBP_ProfileCustomization_C_GetCostArmorSlot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Cost != nullptr)
		*Cost = params.Cost;
	if (Name != nullptr)
		*Name = params.Name;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_HelmetCost_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_HelmetCost_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_HelmetCost_Text_1");

	UBP_ProfileCustomization_C_Get_HelmetCost_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TotalPoints_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_TotalPoints_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_TotalPoints_Text_1");

	UBP_ProfileCustomization_C_Get_TotalPoints_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_CurrentPoints_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::Get_CurrentPoints_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Get_CurrentPoints_Text_1");

	UBP_ProfileCustomization_C_Get_CurrentPoints_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.SaveFunction
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ProfileCustomization_C::SaveFunction(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.SaveFunction");

	UBP_ProfileCustomization_C_SaveFunction_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetColorAndOpacity_3
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateColor UBP_ProfileCustomization_C::GetColorAndOpacity_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetColorAndOpacity_3");

	UBP_ProfileCustomization_C_GetColorAndOpacity_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetColorAndOpacity_2
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateColor UBP_ProfileCustomization_C::GetColorAndOpacity_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetColorAndOpacity_2");

	UBP_ProfileCustomization_C_GetColorAndOpacity_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetColorAndOpacity_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateColor UBP_ProfileCustomization_C::GetColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetColorAndOpacity_1");

	UBP_ProfileCustomization_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ProfileCustomization_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetVisibility_1");

	UBP_ProfileCustomization_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetText_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ProfileCustomization_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.GetText_1");

	UBP_ProfileCustomization_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.updateGearTabColors
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UButton*                                     Selected_Button                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ProfileCustomization_C::updateGearTabColors(class UButton* Selected_Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.updateGearTabColors");

	UBP_ProfileCustomization_C_updateGearTabColors_Params params;
	params.Selected_Button = Selected_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.updateMainTabColors
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UImage*                                      SelectedIcon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UButton*                                     SelectedButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ProfileCustomization_C::updateMainTabColors(class UImage* SelectedIcon, class UButton* SelectedButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.updateMainTabColors");

	UBP_ProfileCustomization_C_updateMainTabColors_Params params;
	params.SelectedIcon = SelectedIcon;
	params.SelectedButton = SelectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.DestroyCustomizationActors
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::DestroyCustomizationActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.DestroyCustomizationActors");

	UBP_ProfileCustomization_C_DestroyCustomizationActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnEquipmentButtonClick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ProfileCustomization_C::OnEquipmentButtonClick(int Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnEquipmentButtonClick");

	UBP_ProfileCustomization_C_OnEquipmentButtonClick_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnEquipment1Click
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::OnEquipment1Click()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnEquipment1Click");

	UBP_ProfileCustomization_C_OnEquipment1Click_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnEquipment3Click
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::OnEquipment3Click()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnEquipment3Click");

	UBP_ProfileCustomization_C_OnEquipment3Click_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnEquipment2Click
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::OnEquipment2Click()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnEquipment2Click");

	UBP_ProfileCustomization_C_OnEquipment2Click_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__AddNewEquipmentPresetButton_K2Node_ComponentBoundEvent_5792_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__AddNewEquipmentPresetButton_K2Node_ComponentBoundEvent_5792_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__AddNewEquipmentPresetButton_K2Node_ComponentBoundEvent_5792_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__AddNewEquipmentPresetButton_K2Node_ComponentBoundEvent_5792_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__EditEquipmentPresetButton_K2Node_ComponentBoundEvent_5821_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__EditEquipmentPresetButton_K2Node_ComponentBoundEvent_5821_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__EditEquipmentPresetButton_K2Node_ComponentBoundEvent_5821_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__EditEquipmentPresetButton_K2Node_ComponentBoundEvent_5821_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__DeleteEquipmentPresetButton_K2Node_ComponentBoundEvent_5852_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__DeleteEquipmentPresetButton_K2Node_ComponentBoundEvent_5852_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__DeleteEquipmentPresetButton_K2Node_ComponentBoundEvent_5852_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__DeleteEquipmentPresetButton_K2Node_ComponentBoundEvent_5852_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnShown
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::OnShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnShown");

	UBP_ProfileCustomization_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.NewProfileNameEntered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::NewProfileNameEntered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.NewProfileNameEntered");

	UBP_ProfileCustomization_C_NewProfileNameEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.NewProfileNameCanceled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::NewProfileNameCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.NewProfileNameCanceled");

	UBP_ProfileCustomization_C_NewProfileNameCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__CloneProfileButton_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__CloneProfileButton_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__CloneProfileButton_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__CloneProfileButton_K2Node_ComponentBoundEvent_413_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.DeleteCancel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::DeleteCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.DeleteCancel");

	UBP_ProfileCustomization_C_DeleteCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.DeleteConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::DeleteConfirm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.DeleteConfirm");

	UBP_ProfileCustomization_C_DeleteConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__RenameProfileButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__RenameProfileButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__RenameProfileButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__RenameProfileButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.RenameCancel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::RenameCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.RenameCancel");

	UBP_ProfileCustomization_C_RenameCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.RenameConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::RenameConfirm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.RenameConfirm");

	UBP_ProfileCustomization_C_RenameConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__EquipmentButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__EquipmentButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__EquipmentButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__EquipmentButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__WearablesButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__WearablesButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__WearablesButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__WearablesButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__SkillsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__SkillsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__SkillsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__SkillsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__FaceButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__FaceButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__FaceButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__FaceButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__BodyButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__BodyButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__BodyButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__BodyButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__TertiarySlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__TertiarySlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__TertiarySlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__TertiarySlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__PrimarySlotButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__PrimarySlotButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__PrimarySlotButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__PrimarySlotButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__SecondarySlotButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__SecondarySlotButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__SecondarySlotButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__SecondarySlotButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_2730_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__ControlsButton_K2Node_ComponentBoundEvent_2730_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_2730_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__ControlsButton_K2Node_ComponentBoundEvent_2730_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.ShowSkills
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::ShowSkills()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.ShowSkills");

	UBP_ProfileCustomization_C_ShowSkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.ShowWearables
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::ShowWearables()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.ShowWearables");

	UBP_ProfileCustomization_C_ShowWearables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_ProfileCustomization_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Construct");

	UBP_ProfileCustomization_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_654_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_654_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_654_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_654_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnProfileChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCharacterProfile                           New_Profile                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_ProfileCustomization_C::OnProfileChanged(const struct FCharacterProfile& New_Profile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnProfileChanged");

	UBP_ProfileCustomization_C_OnProfileChanged_Params params;
	params.New_Profile = New_Profile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.ShowLoadoutPicker
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::ShowLoadoutPicker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.ShowLoadoutPicker");

	UBP_ProfileCustomization_C_ShowLoadoutPicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3551_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3551_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3551_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3551_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__Button_249_K2Node_ComponentBoundEvent_4101_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__Button_249_K2Node_ComponentBoundEvent_4101_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__Button_249_K2Node_ComponentBoundEvent_4101_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__Button_249_K2Node_ComponentBoundEvent_4101_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__SecondaryRibbonButton_K2Node_ComponentBoundEvent_4243_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__SecondaryRibbonButton_K2Node_ComponentBoundEvent_4243_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__SecondaryRibbonButton_K2Node_ComponentBoundEvent_4243_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__SecondaryRibbonButton_K2Node_ComponentBoundEvent_4243_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__TertiaryRibbonButton_K2Node_ComponentBoundEvent_4277_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__TertiaryRibbonButton_K2Node_ComponentBoundEvent_4277_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__TertiaryRibbonButton_K2Node_ComponentBoundEvent_4277_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__TertiaryRibbonButton_K2Node_ComponentBoundEvent_4277_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__LegsRibbonButton_K2Node_ComponentBoundEvent_4464_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__LegsRibbonButton_K2Node_ComponentBoundEvent_4464_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__LegsRibbonButton_K2Node_ComponentBoundEvent_4464_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__LegsRibbonButton_K2Node_ComponentBoundEvent_4464_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__TorsoRibbonButton_K2Node_ComponentBoundEvent_4481_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__TorsoRibbonButton_K2Node_ComponentBoundEvent_4481_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__TorsoRibbonButton_K2Node_ComponentBoundEvent_4481_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__TorsoRibbonButton_K2Node_ComponentBoundEvent_4481_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_206_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_206_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_206_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_206_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ProfileCustomization_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Tick");

	UBP_ProfileCustomization_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1706_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1706_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1706_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1706_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_3555_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_3555_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_3555_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_3555_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__MenuToggleButton_K2Node_ComponentBoundEvent_4038_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileCustomization_C::BndEvt__MenuToggleButton_K2Node_ComponentBoundEvent_4038_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.BndEvt__MenuToggleButton_K2Node_ComponentBoundEvent_4038_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileCustomization_C_BndEvt__MenuToggleButton_K2Node_ComponentBoundEvent_4038_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.UnsavedChangesPopup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::UnsavedChangesPopup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.UnsavedChangesPopup");

	UBP_ProfileCustomization_C_UnsavedChangesPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.ChangesCancel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::ChangesCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.ChangesCancel");

	UBP_ProfileCustomization_C_ChangesCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.ChangesConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::ChangesConfirm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.ChangesConfirm");

	UBP_ProfileCustomization_C_ChangesConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnAnimationFinished
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ProfileCustomization_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.OnAnimationFinished");

	UBP_ProfileCustomization_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Show Regular Armory
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::Show_Regular_Armory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Show Regular Armory");

	UBP_ProfileCustomization_C_Show_Regular_Armory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.Show HordeBR Armory
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ProfileCustomization_C::Show_HordeBR_Armory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.Show HordeBR Armory");

	UBP_ProfileCustomization_C_Show_HordeBR_Armory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileCustomization.BP_ProfileCustomization_C.ExecuteUbergraph_BP_ProfileCustomization
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ProfileCustomization_C::ExecuteUbergraph_BP_ProfileCustomization(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileCustomization.BP_ProfileCustomization_C.ExecuteUbergraph_BP_ProfileCustomization");

	UBP_ProfileCustomization_C_ExecuteUbergraph_BP_ProfileCustomization_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

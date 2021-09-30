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
//		Name   -> Function BP_CasualRankWidget.BP_CasualRankWidget_C.UpdateFromSuppliedXP
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                SuppliedXP                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CasualRankWidget_C::UpdateFromSuppliedXP(int SuppliedXP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CasualRankWidget.BP_CasualRankWidget_C.UpdateFromSuppliedXP");

	UBP_CasualRankWidget_C_UpdateFromSuppliedXP_Params params;
	params.SuppliedXP = SuppliedXP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CasualRankWidget.BP_CasualRankWidget_C.GetToolTipText_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_CasualRankWidget_C::GetToolTipText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CasualRankWidget.BP_CasualRankWidget_C.GetToolTipText_1");

	UBP_CasualRankWidget_C_GetToolTipText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CasualRankWidget.BP_CasualRankWidget_C.UpdateRankProgress
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                XP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CasualRankWidget_C::UpdateRankProgress(int XP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CasualRankWidget.BP_CasualRankWidget_C.UpdateRankProgress");

	UBP_CasualRankWidget_C_UpdateRankProgress_Params params;
	params.XP = XP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CasualRankWidget.BP_CasualRankWidget_C.Get_RemainingXPText_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_CasualRankWidget_C::Get_RemainingXPText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CasualRankWidget.BP_CasualRankWidget_C.Get_RemainingXPText_Text_1");

	UBP_CasualRankWidget_C_Get_RemainingXPText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CasualRankWidget.BP_CasualRankWidget_C.Get_XPProgressBar_Percent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_CasualRankWidget_C::Get_XPProgressBar_Percent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CasualRankWidget.BP_CasualRankWidget_C.Get_XPProgressBar_Percent_1");

	UBP_CasualRankWidget_C_Get_XPProgressBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CasualRankWidget.BP_CasualRankWidget_C.Update
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_CasualRankWidget_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CasualRankWidget.BP_CasualRankWidget_C.Update");

	UBP_CasualRankWidget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

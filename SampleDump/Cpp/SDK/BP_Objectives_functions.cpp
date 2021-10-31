// Name: Mordhau, Version: Patch23

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
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Objectives.BP_Objectives_C.Get_ObjectiveBorder_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_Objectives_C::Get_ObjectiveBorder_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Objectives.BP_Objectives_C.Get_ObjectiveBorder_Visibility_1");

	UBP_Objectives_C_Get_ObjectiveBorder_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Objectives.BP_Objectives_C.Update Team Image
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_Objectives_C::Update_Team_Image()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Objectives.BP_Objectives_C.Update Team Image");

	UBP_Objectives_C_Update_Team_Image_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Objectives.BP_Objectives_C.Hide
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Objectives_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Objectives.BP_Objectives_C.Hide");

	UBP_Objectives_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Objectives.BP_Objectives_C.Show
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Header                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Objectives_C::Show(const struct FText& Description, const struct FText& Header, class UTexture2D* Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Objectives.BP_Objectives_C.Show");

	UBP_Objectives_C_Show_Params params;
	params.Description = Description;
	params.Header = Header;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Objectives.BP_Objectives_C.FadeOutDone
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Objectives_C::FadeOutDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Objectives.BP_Objectives_C.FadeOutDone");

	UBP_Objectives_C_FadeOutDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Objectives.BP_Objectives_C.ExecuteUbergraph_BP_Objectives
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Objectives_C::ExecuteUbergraph_BP_Objectives(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Objectives.BP_Objectives_C.ExecuteUbergraph_BP_Objectives");

	UBP_Objectives_C_ExecuteUbergraph_BP_Objectives_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

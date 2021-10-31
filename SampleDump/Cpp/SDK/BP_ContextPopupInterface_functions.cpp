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
//		Name   -> Function BP_ContextPopupInterface.BP_ContextPopupInterface_C.CreateWrapper
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TMap<struct FString, struct FText>                 InOptions                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_ContextPopupInterface_C::CreateWrapper(TMap<struct FString, struct FText> InOptions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupInterface.BP_ContextPopupInterface_C.CreateWrapper");

	UBP_ContextPopupInterface_C_CreateWrapper_Params params;
	params.InOptions = InOptions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ContextPopupInterface.BP_ContextPopupInterface_C.InitializeOptions
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TMap<struct FString, struct FText>                 OptionsMap                                                 (Parm, OutParm)
void UBP_ContextPopupInterface_C::InitializeOptions(TMap<struct FString, struct FText>* OptionsMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupInterface.BP_ContextPopupInterface_C.InitializeOptions");

	UBP_ContextPopupInterface_C_InitializeOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OptionsMap != nullptr)
		*OptionsMap = params.OptionsMap;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ContextPopupInterface.BP_ContextPopupInterface_C.OptionSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_ContextPopupInterface_C::OptionSelected(const struct FString& Option)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupInterface.BP_ContextPopupInterface_C.OptionSelected");

	UBP_ContextPopupInterface_C_OptionSelected_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

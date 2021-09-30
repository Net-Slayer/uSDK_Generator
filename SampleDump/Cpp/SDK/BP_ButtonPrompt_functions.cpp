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
//		Name   -> Function BP_ButtonPrompt.BP_ButtonPrompt_C.RefreshIcon
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ButtonPrompt_C::RefreshIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ButtonPrompt.BP_ButtonPrompt_C.RefreshIcon");

	UBP_ButtonPrompt_C_RefreshIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ButtonPrompt.BP_ButtonPrompt_C.Update
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ActionName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       DisplayedText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_ButtonPrompt_C::Update(const struct FName& ActionName, const struct FText& DisplayedText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ButtonPrompt.BP_ButtonPrompt_C.Update");

	UBP_ButtonPrompt_C_Update_Params params;
	params.ActionName = ActionName;
	params.DisplayedText = DisplayedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ButtonPrompt.BP_ButtonPrompt_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_ButtonPrompt_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ButtonPrompt.BP_ButtonPrompt_C.Construct");

	UBP_ButtonPrompt_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ButtonPrompt.BP_ButtonPrompt_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ButtonPrompt_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ButtonPrompt.BP_ButtonPrompt_C.PreConstruct");

	UBP_ButtonPrompt_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ButtonPrompt.BP_ButtonPrompt_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ButtonPrompt_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ButtonPrompt.BP_ButtonPrompt_C.Tick");

	UBP_ButtonPrompt_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ButtonPrompt.BP_ButtonPrompt_C.ExecuteUbergraph_BP_ButtonPrompt
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ButtonPrompt_C::ExecuteUbergraph_BP_ButtonPrompt(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ButtonPrompt.BP_ButtonPrompt_C.ExecuteUbergraph_BP_ButtonPrompt");

	UBP_ButtonPrompt_C_ExecuteUbergraph_BP_ButtonPrompt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

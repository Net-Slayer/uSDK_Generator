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
//		Name   -> Function BP_ButtonPrompt.BP_ButtonPrompt_C.Initialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Action_Name                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Displayed_Text                                             (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_ButtonPrompt_C::Initialize(const struct FName& Action_Name, const struct FText& Displayed_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ButtonPrompt.BP_ButtonPrompt_C.Initialize");

	UBP_ButtonPrompt_C_Initialize_Params params;
	params.Action_Name = Action_Name;
	params.Displayed_Text = Displayed_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ButtonPrompt.BP_ButtonPrompt_C.Update from Action bind
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ButtonPrompt_C::Update_from_Action_bind()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ButtonPrompt.BP_ButtonPrompt_C.Update from Action bind");

	UBP_ButtonPrompt_C_Update_from_Action_bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ButtonPrompt.BP_ButtonPrompt_C.Update from forced key
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ButtonPrompt_C::Update_from_forced_key()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ButtonPrompt.BP_ButtonPrompt_C.Update from forced key");

	UBP_ButtonPrompt_C_Update_from_forced_key_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
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
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ButtonPrompt.BP_ButtonPrompt_C.Update
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_ButtonPrompt_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ButtonPrompt.BP_ButtonPrompt_C.Update");

	UBP_ButtonPrompt_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
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
//		Offset -> 0x014F36A0
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
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ButtonPrompt.BP_ButtonPrompt_C.ExecuteUbergraph_BP_ButtonPrompt
//		Flags  -> (Final)
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

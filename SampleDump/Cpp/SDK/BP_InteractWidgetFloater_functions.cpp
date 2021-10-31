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
//		Name   -> Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.UpdateProgress
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NewProgress                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_InteractWidgetFloater_C::UpdateProgress(float NewProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.UpdateProgress");

	UBP_InteractWidgetFloater_C_UpdateProgress_Params params;
	params.NewProgress = NewProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_InteractWidgetFloater_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.Construct");

	UBP_InteractWidgetFloater_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_InteractWidgetFloater_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.Tick");

	UBP_InteractWidgetFloater_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.ExecuteUbergraph_BP_InteractWidgetFloater
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_InteractWidgetFloater_C::ExecuteUbergraph_BP_InteractWidgetFloater(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InteractWidgetFloater.BP_InteractWidgetFloater_C.ExecuteUbergraph_BP_InteractWidgetFloater");

	UBP_InteractWidgetFloater_C_ExecuteUbergraph_BP_InteractWidgetFloater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

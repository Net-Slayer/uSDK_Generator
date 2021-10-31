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
//		Name   -> Function BP_PushableWidgetFloater.BP_PushableWidgetFloater_C.UpdateProgress
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NewProgress                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PushableWidgetFloater_C::UpdateProgress(float NewProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushableWidgetFloater.BP_PushableWidgetFloater_C.UpdateProgress");

	UBP_PushableWidgetFloater_C_UpdateProgress_Params params;
	params.NewProgress = NewProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushableWidgetFloater.BP_PushableWidgetFloater_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PushableWidgetFloater_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushableWidgetFloater.BP_PushableWidgetFloater_C.Tick");

	UBP_PushableWidgetFloater_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushableWidgetFloater.BP_PushableWidgetFloater_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_PushableWidgetFloater_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushableWidgetFloater.BP_PushableWidgetFloater_C.Construct");

	UBP_PushableWidgetFloater_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushableWidgetFloater.BP_PushableWidgetFloater_C.ExecuteUbergraph_BP_PushableWidgetFloater
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PushableWidgetFloater_C::ExecuteUbergraph_BP_PushableWidgetFloater(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushableWidgetFloater.BP_PushableWidgetFloater_C.ExecuteUbergraph_BP_PushableWidgetFloater");

	UBP_PushableWidgetFloater_C_ExecuteUbergraph_BP_PushableWidgetFloater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

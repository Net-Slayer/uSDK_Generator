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
//		Name   -> Function BP_HoveredSetting.BP_HoveredSetting_C.SetPerformanceImpact
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTextBlock*                                  Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Prefix                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_HoveredSetting_C::SetPerformanceImpact(int Amount, class UTextBlock* Widget, const struct FString& Prefix)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HoveredSetting.BP_HoveredSetting_C.SetPerformanceImpact");

	UBP_HoveredSetting_C_SetPerformanceImpact_Params params;
	params.Amount = Amount;
	params.Widget = Widget;
	params.Prefix = Prefix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HoveredSetting.BP_HoveredSetting_C.SetHoveredSetting
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               bShowPerformanceImpact                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                CPU_Impact                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                GPU_Impact                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                VRAM_Impact                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HoveredSetting_C::SetHoveredSetting(const struct FText& Title, const struct FText& Description, bool bShowPerformanceImpact, int CPU_Impact, int GPU_Impact, int VRAM_Impact, class UTexture2D* Image)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HoveredSetting.BP_HoveredSetting_C.SetHoveredSetting");

	UBP_HoveredSetting_C_SetHoveredSetting_Params params;
	params.Title = Title;
	params.Description = Description;
	params.bShowPerformanceImpact = bShowPerformanceImpact;
	params.CPU_Impact = CPU_Impact;
	params.GPU_Impact = GPU_Impact;
	params.VRAM_Impact = VRAM_Impact;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HoveredSetting.BP_HoveredSetting_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_HoveredSetting_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HoveredSetting.BP_HoveredSetting_C.Construct");

	UBP_HoveredSetting_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HoveredSetting.BP_HoveredSetting_C.ExecuteUbergraph_BP_HoveredSetting
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HoveredSetting_C::ExecuteUbergraph_BP_HoveredSetting(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HoveredSetting.BP_HoveredSetting_C.ExecuteUbergraph_BP_HoveredSetting");

	UBP_HoveredSetting_C_ExecuteUbergraph_BP_HoveredSetting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

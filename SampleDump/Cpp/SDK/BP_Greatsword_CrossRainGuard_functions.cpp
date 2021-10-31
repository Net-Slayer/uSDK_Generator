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
//		Name   -> Function BP_Greatsword_CrossRainGuard.BP_Greatsword_CrossRainGuard_C.ReceiveBeginPlay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Greatsword_CrossRainGuard_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Greatsword_CrossRainGuard.BP_Greatsword_CrossRainGuard_C.ReceiveBeginPlay");

	UBP_Greatsword_CrossRainGuard_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Greatsword_CrossRainGuard.BP_Greatsword_CrossRainGuard_C.ReceiveActorBeginOverlap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Greatsword_CrossRainGuard_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Greatsword_CrossRainGuard.BP_Greatsword_CrossRainGuard_C.ReceiveActorBeginOverlap");

	UBP_Greatsword_CrossRainGuard_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Greatsword_CrossRainGuard.BP_Greatsword_CrossRainGuard_C.ReceiveTick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Greatsword_CrossRainGuard_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Greatsword_CrossRainGuard.BP_Greatsword_CrossRainGuard_C.ReceiveTick");

	UBP_Greatsword_CrossRainGuard_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Greatsword_CrossRainGuard.BP_Greatsword_CrossRainGuard_C.ExecuteUbergraph_BP_Greatsword_CrossRainGuard
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Greatsword_CrossRainGuard_C::ExecuteUbergraph_BP_Greatsword_CrossRainGuard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Greatsword_CrossRainGuard.BP_Greatsword_CrossRainGuard_C.ExecuteUbergraph_BP_Greatsword_CrossRainGuard");

	UBP_Greatsword_CrossRainGuard_C_ExecuteUbergraph_BP_Greatsword_CrossRainGuard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

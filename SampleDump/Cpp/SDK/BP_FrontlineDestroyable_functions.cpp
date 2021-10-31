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
//		Name   -> Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.IsInObjectiveArea
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               InArea                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FrontlineDestroyable_C::IsInObjectiveArea(const struct FVector& Location, bool* InArea)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.IsInObjectiveArea");

	ABP_FrontlineDestroyable_C_IsInObjectiveArea_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InArea != nullptr)
		*InArea = params.InArea;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.IsCompleted
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Completed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FrontlineDestroyable_C::IsCompleted(bool* Completed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.IsCompleted");

	ABP_FrontlineDestroyable_C_IsCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Completed != nullptr)
		*Completed = params.Completed;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.GetObjectiveProgress
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		float                                              Progress                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineDestroyable_C::GetObjectiveProgress(float* Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.GetObjectiveProgress");

	ABP_FrontlineDestroyable_C_GetObjectiveProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.UpdateUIWidgets
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FrontlineDestroyable_C::UpdateUIWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.UpdateUIWidgets");

	ABP_FrontlineDestroyable_C_UpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.EnemyLostPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineDestroyable_C::EnemyLostPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.EnemyLostPrerequisites");

	ABP_FrontlineDestroyable_C_EnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.EnemyGainedPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineDestroyable_C::EnemyGainedPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.EnemyGainedPrerequisites");

	ABP_FrontlineDestroyable_C_EnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.Initialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_CapturePoint_C*                          InCapturePoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineDestroyable_C::Initialize(class ABP_CapturePoint_C* InCapturePoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.Initialize");

	ABP_FrontlineDestroyable_C_Initialize_Params params;
	params.InCapturePoint = InCapturePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_FrontlineDestroyable_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.ReceiveBeginPlay");

	ABP_FrontlineDestroyable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnReplicatedHealthChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineDestroyable_C::OnReplicatedHealthChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnReplicatedHealthChanged");

	ABP_FrontlineDestroyable_C_OnReplicatedHealthChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.ReceiveAnyDamage
//		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineDestroyable_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.ReceiveAnyDamage");

	ABP_FrontlineDestroyable_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnEnemyGainedPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineDestroyable_C::OnEnemyGainedPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnEnemyGainedPrerequisites");

	ABP_FrontlineDestroyable_C_OnEnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnEnemyLostPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineDestroyable_C::OnEnemyLostPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnEnemyLostPrerequisites");

	ABP_FrontlineDestroyable_C_OnEnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnUpdateUIWidgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineDestroyable_C::OnUpdateUIWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnUpdateUIWidgets");

	ABP_FrontlineDestroyable_C_OnUpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnInitialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_CapturePoint_C*                          Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineDestroyable_C::OnInitialize(class ABP_CapturePoint_C* Point)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnInitialize");

	ABP_FrontlineDestroyable_C_OnInitialize_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnAnyObjectiveProgressChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineDestroyable_C::OnAnyObjectiveProgressChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.OnAnyObjectiveProgressChanged");

	ABP_FrontlineDestroyable_C_OnAnyObjectiveProgressChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.ExecuteUbergraph_BP_FrontlineDestroyable
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineDestroyable_C::ExecuteUbergraph_BP_FrontlineDestroyable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineDestroyable.BP_FrontlineDestroyable_C.ExecuteUbergraph_BP_FrontlineDestroyable");

	ABP_FrontlineDestroyable_C_ExecuteUbergraph_BP_FrontlineDestroyable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

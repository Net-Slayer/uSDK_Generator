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
//		Offset -> 0x00CC3400
//		Name   -> Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
//		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bShouldDestroyOnSystemFinish                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANiagaraActor::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraActor.SetDestroyOnSystemFinish");

	ANiagaraActor_SetDestroyOnSystemFinish_Params params;
	params.bShouldDestroyOnSystemFinish = bShouldDestroyOnSystemFinish;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC2F90
//		Name   -> Function Niagara.NiagaraActor.OnNiagaraSystemFinished
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UNiagaraComponent*                           FinishedComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANiagaraActor::OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraActor.OnNiagaraSystemFinished");

	ANiagaraActor_OnNiagaraSystemFinished_Params params;
	params.FinishedComponent = FinishedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC4830
//		Name   -> Function Niagara.NiagaraComponent.SetVariableVec4
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FName                                       InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector4                                    InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableVec4(const struct FName& InVariableName, const struct FVector4& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec4");

	UNiagaraComponent_SetVariableVec4_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC4760
//		Name   -> Function Niagara.NiagaraComponent.SetVariableVec3
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FName                                       InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableVec3(const struct FName& InVariableName, const struct FVector& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec3");

	UNiagaraComponent_SetVariableVec3_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC46A0
//		Name   -> Function Niagara.NiagaraComponent.SetVariableVec2
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FName                                       InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableVec2(const struct FName& InVariableName, const struct FVector2D& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec2");

	UNiagaraComponent_SetVariableVec2_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC45D0
//		Name   -> Function Niagara.NiagaraComponent.SetVariableQuat
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FName                                       InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FQuat                                       InValue                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableQuat(const struct FName& InVariableName, const struct FQuat& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableQuat");

	UNiagaraComponent_SetVariableQuat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC4510
//		Name   -> Function Niagara.NiagaraComponent.SetVariableObject
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableObject(const struct FName& InVariableName, class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableObject");

	UNiagaraComponent_SetVariableObject_Params params;
	params.InVariableName = InVariableName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC4450
//		Name   -> Function Niagara.NiagaraComponent.SetVariableMaterial
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMaterialInterface*                          Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableMaterial(const struct FName& InVariableName, class UMaterialInterface* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableMaterial");

	UNiagaraComponent_SetVariableMaterial_Params params;
	params.InVariableName = InVariableName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC4380
//		Name   -> Function Niagara.NiagaraComponent.SetVariableLinearColor
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FName                                       InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableLinearColor(const struct FName& InVariableName, const struct FLinearColor& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableLinearColor");

	UNiagaraComponent_SetVariableLinearColor_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC42C0
//		Name   -> Function Niagara.NiagaraComponent.SetVariableInt
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableInt(const struct FName& InVariableName, int InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableInt");

	UNiagaraComponent_SetVariableInt_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC41F0
//		Name   -> Function Niagara.NiagaraComponent.SetVariableFloat
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableFloat(const struct FName& InVariableName, float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableFloat");

	UNiagaraComponent_SetVariableFloat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC4120
//		Name   -> Function Niagara.NiagaraComponent.SetVariableBool
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableBool(const struct FName& InVariableName, bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableBool");

	UNiagaraComponent_SetVariableBool_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC4060
//		Name   -> Function Niagara.NiagaraComponent.SetVariableActor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetVariableActor(const struct FName& InVariableName, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableActor");

	UNiagaraComponent_SetVariableActor_Params params;
	params.InVariableName = InVariableName;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3FE0
//		Name   -> Function Niagara.NiagaraComponent.SetSeekDelta
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InSeekDelta                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetSeekDelta(float InSeekDelta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetSeekDelta");

	UNiagaraComponent_SetSeekDelta_Params params;
	params.InSeekDelta = InSeekDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3F50
//		Name   -> Function Niagara.NiagaraComponent.SetRenderingEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInRenderingEnabled                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetRenderingEnabled");

	UNiagaraComponent_SetRenderingEnabled_Params params;
	params.bInRenderingEnabled = bInRenderingEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3E80
//		Name   -> Function Niagara.NiagaraComponent.SetPreviewLODDistance
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnablePreviewLODDistance                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PreviewLODDistance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPreviewLODDistance");

	UNiagaraComponent_SetPreviewLODDistance_Params params;
	params.bEnablePreviewLODDistance = bEnablePreviewLODDistance;
	params.PreviewLODDistance = PreviewLODDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3DF0
//		Name   -> Function Niagara.NiagaraComponent.SetPaused
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInPaused                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetPaused(bool bInPaused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPaused");

	UNiagaraComponent_SetPaused_Params params;
	params.bInPaused = bInPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3CF0
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector4                                    InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec4");

	UNiagaraComponent_SetNiagaraVariableVec4_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3C00
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec3");

	UNiagaraComponent_SetNiagaraVariableVec3_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3B20
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec2");

	UNiagaraComponent_SetNiagaraVariableVec2_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3A30
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FQuat                                       InValue                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableQuat(const struct FString& InVariableName, const struct FQuat& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableQuat");

	UNiagaraComponent_SetNiagaraVariableQuat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC35A0
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableObject
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableObject(const struct FString& InVariableName, class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableObject");

	UNiagaraComponent_SetNiagaraVariableObject_Params params;
	params.InVariableName = InVariableName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3940
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableLinearColor(const struct FString& InVariableName, const struct FLinearColor& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor");

	UNiagaraComponent_SetNiagaraVariableLinearColor_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3860
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableInt
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableInt(const struct FString& InVariableName, int InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableInt");

	UNiagaraComponent_SetNiagaraVariableInt_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3770
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableFloat");

	UNiagaraComponent_SetNiagaraVariableFloat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3680
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableBool
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableBool");

	UNiagaraComponent_SetNiagaraVariableBool_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC35A0
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableActor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableActor(const struct FString& InVariableName, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableActor");

	UNiagaraComponent_SetNiagaraVariableActor_Params params;
	params.InVariableName = InVariableName;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3520
//		Name   -> Function Niagara.NiagaraComponent.SetMaxSimTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InMaxTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetMaxSimTime(float InMaxTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetMaxSimTime");

	UNiagaraComponent_SetMaxSimTime_Params params;
	params.InMaxTime = InMaxTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3490
//		Name   -> Function Niagara.NiagaraComponent.SetForceSolo
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInForceSolo                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetForceSolo(bool bInForceSolo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetForceSolo");

	UNiagaraComponent_SetForceSolo_Params params;
	params.bInForceSolo = bInForceSolo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3380
//		Name   -> Function Niagara.NiagaraComponent.SetDesiredAge
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InDesiredAge                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetDesiredAge(float InDesiredAge)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetDesiredAge");

	UNiagaraComponent_SetDesiredAge_Params params;
	params.InDesiredAge = InDesiredAge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC32F0
//		Name   -> Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInCanRenderWhileSeeking                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking");

	UNiagaraComponent_SetCanRenderWhileSeeking_Params params;
	params.bInCanRenderWhileSeeking = bInCanRenderWhileSeeking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3260
//		Name   -> Function Niagara.NiagaraComponent.SetAutoDestroy
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInAutoDestroy                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetAutoDestroy(bool bInAutoDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAutoDestroy");

	UNiagaraComponent_SetAutoDestroy_Params params;
	params.bInAutoDestroy = bInAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC31E0
//		Name   -> Function Niagara.NiagaraComponent.SetAsset
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UNiagaraSystem*                              InAsset                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetAsset(class UNiagaraSystem* InAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAsset");

	UNiagaraComponent_SetAsset_Params params;
	params.InAsset = InAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3150
//		Name   -> Function Niagara.NiagaraComponent.SetAllowScalability
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bAllow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetAllowScalability(bool bAllow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAllowScalability");

	UNiagaraComponent_SetAllowScalability_Params params;
	params.bAllow = bAllow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC30D0
//		Name   -> Function Niagara.NiagaraComponent.SetAgeUpdateMode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		Niagara_ENiagaraAgeUpdateMode                      InAgeUpdateMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetAgeUpdateMode(Niagara_ENiagaraAgeUpdateMode InAgeUpdateMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAgeUpdateMode");

	UNiagaraComponent_SetAgeUpdateMode_Params params;
	params.InAgeUpdateMode = InAgeUpdateMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3050
//		Name   -> Function Niagara.NiagaraComponent.SeekToDesiredAge
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InDesiredAge                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SeekToDesiredAge(float InDesiredAge)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SeekToDesiredAge");

	UNiagaraComponent_SeekToDesiredAge_Params params;
	params.InDesiredAge = InDesiredAge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3030
//		Name   -> Function Niagara.NiagaraComponent.ResetSystem
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UNiagaraComponent::ResetSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ResetSystem");

	UNiagaraComponent_ResetSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC3010
//		Name   -> Function Niagara.NiagaraComponent.ReinitializeSystem
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UNiagaraComponent::ReinitializeSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ReinitializeSystem");

	UNiagaraComponent_ReinitializeSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC2F60
//		Name   -> Function Niagara.NiagaraComponent.IsPaused
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraComponent::IsPaused()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.IsPaused");

	UNiagaraComponent_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CC2F30
//		Name   -> Function Niagara.NiagaraComponent.GetSeekDelta
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNiagaraComponent::GetSeekDelta()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetSeekDelta");

	UNiagaraComponent_GetSeekDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CC2F10
//		Name   -> Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraComponent::GetPreviewLODDistanceEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled");

	UNiagaraComponent_GetPreviewLODDistanceEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CC2EF0
//		Name   -> Function Niagara.NiagaraComponent.GetPreviewLODDistance
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNiagaraComponent::GetPreviewLODDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetPreviewLODDistance");

	UNiagaraComponent_GetPreviewLODDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CC2C50
//		Name   -> Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InEmitterName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     InValueName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FVector> UNiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly");

	UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params params;
	params.InEmitterName = InEmitterName;
	params.InValueName = InValueName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CC2DA0
//		Name   -> Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InEmitterName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     InValueName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<float>                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<float> UNiagaraComponent::GetNiagaraParticleValues_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly");

	UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params params;
	params.InEmitterName = InEmitterName;
	params.InValueName = InValueName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CC2B60
//		Name   -> Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InEmitterName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FVector> UNiagaraComponent::GetNiagaraParticlePositions_DebugOnly(const struct FString& InEmitterName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly");

	UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params params;
	params.InEmitterName = InEmitterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CC2B30
//		Name   -> Function Niagara.NiagaraComponent.GetMaxSimTime
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNiagaraComponent::GetMaxSimTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetMaxSimTime");

	UNiagaraComponent_GetMaxSimTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CC2B00
//		Name   -> Function Niagara.NiagaraComponent.GetForceSolo
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraComponent::GetForceSolo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetForceSolo");

	UNiagaraComponent_GetForceSolo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CC2AD0
//		Name   -> Function Niagara.NiagaraComponent.GetDesiredAge
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNiagaraComponent::GetDesiredAge()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetDesiredAge");

	UNiagaraComponent_GetDesiredAge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CC2A20
//		Name   -> Function Niagara.NiagaraComponent.GetDataInterface
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNiagaraDataInterface*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraDataInterface* UNiagaraComponent::GetDataInterface(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetDataInterface");

	UNiagaraComponent_GetDataInterface_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CC2A00
//		Name   -> Function Niagara.NiagaraComponent.GetAsset
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UNiagaraSystem*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraSystem* UNiagaraComponent::GetAsset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAsset");

	UNiagaraComponent_GetAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CC29D0
//		Name   -> Function Niagara.NiagaraComponent.GetAgeUpdateMode
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		Niagara_ENiagaraAgeUpdateMode                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Niagara_ENiagaraAgeUpdateMode UNiagaraComponent::GetAgeUpdateMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAgeUpdateMode");

	UNiagaraComponent_GetAgeUpdateMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CC2910
//		Name   -> Function Niagara.NiagaraComponent.AdvanceSimulationByTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              SimulateTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TickDeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.AdvanceSimulationByTime");

	UNiagaraComponent_AdvanceSimulationByTime_Params params;
	params.SimulateTime = SimulateTime;
	params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC2840
//		Name   -> Function Niagara.NiagaraComponent.AdvanceSimulation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TickCount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TickDeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::AdvanceSimulation(int TickCount, float TickDeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.AdvanceSimulation");

	UNiagaraComponent_AdvanceSimulation_Params params;
	params.TickCount = TickCount;
	params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC9320
//		Name   -> Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FBasicParticleData>                  Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNiagaraSystem*                              NiagaraSystem                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParticleCallbackHandler::ReceiveParticleData(TArray<struct FBasicParticleData> Data, class UNiagaraSystem* NiagaraSystem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData");

	UNiagaraParticleCallbackHandler_ReceiveParticleData_Params params;
	params.Data = Data;
	params.NiagaraSystem = NiagaraSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CC9200
//		Name   -> Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UNiagaraComponent*                           Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SizeX                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SizeY                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceGrid2DCollection::GetTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize");

	UNiagaraDataInterfaceGrid2DCollection_GetTextureSize_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;

}


// Function:
//		Offset -> 0x00CC90E0
//		Name   -> Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UNiagaraComponent*                           Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SizeX                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SizeY                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraDataInterfaceGrid2DCollection::GetRawTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize");

	UNiagaraDataInterfaceGrid2DCollection_GetRawTextureSize_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;

}


// Function:
//		Offset -> 0x00CC8FD0
//		Name   -> Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UNiagaraComponent*                           Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTextureRenderTarget2D*                      Dest                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                AttributeIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraDataInterfaceGrid2DCollection::FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int AttributeIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D");

	UNiagaraDataInterfaceGrid2DCollection_FillTexture2D_Params params;
	params.Component = Component;
	params.Dest = Dest;
	params.AttributeIndex = AttributeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CC8E60
//		Name   -> Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UNiagaraComponent*                           Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTextureRenderTarget2D*                      Dest                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TilesX                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TilesY                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int* TilesX, int* TilesY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D");

	UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D_Params params;
	params.Component = Component;
	params.Dest = Dest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TilesX != nullptr)
		*TilesX = params.TilesX;
	if (TilesY != nullptr)
		*TilesY = params.TilesY;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CCC7C0
//		Name   -> Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UNiagaraSystem*                              SystemTemplate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EAttachLocation>                LocationType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoActivate                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Niagara_ENCPoolMethod                              PoolingMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bPreCullCheck                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNiagaraComponent*                           ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, Niagara_ENCPoolMethod PoolingMethod, bool bPreCullCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached");

	UNiagaraFunctionLibrary_SpawnSystemAttached_Params params;
	params.SystemTemplate = SystemTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bAutoDestroy = bAutoDestroy;
	params.bAutoActivate = bAutoActivate;
	params.PoolingMethod = PoolingMethod;
	params.bPreCullCheck = bPreCullCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CCC510
//		Name   -> Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNiagaraSystem*                              SystemTemplate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector                                     Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoActivate                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Niagara_ENCPoolMethod                              PoolingMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bPreCullCheck                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNiagaraComponent*                           ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, Niagara_ENCPoolMethod PoolingMethod, bool bPreCullCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation");

	UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SystemTemplate = SystemTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.bAutoDestroy = bAutoDestroy;
	params.bAutoActivate = bAutoActivate;
	params.PoolingMethod = PoolingMethod;
	params.bPreCullCheck = bPreCullCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CCC400
//		Name   -> Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OverrideName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVolumeTexture*                              Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraFunctionLibrary::STATIC_SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UVolumeTexture* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject");

	UNiagaraFunctionLibrary_SetVolumeTextureObject_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CCC020
//		Name   -> Function Niagara.NiagaraFunctionLibrary.SetTextureObject
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OverrideName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture*                                    Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraFunctionLibrary::STATIC_SetTextureObject(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UTexture* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SetTextureObject");

	UNiagaraFunctionLibrary_SetTextureObject_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CCBA70
//		Name   -> Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OverrideName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UStaticMeshComponent*                        StaticMeshComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraFunctionLibrary::STATIC_OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent");

	UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.StaticMeshComponent = StaticMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CCB960
//		Name   -> Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OverrideName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UStaticMesh*                                 StaticMesh                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraFunctionLibrary::STATIC_OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMesh* StaticMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh");

	UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.StaticMesh = StaticMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CCB850
//		Name   -> Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OverrideName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraFunctionLibrary::STATIC_OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent");

	UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.SkeletalMeshComponent = SkeletalMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CCB490
//		Name   -> Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNiagaraParameterCollection*                 Collection                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNiagaraParameterCollectionInstance*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraParameterCollectionInstance* UNiagaraFunctionLibrary::STATIC_GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection");

	UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Collection = Collection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CCC310
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetVectorParameter(const struct FString& InVariableName, const struct FVector& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter");

	UNiagaraParameterCollectionInstance_SetVectorParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CCC210
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector4                                    InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetVector4Parameter(const struct FString& InVariableName, const struct FVector4& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter");

	UNiagaraParameterCollectionInstance_SetVector4Parameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CCC130
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetVector2DParameter(const struct FString& InVariableName, const struct FVector2D& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter");

	UNiagaraParameterCollectionInstance_SetVector2DParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CCBF30
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FQuat                                       InValue                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetQuatParameter(const struct FString& InVariableName, const struct FQuat& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter");

	UNiagaraParameterCollectionInstance_SetQuatParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CCBE50
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetIntParameter(const struct FString& InVariableName, int InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter");

	UNiagaraParameterCollectionInstance_SetIntParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CCBD60
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetFloatParameter(const struct FString& InVariableName, float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter");

	UNiagaraParameterCollectionInstance_SetFloatParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CCBC70
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetColorParameter(const struct FString& InVariableName, const struct FLinearColor& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter");

	UNiagaraParameterCollectionInstance_SetColorParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CCBB80
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetBoolParameter(const struct FString& InVariableName, bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter");

	UNiagaraParameterCollectionInstance_SetBoolParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CCB790
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UNiagaraParameterCollectionInstance::GetVectorParameter(const struct FString& InVariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter");

	UNiagaraParameterCollectionInstance_GetVectorParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CCB6D0
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector4                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector4 UNiagaraParameterCollectionInstance::GetVector4Parameter(const struct FString& InVariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter");

	UNiagaraParameterCollectionInstance_GetVector4Parameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CCB610
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UNiagaraParameterCollectionInstance::GetVector2DParameter(const struct FString& InVariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter");

	UNiagaraParameterCollectionInstance_GetVector2DParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CCB550
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FQuat                                       ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FQuat UNiagaraParameterCollectionInstance::GetQuatParameter(const struct FString& InVariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter");

	UNiagaraParameterCollectionInstance_GetQuatParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CCB3E0
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNiagaraParameterCollectionInstance::GetIntParameter(const struct FString& InVariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter");

	UNiagaraParameterCollectionInstance_GetIntParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CCB330
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNiagaraParameterCollectionInstance::GetFloatParameter(const struct FString& InVariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter");

	UNiagaraParameterCollectionInstance_GetFloatParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CCB270
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UNiagaraParameterCollectionInstance::GetColorParameter(const struct FString& InVariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter");

	UNiagaraParameterCollectionInstance_GetColorParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CCB1C0
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraParameterCollectionInstance::GetBoolParameter(const struct FString& InVariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter");

	UNiagaraParameterCollectionInstance_GetBoolParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function Niagara.NiagaraPreviewBase.SetSystem
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UNiagaraSystem*                              InSystem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANiagaraPreviewBase::SetSystem(class UNiagaraSystem* InSystem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewBase.SetSystem");

	ANiagaraPreviewBase_SetSystem_Params params;
	params.InSystem = InSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function Niagara.NiagaraPreviewBase.SetLabelText
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InXAxisText                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FText                                       InYAxisText                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void ANiagaraPreviewBase::SetLabelText(const struct FText& InXAxisText, const struct FText& InYAxisText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewBase.SetLabelText");

	ANiagaraPreviewBase_SetLabelText_Params params;
	params.InXAxisText = InXAxisText;
	params.InYAxisText = InYAxisText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CD0700
//		Name   -> Function Niagara.NiagaraPreviewAxis.Num
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNiagaraPreviewAxis::Num()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewAxis.Num");

	UNiagaraPreviewAxis_Num_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00CD04B0
//		Name   -> Function Niagara.NiagaraPreviewAxis.ApplyToPreview
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class UNiagaraComponent*                           PreviewComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PreviewIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIsXAxis                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OutLabelText                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraPreviewAxis::ApplyToPreview(class UNiagaraComponent* PreviewComponent, int PreviewIndex, bool bIsXAxis, struct FString* OutLabelText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewAxis.ApplyToPreview");

	UNiagaraPreviewAxis_ApplyToPreview_Params params;
	params.PreviewComponent = PreviewComponent;
	params.PreviewIndex = PreviewIndex;
	params.bIsXAxis = bIsXAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLabelText != nullptr)
		*OutLabelText = params.OutLabelText;

}


// Function:
//		Offset -> 0x00CD0730
//		Name   -> Function Niagara.NiagaraPreviewGrid.SetPaused
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bPaused                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANiagaraPreviewGrid::SetPaused(bool bPaused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.SetPaused");

	ANiagaraPreviewGrid_SetPaused_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CD0650
//		Name   -> Function Niagara.NiagaraPreviewGrid.GetPreviews
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class UNiagaraComponent*>                   OutPreviews                                                (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANiagaraPreviewGrid::GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.GetPreviews");

	ANiagaraPreviewGrid_GetPreviews_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPreviews != nullptr)
		*OutPreviews = params.OutPreviews;

}


// Function:
//		Offset -> 0x00CD0630
//		Name   -> Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ANiagaraPreviewGrid::DeactivatePreviews()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.DeactivatePreviews");

	ANiagaraPreviewGrid_DeactivatePreviews_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CD0420
//		Name   -> Function Niagara.NiagaraPreviewGrid.ActivatePreviews
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bReset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANiagaraPreviewGrid::ActivatePreviews(bool bReset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.ActivatePreviews");

	ANiagaraPreviewGrid_ActivatePreviews_Params params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B00610
//		Name   -> Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
//		Flags  -> (Final, Native, Public)
void UNiagaraScript::RaiseOnGPUCompilationComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete");

	UNiagaraScript_RaiseOnGPUCompilationComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

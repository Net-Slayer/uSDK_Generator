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
//		Offset -> 0x00A446E0
//		Name   -> Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     VariantSetName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVariantSet*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVariantSet* ULevelVariantSets::GetVariantSetByName(const struct FString& VariantSetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetVariantSetByName");

	ULevelVariantSets_GetVariantSetByName_Params params;
	params.VariantSetName = VariantSetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A44650
//		Name   -> Function VariantManagerContent.LevelVariantSets.GetVariantSet
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                VariantSetIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVariantSet*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVariantSet* ULevelVariantSets::GetVariantSet(int VariantSetIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetVariantSet");

	ULevelVariantSets_GetVariantSet_Params params;
	params.VariantSetIndex = VariantSetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A442E0
//		Name   -> Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULevelVariantSets::GetNumVariantSets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetNumVariantSets");

	ULevelVariantSets_GetNumVariantSets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A44AF0
//		Name   -> Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     VariantSetName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     VariantName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ALevelVariantSetsActor::SwitchOnVariantByName(const struct FString& VariantSetName, const struct FString& VariantName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName");

	ALevelVariantSetsActor_SwitchOnVariantByName_Params params;
	params.VariantSetName = VariantSetName;
	params.VariantName = VariantName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A44A30
//		Name   -> Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                VariantSetIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                VariantIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ALevelVariantSetsActor::SwitchOnVariantByIndex(int VariantSetIndex, int VariantIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex");

	ALevelVariantSetsActor_SwitchOnVariantByIndex_Params params;
	params.VariantSetIndex = VariantSetIndex;
	params.VariantIndex = VariantIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A44990
//		Name   -> Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULevelVariantSets*                           InVariantSets                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelVariantSetsActor::SetLevelVariantSets(class ULevelVariantSets* InVariantSets)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets");

	ALevelVariantSetsActor_SetLevelVariantSets_Params params;
	params.InVariantSets = InVariantSets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A44210
//		Name   -> Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bLoad                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULevelVariantSets*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelVariantSets* ALevelVariantSetsActor::GetLevelVariantSets(bool bLoad)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets");

	ALevelVariantSetsActor_GetLevelVariantSets_Params params;
	params.bLoad = bLoad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A447E0
//		Name   -> Function VariantManagerContent.PropertyValue.HasRecordedData
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPropertyValue::HasRecordedData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.HasRecordedData");

	UPropertyValue_HasRecordedData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A443C0
//		Name   -> Function VariantManagerContent.PropertyValue.GetPropertyTooltip
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPropertyValue::GetPropertyTooltip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.GetPropertyTooltip");

	UPropertyValue_GetPropertyTooltip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A441D0
//		Name   -> Function VariantManagerContent.PropertyValue.GetFullDisplayString
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPropertyValue::GetFullDisplayString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.GetFullDisplayString");

	UPropertyValue_GetFullDisplayString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A44840
//		Name   -> Function VariantManagerContent.SwitchActor.SelectOption
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                OptionIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASwitchActor::SelectOption(int OptionIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.SelectOption");

	ASwitchActor_SelectOption_Params params;
	params.OptionIndex = OptionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A44460
//		Name   -> Function VariantManagerContent.SwitchActor.GetSelectedOption
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ASwitchActor::GetSelectedOption()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.GetSelectedOption");

	ASwitchActor_GetSelectedOption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A44340
//		Name   -> Function VariantManagerContent.SwitchActor.GetOptions
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class AActor*>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class AActor*> ASwitchActor::GetOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.GetOptions");

	ASwitchActor_GetOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A44A10
//		Name   -> Function VariantManagerContent.Variant.SwitchOn
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UVariant::SwitchOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SwitchOn");

	UVariant_SwitchOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A448C0
//		Name   -> Function VariantManagerContent.Variant.SetDisplayText
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       NewDisplayText                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UVariant::SetDisplayText(const struct FText& NewDisplayText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetDisplayText");

	UVariant_SetDisplayText_Params params;
	params.NewDisplayText = NewDisplayText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A44810
//		Name   -> Function VariantManagerContent.Variant.IsActive
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVariant::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.IsActive");

	UVariant_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A44490
//		Name   -> Function VariantManagerContent.Variant.GetThumbnail
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UVariant::GetThumbnail()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetThumbnail");

	UVariant_GetThumbnail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A442B0
//		Name   -> Function VariantManagerContent.Variant.GetNumActors
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVariant::GetNumActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetNumActors");

	UVariant_GetNumActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A44130
//		Name   -> Function VariantManagerContent.Variant.GetDisplayText
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UVariant::GetDisplayText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetDisplayText");

	UVariant_GetDisplayText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A440A0
//		Name   -> Function VariantManagerContent.Variant.GetActor
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ActorIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UVariant::GetActor(int ActorIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetActor");

	UVariant_GetActor_Params params;
	params.ActorIndex = ActorIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A448C0
//		Name   -> Function VariantManagerContent.VariantSet.SetDisplayText
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       NewDisplayText                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UVariantSet::SetDisplayText(const struct FText& NewDisplayText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetDisplayText");

	UVariantSet_SetDisplayText_Params params;
	params.NewDisplayText = NewDisplayText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00A44550
//		Name   -> Function VariantManagerContent.VariantSet.GetVariantByName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     VariantName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVariant*                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVariant* UVariantSet::GetVariantByName(const struct FString& VariantName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetVariantByName");

	UVariantSet_GetVariantByName_Params params;
	params.VariantName = VariantName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A444C0
//		Name   -> Function VariantManagerContent.VariantSet.GetVariant
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                VariantIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVariant*                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVariant* UVariantSet::GetVariant(int VariantIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetVariant");

	UVariantSet_GetVariant_Params params;
	params.VariantIndex = VariantIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A44310
//		Name   -> Function VariantManagerContent.VariantSet.GetNumVariants
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVariantSet::GetNumVariants()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetNumVariants");

	UVariantSet_GetNumVariants_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00A44130
//		Name   -> Function VariantManagerContent.VariantSet.GetDisplayText
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UVariantSet::GetDisplayText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetDisplayText");

	UVariantSet_GetDisplayText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

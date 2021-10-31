#pragma once

// Name: Mordhau, Version: Patch23


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
struct ULevelVariantSets_GetVariantSetByName_Params
{
	struct FString                                     VariantSetName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVariantSet*                                 ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.LevelVariantSets.GetVariantSet
struct ULevelVariantSets_GetVariantSet_Params
{
	int                                                VariantSetIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVariantSet*                                 ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
struct ULevelVariantSets_GetNumVariantSets_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
struct ALevelVariantSetsActor_SwitchOnVariantByName_Params
{
	struct FString                                     VariantSetName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariantName;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
struct ALevelVariantSetsActor_SwitchOnVariantByIndex_Params
{
	int                                                VariantSetIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VariantIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
struct ALevelVariantSetsActor_SetLevelVariantSets_Params
{
	class ULevelVariantSets*                           InVariantSets;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
struct ALevelVariantSetsActor_GetLevelVariantSets_Params
{
	bool                                               bLoad;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelVariantSets*                           ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.PropertyValue.HasRecordedData
struct UPropertyValue_HasRecordedData_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.PropertyValue.GetPropertyTooltip
struct UPropertyValue_GetPropertyTooltip_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.PropertyValue.GetFullDisplayString
struct UPropertyValue_GetFullDisplayString_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.SwitchActor.SelectOption
struct ASwitchActor_SelectOption_Params
{
	int                                                OptionIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.SwitchActor.GetSelectedOption
struct ASwitchActor_GetSelectedOption_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.SwitchActor.GetOptions
struct ASwitchActor_GetOptions_Params
{
	TArray<class AActor*>                              ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.Variant.SwitchOn
struct UVariant_SwitchOn_Params
{
};

// Function VariantManagerContent.Variant.SetDisplayText
struct UVariant_SetDisplayText_Params
{
	struct FText                                       NewDisplayText;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.Variant.IsActive
struct UVariant_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.Variant.GetThumbnail
struct UVariant_GetThumbnail_Params
{
	class UTexture2D*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.Variant.GetNumActors
struct UVariant_GetNumActors_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.Variant.GetDisplayText
struct UVariant_GetDisplayText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.Variant.GetActor
struct UVariant_GetActor_Params
{
	int                                                ActorIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.VariantSet.SetDisplayText
struct UVariantSet_SetDisplayText_Params
{
	struct FText                                       NewDisplayText;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.VariantSet.GetVariantByName
struct UVariantSet_GetVariantByName_Params
{
	struct FString                                     VariantName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVariant*                                    ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.VariantSet.GetVariant
struct UVariantSet_GetVariant_Params
{
	int                                                VariantIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVariant*                                    ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.VariantSet.GetNumVariants
struct UVariantSet_GetNumVariants_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.VariantSet.GetDisplayText
struct UVariantSet_GetDisplayText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

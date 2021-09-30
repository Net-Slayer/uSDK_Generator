#pragma once

// Name: Mordhau, Version: 4_25_hotfix


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

// Function BP_ContextPopupInterface.BP_ContextPopupInterface_C.CreateWrapper
struct UBP_ContextPopupInterface_C_CreateWrapper_Params
{
	TMap<struct FString, struct FText>                 InOptions;                                                 // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ContextPopupInterface.BP_ContextPopupInterface_C.InitializeOptions
struct UBP_ContextPopupInterface_C_InitializeOptions_Params
{
	TMap<struct FString, struct FText>                 OptionsMap;                                                // 0x0000(0x0050)  (Parm, OutParm)
};

// Function BP_ContextPopupInterface.BP_ContextPopupInterface_C.OptionSelected
struct UBP_ContextPopupInterface_C_OptionSelected_Params
{
	struct FString                                     Option;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct EquipmentModInfo.EquipmentModInfo
// 0x0011
struct FEquipmentModInfo
{
	class UClass*                                      OriginalEquipmentClass_8_AD90F8AD4754C4E6B9BA689CF06C37B8; // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ModdedEquipmentClass_9_72A32AA846E4EA49923DFEBC0B6AC7CF;   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UsesEquipmentParts_11_6BBDFC714984D0C9CA7B8A944A3F4F7A;    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

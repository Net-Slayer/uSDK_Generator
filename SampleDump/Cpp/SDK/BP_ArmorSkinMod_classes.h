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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ArmorSkinMod.BP_ArmorSkinMod_C
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UBP_ArmorSkinMod_C : public UObject
{
public:
	TArray<struct FArmorModInfo>                       ArmorModInfos;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ArmorSkinMod.BP_ArmorSkinMod_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

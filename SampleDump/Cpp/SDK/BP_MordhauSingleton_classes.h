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

// BlueprintGeneratedClass BP_MordhauSingleton.BP_MordhauSingleton_C
// 0x00A0 (FullSize[0x0888] - InheritedSize[0x07E8])
class UBP_MordhauSingleton_C : public UMordhauSingleton
{
public:
	TMap<struct FKey, class UTexture2D*>               ButtonPromptImageMap;                                      // 0x07E8(0x0050) (Edit, BlueprintVisible)
	TMap<struct FPlayFabPlayer, TEnumAsByte<E_ChatMuteTypes_E_ChatMuteTypes>> ChatMutedPlayers;                                          // 0x0838(0x0050) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauSingleton.BP_MordhauSingleton_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

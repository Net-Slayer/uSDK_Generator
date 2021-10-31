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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ContextPopupInterface.BP_ContextPopupInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_ContextPopupInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ContextPopupInterface.BP_ContextPopupInterface_C");
		return ptr;
	}



	void CreateWrapper(TMap<struct FString, struct FText> InOptions);
	void InitializeOptions(TMap<struct FString, struct FText>* OptionsMap);
	void OptionSelected(const struct FString& Option);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_MordhauCameraComponent.BP_MordhauCameraComponent_C
// 0x0000 (FullSize[0x09A0] - InheritedSize[0x09A0])
class UBP_MordhauCameraComponent_C : public UMordhauCameraComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauCameraComponent.BP_MordhauCameraComponent_C");
		return ptr;
	}



	struct FPOV ComputeCameraPOV();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_InGoreMeshNeck.BP_InGoreMeshNeck_C
// 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
class ABP_InGoreMeshNeck_C : public ABP_BaseGoreMesh_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_InGoreMeshNeck.BP_InGoreMeshNeck_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_InGoreMeshNeck(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

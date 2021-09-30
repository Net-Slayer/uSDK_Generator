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

// Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UMagicLeapLightingTrackingComponent : public UActorComponent
{
public:
	bool                                               UseGlobalAmbience;                                         // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseColorTemp;                                              // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EMH6[0xE];                                     // 0x00B2(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent");
		return ptr;
	}



};

// Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMagicLeapLightEstimationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary");
		return ptr;
	}



	bool STATIC_IsTrackerValid();
	bool STATIC_GetColorTemperatureState(struct FMagicLeapLightEstimationColorTemperatureState* ColorTemperatureState);
	bool STATIC_GetAmbientGlobalState(struct FMagicLeapLightEstimationAmbientGlobalState* GlobalAmbientState);
	void STATIC_DestroyTracker();
	bool STATIC_CreateTracker();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Class MagicLeapAR.LuminARSessionFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapAR.LuminARSessionFunctionLibrary");
		return ptr;
	}



	void STATIC_StartLuminARSession(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ULuminARSessionConfig* Configuration);
};

// Class MagicLeapAR.LuminARFrameFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapAR.LuminARFrameFunctionLibrary");
		return ptr;
	}



	bool STATIC_LuminARLineTrace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, TArray<struct FARTraceResult>* OutHitResults);
	MagicLeapAR_ELuminARTrackingState STATIC_GetTrackingState();
};

// Class MagicLeapAR.LuminARImageTrackingFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULuminARImageTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapAR.LuminARImageTrackingFunctionLibrary");
		return ptr;
	}



	class ULuminARCandidateImage* STATIC_AddLuminRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary);
};

// Class MagicLeapAR.LuminARSessionConfig
// 0x0098 (FullSize[0x0140] - InheritedSize[0x00A8])
class ULuminARSessionConfig : public UARSessionConfig
{
public:
	unsigned char                                      UnknownData_NP6L[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMagicLeapPlanesQuery                       PlanesQuery;                                               // 0x00B0(0x0060) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int                                                MaxPlaneQueryResults;                                      // 0x0110(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinPlaneArea;                                              // 0x0114(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bArbitraryOrientationPlaneDetection;                       // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_02C1[0x3];                                     // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     PlaneSearchExtents;                                        // 0x011C(0x000C) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  PlaneQueryFlags;                                           // 0x0128(0x0010) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDiscardZeroExtentPlanes;                                  // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDefaultUseUnreliablePose;                                 // 0x0139(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MN7N[0x6];                                     // 0x013A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapAR.LuminARSessionConfig");
		return ptr;
	}



};

// Class MagicLeapAR.LuminARLightEstimate
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class ULuminARLightEstimate : public UARBasicLightEstimate
{
public:
	TArray<float>                                      AmbientIntensityNits;                                      // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapAR.LuminARLightEstimate");
		return ptr;
	}



	TArray<float> GetAmbientIntensityNits();
};

// Class MagicLeapAR.LuminARCandidateImage
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class ULuminARCandidateImage : public UARCandidateImage
{
public:
	bool                                               bUseUnreliablePose;                                        // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bImageIsStationary;                                        // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YQ00[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapAR.LuminARCandidateImage");
		return ptr;
	}



	bool GetUseUnreliablePose();
	bool GetImageIsStationary();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

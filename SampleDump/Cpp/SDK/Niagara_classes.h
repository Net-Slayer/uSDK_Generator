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

// Class Niagara.NiagaraDataInterface
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:
	unsigned char                                      UnknownData_FHQJ[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterface");
		return ptr;
	}



};

// Class Niagara.MovieSceneNiagaraTrack
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraTrack");
		return ptr;
	}



};

// Class Niagara.MovieSceneNiagaraParameterTrack
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct FNiagaraVariable                            Parameter;                                                 // 0x0068(0x0028) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraParameterTrack");
		return ptr;
	}



};

// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraBoolParameterTrack");
		return ptr;
	}



};

// Class Niagara.MovieSceneNiagaraColorParameterTrack
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraColorParameterTrack");
		return ptr;
	}



};

// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraFloatParameterTrack");
		return ptr;
	}



};

// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraIntegerParameterTrack");
		return ptr;
	}



};

// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:
	Niagara_ENiagaraSystemSpawnSectionStartBehavior    SectionStartBehavior;                                      // 0x00E0(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_O275[0x3];                                     // 0x00E0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;                                   // 0x00E4(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VC7A[0x3];                                     // 0x00E4(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	Niagara_ENiagaraSystemSpawnSectionEndBehavior      SectionEndBehavior;                                        // 0x00E8(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P931[0x3];                                     // 0x00E8(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	Niagara_ENiagaraAgeUpdateMode                      AgeUpdateMode;                                             // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5XQM[0x3];                                     // 0x00ED(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemSpawnSection");
		return ptr;
	}



};

// Class Niagara.MovieSceneNiagaraSystemTrack
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemTrack");
		return ptr;
	}



};

// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	int                                                ChannelsUsed;                                              // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RSV1[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraVectorParameterTrack");
		return ptr;
	}



};

// Class Niagara.NiagaraActor
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                           NiagaraComponent;                                          // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bDestroyOnSystemFinish : 1;                                // 0x0228(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_M28Y[0x7];                                     // 0x0229(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraActor");
		return ptr;
	}



	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
	void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);
};

// Class Niagara.NiagaraComponent
// 0x01B0 (FullSize[0x05A0] - InheritedSize[0x03F0])
class UNiagaraComponent : public UFXSystemComponent
{
public:
	class UNiagaraSystem*                              Asset;                                                     // 0x03F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Niagara_ENiagaraTickBehavior                       TickBehavior;                                              // 0x03F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1ZYN[0x7];                                     // 0x03F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraUserRedirectionParameterStore       OverrideParameters;                                        // 0x0400(0x0108) (NativeAccessSpecifierPrivate)
	unsigned char                                      bForceSolo : 1;                                            // 0x0508(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PBAC[0x2B];                                    // 0x0509(0x002B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAutoDestroy : 1;                                          // 0x0534(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bRenderingEnabled : 1;                                     // 0x0534(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bAutoManageAttachment : 1;                                 // 0x0534(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAutoAttachWeldSimulatedBodies : 1;                        // 0x0534(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HN0V[0x3];                                     // 0x0535(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxTimeBeforeForceUpdateTransform;                         // 0x0538(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A7XY[0x4];                                     // 0x053C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSystemFinished;                                          // 0x0540(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>              AutoAttachParent;                                          // 0x0550(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AutoAttachSocketName;                                      // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AutoAttachLocationRule;                                    // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AutoAttachRotationRule;                                    // 0x0561(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AutoAttachScaleRule;                                       // 0x0562(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FL4H[0x3D];                                    // 0x0563(0x003D) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraComponent");
		return ptr;
	}



	void SetVariableVec4(const struct FName& InVariableName, const struct FVector4& InValue);
	void SetVariableVec3(const struct FName& InVariableName, const struct FVector& InValue);
	void SetVariableVec2(const struct FName& InVariableName, const struct FVector2D& InValue);
	void SetVariableQuat(const struct FName& InVariableName, const struct FQuat& InValue);
	void SetVariableObject(const struct FName& InVariableName, class UObject* Object);
	void SetVariableMaterial(const struct FName& InVariableName, class UMaterialInterface* Object);
	void SetVariableLinearColor(const struct FName& InVariableName, const struct FLinearColor& InValue);
	void SetVariableInt(const struct FName& InVariableName, int InValue);
	void SetVariableFloat(const struct FName& InVariableName, float InValue);
	void SetVariableBool(const struct FName& InVariableName, bool InValue);
	void SetVariableActor(const struct FName& InVariableName, class AActor* Actor);
	void SetSeekDelta(float InSeekDelta);
	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
	void SetPaused(bool bInPaused);
	void SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue);
	void SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue);
	void SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue);
	void SetNiagaraVariableQuat(const struct FString& InVariableName, const struct FQuat& InValue);
	void SetNiagaraVariableObject(const struct FString& InVariableName, class UObject* Object);
	void SetNiagaraVariableLinearColor(const struct FString& InVariableName, const struct FLinearColor& InValue);
	void SetNiagaraVariableInt(const struct FString& InVariableName, int InValue);
	void SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue);
	void SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue);
	void SetNiagaraVariableActor(const struct FString& InVariableName, class AActor* Actor);
	void SetMaxSimTime(float InMaxTime);
	void SetForceSolo(bool bInForceSolo);
	void SetDesiredAge(float InDesiredAge);
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
	void SetAutoDestroy(bool bInAutoDestroy);
	void SetAsset(class UNiagaraSystem* InAsset);
	void SetAllowScalability(bool bAllow);
	void SetAgeUpdateMode(Niagara_ENiagaraAgeUpdateMode InAgeUpdateMode);
	void SeekToDesiredAge(float InDesiredAge);
	void ResetSystem();
	void ReinitializeSystem();
	bool IsPaused();
	float GetSeekDelta();
	bool GetPreviewLODDistanceEnabled();
	int GetPreviewLODDistance();
	TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName);
	TArray<float> GetNiagaraParticleValues_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName);
	TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(const struct FString& InEmitterName);
	float GetMaxSimTime();
	bool GetForceSolo();
	float GetDesiredAge();
	class UNiagaraDataInterface* GetDataInterface(const struct FString& Name);
	class UNiagaraSystem* GetAsset();
	Niagara_ENiagaraAgeUpdateMode GetAgeUpdateMode();
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
	void AdvanceSimulation(int TickCount, float TickDeltaSeconds);
};

// Class Niagara.NiagaraComponentPool
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UNiagaraComponentPool : public UObject
{
public:
	TMap<class UNiagaraSystem*, struct FNCPool>        WorldParticleSystemPools;                                  // 0x0028(0x0050) (ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XWYO[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraComponentPool");
		return ptr;
	}



};

// Class Niagara.NiagaraConvertInPlaceUtilityBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraConvertInPlaceUtilityBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraConvertInPlaceUtilityBase");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceAudioSubmix
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                                Submix;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceAudioSubmix");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                                Submix;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Resolution;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScopeInMilliseconds;                                       // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceAudioOscilloscope");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{
public:
	int                                                Resolution;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumFrequency;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumFrequency;                                          // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NoiseFloorDb;                                              // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceAudioSpectrum");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceCamera
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{
public:
	int                                                PlayerControllerIndex;                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P1RC[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCamera");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceCollisionQuery
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData_VKDK[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCollisionQuery");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceCurveBase
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	TArray<float>                                      ShaderLUT;                                                 // 0x0030(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LUTMinTime;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LUTMaxTime;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LUTInvTimeRange;                                           // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LUTNumSamplesMinusOne;                                     // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bUseLUT : 1;                                               // 0x0050(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J2FE[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurveBase");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceColorCurve
// 0x0200 (FullSize[0x0258] - InheritedSize[0x0058])
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  RedCurve;                                                  // 0x0058(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  GreenCurve;                                                // 0x00D8(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  BlueCurve;                                                 // 0x0158(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  AlphaCurve;                                                // 0x01D8(0x0080) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceColorCurve");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceCurlNoise
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	uint32_t                                           Seed;                                                      // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KLVZ[0xC];                                     // 0x0034(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurlNoise");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceCurve
// 0x0080 (FullSize[0x00D8] - InheritedSize[0x0058])
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  Curve;                                                     // 0x0058(0x0080) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurve");
		return ptr;
	}



};

// Class Niagara.NiagaraParticleCallbackHandler
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraParticleCallbackHandler : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraParticleCallbackHandler");
		return ptr;
	}



	void ReceiveParticleData(TArray<struct FBasicParticleData> Data, class UNiagaraSystem* NiagaraSystem);
};

// Class Niagara.NiagaraDataInterfaceExport
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding                CallbackHandlerParameter;                                  // 0x0030(0x0028) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceExport");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceRWBase
// 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
public:
	unsigned char                                      OutputShaderStages[0x50];                                  // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      IterationShaderStages[0x50];                               // 0x0080(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceRWBase");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceGrid2D
// 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
public:
	int                                                NumCellsX;                                                 // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumCellsY;                                                 // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumCellsMaxAxis;                                           // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumAttributes;                                             // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SetGridFromMaxAxis;                                        // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P99Y[0x3];                                     // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   WorldBBoxSize;                                             // 0x00E4(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YYBS[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2D");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// 0x0050 (FullSize[0x0140] - InheritedSize[0x00F0])
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
public:
	unsigned char                                      UnknownData_YKB6[0x50];                                    // 0x00F0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2DCollection");
		return ptr;
	}



	void GetTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY);
	void GetRawTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY);
	bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int AttributeIndex);
	bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int* TilesX, int* TilesY);
};

// Class Niagara.NiagaraDataInterfaceGrid3D
// 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                                  NumVoxels;                                                 // 0x00D0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VoxelSize;                                                 // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SetGridFromVoxelSize;                                      // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GSQC[0x3];                                     // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     WorldBBoxSize;                                             // 0x00E4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid3D");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// 0x0008 (FullSize[0x00F8] - InheritedSize[0x00F0])
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
	uint32_t                                           MaxNeighborsPerVoxel;                                      // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KXXS[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceNeighborGrid3D");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceOcclusion
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceOcclusion");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceParticleRead
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterface
{
public:
	struct FString                                     EmitterName;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceParticleRead");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceSimpleCounter
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSimpleCounter");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding                MeshUserParameter;                                         // 0x0038(0x0028) (Edit, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      SourceComponent;                                           // 0x0060(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENDISkeletalMesh_SkinningMode              SkinningMode;                                              // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T8YJ[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               SamplingRegions;                                           // 0x0070(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WholeMeshLOD;                                              // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IZ8L[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               FilteredBones;                                             // 0x0088(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               FilteredSockets;                                           // 0x0098(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ExcludeBoneName;                                           // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bExcludeBone : 1;                                          // 0x00B0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1YNL[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSkeletalMesh");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceSpline
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSpline");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	class UStaticMesh*                                 DefaultMesh;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        SourceComponent;                                           // 0x0040(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNDIStaticMeshSectionFilter                 SectionFilter;                                             // 0x0048(0x0010) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OZOK[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceStaticMesh");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceTexture
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                                    Texture;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceTexture");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceVector2DCurve
// 0x0100 (FullSize[0x0158] - InheritedSize[0x0058])
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                    // 0x0058(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  YCurve;                                                    // 0x00D8(0x0080) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector2DCurve");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceVector4Curve
// 0x0200 (FullSize[0x0258] - InheritedSize[0x0058])
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                    // 0x0058(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  YCurve;                                                    // 0x00D8(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  ZCurve;                                                    // 0x0158(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  WCurve;                                                    // 0x01D8(0x0080) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector4Curve");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceVectorCurve
// 0x0180 (FullSize[0x01D8] - InheritedSize[0x0058])
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                    // 0x0058(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  YCurve;                                                    // 0x00D8(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  ZCurve;                                                    // 0x0158(0x0080) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorCurve");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceVectorField
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
	class UVectorField*                                Field;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTileX;                                                    // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTileY;                                                    // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTileZ;                                                    // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WWKQ[0x5];                                     // 0x003B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorField");
		return ptr;
	}



};

// Class Niagara.NiagaraDataInterfaceVolumeTexture
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{
public:
	class UVolumeTexture*                              Texture;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVolumeTexture");
		return ptr;
	}



};

// Class Niagara.NiagaraEditorDataBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraEditorDataBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraEditorDataBase");
		return ptr;
	}



};

// Class Niagara.NiagaraEffectType
// 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
class UNiagaraEffectType : public UObject
{
public:
	Niagara_ENiagaraScalabilityUpdateFrequency         UpdateFrequency;                                           // 0x0028(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UWHG[0x3];                                     // 0x0028(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	Niagara_ENiagaraCullReaction                       CullReaction;                                              // 0x002C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IFGW[0x3];                                     // 0x002C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FNiagaraSystemScalabilitySettings>   DetailLevelScalabilitySettings;                            // 0x0030(0x0010) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraSystemScalabilitySettingsArray      SystemScalabilitySettings;                                 // 0x0040(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScalabilitySettingsArray     EmitterScalabilitySettings;                                // 0x0050(0x0010) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6PPE[0xA0];                                    // 0x0060(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraEffectType");
		return ptr;
	}



};

// Class Niagara.NiagaraEmitter
// 0x0288 (FullSize[0x02B0] - InheritedSize[0x0028])
class UNiagaraEmitter : public UObject
{
public:
	bool                                               bLocalSpace;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeterminism;                                              // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DEIK[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RandomSeed;                                                // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_EParticleAllocationMode                    AllocationMode;                                            // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3XE6[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PreAllocationCount;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                         // 0x0038(0x0028) (NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                          // 0x0060(0x0028) (NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties             EmitterSpawnScriptProps;                                   // 0x0088(0x0028) (NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties             EmitterUpdateScriptProps;                                  // 0x00B0(0x0028) (NativeAccessSpecifierPublic)
	Niagara_ENiagaraSimTarget                          SimTarget;                                                 // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5F7X[0x3];                                     // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBox                                        FixedBounds;                                               // 0x00DC(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                MinDetailLevel;                                            // 0x00F8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxDetailLevel;                                            // 0x00FC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraDetailsLevelScaleOverrides          GlobalSpawnCountScaleOverrides;                            // 0x0100(0x0014) (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X8TE[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraPlatformSet                         Platforms;                                                 // 0x0118(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScalabilityOverrides         ScalabilityOverrides;                                      // 0x0138(0x0010) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      bInterpolatedSpawning : 1;                                 // 0x0148(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFixedBounds : 1;                                          // 0x0148(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseMinDetailLevel : 1;                                    // 0x0148(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseMaxDetailLevel : 1;                                    // 0x0148(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideGlobalSpawnCountScale : 1;                        // 0x0148(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRequiresPersistentIDs : 1;                                // 0x0148(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DEDM[0x3];                                     // 0x0149(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxDeltaTimePerTick;                                       // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           DefaultShaderStageIndex;                                   // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           MaxUpdateIterations;                                       // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SpawnStages[0x50];                                         // 0x0158(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      bSimulationStagesEnabled : 1;                              // 0x01A8(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDeprecatedShaderStagesEnabled : 1;                        // 0x01A8(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLimitDeltaTime : 1;                                       // 0x01A8(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5DA3[0x7];                                     // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     UniqueEmitterName;                                         // 0x01B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                        // 0x01C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraEventScriptProperties>       EventHandlerScriptProps;                                   // 0x01D0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraSimulationStageBase*>         SimulationStages;                                          // 0x01E0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraScript*                              GPUComputeScript;                                          // 0x01F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               SharedEventGeneratorIds;                                   // 0x01F8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GNIO[0xA8];                                    // 0x0208(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraEmitter");
		return ptr;
	}



};

// Class Niagara.NiagaraEventReceiverEmitterAction
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction");
		return ptr;
	}



};

// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32_t                                           NumParticles;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZH9X[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
		return ptr;
	}



};

// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		return ptr;
	}



	class UNiagaraComponent* STATIC_SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, Niagara_ENCPoolMethod PoolingMethod, bool bPreCullCheck);
	class UNiagaraComponent* STATIC_SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, Niagara_ENCPoolMethod PoolingMethod, bool bPreCullCheck);
	void STATIC_SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UVolumeTexture* Texture);
	void STATIC_SetTextureObject(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UTexture* Texture);
	void STATIC_OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent);
	void STATIC_OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMesh* StaticMesh);
	void STATIC_OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
	class UNiagaraParameterCollectionInstance* STATIC_GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
};

// Class Niagara.NiagaraRendererProperties
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	int                                                SortOrderHint;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEnabled;                                                // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMotionBlurEnabled;                                        // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A90A[0x22];                                    // 0x002E(0x0022) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraRendererProperties");
		return ptr;
	}



};

// Class Niagara.NiagaraLightRendererProperties
// 0x02E8 (FullSize[0x0338] - InheritedSize[0x0050])
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
	unsigned char                                      bUseInverseSquaredFalloff : 1;                             // 0x0050(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectsTranslucency : 1;                                  // 0x0050(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideRenderingEnabled : 1;                             // 0x0050(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B00X[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RadiusScale;                                               // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ColorAdd;                                                  // 0x0058(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BIJR[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraVariableAttributeBinding            LightRenderingEnabledBinding;                              // 0x0068(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            LightExponentBinding;                                      // 0x00E0(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                           // 0x0158(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                              // 0x01D0(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RadiusBinding;                                             // 0x0248(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            VolumetricScatteringBinding;                               // 0x02C0(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraLightRendererProperties");
		return ptr;
	}



};

// Class Niagara.NiagaraMeshRendererProperties
// 0x06D8 (FullSize[0x0728] - InheritedSize[0x0050])
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	class UStaticMesh*                                 ParticleMesh;                                              // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraSortMode                           SortMode;                                                  // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z14U[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bOverrideMaterials : 1;                                    // 0x005C(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                              // 0x005C(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KYF6[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNiagaraMeshMaterialOverride>        OverrideMaterials;                                         // 0x0060(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   SubImageSize;                                              // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSubImageBlend : 1;                                        // 0x0078(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I4EH[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Niagara_ENiagaraMeshFacingMode                     FacingMode;                                                // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WW7J[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bLockedAxisEnable : 1;                                     // 0x0080(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R7ZK[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LockedAxis;                                                // 0x0084(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraMeshLockedAxisSpace                LockedAxisSpace;                                           // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JWHE[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                           // 0x0098(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                              // 0x0110(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                           // 0x0188(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            MeshOrientationBinding;                                    // 0x0200(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ScaleBinding;                                              // 0x0278(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SubImageIndexBinding;                                      // 0x02F0(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                    // 0x0368(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                   // 0x03E0(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                   // 0x0458(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                   // 0x04D0(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                     // 0x0548(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                      // 0x05C0(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                      // 0x0638(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            CameraOffsetBinding;                                       // 0x06B0(0x0078) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraMeshRendererProperties");
		return ptr;
	}



};

// Class Niagara.NiagaraParameterCollectionInstance
// 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
class UNiagaraParameterCollectionInstance : public UObject
{
public:
	class UNiagaraParameterCollection*                 Collection;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>                    OverridenParameters;                                       // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraParameterStore                      ParameterStorage;                                          // 0x0040(0x00B8) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollectionInstance");
		return ptr;
	}



	void SetVectorParameter(const struct FString& InVariableName, const struct FVector& InValue);
	void SetVector4Parameter(const struct FString& InVariableName, const struct FVector4& InValue);
	void SetVector2DParameter(const struct FString& InVariableName, const struct FVector2D& InValue);
	void SetQuatParameter(const struct FString& InVariableName, const struct FQuat& InValue);
	void SetIntParameter(const struct FString& InVariableName, int InValue);
	void SetFloatParameter(const struct FString& InVariableName, float InValue);
	void SetColorParameter(const struct FString& InVariableName, const struct FLinearColor& InValue);
	void SetBoolParameter(const struct FString& InVariableName, bool InValue);
	struct FVector GetVectorParameter(const struct FString& InVariableName);
	struct FVector4 GetVector4Parameter(const struct FString& InVariableName);
	struct FVector2D GetVector2DParameter(const struct FString& InVariableName);
	struct FQuat GetQuatParameter(const struct FString& InVariableName);
	int GetIntParameter(const struct FString& InVariableName);
	float GetFloatParameter(const struct FString& InVariableName);
	struct FLinearColor GetColorParameter(const struct FString& InVariableName);
	bool GetBoolParameter(const struct FString& InVariableName);
};

// Class Niagara.NiagaraParameterCollection
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UNiagaraParameterCollection : public UObject
{
public:
	struct FName                                       Namespace;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNiagaraVariable>                    Parameters;                                                // 0x0030(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraParameterCollectionInstance*         DefaultInstance;                                           // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                       CompileId;                                                 // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollection");
		return ptr;
	}



};

// Class Niagara.NiagaraPrecompileContainer
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UNiagaraPrecompileContainer : public UObject
{
public:
	TArray<class UNiagaraScript*>                      Scripts;                                                   // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                              System;                                                    // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPrecompileContainer");
		return ptr;
	}



};

// Class Niagara.NiagaraPreviewBase
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class ANiagaraPreviewBase : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewBase");
		return ptr;
	}



	void SetSystem(class UNiagaraSystem* InSystem);
	void SetLabelText(const struct FText& InXAxisText, const struct FText& InYAxisText);
};

// Class Niagara.NiagaraPreviewAxis
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNiagaraPreviewAxis : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis");
		return ptr;
	}



	int Num();
	void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int PreviewIndex, bool bIsXAxis, struct FString* OutLabelText);
};

// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
	struct FName                                       Param;                                                     // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Count;                                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AHLY[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamBase");
		return ptr;
	}



};

// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	int                                                Min;                                                       // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Max;                                                       // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamInt32");
		return ptr;
	}



};

// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	float                                              Min;                                                       // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              Max;                                                       // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamFloat");
		return ptr;
	}



};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector2D                                   Min;                                                       // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                                   Max;                                                       // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector2D");
		return ptr;
	}



};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector                                     Min;                                                       // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     Max;                                                       // 0x0044(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector");
		return ptr;
	}



};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	unsigned char                                      UnknownData_5CNI[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector4                                    Min;                                                       // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector4                                    Max;                                                       // 0x0050(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector4");
		return ptr;
	}



};

// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FLinearColor                                Min;                                                       // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                Max;                                                       // 0x0048(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor");
		return ptr;
	}



};

// Class Niagara.NiagaraPreviewGrid
// 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
class ANiagaraPreviewGrid : public AActor
{
public:
	class UNiagaraSystem*                              System;                                                    // 0x0220(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraPreviewGridResetMode               ResetMode;                                                 // 0x0228(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BF5T[0x7];                                     // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNiagaraPreviewAxis*                         PreviewAxisX;                                              // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraPreviewAxis*                         PreviewAxisY;                                              // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PreviewClass;                                              // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpacingX;                                                  // 0x0248(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpacingY;                                                  // 0x024C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumX;                                                      // 0x0250(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                NumY;                                                      // 0x0254(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UChildActorComponent*>                PreviewComponents;                                         // 0x0258(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VYNZ[0x8];                                     // 0x0268(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraPreviewGrid");
		return ptr;
	}



	void SetPaused(bool bPaused);
	void GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews);
	void DeactivatePreviews();
	void ActivatePreviews(bool bReset);
};

// Class Niagara.NiagaraRibbonRendererProperties
// 0x0710 (FullSize[0x0760] - InheritedSize[0x0050])
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                  // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding                MaterialUserParamBinding;                                  // 0x0058(0x0028) (Edit, NativeAccessSpecifierPublic)
	Niagara_ENiagaraRibbonFacingMode                   FacingMode;                                                // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PMJK[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UV0TilingDistance;                                         // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV0Scale;                                                  // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV0Offset;                                                 // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraRibbonAgeOffsetMode                UV0AgeOffsetMode;                                          // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SL8M[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UV1TilingDistance;                                         // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV1Scale;                                                  // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV1Offset;                                                 // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraRibbonAgeOffsetMode                UV1AgeOffsetMode;                                          // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraRibbonDrawDirection                DrawDirection;                                             // 0x00B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DK6B[0x2];                                     // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurveTension;                                              // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraRibbonTessellationMode             TessellationMode;                                          // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_97E0[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TessellationFactor;                                        // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseConstantFactor;                                        // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NU01[0x3];                                     // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TessellationAngle;                                         // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bScreenSpaceTessellation;                                  // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5K02[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                           // 0x00D0(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                              // 0x0148(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                           // 0x01C0(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                      // 0x0238(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonTwistBinding;                                        // 0x02B0(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonWidthBinding;                                        // 0x0328(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonFacingBinding;                                       // 0x03A0(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonIdBinding;                                           // 0x0418(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonLinkOrderBinding;                                    // 0x0490(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                     // 0x0508(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                    // 0x0580(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                   // 0x05F8(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                   // 0x0670(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                   // 0x06E8(0x0078) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraRibbonRendererProperties");
		return ptr;
	}



};

// Class Niagara.NiagaraScript
// 0x04F8 (FullSize[0x0520] - InheritedSize[0x0028])
class UNiagaraScript : public UObject
{
public:
	Niagara_ENiagaraScriptUsage                        Usage;                                                     // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A2PI[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                UsageIndex;                                                // 0x002C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       UsageId;                                                   // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraParameterStore                      RapidIterationParameters;                                  // 0x0040(0x00B8) (NativeAccessSpecifierPublic)
	struct FNiagaraScriptExecutionParameterStore       ScriptExecutionParamStore;                                 // 0x00F8(0x00D8) (NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraBoundParameter>              ScriptExecutionBoundParameters;                            // 0x01D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraVMExecutableDataId                  CachedScriptVMId;                                          // 0x01E0(0x0048) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7HHU[0x1B0];                                   // 0x0228(0x01B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraVMExecutableData                    CachedScriptVM;                                            // 0x03D8(0x0128) (NativeAccessSpecifierPrivate)
	TArray<class UNiagaraParameterCollection*>         CachedParameterCollectionReferences;                       // 0x0500(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraScriptDataInterfaceInfo>     CachedDefaultDataInterfaces;                               // 0x0510(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraScript");
		return ptr;
	}



	void RaiseOnGPUCompilationComplete();
};

// Class Niagara.NiagaraScriptSourceBase
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData_VIJF[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		return ptr;
	}



};

// Class Niagara.NiagaraSettings
// 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
class UNiagaraSettings : public UDeveloperSettings
{
public:
	TArray<struct FSoftObjectPath>                     AdditionalParameterTypes;                                  // 0x0038(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                     AdditionalPayloadTypes;                                    // 0x0048(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                     AdditionalParameterEnums;                                  // 0x0058(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             DefaultEffectType;                                         // 0x0068(0x0018) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               QualityLevels;                                             // 0x0080(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraEffectType*                          DefaultEffectTypePtr;                                      // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraSettings");
		return ptr;
	}



};

// Class Niagara.NiagaraSimulationStageBase
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{
public:
	class UNiagaraScript*                              Script;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SimulationStageName;                                       // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraSimulationStageBase");
		return ptr;
	}



};

// Class Niagara.NiagaraSimulationStageGeneric
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
public:
	Niagara_ENiagaraIterationSource                    IterationSource;                                           // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5GWG[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Iterations;                                                // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSpawnOnly : 1;                                            // 0x0040(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q60Y[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraVariableDataInterfaceBinding        DataInterface;                                             // 0x0048(0x0028) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraSimulationStageGeneric");
		return ptr;
	}



};

// Class Niagara.NiagaraSpriteRendererProperties
// 0x0860 (FullSize[0x08B0] - InheritedSize[0x0050])
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                  // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding                MaterialUserParamBinding;                                  // 0x0058(0x0028) (Edit, NativeAccessSpecifierPublic)
	Niagara_ENiagaraSpriteAlignment                    Alignment;                                                 // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraSpriteFacingMode                   FacingMode;                                                // 0x0081(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S3D7[0x2];                                     // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   PivotInUVSpace;                                            // 0x0084(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraSortMode                           SortMode;                                                  // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ODFR[0x3];                                     // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   SubImageSize;                                              // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSubImageBlend : 1;                                        // 0x0098(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRemoveHMDRollInVR : 1;                                    // 0x0098(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                              // 0x0098(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QNPN[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinFacingCameraBlendDistance;                              // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFacingCameraBlendDistance;                              // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M8TJ[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                           // 0x00A8(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                              // 0x0120(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                           // 0x0198(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SpriteRotationBinding;                                     // 0x0210(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SpriteSizeBinding;                                         // 0x0288(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SpriteFacingBinding;                                       // 0x0300(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SpriteAlignmentBinding;                                    // 0x0378(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SubImageIndexBinding;                                      // 0x03F0(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                    // 0x0468(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                   // 0x04E0(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                   // 0x0558(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                   // 0x05D0(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            CameraOffsetBinding;                                       // 0x0648(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            UVScaleBinding;                                            // 0x06C0(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                     // 0x0738(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                      // 0x07B0(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                      // 0x0828(0x0078) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VFC9[0x10];                                    // 0x08A0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraSpriteRendererProperties");
		return ptr;
	}



};

// Class Niagara.NiagaraSystem
// 0x0448 (FullSize[0x0478] - InheritedSize[0x0030])
class UNiagaraSystem : public UFXSystemAsset
{
public:
	unsigned char                                      UnknownData_P8P3[0x1];                                     // 0x0030(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bDumpDebugSystemInfo;                                      // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDumpDebugEmitterInfo;                                     // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GJN5[0x1];                                     // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bFixedBounds : 1;                                          // 0x0034(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_69Z6[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNiagaraEffectType*                          EffectType;                                                // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOverrideScalabilitySettings;                              // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TER9[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNiagaraSystemScalabilityOverride>   ScalabilityOverrides;                                      // 0x0048(0x0010) (ZeroConstructor, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNiagaraSystemScalabilityOverrides          SystemScalabilityOverrides;                                // 0x0058(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct FNiagaraEmitterHandle>               EmitterHandles;                                            // 0x0068(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                              // 0x0078(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraScript*                              SystemSpawnScript;                                         // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraScript*                              SystemUpdateScript;                                        // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G2DN[0x10];                                    // 0x0098(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraSystemCompiledData                  SystemCompiledData;                                        // 0x00A8(0x0258) (Protected, NativeAccessSpecifierProtected)
	struct FNiagaraUserRedirectionParameterStore       ExposedParameters;                                         // 0x0300(0x0108) (Protected, NativeAccessSpecifierProtected)
	struct FBox                                        FixedBounds;                                               // 0x0408(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bAutoDeactivate;                                           // 0x0424(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZB2J[0x3];                                     // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WarmupTime;                                                // 0x0428(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                WarmupTickCount;                                           // 0x042C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WarmupTickDelta;                                           // 0x0430(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHasSystemScriptDIsWithPerInstanceData;                    // 0x0434(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3C21[0x3];                                     // 0x0435(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               UserDINamesReadInSystemScripts;                            // 0x0438(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MFQQ[0x30];                                    // 0x0448(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraSystem");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

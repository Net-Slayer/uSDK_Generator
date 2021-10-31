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

// Class LiveLinkInterface.LiveLinkSourceFactory
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkSourceFactory : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceFactory");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkRole
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkRole : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkRole");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkBasicRole
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkBasicRole : public ULiveLinkRole
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkBasicRole");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkAnimationRole
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkAnimationRole : public ULiveLinkBasicRole
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkAnimationRole");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkTransformRole
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkTransformRole : public ULiveLinkBasicRole
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkTransformRole");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkCameraRole
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkCameraRole : public ULiveLinkTransformRole
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkCameraRole");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkController
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkController : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkController");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkSourceSettings
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class ULiveLinkSourceSettings : public UObject
{
public:
	LiveLinkInterface_ELiveLinkSourceMode              Mode;                                                      // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5DYI[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLiveLinkSourceBufferManagementSettings     BufferSettings;                                            // 0x0030(0x0050) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ConnectionString;                                          // 0x0080(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Factory;                                                   // 0x0090(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceSettings");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkCurveRemapSettings
// 0x0050 (FullSize[0x00E8] - InheritedSize[0x0098])
class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{
public:
	struct FLiveLinkCurveConversionSettings            CurveConversionSettings;                                   // 0x0098(0x0050) (Edit, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkCurveRemapSettings");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkFrameInterpolationProcessor : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkFramePreProcessor
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkFramePreProcessor : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFramePreProcessor");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkFrameTranslator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkFrameTranslator : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFrameTranslator");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkLightRole
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkLightRole : public ULiveLinkTransformRole
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkLightRole");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkSubjectSettings
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class ULiveLinkSubjectSettings : public UObject
{
public:
	TArray<class ULiveLinkFramePreProcessor*>          PreProcessors;                                             // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkFrameInterpolationProcessor*        InterpolationProcessor;                                    // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULiveLinkFrameTranslator*>            Translators;                                               // 0x0040(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Role;                                                      // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSubjectSettings");
		return ptr;
	}



};

// Class LiveLinkInterface.LiveLinkVirtualSubject
// 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
class ULiveLinkVirtualSubject : public UObject
{
public:
	unsigned char                                      UnknownData_I8ZV[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Role;                                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FLiveLinkSubjectName>                Subjects;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ULiveLinkFrameTranslator*>            FrameTranslators;                                          // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D6PW[0x80];                                    // 0x0058(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkVirtualSubject");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UMaterialShaderQualitySettings : public UObject
{
public:
	TMap<struct FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;                                         // 0x0028(0x0050) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MaterialShaderQualitySettings.MaterialShaderQualitySettings");
		return ptr;
	}



};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UShaderPlatformQualitySettings : public UObject
{
public:
	struct FMaterialQualityOverrides                   QualityOverrides[0x3];                                     // 0x0028(0x001B) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F9XG[0x15];                                    // 0x0043(0x0015) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

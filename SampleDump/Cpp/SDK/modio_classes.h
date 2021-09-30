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

// Class modio.CallbackProxy_AddMetadataKVP
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class UCallbackProxy_AddMetadataKVP : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_257P[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_AddMetadataKVP");
		return ptr;
	}



	class UCallbackProxy_AddMetadataKVP* STATIC_AddMetadataKVP(class UObject* WorldContext, int ModId, TMap<struct FString, struct FString> MetadataKVP);
};

// Class modio.CallbackProxy_AddMod
// 0x00B0 (FullSize[0x00E0] - InheritedSize[0x0030])
class UCallbackProxy_AddMod : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_JC5I[0x88];                                    // 0x0030(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_AddMod");
		return ptr;
	}



	class UCallbackProxy_AddMod* STATIC_AddMod(class UObject* WorldContext, const struct FModioModCreator& ModCreator);
};

// Class modio.CallbackProxy_AddModDependencies
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UCallbackProxy_AddModDependencies : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_7LGW[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_AddModDependencies");
		return ptr;
	}



	class UCallbackProxy_AddModDependencies* STATIC_AddModDependencies(class UObject* WorldContext, int ModId, TArray<int> Dependencies);
};

// Class modio.CallbackProxy_AddModImages
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UCallbackProxy_AddModImages : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_COSY[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_AddModImages");
		return ptr;
	}



	class UCallbackProxy_AddModImages* STATIC_AddModImages(class UObject* WorldContext, int ModId, TArray<struct FString> ImagePaths);
};

// Class modio.CallbackProxy_AddModLogo
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UCallbackProxy_AddModLogo : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_LRDT[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_AddModLogo");
		return ptr;
	}



	class UCallbackProxy_AddModLogo* STATIC_AddModLogo(class UObject* WorldContext, int ModId, const struct FString& LogoPath);
};

// Class modio.CallbackProxy_AddModRating
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UCallbackProxy_AddModRating : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_PHK5[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_AddModRating");
		return ptr;
	}



	class UCallbackProxy_AddModRating* STATIC_AddModRating(class UObject* WorldContext, int ModId, bool IsRatingPositive);
};

// Class modio.CallbackProxy_AddModSketchfabLinks
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UCallbackProxy_AddModSketchfabLinks : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_TH3E[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_AddModSketchfabLinks");
		return ptr;
	}



	class UCallbackProxy_AddModSketchfabLinks* STATIC_AddModSketchfabLinks(class UObject* WorldContext, int ModId, TArray<struct FString> SketchfabLinks);
};

// Class modio.CallbackProxy_AddModTags
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UCallbackProxy_AddModTags : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_SX9Y[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_AddModTags");
		return ptr;
	}



	class UCallbackProxy_AddModTags* STATIC_AddModTags(class UObject* WorldContext, int ModId, TArray<struct FString> Tags);
};

// Class modio.CallbackProxy_AddModYoutubeLinks
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UCallbackProxy_AddModYoutubeLinks : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_U114[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_AddModYoutubeLinks");
		return ptr;
	}



	class UCallbackProxy_AddModYoutubeLinks* STATIC_AddModYoutubeLinks(class UObject* WorldContext, int ModId, TArray<struct FString> YoutubeLinks);
};

// Class modio.CallbackProxy_DeleteMetadataKVP
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class UCallbackProxy_DeleteMetadataKVP : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_LURE[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_DeleteMetadataKVP");
		return ptr;
	}



	class UCallbackProxy_DeleteMetadataKVP* STATIC_DeleteMetadataKVP(class UObject* WorldContext, int ModId, TMap<struct FString, struct FString> MetadataKVP);
};

// Class modio.CallbackProxy_DeleteModDependencies
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UCallbackProxy_DeleteModDependencies : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_KJQU[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_DeleteModDependencies");
		return ptr;
	}



	class UCallbackProxy_DeleteModDependencies* STATIC_DeleteModDependencies(class UObject* WorldContext, int ModId, TArray<int> Dependencies);
};

// Class modio.CallbackProxy_DeleteModImages
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UCallbackProxy_DeleteModImages : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_22M5[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_DeleteModImages");
		return ptr;
	}



	class UCallbackProxy_DeleteModImages* STATIC_DeleteModImages(class UObject* WorldContext, int ModId, TArray<struct FString> ImagePaths);
};

// Class modio.CallbackProxy_DeleteModSketchfabLinks
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UCallbackProxy_DeleteModSketchfabLinks : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_BC6D[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_DeleteModSketchfabLinks");
		return ptr;
	}



	class UCallbackProxy_DeleteModSketchfabLinks* STATIC_DeleteModSketchfabLinks(class UObject* WorldContext, int ModId, TArray<struct FString> SketchfabLinks);
};

// Class modio.CallbackProxy_DeleteModTags
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UCallbackProxy_DeleteModTags : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_9JGG[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_DeleteModTags");
		return ptr;
	}



	class UCallbackProxy_DeleteModTags* STATIC_DeleteModTags(class UObject* WorldContext, int ModId, TArray<struct FString> Tags);
};

// Class modio.CallbackProxy_DeleteModYoutubeLinks
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UCallbackProxy_DeleteModYoutubeLinks : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_7ELJ[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_DeleteModYoutubeLinks");
		return ptr;
	}



	class UCallbackProxy_DeleteModYoutubeLinks* STATIC_DeleteModYoutubeLinks(class UObject* WorldContext, int ModId, TArray<struct FString> YoutubeLinks);
};

// Class modio.CallbackProxy_DownloadModfilesById
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UCallbackProxy_DownloadModfilesById : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_WKMC[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_DownloadModfilesById");
		return ptr;
	}



	class UCallbackProxy_DownloadModfilesById* STATIC_DownloadModfilesById(class UObject* WorldContext, TArray<int> ModIds);
};

// Class modio.CallbackProxy_DownloadSubscribedModfiles
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UCallbackProxy_DownloadSubscribedModfiles : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_L7NK[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_DownloadSubscribedModfiles");
		return ptr;
	}



	class UCallbackProxy_DownloadSubscribedModfiles* STATIC_DownloadSubscribedModfiles(class UObject* WorldContext, bool UninstallUnsubscribed);
};

// Class modio.CallbackProxy_EditMod
// 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
class UCallbackProxy_EditMod : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_MRU1[0x70];                                    // 0x0030(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_EditMod");
		return ptr;
	}



	class UCallbackProxy_EditMod* STATIC_EditMod(class UObject* WorldContext, int ModId, const struct FModioModEditor& ModEditor);
};

// Class modio.CallbackProxy_EmailExchange
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UCallbackProxy_EmailExchange : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_9J87[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_EmailExchange");
		return ptr;
	}



	class UCallbackProxy_EmailExchange* STATIC_EmailExchange(class UObject* WorldContext, const struct FString& SecurityCode);
};

// Class modio.CallbackProxy_EmailRequest
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UCallbackProxy_EmailRequest : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_D86R[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_EmailRequest");
		return ptr;
	}



	class UCallbackProxy_EmailRequest* STATIC_EmailRequest(class UObject* WorldContext, const struct FString& Email);
};

// Class modio.CallbackProxy_GalaxyAuth
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UCallbackProxy_GalaxyAuth : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_F6YR[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_GalaxyAuth");
		return ptr;
	}



	class UCallbackProxy_GalaxyAuth* STATIC_GalaxyAuth(class UObject* WorldContext, const struct FString& Appdata);
};

// Class modio.CallbackProxy_GetAllMetadataKVP
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UCallbackProxy_GetAllMetadataKVP : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_U7U6[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_GetAllMetadataKVP");
		return ptr;
	}



	class UCallbackProxy_GetAllMetadataKVP* STATIC_GetAllMetadataKVP(class UObject* WorldContext, int ModId);
};

// Class modio.CallbackProxy_GetAllModDependencies
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UCallbackProxy_GetAllModDependencies : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_V7NK[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_GetAllModDependencies");
		return ptr;
	}



	class UCallbackProxy_GetAllModDependencies* STATIC_GetAllModDependencies(class UObject* WorldContext, int ModId);
};

// Class modio.CallbackProxy_GetAllModfiles
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UCallbackProxy_GetAllModfiles : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AHBL[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_GetAllModfiles");
		return ptr;
	}



	class UCallbackProxy_GetAllModfiles* STATIC_GetAllModfiles(class UObject* WorldContext, int ModId);
};

// Class modio.CallbackProxy_GetAllMods
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UCallbackProxy_GetAllMods : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_H8LT[0x40];                                    // 0x0030(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_GetAllMods");
		return ptr;
	}



	class UCallbackProxy_GetAllMods* STATIC_GetAllMods(class UObject* WorldContext, const struct FModioFilterCreator& Filter, TArray<struct FString> ModTags, int Limit, int Offset);
};

// Class modio.CallbackProxy_GetAllModTags
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UCallbackProxy_GetAllModTags : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_366R[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_GetAllModTags");
		return ptr;
	}



	class UCallbackProxy_GetAllModTags* STATIC_GetAllModTags(class UObject* WorldContext, int ModId);
};

// Class modio.CallbackProxy_GetAuthenticatedUser
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UCallbackProxy_GetAuthenticatedUser : public UOnlineBlueprintCallProxyBase
{
public:
	class UObject*                                     WorldContextObject;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_GetAuthenticatedUser");
		return ptr;
	}



	class UCallbackProxy_GetAuthenticatedUser* STATIC_GetAuthenticatedUser(class UObject* WorldContext);
};

// Class modio.CallbackProxy_GetGame
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UCallbackProxy_GetGame : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FLXW[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_GetGame");
		return ptr;
	}



	class UCallbackProxy_GetGame* STATIC_GetGame(class UObject* WorldContext, int GameId);
};

// Class modio.CallbackProxy_GetMod
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UCallbackProxy_GetMod : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_M8N7[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_GetMod");
		return ptr;
	}



	class UCallbackProxy_GetMod* STATIC_GetMod(class UObject* WorldContext, int ModId);
};

// Class modio.CallbackProxy_GetUserEvents
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UCallbackProxy_GetUserEvents : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_79F1[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_GetUserEvents");
		return ptr;
	}



	class UCallbackProxy_GetUserEvents* STATIC_GetUserEvents(class UObject* WorldContext, int Limit, int Offset);
};

// Class modio.CallbackProxy_GetUserModfiles
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UCallbackProxy_GetUserModfiles : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_1JBS[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_GetUserModfiles");
		return ptr;
	}



	class UCallbackProxy_GetUserModfiles* STATIC_GetUserModfiles(class UObject* WorldContext, int Limit, int Offset);
};

// Class modio.CallbackProxy_GetUserMods
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UCallbackProxy_GetUserMods : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_TG1Z[0x40];                                    // 0x0030(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_GetUserMods");
		return ptr;
	}



	class UCallbackProxy_GetUserMods* STATIC_GetUserMods(class UObject* WorldContext, const struct FModioFilterCreator& FilterCreator, TArray<struct FString> ModTags, int Limit, int Offset);
};

// Class modio.CallbackProxy_GetUserRatings
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UCallbackProxy_GetUserRatings : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_F9Z8[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_GetUserRatings");
		return ptr;
	}



	class UCallbackProxy_GetUserRatings* STATIC_GetUserRatings(class UObject* WorldContext, int Limit, int Offset);
};

// Class modio.CallbackProxy_GetUserSubscriptions
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UCallbackProxy_GetUserSubscriptions : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_2G0Y[0x40];                                    // 0x0030(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_GetUserSubscriptions");
		return ptr;
	}



	class UCallbackProxy_GetUserSubscriptions* STATIC_GetUserSubscriptions(class UObject* WorldContext, const struct FModioFilterCreator& FilterCreator, TArray<struct FString> ModTags, int Limit, int Offset);
};

// Class modio.CallbackProxy_OculusAuth
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class UCallbackProxy_OculusAuth : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_UHB7[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_OculusAuth");
		return ptr;
	}



	class UCallbackProxy_OculusAuth* STATIC_OculusAuth(class UObject* WorldContext, const struct FString& Nonce, const struct FString& OculusUserId, const struct FString& AccessToken, const struct FString& Email, const struct FString& Device, int DateExpires);
};

// Class modio.CallbackProxy_SetModDownloadListener
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UCallbackProxy_SetModDownloadListener : public UOnlineBlueprintCallProxyBase
{
public:
	class UObject*                                     WorldContextObject;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_SetModDownloadListener");
		return ptr;
	}



	class UCallbackProxy_SetModDownloadListener* STATIC_SetModDownloadListener(class UObject* WorldContext);
};

// Class modio.CallbackProxy_SetModEventListener
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UCallbackProxy_SetModEventListener : public UOnlineBlueprintCallProxyBase
{
public:
	class UObject*                                     WorldContextObject;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_SetModEventListener");
		return ptr;
	}



	class UCallbackProxy_SetModEventListener* STATIC_SetModEventListener(class UObject* WorldContext);
};

// Class modio.CallbackProxy_SetModfileUploadListener
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UCallbackProxy_SetModfileUploadListener : public UOnlineBlueprintCallProxyBase
{
public:
	class UObject*                                     WorldContextObject;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_SetModfileUploadListener");
		return ptr;
	}



	class UCallbackProxy_SetModfileUploadListener* STATIC_SetModfileUploadListener(class UObject* WorldContext);
};

// Class modio.CallbackProxy_SteamAuth
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UCallbackProxy_SteamAuth : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_NJF1[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_SteamAuth");
		return ptr;
	}



	class UCallbackProxy_SteamAuth* STATIC_SteamAuth(class UObject* WorldContext, const struct FString& Base64Ticket);
};

// Class modio.CallbackProxy_SubmitReport
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UCallbackProxy_SubmitReport : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_XKS8[0x30];                                    // 0x0030(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_SubmitReport");
		return ptr;
	}



	class UCallbackProxy_SubmitReport* STATIC_SubmitReport(class UObject* WorldContext, TEnumAsByte<modio_EModioResourceType> Resource, int ID, TEnumAsByte<modio_EModioReportType> Report, const struct FString& Name, const struct FString& Summary);
};

// Class modio.CallbackProxy_SubscribeToMod
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UCallbackProxy_SubscribeToMod : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_JIP7[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_SubscribeToMod");
		return ptr;
	}



	class UCallbackProxy_SubscribeToMod* STATIC_SubscribeToMod(class UObject* WorldContext, int ModId);
};

// Class modio.CallbackProxy_UninstallUnavailableMods
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UCallbackProxy_UninstallUnavailableMods : public UOnlineBlueprintCallProxyBase
{
public:
	class UObject*                                     WorldContextObject;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_UninstallUnavailableMods");
		return ptr;
	}



	class UCallbackProxy_UninstallUnavailableMods* STATIC_UninstallUnavailableMods(class UObject* WorldContext);
};

// Class modio.CallbackProxy_UnsubscribeFromMod
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UCallbackProxy_UnsubscribeFromMod : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData_ZLNM[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     WorldContextObject;                                        // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.CallbackProxy_UnsubscribeFromMod");
		return ptr;
	}



	class UCallbackProxy_UnsubscribeFromMod* STATIC_UnsubscribeFromMod(class UObject* WorldContext, int ModId);
};

// Class modio.ModioActorComponent
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UModioActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_RM0J[0x10];                                    // 0x00B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.ModioActorComponent");
		return ptr;
	}



};

// Class modio.ModioFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UModioFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.ModioFunctionLibrary");
		return ptr;
	}



	void STATIC_ModioUninstallMod(class UObject* WorldContextObject, int ModId, bool* SuccessfullyUninstalled);
	void STATIC_ModioSetUserEventsPollInterval(class UObject* WorldContextObject, int IntervalInSeconds);
	void STATIC_ModioSetModEventsPollInterval(class UObject* WorldContextObject, int IntervalInSeconds);
	void STATIC_ModioResumeDownloads(class UObject* WorldContextObject);
	void STATIC_ModioProcess(class UObject* WorldContextObject);
	void STATIC_ModioPrioritizeModDownload(class UObject* WorldContextObject, int ModId);
	void STATIC_ModioPollEvents(class UObject* WorldContextObject);
	void STATIC_ModioPauseDownloads(class UObject* WorldContextObject);
	void STATIC_ModioLogout(class UObject* WorldContextObject);
	void STATIC_ModioIsLoggedIn(class UObject* WorldContextObject, bool* IsLoggedIn);
	void STATIC_ModioIsCurrentUserSubscribed(class UObject* WorldContextObject, int ModId, bool* IsSubscribed);
	void STATIC_ModioInstallDownloadedMods(class UObject* WorldContextObject);
	void STATIC_ModioGetModState(class UObject* WorldContextObject, int ModId, unsigned char* ModState);
	void STATIC_ModioGetModfileUploadQueue(class UObject* WorldContextObject, TArray<struct FModioQueuedModfileUpload>* UploadQueue);
	void STATIC_ModioGetModDownloadQueue(class UObject* WorldContextObject, TArray<struct FModioQueuedModDownload>* QueuedMods);
	void STATIC_ModioGetInstalledMod(class UObject* WorldContextObject, int ModId, struct FString* Path, struct FModioMod* Mod);
	void STATIC_ModioGetCurrentUserSubscriptions(class UObject* WorldContextObject, TArray<int>* ModIds);
	void STATIC_ModioGetCurrentUserModRating(class UObject* WorldContextObject, int ModId, unsigned char* ModRating);
	void STATIC_ModioGetAllInstalledMods(class UObject* WorldContextObject, TArray<struct FModioInstalledMod>* InstalledMods);
	void STATIC_ModioGetAllDownloadedMods(class UObject* WorldContextObject, TArray<int>* DownloadedMods);
	void STATIC_ModioDownloadMod(class UObject* WorldContextObject, int ModId);
	void STATIC_ModioCurrentUser(class UObject* WorldContextObject, struct FModioUser* User);
	void STATIC_ModioCancelModDownload(class UObject* WorldContextObject, int ModId);
	void STATIC_ModioAddModfile(class UObject* WorldContextObject, int ModId, const struct FModioModfileCreator& ModfileCreator);
	void STATIC_AuthenticateViaToken(class UObject* WorldContextObject, const struct FString& AccessToken);
};

// Class modio.ModioSettings
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UModioSettings : public UObject
{
public:
	int                                                GameId;                                                    // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7NEI[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ApiKey;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RootDirectory;                                             // 0x0040(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRootDirectoryIsInUserSettingsDirectory : 1;               // 0x0050(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRunOnDedicatedServer : 1;                                 // 0x0050(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsLiveEnvironment : 1;                                    // 0x0050(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bInstallOnModDownload : 1;                                 // 0x0050(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRetrieveModsFromOtherGames : 1;                           // 0x0050(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnablePolling : 1;                                        // 0x0050(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FSRR[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class modio.ModioSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

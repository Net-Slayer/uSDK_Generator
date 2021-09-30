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

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// 0x0030 (FullSize[0x0110] - InheritedSize[0x00E0])
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{
public:
	struct FMovieSceneGeometryCollectionParams         Params;                                                    // 0x00E0(0x0030) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection");
		return ptr;
	}



};

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AnimationSections;                                         // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

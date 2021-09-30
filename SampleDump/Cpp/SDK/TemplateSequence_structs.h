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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
// 0x000C
struct FTemplateSequenceBindingOverrideData
{
	TWeakObjectPtr<class UObject>                      Object;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverridesDefault;                                         // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8YTB[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct TemplateSequence.TemplateSequenceInstanceData
// 0x0018 (0x0020 - 0x0008)
struct FTemplateSequenceInstanceData : public FMovieSceneSequenceInstanceData
{
	struct FMovieSceneEvaluationOperand                Operand;                                                   // 0x0008(0x0014) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N3HN[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct TemplateSequence.TemplateSequenceSectionTemplate
// 0x0028 (0x0048 - 0x0020)
struct FTemplateSequenceSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartTime;                                          // 0x0020(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                       OuterBindingId;                                            // 0x0024(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneEvaluationOperand                InnerOperand;                                              // 0x0034(0x0014) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

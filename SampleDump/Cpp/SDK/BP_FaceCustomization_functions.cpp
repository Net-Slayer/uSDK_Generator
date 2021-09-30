// Name: Mordhau, Version: 4_25_hotfix

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.HairColorHovered
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ColorId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::HairColorHovered(int ColorId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.HairColorHovered");

	UBP_FaceCustomization_C_HairColorHovered_Params params;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.EyeColorHovered
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ColorId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::EyeColorHovered(int ColorId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.EyeColorHovered");

	UBP_FaceCustomization_C_EyeColorHovered_Params params;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.ShowEyebrowList
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentEyebrow                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::ShowEyebrowList(int CurrentEyebrow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.ShowEyebrowList");

	UBP_FaceCustomization_C_ShowEyebrowList_Params params;
	params.CurrentEyebrow = CurrentEyebrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.ShowFacialHairList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentFace                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                CurrentFacialHair                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::ShowFacialHairList(int CurrentFace, int CurrentFacialHair)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.ShowFacialHairList");

	UBP_FaceCustomization_C_ShowFacialHairList_Params params;
	params.CurrentFace = CurrentFace;
	params.CurrentFacialHair = CurrentFacialHair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.ShowHairList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentFace                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                CurrentHair                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::ShowHairList(int CurrentFace, int CurrentHair)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.ShowHairList");

	UBP_FaceCustomization_C_ShowHairList_Params params;
	params.CurrentFace = CurrentFace;
	params.CurrentHair = CurrentHair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.EyebrowSelectionClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::EyebrowSelectionClicked(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.EyebrowSelectionClicked");

	UBP_FaceCustomization_C_EyebrowSelectionClicked_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.EyebrowSelectionHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::EyebrowSelectionHovered(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.EyebrowSelectionHovered");

	UBP_FaceCustomization_C_EyebrowSelectionHovered_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.FacialHairSelectionClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::FacialHairSelectionClicked(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.FacialHairSelectionClicked");

	UBP_FaceCustomization_C_FacialHairSelectionClicked_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.FacialHairSelectionHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::FacialHairSelectionHovered(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.FacialHairSelectionHovered");

	UBP_FaceCustomization_C_FacialHairSelectionHovered_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.HairSelectionClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::HairSelectionClicked(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.HairSelectionClicked");

	UBP_FaceCustomization_C_HairSelectionClicked_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.HairSelectionHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::HairSelectionHovered(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.HairSelectionHovered");

	UBP_FaceCustomization_C_HairSelectionHovered_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.FaceSelectionClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::FaceSelectionClicked(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.FaceSelectionClicked");

	UBP_FaceCustomization_C_FaceSelectionClicked_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.FaceSelectionHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::FaceSelectionHovered(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.FaceSelectionHovered");

	UBP_FaceCustomization_C_FaceSelectionHovered_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.ShowFaceList
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentFace                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::ShowFaceList(int CurrentFace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.ShowFaceList");

	UBP_FaceCustomization_C_ShowFaceList_Params params;
	params.CurrentFace = CurrentFace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.SelectionCanceled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_FaceCustomization_C::SelectionCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.SelectionCanceled");

	UBP_FaceCustomization_C_SelectionCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.VoiceSelectionClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::VoiceSelectionClicked(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.VoiceSelectionClicked");

	UBP_FaceCustomization_C_VoiceSelectionClicked_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.VoiceSelectionHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::VoiceSelectionHovered(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.VoiceSelectionHovered");

	UBP_FaceCustomization_C_VoiceSelectionHovered_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.ShowVoiceList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentVoice                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::ShowVoiceList(int CurrentVoice)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.ShowVoiceList");

	UBP_FaceCustomization_C_ShowVoiceList_Params params;
	params.CurrentVoice = CurrentVoice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.UpdateDoll
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               OnlyMaterials                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_FaceCustomization_C::UpdateDoll(bool OnlyMaterials)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.UpdateDoll");

	UBP_FaceCustomization_C_UpdateDoll_Params params;
	params.OnlyMaterials = OnlyMaterials;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.AddCurrentWrapperToHistory
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_FaceCustomization_C::AddCurrentWrapperToHistory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.AddCurrentWrapperToHistory");

	UBP_FaceCustomization_C_AddCurrentWrapperToHistory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.SaveCurrentToWrapperProfile
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_FaceCustomization_C::SaveCurrentToWrapperProfile()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.SaveCurrentToWrapperProfile");

	UBP_FaceCustomization_C_SaveCurrentToWrapperProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.ApplyFaceTransformDelta
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TransformType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Remaining                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::ApplyFaceTransformDelta(const struct FVector& Delta, int TransformType, const struct FName& BoneName, struct FVector* Remaining)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.ApplyFaceTransformDelta");

	UBP_FaceCustomization_C_ApplyFaceTransformDelta_Params params;
	params.Delta = Delta;
	params.TransformType = TransformType;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Remaining != nullptr)
		*Remaining = params.Remaining;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.UpdateWidget
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_FaceCustomization_C::UpdateWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.UpdateWidget");

	UBP_FaceCustomization_C_UpdateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.GetValues
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Voice                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                VoicePitch                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Face                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                EyeColor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                HairColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Hair                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FacialHair                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Eyebrows                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Age                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::GetValues(int* Voice, int* VoicePitch, int* Face, int* EyeColor, int* HairColor, int* Hair, int* FacialHair, int* Eyebrows, int* Age)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.GetValues");

	UBP_FaceCustomization_C_GetValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Voice != nullptr)
		*Voice = params.Voice;
	if (VoicePitch != nullptr)
		*VoicePitch = params.VoicePitch;
	if (Face != nullptr)
		*Face = params.Face;
	if (EyeColor != nullptr)
		*EyeColor = params.EyeColor;
	if (HairColor != nullptr)
		*HairColor = params.HairColor;
	if (Hair != nullptr)
		*Hair = params.Hair;
	if (FacialHair != nullptr)
		*FacialHair = params.FacialHair;
	if (Eyebrows != nullptr)
		*Eyebrows = params.Eyebrows;
	if (Age != nullptr)
		*Age = params.Age;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__HairSlider_K2Node_ComponentBoundEvent_470_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::BndEvt__HairSlider_K2Node_ComponentBoundEvent_470_OnValueChanged__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__HairSlider_K2Node_ComponentBoundEvent_470_OnValueChanged__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__HairSlider_K2Node_ComponentBoundEvent_470_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__FacialHairSlider_K2Node_ComponentBoundEvent_480_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::BndEvt__FacialHairSlider_K2Node_ComponentBoundEvent_480_OnValueChanged__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__FacialHairSlider_K2Node_ComponentBoundEvent_480_OnValueChanged__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__FacialHairSlider_K2Node_ComponentBoundEvent_480_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__EyebrowsSlider_K2Node_ComponentBoundEvent_491_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::BndEvt__EyebrowsSlider_K2Node_ComponentBoundEvent_491_OnValueChanged__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__EyebrowsSlider_K2Node_ComponentBoundEvent_491_OnValueChanged__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__EyebrowsSlider_K2Node_ComponentBoundEvent_491_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.RegisterPreviewEvents
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_FaceCustomization_C::RegisterPreviewEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.RegisterPreviewEvents");

	UBP_FaceCustomization_C_RegisterPreviewEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.OnDrag
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaDistance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::OnDrag(float DeltaDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.OnDrag");

	UBP_FaceCustomization_C_OnDrag_Params params;
	params.DeltaDistance = DeltaDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.OnScroll
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ScrollDelta                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::OnScroll(float ScrollDelta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.OnScroll");

	UBP_FaceCustomization_C_OnScroll_Params params;
	params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.Tick");

	UBP_FaceCustomization_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.RMBPress
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_FaceCustomization_C::RMBPress()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.RMBPress");

	UBP_FaceCustomization_C_RMBPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.RMBRelease
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_FaceCustomization_C::RMBRelease()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.RMBRelease");

	UBP_FaceCustomization_C_RMBRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.LMBPress
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_FaceCustomization_C::LMBPress()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.LMBPress");

	UBP_FaceCustomization_C_LMBPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.LMBRelease
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_FaceCustomization_C::LMBRelease()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.LMBRelease");

	UBP_FaceCustomization_C_LMBRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.MMBPress
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_FaceCustomization_C::MMBPress()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.MMBPress");

	UBP_FaceCustomization_C_MMBPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.MMBRelease
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_FaceCustomization_C::MMBRelease()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.MMBRelease");

	UBP_FaceCustomization_C_MMBRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.Undo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_FaceCustomization_C::Undo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.Undo");

	UBP_FaceCustomization_C_Undo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.WheelUp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_FaceCustomization_C::WheelUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.WheelUp");

	UBP_FaceCustomization_C_WheelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.WheelDown
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_FaceCustomization_C::WheelDown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.WheelDown");

	UBP_FaceCustomization_C_WheelDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.ToggleSymmetry
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_FaceCustomization_C::ToggleSymmetry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.ToggleSymmetry");

	UBP_FaceCustomization_C_ToggleSymmetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.TranslateMode
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_FaceCustomization_C::TranslateMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.TranslateMode");

	UBP_FaceCustomization_C_TranslateMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.RotateMode
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_FaceCustomization_C::RotateMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.RotateMode");

	UBP_FaceCustomization_C_RotateMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.ScaleMode
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_FaceCustomization_C::ScaleMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.ScaleMode");

	UBP_FaceCustomization_C_ScaleMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.MouseX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::MouseX(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.MouseX");

	UBP_FaceCustomization_C_MouseX_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.MouseY
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::MouseY(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.MouseY");

	UBP_FaceCustomization_C_MouseY_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.OnMouseAxis
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   Movement                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::OnMouseAxis(const struct FVector2D& Movement)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.OnMouseAxis");

	UBP_FaceCustomization_C_OnMouseAxis_Params params;
	params.Movement = Movement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.OnKeyPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        KeyName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBP_FaceCustomization_C::OnKeyPressed(const struct FKey& KeyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.OnKeyPressed");

	UBP_FaceCustomization_C_OnKeyPressed_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__AgeSlider_K2Node_ComponentBoundEvent_60_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::BndEvt__AgeSlider_K2Node_ComponentBoundEvent_60_OnValueChanged__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__AgeSlider_K2Node_ComponentBoundEvent_60_OnValueChanged__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__AgeSlider_K2Node_ComponentBoundEvent_60_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_FaceCustomization_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_113_OnColorClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_113_OnColorClicked__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_113_OnColorClicked__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_113_OnColorClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_120_OnColorHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_120_OnColorHovered__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_120_OnColorHovered__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_120_OnColorHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_134_OnColorPickerClosed__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                LstSelectedColorIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_134_OnColorPickerClosed__DelegateSignature(int LstSelectedColorIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_134_OnColorPickerClosed__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__EyeColorPicker_K2Node_ComponentBoundEvent_134_OnColorPickerClosed__DelegateSignature_Params params;
	params.LstSelectedColorIndex = LstSelectedColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_146_OnColorClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_146_OnColorClicked__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_146_OnColorClicked__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_146_OnColorClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_165_OnColorHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_165_OnColorHovered__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_165_OnColorHovered__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_165_OnColorHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_182_OnColorPickerClosed__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                LstSelectedColorIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_182_OnColorPickerClosed__DelegateSignature(int LstSelectedColorIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_182_OnColorPickerClosed__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__HairColorPicker_K2Node_ComponentBoundEvent_182_OnColorPickerClosed__DelegateSignature_Params params;
	params.LstSelectedColorIndex = LstSelectedColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.SetActive
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_FaceCustomization_C::SetActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.SetActive");

	UBP_FaceCustomization_C_SetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.OnProfileChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_FaceCustomization_C::OnProfileChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.OnProfileChanged");

	UBP_FaceCustomization_C_OnProfileChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.OnCharacterDollUpdated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::OnCharacterDollUpdated(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.OnCharacterDollUpdated");

	UBP_FaceCustomization_C_OnCharacterDollUpdated_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__VoicePitchSlider_K2Node_ComponentBoundEvent_81_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::BndEvt__VoicePitchSlider_K2Node_ComponentBoundEvent_81_OnValueChanged__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__VoicePitchSlider_K2Node_ComponentBoundEvent_81_OnValueChanged__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__VoicePitchSlider_K2Node_ComponentBoundEvent_81_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__VoicePitchSlider_K2Node_ComponentBoundEvent_14_OnStartedTouching__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_FaceCustomization_C::BndEvt__VoicePitchSlider_K2Node_ComponentBoundEvent_14_OnStartedTouching__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__VoicePitchSlider_K2Node_ComponentBoundEvent_14_OnStartedTouching__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__VoicePitchSlider_K2Node_ComponentBoundEvent_14_OnStartedTouching__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__VoiceSlider_K2Node_ComponentBoundEvent_15_OnStartedTouching__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_FaceCustomization_C::BndEvt__VoiceSlider_K2Node_ComponentBoundEvent_15_OnStartedTouching__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__VoiceSlider_K2Node_ComponentBoundEvent_15_OnStartedTouching__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__VoiceSlider_K2Node_ComponentBoundEvent_15_OnStartedTouching__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__RandomizeFaceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_FaceCustomization_C::BndEvt__RandomizeFaceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__RandomizeFaceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__RandomizeFaceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_FaceCustomization_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.ChangeVoice
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::ChangeVoice(int NewId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.ChangeVoice");

	UBP_FaceCustomization_C_ChangeVoice_Params params;
	params.NewId = NewId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__VoiceButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_FaceCustomization_C::BndEvt__VoiceButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__VoiceButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__VoiceButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__FaceButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_FaceCustomization_C::BndEvt__FaceButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__FaceButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__FaceButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_FaceCustomization_C::BndEvt__HairButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__FacialHairButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_FaceCustomization_C::BndEvt__FacialHairButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__FacialHairButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__FacialHairButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__EyebrowsButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_FaceCustomization_C::BndEvt__EyebrowsButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.BndEvt__EyebrowsButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UBP_FaceCustomization_C_BndEvt__EyebrowsButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FaceCustomization.BP_FaceCustomization_C.ExecuteUbergraph_BP_FaceCustomization
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FaceCustomization_C::ExecuteUbergraph_BP_FaceCustomization(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FaceCustomization.BP_FaceCustomization_C.ExecuteUbergraph_BP_FaceCustomization");

	UBP_FaceCustomization_C_ExecuteUbergraph_BP_FaceCustomization_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

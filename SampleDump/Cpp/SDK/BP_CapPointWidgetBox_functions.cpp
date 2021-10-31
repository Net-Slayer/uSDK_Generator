// Name: Mordhau, Version: Patch23

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
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapPointWidgetBox.BP_CapPointWidgetBox_C.Initialize
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class AControlPoint*>                       Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		bool                                               is_Base_Point                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CapPointWidgetBox_C::Initialize(TArray<class AControlPoint*>* Points, bool is_Base_Point)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapPointWidgetBox.BP_CapPointWidgetBox_C.Initialize");

	UBP_CapPointWidgetBox_C_Initialize_Params params;
	params.is_Base_Point = is_Base_Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Points != nullptr)
		*Points = params.Points;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

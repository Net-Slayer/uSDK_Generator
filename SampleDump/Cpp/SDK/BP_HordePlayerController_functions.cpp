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
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.GetScaledSkillLevelParams
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Bias                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              PercentA                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              PercentB                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                IntegerA                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TimeA                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerController_C::GetScaledSkillLevelParams(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill, int Bias, float* PercentA, float* PercentB, int* IntegerA, float* TimeA)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.GetScaledSkillLevelParams");

	ABP_HordePlayerController_C_GetScaledSkillLevelParams_Params params;
	params.Skill = Skill;
	params.Bias = Bias;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PercentA != nullptr)
		*PercentA = params.PercentA;
	if (PercentB != nullptr)
		*PercentB = params.PercentB;
	if (IntegerA != nullptr)
		*IntegerA = params.IntegerA;
	if (TimeA != nullptr)
		*TimeA = params.TimeA;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_NextSpecialTime
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordePlayerController_C::OnRep_NextSpecialTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_NextSpecialTime");

	ABP_HordePlayerController_C_OnRep_NextSpecialTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_CriticalCounter
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_HordePlayerController_C::OnRep_CriticalCounter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_CriticalCounter");

	ABP_HordePlayerController_C_OnRep_CriticalCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_BackstabCounter
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_HordePlayerController_C::OnRep_BackstabCounter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_BackstabCounter");

	ABP_HordePlayerController_C_OnRep_BackstabCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.GetDiscountedPrice
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                BasePrice                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                DiscountedPrice                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerController_C::GetDiscountedPrice(int BasePrice, int* DiscountedPrice)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.GetDiscountedPrice");

	ABP_HordePlayerController_C_GetDiscountedPrice_Params params;
	params.BasePrice = BasePrice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DiscountedPrice != nullptr)
		*DiscountedPrice = params.DiscountedPrice;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.AssignFireArrowValues
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Arrow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerController_C::AssignFireArrowValues(class AActor* Arrow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.AssignFireArrowValues");

	ABP_HordePlayerController_C_AssignFireArrowValues_Params params;
	params.Arrow = Arrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.TryScatterShot
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauProjectile*                          SourceProjectile                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerController_C::TryScatterShot(class AMordhauProjectile* SourceProjectile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.TryScatterShot");

	ABP_HordePlayerController_C_TryScatterShot_Params params;
	params.SourceProjectile = SourceProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.TryFletcherRestock
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordePlayerController_C::TryFletcherRestock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.TryFletcherRestock");

	ABP_HordePlayerController_C_TryFletcherRestock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.GetSkillLevelFloat
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              SkillLevel                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerController_C::GetSkillLevelFloat(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill, float* SkillLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.GetSkillLevelFloat");

	ABP_HordePlayerController_C_GetSkillLevelFloat_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SkillLevel != nullptr)
		*SkillLevel = params.SkillLevel;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.SkillsUpdated
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordePlayerController_C::SkillsUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.SkillsUpdated");

	ABP_HordePlayerController_C_SkillsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.HasPrerequisite
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HordePlayerController_C::HasPrerequisite(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.HasPrerequisite");

	ABP_HordePlayerController_C_HasPrerequisite_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.GetSkillLevel
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      Level                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerController_C::GetSkillLevel(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill, unsigned char* Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.GetSkillLevel");

	ABP_HordePlayerController_C_GetSkillLevel_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Level != nullptr)
		*Level = params.Level;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.UpgradeSkill
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HordePlayerController_C::UpgradeSkill(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.UpgradeSkill");

	ABP_HordePlayerController_C_UpgradeSkill_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.CustomizeEquipment
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauEquipment*                           Equipment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerController_C::CustomizeEquipment(class AMordhauEquipment* Equipment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.CustomizeEquipment");

	ABP_HordePlayerController_C_CustomizeEquipment_Params params;
	params.Equipment = Equipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_PurchaseTrigger
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_HordePlayerController_C::OnRep_PurchaseTrigger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_PurchaseTrigger");

	ABP_HordePlayerController_C_OnRep_PurchaseTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_HordePlayerController_C::InpActEvt_Battlecry_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_3");

	ABP_HordePlayerController_C_InpActEvt_Battlecry_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_HordePlayerController_C::InpActEvt_Battlecry_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_2");

	ABP_HordePlayerController_C_InpActEvt_Battlecry_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Show Profile Select_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_HordePlayerController_C::InpActEvt_Show_Profile_Select_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Show Profile Select_K2Node_InputActionEvent_1");

	ABP_HordePlayerController_C_InpActEvt_Show_Profile_Select_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_HordePlayerController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.ReceiveBeginPlay");

	ABP_HordePlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.OnAfterPossess
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class APawn*                                       APawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerController_C::OnAfterPossess(class APawn* APawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.OnAfterPossess");

	ABP_HordePlayerController_C_OnAfterPossess_Params params;
	params.APawn = APawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.OnBuilt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Structure                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerController_C::OnBuilt(class AActor* Structure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.OnBuilt");

	ABP_HordePlayerController_C_OnBuilt_Params params;
	params.Structure = Structure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.RequestUpgradeSkill
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerController_C::RequestUpgradeSkill(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.RequestUpgradeSkill");

	ABP_HordePlayerController_C_RequestUpgradeSkill_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.ReceiveEndPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerController_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.ReceiveEndPlay");

	ABP_HordePlayerController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordePlayerController.BP_HordePlayerController_C.ExecuteUbergraph_BP_HordePlayerController
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordePlayerController_C::ExecuteUbergraph_BP_HordePlayerController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.ExecuteUbergraph_BP_HordePlayerController");

	ABP_HordePlayerController_C_ExecuteUbergraph_BP_HordePlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function BP_StatusBar.BP_StatusBar_C.Get_VehicleNameText_Text_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_StatusBar_C::Get_VehicleNameText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.Get_VehicleNameText_Text_1");

	UBP_StatusBar_C_Get_VehicleNameText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_StatusBar.BP_StatusBar_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_StatusBar_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.GetVisibility_1");

	UBP_StatusBar_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_StatusBar.BP_StatusBar_C.Get_VehicleHealthBar_Percent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_StatusBar_C::Get_VehicleHealthBar_Percent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.Get_VehicleHealthBar_Percent_1");

	UBP_StatusBar_C_Get_VehicleHealthBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_StatusBar.BP_StatusBar_C.createDynamicMaterial
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMaterialInterface*                          Parent_Material                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UProgressBar*                                Progress_Bar                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       Parameter_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMaterialInstanceDynamic*                    MaterialInstanceDymanicReference                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StatusBar_C::createDynamicMaterial(class UMaterialInterface* Parent_Material, class UProgressBar* Progress_Bar, const struct FLinearColor& Color, const struct FName& Parameter_Name, class UMaterialInstanceDynamic** MaterialInstanceDymanicReference)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.createDynamicMaterial");

	UBP_StatusBar_C_createDynamicMaterial_Params params;
	params.Parent_Material = Parent_Material;
	params.Progress_Bar = Progress_Bar;
	params.Color = Color;
	params.Parameter_Name = Parameter_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MaterialInstanceDymanicReference != nullptr)
		*MaterialInstanceDymanicReference = params.MaterialInstanceDymanicReference;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_StatusBar.BP_StatusBar_C.SetObservedCharacter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           NewObserved                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StatusBar_C::SetObservedCharacter(class AMordhauCharacter* NewObserved)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.SetObservedCharacter");

	UBP_StatusBar_C_SetObservedCharacter_Params params;
	params.NewObserved = NewObserved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_StatusBar.BP_StatusBar_C.getDelayedStaminaPercentage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_StatusBar_C::getDelayedStaminaPercentage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.getDelayedStaminaPercentage");

	UBP_StatusBar_C_getDelayedStaminaPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_StatusBar.BP_StatusBar_C.getDelayedHealthPercentage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_StatusBar_C::getDelayedHealthPercentage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.getDelayedHealthPercentage");

	UBP_StatusBar_C_getDelayedHealthPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_StatusBar.BP_StatusBar_C.getStaminaPercetageText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_StatusBar_C::getStaminaPercetageText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.getStaminaPercetageText");

	UBP_StatusBar_C_getStaminaPercetageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_StatusBar.BP_StatusBar_C.getHealthPercentageText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_StatusBar_C::getHealthPercentageText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.getHealthPercentageText");

	UBP_StatusBar_C_getHealthPercentageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_StatusBar.BP_StatusBar_C.getStaminaPercetage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_StatusBar_C::getStaminaPercetage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.getStaminaPercetage");

	UBP_StatusBar_C_getStaminaPercetage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_StatusBar.BP_StatusBar_C.getHealthPercentage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_StatusBar_C::getHealthPercentage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.getHealthPercentage");

	UBP_StatusBar_C_getHealthPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_StatusBar.BP_StatusBar_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_StatusBar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.Construct");

	UBP_StatusBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_StatusBar.BP_StatusBar_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StatusBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.Tick");

	UBP_StatusBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_StatusBar.BP_StatusBar_C.ExecuteUbergraph_BP_StatusBar
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StatusBar_C::ExecuteUbergraph_BP_StatusBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StatusBar.BP_StatusBar_C.ExecuteUbergraph_BP_StatusBar");

	UBP_StatusBar_C_ExecuteUbergraph_BP_StatusBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

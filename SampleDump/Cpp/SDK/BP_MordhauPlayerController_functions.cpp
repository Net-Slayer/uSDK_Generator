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
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.Update button prompts 
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauPlayerController_C::Update_button_prompts_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.Update button prompts ");

	ABP_MordhauPlayerController_C_Update_button_prompts__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.NewFunction_1
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauPlayerController_C::NewFunction_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.NewFunction_1");

	ABP_MordhauPlayerController_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnWipePlaceablesClient
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauPlayerController_C::OnWipePlaceablesClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnWipePlaceablesClient");

	ABP_MordhauPlayerController_C_OnWipePlaceablesClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnUpdatePlaceablesClient
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       PlaceableName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      PlaceableAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnUpdatePlaceablesClient(const struct FName& PlaceableName, unsigned char PlaceableAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnUpdatePlaceablesClient");

	ABP_MordhauPlayerController_C_OnUpdatePlaceablesClient_Params params;
	params.PlaceableName = PlaceableName;
	params.PlaceableAmount = PlaceableAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.UpdateBloodOverlayPostProcess
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              BloodOverlayIntensity                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::UpdateBloodOverlayPostProcess(float DeltaTime, float BloodOverlayIntensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.UpdateBloodOverlayPostProcess");

	ABP_MordhauPlayerController_C_UpdateBloodOverlayPostProcess_Params params;
	params.DeltaTime = DeltaTime;
	params.BloodOverlayIntensity = BloodOverlayIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.Get Blood Overlay Sine Value
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              BloodOverlayIntensity                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              BloodOverlaySineValue                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::Get_Blood_Overlay_Sine_Value(float BloodOverlayIntensity, float* BloodOverlaySineValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.Get Blood Overlay Sine Value");

	ABP_MordhauPlayerController_C_Get_Blood_Overlay_Sine_Value_Params params;
	params.BloodOverlayIntensity = BloodOverlayIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BloodOverlaySineValue != nullptr)
		*BloodOverlaySineValue = params.BloodOverlaySineValue;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.UpdateBloodOverlaySineTime
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Period                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::UpdateBloodOverlaySineTime(float DeltaTime, float Period)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.UpdateBloodOverlaySineTime");

	ABP_MordhauPlayerController_C_UpdateBloodOverlaySineTime_Params params;
	params.DeltaTime = DeltaTime;
	params.Period = Period;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnCommandFailedReceived
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_ChatBox_C*                               ChatBox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     FailureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class APlayerState*                                Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnCommandFailedReceived(class UBP_ChatBox_C* ChatBox, const struct FString& FailureType, class APlayerState* Sender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnCommandFailedReceived");

	ABP_MordhauPlayerController_C_OnCommandFailedReceived_Params params;
	params.ChatBox = ChatBox;
	params.FailureType = FailureType;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnHelpMessageReceived
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_ChatBox_C*                               ChatBox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerState*                                Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnHelpMessageReceived(class UBP_ChatBox_C* ChatBox, class APlayerState* Sender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnHelpMessageReceived");

	ABP_MordhauPlayerController_C_OnHelpMessageReceived_Params params;
	params.ChatBox = ChatBox;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAdminChatReceived
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_ChatBox_C*                               ChatBox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class APlayerState*                                Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnAdminChatReceived(class UBP_ChatBox_C* ChatBox, const struct FString& Message, class APlayerState* Sender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAdminChatReceived");

	ABP_MordhauPlayerController_C_OnAdminChatReceived_Params params;
	params.ChatBox = ChatBox;
	params.Message = Message;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAdminAnnouncementReceived
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_ChatBox_C*                               ChatBox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class APlayerState*                                Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnAdminAnnouncementReceived(class UBP_ChatBox_C* ChatBox, const struct FString& Message, class APlayerState* Sender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAdminAnnouncementReceived");

	ABP_MordhauPlayerController_C_OnAdminAnnouncementReceived_Params params;
	params.ChatBox = ChatBox;
	params.Message = Message;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAdminSayReceived
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_ChatBox_C*                               ChatBox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class APlayerState*                                Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnAdminSayReceived(class UBP_ChatBox_C* ChatBox, const struct FString& Message, class APlayerState* Sender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAdminSayReceived");

	ABP_MordhauPlayerController_C_OnAdminSayReceived_Params params;
	params.ChatBox = ChatBox;
	params.Message = Message;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAdminPopupReceived
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_ChatBox_C*                               ChatBox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class APlayerState*                                Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnAdminPopupReceived(class UBP_ChatBox_C* ChatBox, const struct FString& Message, class APlayerState* Sender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAdminPopupReceived");

	ABP_MordhauPlayerController_C_OnAdminPopupReceived_Params params;
	params.ChatBox = ChatBox;
	params.Message = Message;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAdminWhisperReceived
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_ChatBox_C*                               ChatBox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class APlayerState*                                Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnAdminWhisperReceived(class UBP_ChatBox_C* ChatBox, const struct FString& Message, class APlayerState* Sender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAdminWhisperReceived");

	ABP_MordhauPlayerController_C_OnAdminWhisperReceived_Params params;
	params.ChatBox = ChatBox;
	params.Message = Message;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnWhisperReceived
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_ChatBox_C*                               ChatBox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     WhisperMessage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class APlayerState*                                Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnWhisperReceived(class UBP_ChatBox_C* ChatBox, const struct FString& WhisperMessage, class APlayerState* Sender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnWhisperReceived");

	ABP_MordhauPlayerController_C_OnWhisperReceived_Params params;
	params.ChatBox = ChatBox;
	params.WhisperMessage = WhisperMessage;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnBuilt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Structure                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnBuilt(class AActor* Structure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnBuilt");

	ABP_MordhauPlayerController_C_OnBuilt_Params params;
	params.Structure = Structure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.HandleTeamKill
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauPlayerState*                         KilledBy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::HandleTeamKill(class AMordhauPlayerState* KilledBy, class AActor* Agent, float Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.HandleTeamKill");

	ABP_MordhauPlayerController_C_HandleTeamKill_Params params;
	params.KilledBy = KilledBy;
	params.Agent = Agent;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnRep_ReplicatedAmmoBoxCooldown
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauPlayerController_C::OnRep_ReplicatedAmmoBoxCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnRep_ReplicatedAmmoBoxCooldown");

	ABP_MordhauPlayerController_C_OnRep_ReplicatedAmmoBoxCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.WipePlaceables
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::WipePlaceables(const struct FName& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.WipePlaceables");

	ABP_MordhauPlayerController_C_WipePlaceables_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.RemoveFromPlaceableArray
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NameKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::RemoveFromPlaceableArray(const struct FName& NameKey, class AActor* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.RemoveFromPlaceableArray");

	ABP_MordhauPlayerController_C_RemoveFromPlaceableArray_Params params;
	params.NameKey = NameKey;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.PlaceInPlaceableArray
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NameKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      ToPlace                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxOfSame                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      RemovedActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::PlaceInPlaceableArray(const struct FName& NameKey, class AActor* ToPlace, int MaxOfSame, class AActor** RemovedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.PlaceInPlaceableArray");

	ABP_MordhauPlayerController_C_PlaceInPlaceableArray_Params params;
	params.NameKey = NameKey;
	params.ToPlace = ToPlace;
	params.MaxOfSame = MaxOfSame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RemovedActor != nullptr)
		*RemovedActor = params.RemovedActor;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChangeFireOverlay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NewOnFireValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              NewNearFireValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::ChangeFireOverlay(float NewOnFireValue, float NewNearFireValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChangeFireOverlay");

	ABP_MordhauPlayerController_C_ChangeFireOverlay_Params params;
	params.NewOnFireValue = NewOnFireValue;
	params.NewNearFireValue = NewNearFireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChangeSmokeOverlay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::ChangeSmokeOverlay(float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChangeSmokeOverlay");

	ABP_MordhauPlayerController_C_ChangeSmokeOverlay_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.UpdateViewTargetEffects
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauPlayerController_C::UpdateViewTargetEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.UpdateViewTargetEffects");

	ABP_MordhauPlayerController_C_UpdateViewTargetEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChangeFadeToBlackCounter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::ChangeFadeToBlackCounter(float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChangeFadeToBlackCounter");

	ABP_MordhauPlayerController_C_ChangeFadeToBlackCounter_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Main Menu_K2Node_InputActionEvent_17
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::InpActEvt_Show_Main_Menu_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Main Menu_K2Node_InputActionEvent_17");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Main_Menu_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Chat_K2Node_InputActionEvent_16
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::InpActEvt_Show_Chat_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Chat_K2Node_InputActionEvent_16");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Chat_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Scoreboard_K2Node_InputActionEvent_15
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Scoreboard_K2Node_InputActionEvent_15");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Scoreboard_K2Node_InputActionEvent_14
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Scoreboard_K2Node_InputActionEvent_14");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Scoreboard_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Profile Select_K2Node_InputActionEvent_13
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::InpActEvt_Show_Profile_Select_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Profile Select_K2Node_InputActionEvent_13");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Profile_Select_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Team Select_K2Node_InputActionEvent_12
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::InpActEvt_Show_Team_Select_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Team Select_K2Node_InputActionEvent_12");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Team_Select_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Emote Menu_K2Node_InputActionEvent_11
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::InpActEvt_Show_Emote_Menu_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Emote Menu_K2Node_InputActionEvent_11");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Emote_Menu_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Emote Menu_K2Node_InputActionEvent_10
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::InpActEvt_Show_Emote_Menu_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Emote Menu_K2Node_InputActionEvent_10");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Emote_Menu_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Team Chat_K2Node_InputActionEvent_9
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::InpActEvt_Show_Team_Chat_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Team Chat_K2Node_InputActionEvent_9");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Team_Chat_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Voice Menu_K2Node_InputActionEvent_8
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::InpActEvt_Show_Voice_Menu_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Voice Menu_K2Node_InputActionEvent_8");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Voice_Menu_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Voice Menu_K2Node_InputActionEvent_7
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::InpActEvt_Show_Voice_Menu_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Show Voice Menu_K2Node_InputActionEvent_7");

	ABP_MordhauPlayerController_C_InpActEvt_Show_Voice_Menu_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_6
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::InpActEvt_Battlecry_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_6");

	ABP_MordhauPlayerController_C_InpActEvt_Battlecry_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_5
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::InpActEvt_Battlecry_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_5");

	ABP_MordhauPlayerController_C_InpActEvt_Battlecry_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Mute Target_K2Node_InputActionEvent_4
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::InpActEvt_Mute_Target_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Mute Target_K2Node_InputActionEvent_4");

	ABP_MordhauPlayerController_C_InpActEvt_Mute_Target_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Vote Yes_K2Node_InputActionEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::InpActEvt_Vote_Yes_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Vote Yes_K2Node_InputActionEvent_3");

	ABP_MordhauPlayerController_C_InpActEvt_Vote_Yes_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Vote No_K2Node_InputActionEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::InpActEvt_Vote_No_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Vote No_K2Node_InputActionEvent_2");

	ABP_MordhauPlayerController_C_InpActEvt_Vote_No_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Toggle UI Markers_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::InpActEvt_Toggle_UI_Markers_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.InpActEvt_Toggle UI Markers_K2Node_InputActionEvent_1");

	ABP_MordhauPlayerController_C_InpActEvt_Toggle_UI_Markers_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_MordhauPlayerController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveBeginPlay");

	ABP_MordhauPlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveTick");

	ABP_MordhauPlayerController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.RequestChatMessage
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MordhauPlayerController_C::RequestChatMessage(const struct FString& Message, bool Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.RequestChatMessage");

	ABP_MordhauPlayerController_C_RequestChatMessage_Params params;
	params.Message = Message;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnHighlightStart
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnHighlightStart(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnHighlightStart");

	ABP_MordhauPlayerController_C_OnHighlightStart_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnHighlightEnd
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnHighlightEnd(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnHighlightEnd");

	ABP_MordhauPlayerController_C_OnHighlightEnd_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnSpectatorAction
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		unsigned char                                      Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnSpectatorAction(unsigned char Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnSpectatorAction");

	ABP_MordhauPlayerController_C_OnSpectatorAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.DisplayMessage
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                SenderPlayerState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     S                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FName                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MsgLifeTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::DisplayMessage(class APlayerState* SenderPlayerState, const struct FString& S, const struct FName& Type, float MsgLifeTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.DisplayMessage");

	ABP_MordhauPlayerController_C_DisplayMessage_Params params;
	params.SenderPlayerState = SenderPlayerState;
	params.S = S;
	params.Type = Type;
	params.MsgLifeTime = MsgLifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ShowEquipment
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauPlayerController_C::ShowEquipment()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ShowEquipment");

	ABP_MordhauPlayerController_C_ShowEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ShowTips
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauPlayerController_C::ShowTips()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ShowTips");

	ABP_MordhauPlayerController_C_ShowTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChoiceMenuOptionSelected
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Choice                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::ChoiceMenuOptionSelected(int Choice)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ChoiceMenuOptionSelected");

	ABP_MordhauPlayerController_C_ChoiceMenuOptionSelected_Params params;
	params.Choice = Choice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ClientReceiveScoreBP
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Mordhau_EScoreFeedReason                           Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      ReasonParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ScoreAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AMordhauPlayerState*                         AssociatedPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::ClientReceiveScoreBP(Mordhau_EScoreFeedReason Reason, unsigned char ReasonParam, float ScoreAmount, class AMordhauPlayerState* AssociatedPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ClientReceiveScoreBP");

	ABP_MordhauPlayerController_C_ClientReceiveScoreBP_Params params;
	params.Reason = Reason;
	params.ReasonParam = ReasonParam;
	params.ScoreAmount = ScoreAmount;
	params.AssociatedPlayer = AssociatedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAfterPossess
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class APawn*                                       APawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnAfterPossess(class APawn* APawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAfterPossess");

	ABP_MordhauPlayerController_C_OnAfterPossess_Params params;
	params.APawn = APawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnActionFailed
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Reason                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnActionFailed(const struct FName& Reason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnActionFailed");

	ABP_MordhauPlayerController_C_OnActionFailed_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveDestroyed
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_MordhauPlayerController_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveDestroyed");

	ABP_MordhauPlayerController_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnMordhauCharacterSpawned
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           SpawnedCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnMordhauCharacterSpawned(class AMordhauCharacter* SpawnedCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnMordhauCharacterSpawned");

	ABP_MordhauPlayerController_C_OnMordhauCharacterSpawned_Params params;
	params.SpawnedCharacter = SpawnedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnSpectatorCmd
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FString                                     Cmd                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnSpectatorCmd(const struct FString& Cmd, const struct FString& Param)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnSpectatorCmd");

	ABP_MordhauPlayerController_C_OnSpectatorCmd_Params params;
	params.Cmd = Cmd;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnIsAnythingRestockableChanged
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_MordhauPlayerController_C::OnIsAnythingRestockableChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnIsAnythingRestockableChanged");

	ABP_MordhauPlayerController_C_OnIsAnythingRestockableChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAFKTimeExceededMaximum
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_MordhauPlayerController_C::OnAFKTimeExceededMaximum()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAFKTimeExceededMaximum");

	ABP_MordhauPlayerController_C_OnAFKTimeExceededMaximum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.PerformAFKKick
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_MordhauPlayerController_C::PerformAFKKick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.PerformAFKKick");

	ABP_MordhauPlayerController_C_PerformAFKKick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAmmoChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AMordhauEquipment*                           Equipment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                AmmoDifference                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnAmmoChanged(class AMordhauEquipment* Equipment, int AmmoDifference)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnAmmoChanged");

	ABP_MordhauPlayerController_C_OnAmmoChanged_Params params;
	params.Equipment = Equipment;
	params.AmmoDifference = AmmoDifference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnRequestVoteKick
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauPlayerState*                         TargetPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::OnRequestVoteKick(class AMordhauPlayerState* TargetPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnRequestVoteKick");

	ABP_MordhauPlayerController_C_OnRequestVoteKick_Params params;
	params.TargetPlayer = TargetPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerRequestVoteKick
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauPlayerState*                         Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::ServerRequestVoteKick(class AMordhauPlayerState* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerRequestVoteKick");

	ABP_MordhauPlayerController_C_ServerRequestVoteKick_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnRequestCancelVoteKick
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauPlayerController_C::OnRequestCancelVoteKick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.OnRequestCancelVoteKick");

	ABP_MordhauPlayerController_C_OnRequestCancelVoteKick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerRequestCancelVoteKick
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_MordhauPlayerController_C::ServerRequestCancelVoteKick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerRequestCancelVoteKick");

	ABP_MordhauPlayerController_C_ServerRequestCancelVoteKick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerVoteKickVote
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               VotedYes                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MordhauPlayerController_C::ServerVoteKickVote(bool VotedYes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerVoteKickVote");

	ABP_MordhauPlayerController_C_ServerVoteKickVote_Params params;
	params.VotedYes = VotedYes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.HandleTeamSelect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_MordhauPlayerController_C::HandleTeamSelect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.HandleTeamSelect");

	ABP_MordhauPlayerController_C_HandleTeamSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ForgivePlayer
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_MordhauPlayerController_C::ForgivePlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ForgivePlayer");

	ABP_MordhauPlayerController_C_ForgivePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveOfferToForgive
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauPlayerState*                         Candidate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::ReceiveOfferToForgive(class AMordhauPlayerState* Candidate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ReceiveOfferToForgive");

	ABP_MordhauPlayerController_C_ReceiveOfferToForgive_Params params;
	params.Candidate = Candidate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.DoBattlecry
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_MordhauPlayerController_C::DoBattlecry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.DoBattlecry");

	ABP_MordhauPlayerController_C_DoBattlecry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ParryThis
//		Flags  -> (Exec, Event, Public, BlueprintEvent)
void ABP_MordhauPlayerController_C::ParryThis()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ParryThis");

	ABP_MordhauPlayerController_C_ParryThis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerGiveGuns
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_MordhauPlayerController_C::ServerGiveGuns()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ServerGiveGuns");

	ABP_MordhauPlayerController_C_ServerGiveGuns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.HandleShowProfileSelect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_MordhauPlayerController_C::HandleShowProfileSelect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.HandleShowProfileSelect");

	ABP_MordhauPlayerController_C_HandleShowProfileSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.DisplayAnnouncement
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Subtext                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::DisplayAnnouncement(const struct FString& Text, const struct FString& Subtext, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.DisplayAnnouncement");

	ABP_MordhauPlayerController_C_DisplayAnnouncement_Params params;
	params.Text = Text;
	params.Subtext = Subtext;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.UpdatePlaceablesOnClient
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       PlaceableName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      PlaceableAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::UpdatePlaceablesOnClient(const struct FName& PlaceableName, unsigned char PlaceableAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.UpdatePlaceablesOnClient");

	ABP_MordhauPlayerController_C_UpdatePlaceablesOnClient_Params params;
	params.PlaceableName = PlaceableName;
	params.PlaceableAmount = PlaceableAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.WipePlaceablesOnClient
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ABP_MordhauPlayerController_C::WipePlaceablesOnClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.WipePlaceablesOnClient");

	ABP_MordhauPlayerController_C_WipePlaceablesOnClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ExecuteUbergraph_BP_MordhauPlayerController
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauPlayerController_C::ExecuteUbergraph_BP_MordhauPlayerController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.ExecuteUbergraph_BP_MordhauPlayerController");

	ABP_MordhauPlayerController_C_ExecuteUbergraph_BP_MordhauPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.EventOnPlaceablesUpdate__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_MordhauPlayerController_C::EventOnPlaceablesUpdate__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauPlayerController.BP_MordhauPlayerController_C.EventOnPlaceablesUpdate__DelegateSignature");

	ABP_MordhauPlayerController_C_EventOnPlaceablesUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

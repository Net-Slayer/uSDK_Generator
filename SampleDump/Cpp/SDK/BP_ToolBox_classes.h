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

// BlueprintGeneratedClass BP_ToolBox.BP_ToolBox_C
// 0x0050 (FullSize[0x0D20] - InheritedSize[0x0CD0])
class ABP_ToolBox_C : public ABP_2HThrowableBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMordhauHUDWidgetComponent*                  MordhauHUDWidget;                                          // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBuildingSystemComponent*                    BuildingSystem;                                            // 0x0CE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                ObjectType;                                                // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XN6Y[0x4];                                     // 0x0CEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMeshComponent*                              PreviewMeshComponent;                                      // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NextAvailableTime;                                         // 0x0CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Cooldown;                                                  // 0x0CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            WidgetDisplay;                                             // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       LastTraceText;                                             // 0x0D08(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ToolBox.BP_ToolBox_C");
		return ptr;
	}



	void ValidateDeployableSpawnConditions(int* Result);
	void Update_Trace_Text(const struct FText& Trace_Placement_Text, bool IgnoreLastText, bool Valid_Placement);
	void OnHideWidget();
	void OnShowWidget();
	void UpdateEquipmentUI();
	void GetAmountOfPlacedEquipment(const struct FName& PlaceableEquipmentName, int* Amount);
	void ValidateSpotWithBuildingSystem(const struct FVector& Offset, bool DisplayObjectPreview, bool* Succeeded, struct FVector* Location, struct FRotator* Rotation, class USceneComponent** AttachToComponent);
	void CycleObjectType();
	void SetupMeshPreview();
	void DestroyMeshPreview();
	void AddStaticMeshPreviewIfNone(class UStaticMesh* StaticMesh);
	void AddSkeletalMeshPreviewIfNone(class USkeletalMesh* SkeletalMesh);
	void RequestPlant(const struct FVector& Location, const struct FRotator& Rotation, unsigned char ObjectType, class USceneComponent* AttachTo);
	bool OnRequestModeSwitch(class AMordhauCharacter* Character);
	bool OnRequestFire(class AMordhauCharacter* Character);
	void UpdateEquipmentState();
	void LocalPlayerLateTick(float DeltaTime);
	void ServerRequestPlant(const struct FVector& Location, const struct FRotator& Rotation, unsigned char ObjectType, class USceneComponent* AttachTo);
	void BndEvt__BuildingSystem_K2Node_ComponentBoundEvent_0_OnMeshPreviewCreated__DelegateSignature();
	void BndEvt__BuildingSystem_K2Node_ComponentBoundEvent_1_OnMeshPreviewDestroyed__DelegateSignature();
	void K2_OnBecomeViewTarget(class APlayerController* PC);
	void OnBindEventToPlaceablesUpdate();
	void EventOnPlaceablesUpdate();
	void OnUnbindEventToPlaceablesUpdate();
	void ExecuteUbergraph_BP_ToolBox(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_Instrument.BP_Instrument_C
// 0x0099 (FullSize[0x1CC1] - InheritedSize[0x1C28])
class ABP_Instrument_C : public ABP_MordhauWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1C28(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio3;                                                    // 0x1C30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio2;                                                    // 0x1C38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio1;                                                    // 0x1C40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio0;                                                    // 0x1C48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ReplicatedTone;                                            // 0x1C50(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IIHH[0x3];                                     // 0x1C51(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ToneCooldown;                                              // 0x1C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChordCooldown;                                             // 0x1C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TX0R[0x4];                                     // 0x1C5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USoundWave*>                          SimpleModeSounds;                                          // 0x1C60(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UAudioComponent*>                     AudioComponents;                                           // 0x1C70(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	int                                                LastAudioComponent;                                        // 0x1C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NextChordTime;                                             // 0x1C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NextPlayTime;                                              // 0x1C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_40EX[0x4];                                     // 0x1C8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USoundWave*>                          ToneSounds;                                                // 0x1C90(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                ScaleOffset;                                               // 0x1CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinimumAnimationDelay;                                     // 0x1CA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LastAnimationPlayTime;                                     // 0x1CA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ManualPlayToneOffset;                                      // 0x1CAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPerspectiveAnimMontage                     PlayMontage;                                               // 0x1CB0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                               StopsPreviousSound;                                        // 0x1CC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Instrument.BP_Instrument_C");
		return ptr;
	}



	void CanPlay(bool* Return);
	void ServerSetToneAndPlay(unsigned char Tone);
	bool RequestBlock(Mordhau_EBlockType BlockType, bool bAllowFTP);
	void GetToneFromAttack(Mordhau_EAttackMove Move, float Angle, unsigned char* Tone);
	void PlayTone(unsigned char Tone);
	void OnRep_ReplicatedTone();
	void UserConstructionScript();
	void RequestAttack(Mordhau_EAttackMove Move, float Angle);
	void ServerSetTone(unsigned char Tone);
	void EquipmentCommand(int Command);
	void ExecuteUbergraph_BP_Instrument(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

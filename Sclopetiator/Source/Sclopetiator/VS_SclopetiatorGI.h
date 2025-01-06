// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "VS_SclopetiatorGI.generated.h"

USTRUCT(BlueprintType)
struct FCharacterStats	//Prefix for Structures are denoted with the letter: F
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Luck;
};

USTRUCT(BlueprintType)
struct FFirearmStats	//Prefix for Structures are denoted with the letter: F
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int DMG;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ReloadSpeed;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScorePointsModified, int, NewScorePoints);
UCLASS()
class SCLOPETIATOR_API UVS_SclopetiatorGI : public UGameInstance
{
	GENERATED_BODY()

public:
	UVS_SclopetiatorGI();

	//Attributes:
	
	UPROPERTY(BlueprintCallable, BlueprintAssignable)
	FOnScorePointsModified OnScorePointsModified;

	//Methods:
	
	//Rewrite Stats
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void RewriteStats();

	//Update Variable Stats
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateVariables();

	//Update Player Stats;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdatePlayer();

	//Refresh Player Health
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void RefreshPlayerHealth();

	//Refresh Stat Points
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void RefreshStatPoints();

	//StatPoints Functions
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void IncrementStatPoints();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DecrementStatPoints();

	//PlayerHealth Functions
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void IncrementPlayerHealth();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DecrementPlayerHealth();

	//PlayerMovement Functions
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void IncreasePlayerMovement();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DecreasePlayerMovement();

	//PlayerLuck Functions
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void IncreasePlayerLuck();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DecreasePlayerLuck();

	//PistolDMG Functions
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void IncreasePistolDMG();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DecreasePistolDMG();

	//Functions:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool CheckStatPoints();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsHealthValid();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsStatPointsValid();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool AnyIntegerChanges(int param1, int param2);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool AnyFloatChanges(float param1, float param2);

protected:
	//Attributes:

	//WaveCount
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int WaveCount;

	//ScorePoints
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ScorePoints;

	//StatPoints
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int StatPoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MODStatPoints;

	//PlayerStats
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterStats PlayerStats;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterStats MODPlayerStats;

	//PistolStats
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFirearmStats PistolStats;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFirearmStats MODPistolStats;

	//ShotgunStats
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFirearmStats ShotgunStats;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFirearmStats MODShotgunStats;

	//RifleStats
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFirearmStats RifleStats;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFirearmStats MODRifleStats;

	//Methods:

	//Rewrite Stats
	virtual void RewriteStats_Internal();

	//Update Variable Stats
	virtual void UpdateVariables_Internal();

	//Update Player Stats
	virtual void UpdatePlayer_Internal();
	
	//Refresh Player Health
	virtual void RefreshPlayerHealth_Internal();

	//Refresh Stat Points
	virtual void RefreshStatPoints_Internal();

	//StatPoints Functions
	virtual void IncrementStatPoints_Internal();
	virtual void DecrementStatPoints_Internal();

	//PlayerHealth Functions
	virtual void IncrementPlayerHealth_Internal();
	virtual void DecrementPlayerHealth_Internal();

	//PlayerMovement Functions
	virtual void IncreasePlayerMovement_Internal();
	virtual void DecreasePlayerMovement_Internal();

	//PlayerLuck Functions
	virtual void IncreasePlayerLuck_Internal();
	virtual void DecreasePlayerLuck_Internal();

	//PistolDMG Functions
	virtual void IncreasePistolDMG_Internal();
	virtual void DecreasePistolDMG_Internal();

	//Functions:
	virtual bool CheckStatPoints_Internal();
	virtual bool IsHealthValid_Internal();
	virtual bool IsStatPointsValid_Internal();
	virtual bool AnyIntegerChanges_Internal(int param1, int param2);
	virtual bool AnyFloatChanges_Internal(float param1, float param2);
};

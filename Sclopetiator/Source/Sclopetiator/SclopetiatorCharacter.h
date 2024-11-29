// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "GameEngine.generated.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

#include "SclopetiatorCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthUpdatedSignature, int, newHealth);

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class ASclopetiatorCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Mesh, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	//Characte Movement Component
	//UPROPERTY(EditAnywhere, Category = "Character Movement", meta = (AllowPrivateAccess = "True"))
	//UCharacterMovementComponent* Movement;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveAction;
	
public:
	ASclopetiatorCharacter();

protected:
	virtual void BeginPlay();

public:
		
	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

protected:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AVS_BaseGun* CurrentGun;*/


public:
	//Attributes
	UPROPERTY(BlueprintCallable, BlueprintAssignable)
	FOnHealthUpdatedSignature OnHealthUpdated;

	//Methods
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ScorePointsModified(int IncomingScorePoints);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateHealth(int NewHealth);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateMovement(float NewSpeed);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateLuck(float NewLuck);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void HealthModified(int DMG);

	//Getters
	int GetHealth();
	float GetSpeed();
	float GetLuck();
	bool GetIsAiming();

protected:
	//Attributes
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ScorePoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Luck;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isAiming;
	//Methods
	virtual void ScorePointsModified_Internal(int IncomingScorePoints);
	virtual void UpdateHealth_Internal(int NewHealth);
	virtual void UpdateMovement_Internal(float NewSpeed);
	virtual void UpdateLuck_Internal(float NewLuck);
	virtual void HealthModified_Internal(int DMG);

//public:
//	virtual void AttachGun();
};


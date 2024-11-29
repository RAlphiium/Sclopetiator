// Copyright Epic Games, Inc. All Rights Reserved.

#include "SclopetiatorCharacter.h"
#include "SclopetiatorProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Engine/LocalPlayer.h"
#include "VS_SclopetiatorGI.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// ASclopetiatorCharacter

ASclopetiatorCharacter::ASclopetiatorCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	//Mesh1P->SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

	//Movement = CreateDefaultSubobject<UCharacterMovementComponent>(TEXT("Character Movement"));
	//Movement->MaxWalkSpeed = 600.f;

}

void ASclopetiatorCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
}

//////////////////////////////////////////////////////////////////////////// Input

void ASclopetiatorCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{	
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ASclopetiatorCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ASclopetiatorCharacter::Look);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ASclopetiatorCharacter::ScorePointsModified_Internal(int IncomingScorePoints)
{
	this->ScorePoints = this->ScorePoints + IncomingScorePoints;
	UVS_SclopetiatorGI* GI = Cast<UVS_SclopetiatorGI>(UGameplayStatics::GetGameInstance(GetWorld()));
	GI->OnScorePointsModified.Broadcast(this->ScorePoints);
}

void ASclopetiatorCharacter::UpdateLuck_Internal(float NewLuck)
{
	this->Luck = NewLuck;
}

void ASclopetiatorCharacter::UpdateMovement_Internal(float NewSpeed)
{
	this->Speed = NewSpeed;
	if (UCharacterMovementComponent* Movement = this->FindComponentByClass<UCharacterMovementComponent>()) {
		Movement->MaxWalkSpeed = this->Speed;
	}
}

void ASclopetiatorCharacter::UpdateHealth_Internal(int NewHealth)
{
	this->Health = NewHealth;
	OnHealthUpdated.Broadcast(Health);
}

void ASclopetiatorCharacter::HealthModified_Internal(int DMG)
{
	this->Health = this->Health - DMG;
	OnHealthUpdated.Broadcast(Health);
	if (this->Health <= 0) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, TEXT("Dead.")); //Test
	}
}

void ASclopetiatorCharacter::ScorePointsModified_Implementation(int IncomingScorePoints)
{
	ScorePointsModified_Internal(IncomingScorePoints);
}

void ASclopetiatorCharacter::UpdateLuck_Implementation(float NewLuck)
{
	UpdateLuck_Internal(NewLuck);
}

void ASclopetiatorCharacter::UpdateMovement_Implementation(float NewSpeed)
{
	UpdateMovement_Internal(NewSpeed);
}

void ASclopetiatorCharacter::UpdateHealth_Implementation(int NewHealth)
{
	UpdateHealth_Internal(NewHealth);
}

void ASclopetiatorCharacter::HealthModified_Implementation(int DMG)
{
	HealthModified_Internal(DMG);
}

int ASclopetiatorCharacter::GetHealth()
{
	return this->Health;
}

float ASclopetiatorCharacter::GetSpeed()
{
	return this->Speed;
}

float ASclopetiatorCharacter::GetLuck()
{
	return this->Luck;
}

bool ASclopetiatorCharacter::GetIsAiming()
{
	return this->isAiming;
}

void ASclopetiatorCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void ASclopetiatorCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}
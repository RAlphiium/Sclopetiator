// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "SclopetiatorCharacter.h"

#include "VS_BaseItem.generated.h"

UCLASS()
class SCLOPETIATOR_API AVS_BaseItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVS_BaseItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USphereComponent* SphereCollision;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ASclopetiatorCharacter* Player;

protected:
	UFUNCTION()
	virtual void OnPickup(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

	/*UFUNCTION()
	virtual void Pickup();*/
};

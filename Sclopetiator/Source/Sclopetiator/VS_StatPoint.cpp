// Fill out your copyright notice in the Description page of Project Settings.

#include "VS_StatPoint.h"
#include "VS_SclopetiatorGI.h"

void AVS_StatPoint::IncrementStatPoints_Internal()
{
	UVS_SclopetiatorGI* GI = Cast<UVS_SclopetiatorGI>(UGameplayStatics::GetGameInstance(GetWorld()));
	GI->IncrementStatPoints();
}

void AVS_StatPoint::OnPickup(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != nullptr) {
		if (OtherActor->GetClass()->IsChildOf(ASclopetiatorCharacter::StaticClass())) {
			IncrementStatPoints_Implementation();
			//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, TEXT("Overlapped"));
			Destroy();
		}
	}
}

void AVS_StatPoint::IncrementStatPoints_Implementation()
{
	IncrementStatPoints_Internal();
}
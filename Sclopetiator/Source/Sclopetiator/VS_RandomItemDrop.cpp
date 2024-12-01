// Fill out your copyright notice in the Description page of Project Settings.

#include <cstdlib>
#include <ctime>
#include "VS_StatPoint.h"
#include "VS_RandomItemDrop.h"

void AVS_RandomItemDrop::BeginPlay()
{
	srand((unsigned)time(NULL));
	int selection = 1 + (rand() % 3);

	FVector Location = GetActorLocation();
	FRotator Rotation = GetActorRotation();
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;

	switch (selection) {
	case 1:
		GetWorld()->SpawnActor<AActor>(this->StatPoint.Get(), Location, Rotation, SpawnParams);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, TEXT("Spawned Stat Point."));
		break;
	case 2:
		GetWorld()->SpawnActor<AActor>(this->Shotgun.Get(), Location, Rotation, SpawnParams);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, TEXT("Spawned Shotgun."));
		break;
	case 3:
		GetWorld()->SpawnActor<AActor>(this->Rifle.Get(), Location, Rotation, SpawnParams);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, TEXT("Spawned Rifle (Pistol Placeholder)."));
		break;
	}

	/*for (int i = 0; i < 20; i++)
	{
		int selection = 1+ (rand() % 3);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, FString::Printf(TEXT("%d"), selection));
	}*/		//To check whether the random number generator is valid.
}

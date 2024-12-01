// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VS_BaseItem.h"
#include "VS_RandomItemDrop.generated.h"

/**
 * 
 */
UCLASS()
class SCLOPETIATOR_API AVS_RandomItemDrop : public AVS_BaseItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "ItemDrop", meta = (AllowPrivateAccess = "True"))
	TSubclassOf<AVS_BaseItem> StatPoint;
	UPROPERTY(EditAnywhere, Category = "ItemDrop", meta = (AllowPrivateAccess = "True"))
	TSubclassOf<AVS_BaseItem> Shotgun;
	UPROPERTY(EditAnywhere, Category = "ItemDrop", meta =  (AllowPrivateAccess = "True"))
	TSubclassOf<AVS_BaseItem> Rifle;

protected:
	virtual void BeginPlay();
};

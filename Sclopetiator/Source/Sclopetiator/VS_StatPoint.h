// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VS_BaseItem.h"
#include "VS_StatPoint.generated.h"

/**
 * 
 */
UCLASS()
class SCLOPETIATOR_API AVS_StatPoint : public AVS_BaseItem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void IncrementStatPoints();
protected:
	virtual void IncrementStatPoints_Internal();
};

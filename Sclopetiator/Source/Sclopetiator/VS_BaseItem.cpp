// Fill out your copyright notice in the Description page of Project Settings.

#include "SclopetiatorPlayerController.h"
#include "VS_BaseItem.h"

// Sets default values
AVS_BaseItem::AVS_BaseItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collider"));
	RootComponent = SphereCollision;

	SphereCollision->InitSphereRadius(64.0f);
	SphereCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	SphereCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &AVS_BaseItem::OnPickup);
}

// Called when the game starts or when spawned
void AVS_BaseItem::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AVS_BaseItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVS_BaseItem::OnPickup(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, TEXT("Overlapped")); //Test

	if (OtherActor != nullptr) {
		if (OtherActor->GetClass()->IsChildOf(ASclopetiatorCharacter::StaticClass())) {
			Player = Cast<ASclopetiatorCharacter>(OtherActor);
		}
	}
	//Pickup();
}

//void AVS_BaseItem::Pickup()
//{
//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, Player->GetName()); //Test.
//}



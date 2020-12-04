// Fill out your copyright notice in the Description page of Project Settings.


#include "PIcableItem.h"

// Sets default values
APIcableItem::APIcableItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Sphere = CreateDefaultSubobject<USphereComponent>(TEXT"Sphere")
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("BOX"));
	Box->SetupAttachment(RootComponent);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Box);

	Movement = CreateDefaultSubobject< UProjectileMovementComponent>(TEXT("Movement"));
	Movement->SetUpdatedComponent(RootComponent);
	Movement->bRotationFollowsVelocity = true;

	//InteractableTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Picable")));
}

// Called when the game starts or when spawned
void APIcableItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APIcableItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


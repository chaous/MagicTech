// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameplayTagContainer.h"
#include "GameFramework/Actor.h"

#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"


#include "PIcableItem.generated.h"

UCLASS()
class MAGICTECH_API APIcableItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APIcableItem();

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	//	USphereComponent* Sphere;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
		UBoxComponent* Box;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
		UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MassLevel")
		int MassLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		class UProjectileMovementComponent* Movement;

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tag")
	//	FGameplayTagContainer InteractableTags;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

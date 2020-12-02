// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "GameFramework/ProjectileMovementComponent.h"


#include "Spell.generated.h"

UCLASS()
class MAGICTECH_API ASpell : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASpell();



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		class UProjectileMovementComponent* Movement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters")
		float Damage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters")
		float ManaCost;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

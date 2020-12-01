// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Spell.h"


#include "Particles/ParticleSystemComponent.h"
#include "Components/SphereComponent.h"



#include "SpellRound.generated.h"

/**
 * 
 */
UCLASS()
class MAGICTECH_API ASpellRound : public ASpell
{
	GENERATED_BODY()


public:

	ASpellRound();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Particals")
		class UParticleSystemComponent* Spell;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sphere")
		class USphereComponent* Sphere;
	
};

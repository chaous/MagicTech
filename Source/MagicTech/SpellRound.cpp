// Fill out your copyright notice in the Description page of Project Settings.


#include "SpellRound.h"



ASpellRound::ASpellRound()
{
	PrimaryActorTick.bCanEverTick = true;

	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	Sphere->SetupAttachment(RootComponent);

	Spell = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Spell"));
	Spell->SetupAttachment(Sphere);

}

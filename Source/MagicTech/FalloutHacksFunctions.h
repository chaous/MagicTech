// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include <Runtime/Core/Public/Misc/FileHelper.h>

#include "FalloutHacksFunctions.generated.h"

/**
 *
 */
UCLASS()
class MAGICTECH_API UFalloutHacksFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


		UFUNCTION(BlueprintCallable, Category = "File")
		static int NumberOfWorlds(FString text);

	UFUNCTION(BlueprintCallable, Category = "File")
		static FString GetRandomWorld(FString text);

	UFUNCTION(BlueprintCallable, Category = "File")
		static FString ReturnEnter();

	UFUNCTION(BlueprintCallable, Category = "File")
		static int NumberOfTheSameCharecters(FString a, FString b);

};

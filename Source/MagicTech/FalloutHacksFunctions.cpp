// Fill out your copyright notice in the Description page of Project Settings.


#include "FalloutHacksFunctions.h"

#include <cwctype>

#include "Math/UnrealMathUtility.h"



int UFalloutHacksFunctions::NumberOfWorlds(FString text)
{
	int numberOfWorlds = 0;
	for (auto i : text)
	{
		if (i == '\n')
			++numberOfWorlds;
	}
	return numberOfWorlds;
}

FString UFalloutHacksFunctions::GetRandomWorld(FString text)
{
	int RandomWorldNumber = FMath::RandRange(0, 93390);
	int WorldNumber = 0;
	FString world = TEXT("");
	for (auto i : text)
	{
		if (i != '\n')
		{
			if (WorldNumber == RandomWorldNumber && std::iswalpha(i))
				world += i;
		}
		else
		{
			++WorldNumber;
		}
	}
	//world += '\n';
	return world;
}

FString UFalloutHacksFunctions::ReturnEnter()
{
	return "\n";
}

int UFalloutHacksFunctions::NumberOfTheSameCharecters(FString a, FString b)
{
	int x = 0, y = 0;
	for (auto i : a)
	{
		for (auto j : b)
		{
			if (i == j)
			{
				++x;
				break;
			}
		}
	}

	for (auto i : b)
	{
		for (auto j : a)
		{
			if (i == j)
			{
				++y;
				break;
			}
		}
	}
	return FMath::Min(x, y);

}
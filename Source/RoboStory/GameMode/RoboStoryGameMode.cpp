// Fill out your copyright notice in the Description page of Project Settings.


#include "RoboStoryGameMode.h"
#include "../Rob/Rob.h"

ARoboStoryGameMode::ARoboStoryGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ARob::StaticClass();
}

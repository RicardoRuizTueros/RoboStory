// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Rob.generated.h"

/**
 * 
 */
UCLASS()
class ROBOSTORY_API ARob : public APaperCharacter
{
	GENERATED_BODY()
public:

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* IdleFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* RunningLeftOrRightFlipbook;

private:

};

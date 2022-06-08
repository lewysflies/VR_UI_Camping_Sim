// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HandControllerBase.h"
#include "Components/WidgetComponent.h"
#include "LeftHandUIController.generated.h"

/**
 * 
 */
UCLASS()
class TESTINGONE_API ALeftHandUIController : public AHandControllerBase
{
	GENERATED_BODY()

public:
	ALeftHandUIController();

private:

	//Components
	UPROPERTY(VisibleAnywhere)
	UWidgetComponent* LeftHandMenuScreen;


};
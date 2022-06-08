// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HandControllerBase.h"
#include "Components/WidgetComponent.h"
#include "LeftHandControllerUI_two.generated.h"

/**
 * 
 */
UCLASS()
class TESTINGONE_API ALeftHandControllerUI_two : public AHandControllerBase
{
	GENERATED_BODY()
	
public:
	ALeftHandControllerUI_two();

private:

	//Components
	UPROPERTY(VisibleAnywhere)
	UWidgetComponent* LeftHandMenu;
};

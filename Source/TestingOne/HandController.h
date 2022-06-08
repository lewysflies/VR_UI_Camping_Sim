// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "HandControllerBase.h"

#include "HandController.generated.h"

UCLASS()
class TESTINGONE_API AHandController : public AHandControllerBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHandController();

	void TriggerPressed() override;
	void TriggerReleased() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};

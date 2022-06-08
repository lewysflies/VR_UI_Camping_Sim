// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "Camera/CameraComponent.h"
#include "HandControllerBase.h"

#include "MyPawnVRTest.generated.h"


UCLASS()
class TESTINGONE_API AMyPawnVRTest : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawnVRTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

private:

	void RightTriggerPressed() { if (RightHandController) RightHandController->TriggerPressed(); }
	void RightTriggerReleased() { if (RightHandController) RightHandController->TriggerReleased(); }

	//Config
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<AHandControllerBase> RightHandControllerClass;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<AHandControllerBase> LeftHandControllerClass;

	//components
	UPROPERTY(VisibleAnywhere)
		USceneComponent* VRRoot;

	UPROPERTY(VisibleAnywhere)
		UCameraComponent* Camera;

	//Reference
	UPROPERTY()
		AHandControllerBase* RightHandController; 
	UPROPERTY()
		AHandControllerBase* LeftHandController;
};

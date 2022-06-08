// Fill out your copyright notice in the Description page of Project Settings.


#include "LeftHandUIController.h"

ALeftHandUIController::ALeftHandUIController()
{
	LeftHandMenuScreen = CreateAbstractDefaultSubobject<UWidgetComponent>(TEXT("LeftHandMenuScreen"));
	LeftHandMenuScreen->SetupAttachment(GetRootComponent());
}
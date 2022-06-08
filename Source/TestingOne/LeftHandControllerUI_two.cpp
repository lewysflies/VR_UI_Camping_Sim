// Fill out your copyright notice in the Description page of Project Settings.


#include "LeftHandControllerUI_two.h"

ALeftHandControllerUI_two::ALeftHandControllerUI_two()
{
	LeftHandMenu = CreateAbstractDefaultSubobject<UWidgetComponent>(TEXT("LeftHandMenu"));
	LeftHandMenu->SetupAttachment(GetRootComponent());
}
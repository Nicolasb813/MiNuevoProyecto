// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MiNuevoProyectoGameModeBase.h"
#include "MyCharacterUI_HUD.generated.h"

/**
 * 
 */
UCLASS()
class MINUEVOPROYECTO_API UMyCharacterUI_HUD : public UUserWidget
{
	GENERATED_BODY()

protected:

	

	void NativeConstruct() override;
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
public:
	class AMiNuevoProyectoGameModeBase* myGameMode;

	UPROPERTY(meta = (BindWidget))
	class UProgressBar* healtBar;
};
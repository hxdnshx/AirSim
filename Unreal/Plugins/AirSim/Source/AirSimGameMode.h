// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/GameUserSettings.h"
#include "common/AirSimSettings.hpp"
#include "AirSimGameMode.generated.h"

/**
 * 
 */
UCLASS()
class AIRSIM_API AAirSimGameMode : public AGameModeBase
{
public:
	GENERATED_BODY()
    
    virtual void StartPlay() override;
    
    AAirSimGameMode(const FObjectInitializer& ObjectInitializer);
	msr::airlib::AirSimSettings& GetSetting();
    
//private:
    //UGameUserSettings* GetGameUserSettings();

};

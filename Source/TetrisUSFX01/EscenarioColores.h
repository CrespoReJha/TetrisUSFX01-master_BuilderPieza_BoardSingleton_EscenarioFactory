// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Escenario.h"
#include "EscenarioColores.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AEscenarioColores : public AEscenario
{
	GENERATED_BODY()
	
public:

	AEscenarioColores();

	virtual void SetNombreEscenario() override;
};

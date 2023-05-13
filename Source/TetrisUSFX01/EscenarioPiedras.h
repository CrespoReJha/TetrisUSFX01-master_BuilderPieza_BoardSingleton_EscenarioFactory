// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Escenario.h"
#include "EscenarioPiedras.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AEscenarioPiedras : public AEscenario
{
	GENERATED_BODY()
	
public:

	AEscenarioPiedras();

	virtual void SetNombreEscenario() override;
};

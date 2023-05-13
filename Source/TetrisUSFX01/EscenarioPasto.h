// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Escenario.h"
#include "EscenarioPasto.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AEscenarioPasto : public AEscenario
{
	GENERATED_BODY()
	
public:

	AEscenarioPasto();

	virtual void SetNombreEscenario() override;
};

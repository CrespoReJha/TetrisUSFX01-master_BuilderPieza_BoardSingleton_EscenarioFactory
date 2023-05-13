// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Escenario.h"
#include "Piedra.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API APiedra : public AEscenario
{
	GENERATED_BODY()

public:

	APiedra();
	
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* PiedraMesh;
};

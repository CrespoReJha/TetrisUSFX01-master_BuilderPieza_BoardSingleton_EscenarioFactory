// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Escenario.h"
#include "Selva.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API ASelva : public AEscenario
{
	GENERATED_BODY()
	
public:

	ASelva();

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* SelvaMesh;
};

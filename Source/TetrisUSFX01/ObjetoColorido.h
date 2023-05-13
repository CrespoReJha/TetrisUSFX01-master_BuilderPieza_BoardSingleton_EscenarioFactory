// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Escenario.h"
#include "ObjetoColorido.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AObjetoColorido : public AEscenario
{
	GENERATED_BODY()
	
public:

	AObjetoColorido();

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* ObjetoColoridoMesh;
};

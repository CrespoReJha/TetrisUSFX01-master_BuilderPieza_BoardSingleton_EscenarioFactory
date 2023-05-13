// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escenario.h"
#include "CreadorEscenario.generated.h"

UCLASS()
class TETRISUSFX01_API ACreadorEscenario : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACreadorEscenario();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual AEscenario* EstablecerMaterial(FString Categoria) PURE_VIRTUAL(ACreadorEscenario::EstablecerMaterial, return nullptr;)

	AEscenario* CrearEscenario(FString Categoria);

};

// Fill out your copyright notice in the Description page of Project Settings.


#include "CreadorEscenario.h"
#include "Escenario.h"

// Sets default values
ACreadorEscenario::ACreadorEscenario()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACreadorEscenario::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACreadorEscenario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AEscenario* ACreadorEscenario::CrearEscenario(FString Categoria)
{
	//Create the Potion and log its name
	AEscenario* Escenario = EstablecerMaterial(Categoria);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Creando Escenario: %s"), *Escenario->GetNombreEscenario()));
	//Start the concoct process
	//Escenario->SetNombreEscenario();
	//Returns the created potion
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Devolviendo Escenario"));
	return Escenario;
}
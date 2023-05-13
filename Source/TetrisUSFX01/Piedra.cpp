// Fill out your copyright notice in the Description page of Project Settings.


#include "Piedra.h"

APiedra::APiedra()
{
	PiedraMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PiedraMesh"));
	RootComponent = PiedraMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PiedraMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Props/SM_Rock.SM_Rock'"));

	if (PiedraMeshAsset.Succeeded())
	{
		PiedraMesh->SetStaticMesh(PiedraMeshAsset.Object);
		PiedraMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

		PiedraMesh->SetWorldScale3D(FVector(0.75f));

		//AActor* MyActor = ...; // Obtener el puntero al actor que se desea modificar
		//FVector NewScale(2.0f, 2.0f, 2.0f); // Crear un vector que representa la nueva escala
		//ChangeActorSize(MyActor, NewScale); // Llamar a la funci?n para cambiar el tama?o del actor

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No existe la malla para Piedra"));
	}
}

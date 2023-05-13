// Fill out your copyright notice in the Description page of Project Settings.


#include "Escenario.h"

// Sets default values
AEscenario::AEscenario()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EscenarioMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscenarioMesh"));
	RootComponent = EscenarioMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> EscenarioMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));

	if (EscenarioMeshAsset.Succeeded())
	{
		EscenarioMesh->SetStaticMesh(EscenarioMeshAsset.Object);
		EscenarioMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

		EscenarioMesh->SetWorldScale3D(FVector(5.0f, 3.0f, 2.5f));

		//AActor* MyActor = ...; // Obtener el puntero al actor que se desea modificar
		//FVector NewScale(2.0f, 2.0f, 2.0f); // Crear un vector que representa la nueva escala
		//ChangeActorSize(MyActor, NewScale); // Llamar a la funci?n para cambiar el tama?o del actor

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No existe la malla para Escenario"));
	}
}

// Called when the game starts or when spawned
void AEscenario::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscenario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEscenario::SetNombreEscenario()
{
	NombreEscenario = "Nombre Predeterminado";
}

/*FString AEscenario::GetNombreEscenario()
{
	return NombreEscenario;
}*/


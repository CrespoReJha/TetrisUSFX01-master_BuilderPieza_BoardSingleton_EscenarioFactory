// Fill out your copyright notice in the Description page of Project Settings.


#include "Objeto.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AObjeto::AObjeto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TArray<AActor*> Instances;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AObjeto::StaticClass(), Instances);
	if (Instances.Num() > 1)
	{
		//If exist at least one of them, set the instance with the first found one
		Instance = Cast<AObjeto>(Instances[0]);
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s already exists"), *Instance->GetName()));
		//Then Destroy this Actor
		Destroy();
	}
	else {
		ObjetoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ObjetoMesh"));
		RootComponent = ObjetoMesh;

		static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));

		if (BlockMeshAsset.Succeeded())
		{
			ObjetoMesh->SetStaticMesh(BlockMeshAsset.Object);
			ObjetoMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

			ObjetoMesh->SetWorldScale3D(FVector(0.05f, 0.05f, 0.1f));

			//AActor* MyActor = ...; // Obtener el puntero al actor que se desea modificar
			//FVector NewScale(2.0f, 2.0f, 2.0f); // Crear un vector que representa la nueva escala
			//ChangeActorSize(MyActor, NewScale); // Llamar a la funci?n para cambiar el tama?o del actor

		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("No existe la malla para Block"));
		}
	}
	
}

// Called when the game starts or when spawned
void AObjeto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObjeto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


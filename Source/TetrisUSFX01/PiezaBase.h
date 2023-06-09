// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <functional>
#include "Block.h"
#include "PiezaInterfaz.h"
#include <vector>
#include "PiezaBase.generated.h"


UCLASS()
class TETRISUSFX01_API APiezaBase : public AActor, public IPiezaInterfaz
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APiezaBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;//revisar

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
		class USceneComponent* SceneComponent;

	void DrawDebugLines();
	void TestRotate();
	void MoveLeft();
	void MoveRight();
	bool MoveDown(bool PlaySound = true);
	void Dismiss();
	bool CheckWillCollision(std::function<FVector(FVector OldLocation)> ChangeBeforeCheck);

	UPROPERTY(EditAnywhere)
		TArray<class UMaterial*> Colors;

private:

	TArray<ABlock*> Blocks;
	int Index;
	//int color;
	int tipoColor;

	std::vector<std::vector<std::pair<float, float>>> tipoPieza = 
	{

		{{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}},
		{{0.0, 10.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0}},
		{{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}},
		{{0.0, 0.0}, {10.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}},
		{{-10.0, -10.0}, {0.0, -10.0}, {0.0, 0.0}, {10.0, 0.0}},
		{{-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}, {10.0, 0.0}},
		{{-10.0, 0.0}, {0.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}},
		//{{-20.0, 10.0}, {-10.0, 0.0}, {0.0, 10.0}, {10.0, 0.0}},
	};

public:
	void SpawnBlocks();
	//int GenerarColor(int _tipoColor);
	int GetIndex() const { return Index; }
	void setColor(int _color) {
		tipoColor = _color;
		//GEngine->AddOnScreenDebugMessage(-1, 30, FColor::Blue, TEXT("El tipo color es: ") + FString::FromInt(tipoColor));
	}
	int getTipoColor() {
		return tipoColor;
	}

	void SetTipoPieza(std::vector<std::vector<std::pair<float, float>>> _tipoPieza) {
		tipoPieza = _tipoPieza;
	}
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Piece.h"
#include "PiezaBase.h"
#include "Objeto.h"
#include "Board.generated.h"

UCLASS()
class TETRISUSFX01_API ABoard : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABoard();

	UPROPERTY()
		ABoard* Instancia;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//UPROPERTY()
	//APiece* CurrentPiece;

	UPROPERTY()
		APiezaBase* CurrentPiece;

	UPROPERTY()
		AObjeto* objeto;

	UPROPERTY()
		ABoard* SpawnedBoard;

	void Rotate(); 
	void MoveLeft(); 
	void MoveRight();
	void MoveDown(); 
	void NewPiece();
	void CheckLine();
	void MoveDownToEnd();

	void CrearObjeto();

	void SpawnBoard();

private:
	enum PieceStatus { PS_NOT_INITED, PS_MOVING, PS_GOT_BOTTOM };
	PieceStatus Status = PS_NOT_INITED;

	const float CoolDown = 0.5f;
	float CoolLeft = 0.5f;
	bool bGameOver = false;

	bool CheckGameOver();

	float cont = 180.0f;

private:

	//The Builder Actor
	UPROPERTY(VisibleAnywhere, Category = "Main")
		class AConstructorPiezaColorida* ConstructorPiezaColorida;

	UPROPERTY(VisibleAnywhere, Category = "Main")
		class AConstructorPiezaGrande* ConstructorPiezaGrande;

	UPROPERTY(VisibleAnywhere, Category = "Main")
		class AConstructorPiezaMetalica* ConstructorPiezaMetalica;

	UPROPERTY(VisibleAnywhere, Category = "Main")
		class AConstructorPiezaTetromino* ConstructorPiezaTetromino;

	UPROPERTY(VisibleAnywhere, Category = "Main")
		class AConstructorPiezasHuecas* ConstructorPiezasHuecas;

	//The Engineer Actor
	UPROPERTY(VisibleAnywhere, Category = "Main")
		class ADirectorPieza* DirectorPieza;
};

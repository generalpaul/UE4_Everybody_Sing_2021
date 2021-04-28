// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Text3DComponent.h"

#include "JackpotItem.generated.h"

UCLASS()
class SINGPROJECT_API AJackpotItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJackpotItem();

	int intIndex=0;

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyParent;

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRootNumber;

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRootContent;

		//** Text component for the score */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextNumber;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextAnswerSingleLine;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextAnswerLine1;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextAnswerLine2;


	// UPROPERTY(Category = Grid, EditAnywhere, BlueprintReadOnly)
	// class UStaticMeshComponent* CylinderObj;

	UPROPERTY(Category = Grid, EditAnywhere, BlueprintReadOnly)
	class UStaticMeshComponent* BlockCover;

	UPROPERTY(Category = Grid, EditAnywhere, BlueprintReadOnly)
	class UStaticMeshComponent* BlockNumberCover;

	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartWrong();

	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartReveal();

	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartIntro();

	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartRotate();

	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartRotateReset();

	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartSelect();

	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartUnSelect();

	UFUNCTION(BlueprintCallable, Category = Grid)
	void IntroFinish();

	UFUNCTION(BlueprintCallable, Category = Grid)
	void ResetAll();


	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UMaterial* DefaultNumberMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UMaterial* JackpotBaseMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UMaterial* JackpotGreenMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UMaterial* JackpotBaseMaterialText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UMaterial* JackpotGreenMaterialText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UMaterial* JackpotRedMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UMaterial* JackpotRedMaterialText;

    UPROPERTY()
	class AJackpotMain* OwningGrid;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

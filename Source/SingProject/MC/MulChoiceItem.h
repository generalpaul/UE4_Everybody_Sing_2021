// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Text3DComponent.h"
#include "MulChoiceItem.generated.h"

UCLASS()
class SINGPROJECT_API AMulChoiceItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMulChoiceItem();

	FString FAnimateType;

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRootA;

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRootB;
	
	
	UPROPERTY(EditAnywhere)
	class UMaterial* PurpleGlowMaterialPlane;

	UPROPERTY(EditAnywhere)
	class UMaterial* YellowGlowMaterialPlane;

	UPROPERTY(EditAnywhere)
	class UMaterial* GreenGlowMaterialPlane;

	UPROPERTY(EditAnywhere)
	class UMaterial* RedGlowMaterialPlane;

	UPROPERTY(EditAnywhere)
	class UMaterial* BlueGlowMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* GreenGlowMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* RedGlowMaterial;


	UPROPERTY(EditAnywhere)
	class UMaterial* BlueMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* GreenMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* RedMaterial;


	UPROPERTY(EditAnywhere)
	class UMaterial* PurpleMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* BaseMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* BaseMaterialGlow;

	UPROPERTY(EditAnywhere)
	class UMaterial* BaseBevelMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* BaseExtrudeMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* CorrectAnswerBack;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextUnderline;

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineFirstToSecond;

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineSecondToFirst;

	UPROPERTY(Category = Grid, EditAnywhere)
	class UStaticMeshComponent* BlockQuestion;
	
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PlaneShade1;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PlaneShade2;

		//** Text component for the score */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextLineChoice1;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextLineChoice2;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextLineChoice1Bracket;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextLineChoice2Bracket;


		//** Text component for the score */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextLineChoice1Letter;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextLineChoice2Letter;

	
		//** Text component for the score */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextLineChoice1Out;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextLineChoice2Out;

	
	UFUNCTION(BlueprintCallable, Category = Grid)
	void PassTimelineDownToCenter(float value);

	UFUNCTION(BlueprintCallable, Category = Grid)
	void PassTimelineCenterToTop(float value);

	
	UFUNCTION(BlueprintCallable, Category = Grid)
	void PassTimelineAnimateBoxQuestion(float value);

	
	UFUNCTION(BlueprintCallable, Category = Grid)
	void SelectedItem(FString strLetter);

	UFUNCTION(BlueprintCallable, Category = Grid)
	void RemoveHighlight();

	UFUNCTION(BlueprintCallable, Category = Grid)
	void Highlight();

	UFUNCTION(BlueprintCallable, Category = Grid)
	void ResetAll();

	UFUNCTION(BlueprintCallable, Category = Grid)
	void SetAnswerAndProcess(FString answer);
	
	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartAnimateSelection();

	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartAnimateOutSelection();

	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void AnimateBoxQuestion();



    UPROPERTY()
	class AMulChoiceMain* OwningGrid;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Text3DComponent.h"
#include "MulChoiceMain.h"
#include "GameFramework/Actor.h"
#include "MulChoiceQuestion.generated.h"

UCLASS()
class SINGPROJECT_API AMulChoiceQuestion : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMulChoiceQuestion();

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;

	FString FQuestion1;
	FString FQuestion2;
	FString FAnimateTypeLine;
	
		//** Text component for the score */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextLine1;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextLine2;


	// 	//** Text component for the score */
	// UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	// class UText3DComponent* TextLine1Out;
	
	// UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	// class UText3DComponent* TextLine2Out;

	UPROPERTY()
	class AMulChoiceMain* OwningGrid;

	void SetValue(FString strQuestion1, FString strQuestion2);

	UFUNCTION(BlueprintCallable, Category = Grid)
	void PassTimelineDownToCenter(float value);

	UFUNCTION(BlueprintCallable, Category = Grid)
	void PassTimelineCenterToTop(float value);

	UFUNCTION(BlueprintCallable, Category = Grid)
	void PassTimelineCenterToMC(float value);

	UFUNCTION(BlueprintCallable, Category = Grid)
	void PassTimelineMCToTop(float value);

	UFUNCTION(BlueprintCallable, Category = Grid)
	void SetToBaseMaterial();

	UFUNCTION(BlueprintCallable, Category = Grid)
	void SetToGlowMaterial();

	UPROPERTY(EditAnywhere)
	class UMaterial* BaseMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* BevelMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* ExtrudeMaterial;


	UPROPERTY(EditAnywhere)
	class UMaterial* BaseMaterialES;

	UPROPERTY(EditAnywhere)
	class UMaterial* BevelMaterialES;

	UPROPERTY(EditAnywhere)
	class UMaterial* ExtrudeMaterialES;


	UPROPERTY(EditAnywhere)
	class UMaterial* GlowMaterial;


	// UFUNCTION(BlueprintCallable, Category = Grid)
	// void StartAnimateFinish();

	// UFUNCTION(BlueprintCallable, Category = Grid)
	// void PassTimelineOutLine(float value);


	// UFUNCTION(BlueprintCallable, Category = PassTimelineOutLine)
	// void SetValueLineOut();


	UFUNCTION(BlueprintCallable, Category = Grid)
	void StartAnimateLineFinish();

	UFUNCTION(BlueprintCallable, Category = Grid)
	void StartAnimateOutLineFinish();

	UFUNCTION(BlueprintCallable, Category = Grid)
	void SetMaterialColorText(bool isEverbodySing);
	

	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartAnimateLine();

	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartAnimateOutLine();
	
	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartAnimateMCPosition();

	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartAnimateMCPositionOut();

	int intIndex=-1;

	bool boolLineIsMultipleChoicePosition;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

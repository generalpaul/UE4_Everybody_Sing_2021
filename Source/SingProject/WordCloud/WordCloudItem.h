// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Text3DComponent.h"
//#include "WordCloundMain.h"
#include "WordCloudItem.generated.h"

UCLASS()
class SINGPROJECT_API AWordCloudItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWordCloudItem();

	FString FWord;
	FString FUnderline;
	
	float floatTopFrom;
	float floatLeftFrom;
	float floatWidthFrom;
	float floatHeightFrom;

	float floatTopTo;
	float floatLeftTo;
	float floatWidthFTo;
	float floatHeightTo;

	float floatUTop;
	float floatULeft;

	UPROPERTY(BlueprintReadOnly, Category = Grid)
	FVector vectorToMove=FVector(0,200,0);

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;
    
	//original position
	UFUNCTION(Category = Grid)
	void SetParamsFrom(float top, float left, float width, float height, FString strWord);

	//animated position
	UFUNCTION(Category = Grid)
	void SetParamsTo(float top, float left, float width, float height, FString strWord);

	//underline position
	UFUNCTION(Category = Grid)
	void SetUnderlinePosition(float top, float left);

	//timeline passed parameters
	UFUNCTION(BlueprintCallable, Category = Grid)
	void PassTimelineStartWordItemShow(float value);

	//timeline passed parameters animated position
	UFUNCTION(BlueprintCallable, Category = Grid)
	void PassTimelineStartWordItemCorrectPlace(float value);


	// UFUNCTION(BlueprintCallable, Category = Grid)
	// void PassTimelineStartWordItemOut(float value);

	//start show item
	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartWordItemShow();

	//start show item animate
	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartWordItemCorrectPlace();

	//start show item line
	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartAnimateLine();

	int intIndex=0;

	UPROPERTY()
	class AWordCloudContainer* OwningGrid;

	//** Text component for the score */
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* WWord;
	
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* WUnderline;
	
	UFUNCTION(BlueprintCallable, Category = Grid)
	void ResetAll();
	
	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartAnimateOutSelection();

	//set parent root
	UFUNCTION(Category = Grid)
	void SetupAttachmentWordProp(USceneComponent* ParentRoot);




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

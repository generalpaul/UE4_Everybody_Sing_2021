// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TimelineComponent.h"
#include "GameFramework/Actor.h"
#include "WordCloudItem.h"
#include "Text3DComponent.h"

#include "WordCloudContainer.generated.h"

UCLASS()
class SINGPROJECT_API AWordCloudContainer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWordCloudContainer();
	
	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;
	
	UPROPERTY(Category = Grid , EditAnywhere)
	TArray<AWordCloudItem*> arrWordCloudItems;

	TArray<float> arrTopFrom;
	TArray<float> arrLeftFrom;
	
	TArray<float> arrTopTo;
	TArray<float> arrLeftTo;

	TArray<bool> arrIsDisabled;
	TArray<bool> arrIsHidden;

	UPROPERTY(Category = Grid, EditAnywhere)
	class AWordCloudItem* i1;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AWordCloudItem* i2;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AWordCloudItem* i3;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AWordCloudItem* i4;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AWordCloudItem* i5;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AWordCloudItem* i6;	
	
	UPROPERTY(Category = Grid, EditAnywhere)
	class AWordCloudItem* i7;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AWordCloudItem* i8;	

	UFUNCTION(BlueprintCallable, Category = Grid)
	void setValues(FString values, FString type);

	UFUNCTION(BlueprintCallable, Category = Grid)
	void ShowAnswer(FString answer);

	UFUNCTION(BlueprintCallable, Category = Grid)
	void ShowAnswerUnderline(FString answer);

	UFUNCTION()
	void ResetAll();


	UPROPERTY(EditAnywhere)
	UCurveFloat *ZoomCurve;

	UFUNCTION()
    void ControlZoom(float Value);

	
	UPROPERTY()
	FTimeline ZoomTimeline;

	UPROPERTY()
	FOnTimelineFloat TimelineCallback;


	UPROPERTY()
	FOnTimelineFloat ShowTimeline;

	UPROPERTY(EditAnywhere)
	UCurveFloat *ZoomCurveShow;

	UFUNCTION()
    void ControlZoomShow(float Value);

	UFUNCTION()
    void ShowWordsEnd();	

	UPROPERTY()
	FTimeline ZoomTimelineShow;


	UPROPERTY(EditAnywhere)
	class UMaterial* BevelDefaultMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* FrontDefaultMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* ExtrudeDefaultMaterial;


	UPROPERTY(EditAnywhere)
	class UMaterial* BevelGreenMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* FrontGreenMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* ExtrudeGreenMaterial;

	
	UPROPERTY(EditAnywhere)
	class UMaterial* BevelRedMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* FrontRedMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* ExtrudeRedMaterial;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

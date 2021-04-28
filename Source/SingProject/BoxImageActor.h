// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Text3DComponent.h"
#include "GameFramework/Actor.h"
#include "BoxGridActor.h"
#include "BoxImageActor.generated.h"

UCLASS()
class SINGPROJECT_API ABoxImageActor : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRootMeshIn;

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRootMeshOut;

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* BlockMesh;

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* BlockOutMesh;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PlaneRed;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PlaneGreen;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PlaneVideo;

public:	
	// Sets default values for this actor's properties
	ABoxImageActor();

	bool boolLastAnswer;
	
	UPROPERTY(EditAnywhere, Category=Index)
	float IIndex;

	// float AngleAxis;
	// float AngleRotation;
	float floatScaleWidth;
	float floatImageTop;
	float floatImageLeft;
	int intLineType;

	UPROPERTY(EditAnywhere, Category=initialPosition, BlueprintReadWrite)
	FVector initialPosition;

	UPROPERTY(EditAnywhere, Category=endingPosition, BlueprintReadWrite)	
	FVector endingPosition;

	UPROPERTY(EditAnywhere, Category=outPosition, BlueprintReadWrite)	
	FVector outPosition;

	
	UPROPERTY(EditAnywhere, Category=endingPositionForMovingOut, BlueprintReadWrite)	
	FVector endingPositionForMovingOut;

	// UFUNCTION(Category=MoveToInitialPosition, BlueprintCallable)
	// void MoveToInitialPosition();

	UPROPERTY(EditAnywhere, Category=URLFrom, BlueprintReadWrite)
	FString url;

	UPROPERTY(EditAnywhere, Category=URLFrom, BlueprintReadWrite)
	FString urlVideo;

	UFUNCTION(Category=SetScaleWidth, BlueprintCallable)
	void SetScaleWidth(float scale);

	UFUNCTION(Category=SetURL, BlueprintCallable)
	void SetURL(FString _url);
	
	
	UFUNCTION(Category=SetURL, BlueprintCallable)
	void SetURLVideo(FString _url);

	UFUNCTION(BlueprintCallable, Category=SetImageLinePosition)
	void SetImageLinePosition(int IntImageLine, float floatImageLeft);

	UFUNCTION(BlueprintCallable, Category=SplineTimeline) //BlueprintCallable
	void SetDuplicateImage(bool hideCurrentImage);

	UFUNCTION(BlueprintImplementableEvent, Category=StartDownload) //BlueprintCallable
	void StartDownload();

	UFUNCTION(BlueprintImplementableEvent, Category=StartDownloadOut) //BlueprintCallable
	void StartDownloadOut();

	UFUNCTION(BlueprintImplementableEvent, Category=StartPlay) //BlueprintCallable
	void StartPlay();

	UFUNCTION(BlueprintImplementableEvent, Category=StartPlayOut) //BlueprintCallable
	void StartPlayOut();

	UFUNCTION(BlueprintImplementableEvent, Category=StartPlayRotation) //BlueprintCallable
	void StartPlayRotation();

	UFUNCTION(BlueprintImplementableEvent, Category=StartPlayRotation) //BlueprintCallable
	void StartPlayRotationOut();

	UFUNCTION(BlueprintImplementableEvent, Category=StartRotateImage) //BlueprintCallable
	void StartRotateImage();
	
	
    
	UFUNCTION(BlueprintCallable, Category=PassTimelineRotateImage) //BlueprintCallable
	void PassTimelineRotateImage(float value);

	UFUNCTION(BlueprintCallable, Category=PassTimeline) //BlueprintCallable
	void PassTimeline(float time);

	UFUNCTION(BlueprintCallable, Category=PassRotationTimeline) //BlueprintCallable
	void PassRotationTimeline(float x);

	UFUNCTION(BlueprintCallable, Category=PassTimelineOut) //BlueprintCallable
	void PassTimelineOut(float time);

	UFUNCTION(BlueprintCallable, Category=PassRotationTimelineOut) //BlueprintCallable
	void PassRotationTimelineOut(float value);
	
	UFUNCTION(BlueprintCallable, Category = StartPlayFinish)
	void StartPlayFinish();

	UFUNCTION(BlueprintCallable, Category = StartRotateImageFinish)
	void StartRotateImageFinish();
	
	UFUNCTION(BlueprintCallable, Category = StartRotateImageFinish)
	void HideBorders();

	// UFUNCTION(BlueprintCallable, Category = PositionOutObject)
	// void PositionOutObject();

	UFUNCTION(BlueprintImplementableEvent, Category = ShowImageAnswer)
	void ShowImageAnswer();

	UFUNCTION(BlueprintCallable, Category=TimelineShowImageAnswer) //BlueprintCallable
	void TimelineShowImageAnswer(float value);

	UFUNCTION(BlueprintCallable, Category=SetAnswer) //BlueprintCallable
	void SetAnswer(bool value);


    UPROPERTY()
	class ABoxGridActor* OwningGrid;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Text3DComponent.h"
#include "GameFramework/Actor.h"
#include "BoxGridActor.h"
#include "BoxImageQuestion.generated.h"

UCLASS()
class SINGPROJECT_API ABoxImageQuestion : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoxImageQuestion();

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;

	FString FQuestion1;
	FString FQuestion2;


	FString FAnimateType;

	FString FAnimateTypeLine;
	FString FAnimateTypeForImage;
	
	FString Fline1;
	FString Fline2;

	int IntImageLine;
	

	
	//** Text component for the score */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextQuestion1;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextQuestion2;


		//** Text component for the score */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextLine1;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextLine2;


	
		//** Text component for the score */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextLine1Out;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextLine2Out;


	UFUNCTION(BlueprintCallable, Category = PassTimelineLine)
	void PassTimelineLine(float value);

	UFUNCTION(BlueprintCallable, Category = StartAnimateFinishLine)
	void StartAnimateFinishLine();

	UFUNCTION(BlueprintCallable, Category = PassTimelineOutLine)
	void PassTimelineOutLine(float value);


	UFUNCTION(BlueprintCallable, Category = PassTimelineOutLine)
	void SetValueLineOut();

	UFUNCTION(BlueprintImplementableEvent, Category = StartAnimate)
	void StartAnimateLine();

	UFUNCTION(BlueprintImplementableEvent, Category = StartAnimateOut)
	void StartAnimateOutLine();
	

	UFUNCTION(BlueprintImplementableEvent, Category = StartAnimate)
	void StartAnimate();

	UFUNCTION(BlueprintImplementableEvent, Category = StartAnimateOut)
	void StartAnimateOut();
	
	UFUNCTION(BlueprintImplementableEvent, Category = StartAnimateRotate)
	void StartAnimateRotate();

	
	UFUNCTION(BlueprintCallable, Category = PassTimeline)
	void PassTimeline(float value);

	UFUNCTION(BlueprintCallable, Category = StartAnimateFinish)
	void StartAnimateFinish();

	UFUNCTION(BlueprintCallable, Category = PassTimelineOut)
	void PassTimelineOut(float value);

	UFUNCTION(BlueprintCallable, Category = StartAnimateOutFinish)
	void StartAnimateOutFinish();

	UFUNCTION(BlueprintCallable, Category = PassRotationTimeline)
	void PassRotationTimeline(float time);


	void SetValue(FString strQuestion1, FString strQuestion2);//, FString strUrl, float floatSize
	void SetValueLine(FString strQuestion1, FString strQuestion2);//, FString strUrl, float floatSize

	/** Grid that owns us */
	UPROPERTY()
	class ABoxGridActor* OwningGrid;

	int intIndex=-1;
		
	int intInit=-1;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

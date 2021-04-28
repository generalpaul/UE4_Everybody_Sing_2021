// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "WordCloudQuestion.h"
#include "WordCloudContainer.h"

#include "Kismet/GameplayStatics.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Runtime/Online/HTTP/Public/HttpManager.h"
#include "Runtime/Online/HTTP/Public/HttpModule.h"
#include "Runtime/Online/HTTP/Public/HttpRetrySystem.h"
#include "Components/SplineComponent.h"
#include "WordCloudMain.generated.h"

UCLASS()
class SINGPROJECT_API AWordCloudMain : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWordCloudMain();

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;

	//** Text component for the score */
	// UPROPERTY(Category = Grid , EditAnywhere)
	// TSubclassOf<class AWordCloudItem> objSpawnClass;


	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineDownToCenter;

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineCenterToUp;

	// UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	// class USplineComponent* SplineDownToCenterSelection;

	// UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	// class USplineComponent* SplineCenterToUpSelection;


	// UPROPERTY(Category = Grid, EditAnywhere)
	// class AWordCloudItem* WCItem;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AWordCloudQuestion* WCQuestion;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AWordCloudQuestion* WCQuestionOut;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AWordCloudContainer* WCContainer;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AWordCloudContainer* WContainerOut;	


	UPROPERTY(Category = Grid, EditAnywhere)
	class ALineSingerName* SingerName;

	UPROPERTY(Category = Grid, EditAnywhere)
	class ALineTitleSinger* TitleSingerUse;

	void RepeatingFunction();
	void OnRequestResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	
	FHttpModule* Http;
	void OnResponseReceived(FHttpRequestPtr RequestP, FHttpResponsePtr Response, bool bWasSuccessful);

	bool hasConnection=true;
	FHttpRequestPtr Request; //TSharedRef<IHttpRequest>
	FTimerHandle tmr;


	FString strQuestion1;
	FString strQuestion2;
	
    bool boolHasPassed=false;
	bool boolOutIsShownLine;
	bool boolAnimateInStarted;
	
	FString strHttpContent;



	UPROPERTY()
	FOnTimelineFloat FOnTimelineFloatOut;

	UPROPERTY(EditAnywhere)
	UCurveFloat *ZoomCurveOut;

	UFUNCTION()
    void ControlZoomOut(float Value);
	
	UPROPERTY()
	FTimeline ZoomTimelineOut;
	
	UFUNCTION(BlueprintCallable, Category = Grid)
	void FinishLine();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Runtime/Online/HTTP/Public/HttpManager.h"
#include "Runtime/Online/HTTP/Public/HttpModule.h"
#include "Runtime/Online/HTTP/Public/HttpRetrySystem.h"
#include "Components/SplineComponent.h"
#include "MulChoiceQuestion.h"
#include "MulChoiceMain.generated.h"

UCLASS()
class SINGPROJECT_API AMulChoiceMain : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMulChoiceMain();

	void RepeatingFunction();
	void OnRequestResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	
	FHttpModule* Http;
	void OnResponseReceived(FHttpRequestPtr RequestP, FHttpResponsePtr Response, bool bWasSuccessful);


	UFUNCTION(BlueprintCallable, Category = VaRestResponse)
	void VaRestResponse(FString VaRestValue);
	
	bool hasConnection=true;
	FHttpRequestPtr Request; //TSharedRef<IHttpRequest>
	FTimerHandle tmr;
	FString strHttpContent;

	FString strQuestion1;
	FString strQuestion2;
	
    bool boolHasPassed=false;
	bool boolOutIsShownLine;
	bool boolAnimateInStartedLine;
	
	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;

	UPROPERTY(Category = Grid, EditAnywhere)
	class AMulChoiceItem* ChoiceItem;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AMulChoiceQuestion* ChoiceQuestion;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class AMulChoiceQuestion* ChoiceQuestionOut;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class ALineSingerName* SingerName;
	
	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineDownToCenter;

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineCenterToUp;

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineDownToCenterSelection;

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineCenterToUpSelection;



	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineCenterToMCPosition;

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineMCPositionToUp;

	UPROPERTY(Category = Grid, EditAnywhere)
	class ALineTitleSinger* TitleSingerUse;



	UFUNCTION(BlueprintCallable, Category = Grid)
	void FinishLineOut();

	UFUNCTION(BlueprintCallable, Category = Grid)
	void FinishLine();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

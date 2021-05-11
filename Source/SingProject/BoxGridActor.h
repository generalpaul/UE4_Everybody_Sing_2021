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
#include "BoxGridActor.generated.h"

UCLASS()
class SINGPROJECT_API ABoxGridActor : public AActor
{
	GENERATED_BODY()

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineTopToLow;

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineTopToLowCenter;

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineBottomToUp;

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineRightToCenter;

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineCenterToOut;



	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineLineRightToCenter;

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineLineCenterToOut;




	// UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	// class USplineComponent* splineAnimate;

public:	
	// Sets default values for this actor's properties
	ABoxGridActor();

	UFUNCTION(BlueprintCallable, Category = VaRestResponse)
	void VaRestResponse(FString VaRestValue);

	template<typename T>
	void FindAllActors(UWorld* World, TArray<T*>& Out);

	UFUNCTION(BlueprintCallable, Category = Grid)
	FVector GetSplineBoxLocation(float time);
	
	UFUNCTION(BlueprintCallable, Category = Grid)
	FVector GetSplineLocationTopToLow(float time);

	UFUNCTION(BlueprintCallable, Category = Grid)
	FVector GetSplineLocationTopToLowCenter(float time);

	UFUNCTION(BlueprintCallable, Category = Grid)
	FVector GetSplineLocationBottomToUp(float time);

	UFUNCTION(BlueprintCallable, Category = Grid)
	FVector GetSplineLocationOut(float time);



	UFUNCTION(BlueprintCallable, Category = Grid)
	FVector GetSplineLineLocationOut(float time);

	UFUNCTION(BlueprintCallable, Category = Grid)
	FVector GetSplineLineBoxLocation(float time);

	UPROPERTY(Category = Grid, EditAnywhere)
	class ABoxImageActor* BoxImage;	

	UPROPERTY(Category = Grid, EditAnywhere)
	class ABoxImageQuestion* BoxQuestion;	

	void RepeatingFunction();
	void OnRequestResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	
	FHttpModule* Http;
	void OnResponseReceived(FHttpRequestPtr RequestP, FHttpResponsePtr Response, bool bWasSuccessful);

	bool hasConnection=true;

	
	FHttpRequestPtr Request; //TSharedRef<IHttpRequest>

	UPROPERTY()
	FTimerHandle tmr;


	FString strHttpContent;

	FString strQuestion1;
	FString strQuestion2;
	FString strUrl;
	FString strUrlVideo;


	float floatSize;

	int intAnimateIndex=-1;
	
    bool boolHasPassed=false;

	bool boolAnimateInStarted=false;
	bool boolOutIsShown=false;
	bool boolLine2OutIsShown=true;


	int intAnimateIndexLine=-1;
	bool boolAnimateInStartedLine=false;
	bool boolOutIsShownLine=false;
	bool boolLine2OutIsShownLine=true;


	bool boolAnswerIsShown=false;
	
	
	UFUNCTION(BlueprintCallable, Category = StartAnimateFinishMain)
	void StartAnimateFinishMain(int index);


	UFUNCTION(BlueprintCallable, Category = StartAnimateFinishMainLine)
	void StartAnimateFinishMainLine(int index);

	
	UPROPERTY(Category = Grid, EditAnywhere)
	class ALineSingerName* SingerName;
	
	// UPROPERTY(Category = Grid, EditAnywhere)
	// class ALineFinish* LineFinishParent;
	
	UPROPERTY(Category = Grid, EditAnywhere)
	class ALineTitleSinger* TitleSingerUse;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Returns DummyRoot subobject **/
	FORCEINLINE class USceneComponent* GetDummyRoot() const { return DummyRoot; }

};

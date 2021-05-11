
#pragma once

#include "CoreMinimal.h"
#include "Templates/SharedPointer.h"
#include "GameFramework/Actor.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Runtime/Online/HTTP/Public/HttpManager.h"
#include "Runtime/Online/HTTP/Public/HttpModule.h"
#include "Runtime/Online/HTTP/Public/HttpRetrySystem.h"
#include "Text3DComponent.h"
#include "Components/SplineComponent.h"
#include "EngineUtils.h"
#include "LineActor.h"
#include "LineActorAnswer.h"
#include "Dom/JsonObject.h"
#include "EngineUtils.h"
#include "LineFinish.h"
#include "SingProjectBlockGrid.generated.h"

/** Class used to spawn blocks and manage score */
UCLASS(minimalapi)
class ASingProjectBlockGrid : public AActor
{
	GENERATED_BODY()

	/** Dummy root component */
	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;

	/** Text component for the score */
	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UTextRenderComponent* ScoreText;

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineRightToLeft;

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineCenterToOut;
	

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineStraightRightToLeft;

	UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USplineComponent* SplineStraightCenterToOut;
	



	// UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	// class UTextBlock* ScoreTextBlock;
public:
	ASingProjectBlockGrid();

	/** How many blocks have been clicked */
	UPROPERTY()
	int32 Score;

	/** Number of blocks along each side of grid */
	UPROPERTY(Category=Grid, EditAnywhere, BlueprintReadOnly)
	int32 Size;

	/** Spacing of blocks */
	UPROPERTY(Category=Grid, EditAnywhere, BlueprintReadOnly)
	float BlockSpacing;

	UPROPERTY()
	TArray<ALineActor*> arrLineActor;
	// TArray<ALineActorAnswer*> arrLineActorBlanks;


	// TArray<ALineActorAnswer*> getAllActorAnswers;
	// TArray<ALineActor*> arrLineActorBlanksAnswer;
	// TArray<ALineActor*> arrLineActorBlanksUnderscore;
	

	FVector AxisVector;

	void RepeatingFunction();
	void OnRequestResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	
	FHttpModule* Http;
	void OnResponseReceived(FHttpRequestPtr RequestP, FHttpResponsePtr Response, bool bWasSuccessful);

	
	// void OnResponseReceived2(FHttpRequestPtr RequestD, FHttpResponsePtr Response, bool bWasSuccessful);

	bool hasConnection=true;
	FHttpRequestPtr Request; //TSharedRef<IHttpRequest>
	
	UPROPERTY()
	FTimerHandle tmr;

	UPROPERTY()
	FTimerHandle tmrUpDown; //timer for moving up or down
	int intUpOrDown=0;
	void RepeatingFunctionUpOrDown(); //looping function for move up/down

    bool boolHasPassed=false;

	bool boolAnimateInStarted=false;
	//bool boolAnimateOutStarted=false;

	//bool boolInIsShown=false;
	bool boolOutIsShown=true;
	bool boolLine2OutIsShown=true;
	bool boolAnswerIsShown=false;
	// bool boolPostedAllShown=false;

	FString strQuestion1;
	FString strQuestion2;
	FString strAnswer1;
	FString strAnswer2;

	FString strAnswerH1;
	FString strAnswerH2;

	FString strUnderline1;
	FString strUnderline2;

	FString strHttpContent="";


	// float blurleft1;
	// float blurwidth1;
	float answerPosition1;
	float blankPosition1;

	// float blurleft2;
	// float blurwidth2;
	float answerPosition2;
	float blankPosition2;
	
	UPROPERTY()
	int notes=0;
	FString gameType;
	

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextQuestionB;



	UFUNCTION(BlueprintCallable, Category = VaRestResponse)
	void VaRestResponse(FString VaRestValue);

	
	UPROPERTY()
	class UMaterial* BaseMaterial;

	UPROPERTY()
	class UMaterial* BaseMaterialGlow;

	

	UPROPERTY()
	class UMaterial* YellowMaterial;

	UPROPERTY()
	class UMaterial* OrangeMaterial;

	UPROPERTY()
	class UMaterial* BlankMaterial;

	UPROPERTY()
	class UMaterial* GreenMaterial;

	UPROPERTY()
	class UMaterial* RedMaterial;

	UPROPERTY()
	class UMaterial* BaseBlurMaterial;

	UPROPERTY()
	class UMaterial* BlurGlowMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* GreenMaterialGlow;

	UPROPERTY(EditAnywhere)
	class UMaterial* RedMaterialGlow;

	UPROPERTY(EditAnywhere)
	class UMaterial* BlueMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* BlueBevelMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* BlueExtrudeMaterial;
	
	UPROPERTY(EditAnywhere)
	class UMaterial* ESMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* ESBevelMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* ESExtrudeMaterial;
	

	UPROPERTY(EditAnywhere, Category=FontSet)
	class UFont* InitFontMaterial;

	UFUNCTION(BlueprintCallable, Category = GetSplineRightToLeft)
	FVector GetSplineLocation(float time, bool hasQuestion);

	UFUNCTION(BlueprintCallable, Category = GetSplineLocationOut)
	FVector GetSplineLocationOut(float time, bool hasQuestion);

	UPROPERTY(Category = Grid, EditAnywhere)
	class ALineActorAnswer* ALineActorAnswerIn;

	UPROPERTY(Category = Grid, EditAnywhere)
	class ALineActorAnswer* ALineActorAnswerOut;	

	UFUNCTION(BlueprintCallable, Category = StartAnimateFinishMain)
	void StartAnimateFinishMain(int index);

	UFUNCTION(BlueprintCallable, Category = StartAnimateOutFinishMain)
	void StartAnimateOutFinishMain(int index);


	// UPROPERTY(Category = Grid, EditAnywhere)
	// class ALineFinish* LineFinishParent;
	
	UPROPERTY(Category = Grid, EditAnywhere)
	class ALineTitleSinger* TitleSingerUse;

	UPROPERTY(Category = Grid, EditAnywhere)
	class ALineSingerName* SingerName;

	int intAnimateIndex=-1;
protected:
	// Begin AActor interface
	virtual void BeginPlay() override;
	// End AActor interface

public:

template<typename T>
	void FindAllActors(UWorld* World, TArray<T*>& Out);
	/** Handle the block being clicked */
	void AddScore();

	/** Returns DummyRoot subobject **/
	FORCEINLINE class USceneComponent* GetDummyRoot() const { return DummyRoot; }
	/** Returns ScoreText subobject **/
	FORCEINLINE class UTextRenderComponent* GetScoreText() const { return ScoreText; }
};
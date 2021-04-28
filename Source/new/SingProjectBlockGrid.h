
#pragma once

#include "CoreMinimal.h"
#include "LineActor.h"
#include "LineActorAnswer.h"

#include "GameFramework/Actor.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Runtime/Online/HTTP/Public/HttpManager.h"
#include "Runtime/Online/HTTP/Public/HttpModule.h"
#include "Runtime/Online/HTTP/Public/HttpRetrySystem.h"
#include "Text3DComponent.h"
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
	
	// UPROPERTY(Category = Grid, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	// class UTextBlock* ScoreTextBlock;
public:
	ASingProjectBlockGrid();

	/** How many blocks have been clicked */
	int32 Score;

	/** Number of blocks along each side of grid */
	UPROPERTY(Category=Grid, EditAnywhere, BlueprintReadOnly)
	int32 Size;

	/** Spacing of blocks */
	UPROPERTY(Category=Grid, EditAnywhere, BlueprintReadOnly)
	float BlockSpacing;

	
	TArray<ALineActor*> arrLineActor;
	TArray<ALineActorAnswer*> arrLineActorBlanks;
	// TArray<ALineActor*> arrLineActorBlanksAnswer;
	// TArray<ALineActor*> arrLineActorBlanksUnderscore;
	

	FVector AxisVector;

	void RepeatingFunction();
	void OnRequestResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	
	FHttpModule* Http;
	void OnResponseReceived(FHttpRequestPtr RequestP, FHttpResponsePtr Response, bool bWasSuccessful);

	bool hasConnection=true;
	FHttpRequestPtr Request; //TSharedRef<IHttpRequest>
	FTimerHandle tmr;


	FTimerHandle tmrUpDown; //timer for moving up or down
	int intUpOrDown=0;
	void RepeatingFunctionUpOrDown(); //looping function for move up/down

    bool boolHasPassed=false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextQuestionB;


	
	UPROPERTY()
	class UMaterial* BaseMaterial;

	UPROPERTY()
	class UMaterial* BlueMaterial;

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

	UPROPERTY(EditAnywhere, Category=FontSet)
	class UFont* InitFontMaterial;
	
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
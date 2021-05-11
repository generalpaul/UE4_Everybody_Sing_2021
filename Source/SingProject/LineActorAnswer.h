// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Text3DComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

//Note, this was not included, this might be because LineActorAnswer object dragged in the SingProjectBlockGrid?
// #include "SingProjectBlockGrid.h"
#include "LineActorAnswer.generated.h"

UCLASS()
class SINGPROJECT_API ALineActorAnswer : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALineActorAnswer();
	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent *DummyRoot;

	FString FQuestion1;
	FString FQuestion2;
	FString FUnderline1;
	FString FUnderline2;
	FString FAnswer1;
	FString FAnswer2;
	FString FAnswerH1;
	FString FAnswerH2;

	float fAnswerPosition1;
	float fBlankPosition1;
	float fAnswerPosition2;
	float fBlankPosition2;

	// float fBlurLeft1;
	// float fBlurLeft2;
	// float fBlurWidth1;
	// float fBlurWidth2;

	FString FAnimateType;



	//** Text component for the score */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent *TextQuestion1;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent *TextAnswer1;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent *TextAnswerH1;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent *TextUnderline1;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent *TextQuestion2;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent *TextAnswer2;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent *TextAnswerH2;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent *TextUnderline2;

	// UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	// class UText3DComponent *TextAnswer1Blur;

	// UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	// class UText3DComponent *TextAnswer2Blur;

	// UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	// class UStaticMeshComponent *PlaneBlur1;

	// UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	// class UStaticMeshComponent *PlaneBlur2;

	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent *TextAnswer1NoteSymbol;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent *TextAnswer2NoteSymbol;

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

	// UFUNCTION(BlueprintCallable, Category = PassRotationTimeline)
	// void PassRotationTimeline(float time);

	// UFUNCTION(BlueprintCallable, Category = ShowBlur)
	// void ShowBlur();

	// UFUNCTION(BlueprintCallable, Category = ShowBlur)
	// void HideBlur();

	UFUNCTION(BlueprintCallable, Category = UpdateVisibility)
	void UpdateVisibility(int IsNotes);

	// UFUNCTION(BlueprintCallable, Category = HasTemporaryAnswer)
	// void HasTemporaryAnswer(int isTrue);

	bool boolAsTesting=false;
	
	UFUNCTION(Category = Grid)
	void ResetAll();

	UFUNCTION(Category = Grid)
	void ShowWord();

	float topPosition;

	UFUNCTION(Category = Grid)
	void SetVerticalTop(float position);

	// UFUNCTION(Category = Grid)
	// void SetVerticalTopFinal(float position, UMaterial *blank, UMaterial *defaultRed, UMaterial *defaultBlue);

	UFUNCTION(Category = Grid)
	void SetValue(FString strQuestion1, FString strAnswer1, FString strAnswerH1, FString strUnderline1,
				  FString strQuestion2, FString strAnswer2, FString strAnswerH2, FString strUnderline2,
				  float answerPosition1, float blankPosition1,
				  float answerPosition2, float blankPosition2,
				  
				//   float blurleft1,
				//   float blurleft2, float blurwidth1, float blurwidth2,
				  int notes, 
				  
				  UFont *font,
				  UMaterial *BaseMaterial, UMaterial *BaseMaterialGlow, UMaterial *YellowMaterial, UMaterial *OrangeMaterial,
				  UMaterial *BlueMaterial, UMaterial *BlueBevelMaterial, UMaterial *BlueExtrudeMaterial,
				  UMaterial *ESMaterial, UMaterial *ESBevelMaterial, UMaterial *ESExtrudeMaterial,
				  FString gameType, FString eventName);

	//void ShowSequence(int8 sequence);
	//UPROPERTY(meta = (BindWidget, OptionalWidget = true))
	//class UTextBlock* OptionalText;

	/** Grid that owns us */
	UPROPERTY()
	class ASingProjectBlockGrid *OwningGrid;

	UFUNCTION(Category = Grid)
	void MoveUp(float value);

	UFUNCTION(Category = Grid)
	void MoveDown(float value);

	int intMovement = 0;

	FString othergameTypeProp;

	UFUNCTION(Category = Grid)
	void Init(UMaterial *BaseMaterial, UMaterial *GreenMaterial, UMaterial *YellowMaterial, UMaterial *OrangeMaterial,
			  UMaterial *BlankMaterial, UMaterial *RedMaterial, UMaterial *BlurGlowMaterial,
			  UMaterial *BaseBlurMaterial, int notes, FString gameType);

	bool fStrHasTwoLines();

	FString fstrSaveLine2;
	//bool boolShownLED;
	//bool boolIsNotes;

	bool boolHasTmpAnswer;

	int intIndex = -1;

	int intInit = -1;

	// UPROPERTY()
	// class UMaterial* BaseMaterial;

	// UPROPERTY()
	// class UMaterialInstance* YellowMaterial;

	// UPROPERTY()
	// class UMaterial* BlankMaterial;

	// UPROPERTY()
	// class UMaterial* GreenMaterial;

	// UPROPERTY()
	// class UMaterial* RedMaterial;

	UPROPERTY(EditAnywhere, Category = Movement)
	float Multiplier;

	// void hide();
	// void show();
	UFUNCTION(Category = Grid)
	void right(UMaterial *GreenMaterial, UMaterial *YellowMaterial, UMaterial *OrangeMaterial, UMaterial *BlankMaterial, UMaterial *GlowMaterial);
	
	UFUNCTION(Category = Grid)
	void wrong(UMaterial *RedMaterial, UMaterial *YellowMaterial, UMaterial *OrangeMaterial, UMaterial *BlankMaterial, UMaterial *GlowMaterial);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};

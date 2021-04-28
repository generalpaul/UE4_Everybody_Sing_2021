// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Text3DComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LineActorAnswer.generated.h"

UCLASS()
class SINGPROJECT_API ALineActorAnswer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALineActorAnswer();
	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;

	//** Text component for the score */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextQuestion1;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextAnswer1;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextUnderline1;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextQuestion2;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextAnswer2;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextUnderline2;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextAnswer1Blur;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextAnswer2Blur;
	
	float topPosition;
	void SetVerticalTop(float position);
	
	void SetVerticalTopFinal(float position, UMaterial* blank, UMaterial* defaultRed, UMaterial* defaultBlue);
	

	void SetValue(FString strQuestion1,FString strAnswer1,FString strUnderline1,
				  FString strQuestion2,FString strAnswer2,FString strUnderline2, 
				  float blurleft1,
				  float blurleft2,float blurwidth1,float blurwidth2, int blur, UFont* font);

	void ShowSequence(int8 sequence);
	//UPROPERTY(meta = (BindWidget, OptionalWidget = true))
	//class UTextBlock* OptionalText;

	/** Grid that owns us */
	UPROPERTY()
	class ASingProjectBlockGrid* OwningGrid;

	void MoveUp(float value);
	void MoveDown(float value);

	int intMovement=0;

    void Init(UMaterial* BaseMaterial, UMaterial* GreenMaterial, UMaterial* BlueMaterial,
				 UMaterial* BlankMaterial, UMaterial* RedMaterial, UMaterial* BlurGlowMaterial,
				  UMaterial* BaseBlurMaterial, int blur);

    bool fStrHasTwoLines();				 

	FString fstrSaveLine2;
	bool boolShownLED;
	bool boolIsBlur;
		
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Plane;
	// UPROPERTY()
	// class UMaterial* BaseMaterial;

	// UPROPERTY()
	// class UMaterialInstance* BlueMaterial;

	// UPROPERTY()
	// class UMaterial* BlankMaterial;

	// UPROPERTY()
	// class UMaterial* GreenMaterial;

	// UPROPERTY()
	// class UMaterial* RedMaterial;

	UPROPERTY(EditAnywhere, Category = Movement)
	float Multiplier;

	void hide();
	void show();

	void right(UMaterial* GreenMaterial, UMaterial* BlueMaterial, UMaterial* BlankMaterial);
	void wrong(UMaterial* GreenMaterial, UMaterial* RedMaterial, UMaterial* BlankMaterial);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

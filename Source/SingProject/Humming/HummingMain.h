// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Text3DComponent.h"
#include "Kismet/GameplayStatics.h"
#include "HummingMain.generated.h"

UCLASS()
class SINGPROJECT_API AHummingMain : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHummingMain();

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRoot;

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRootInfo;

	UPROPERTY(Category = Block, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* DummyRootRotator;


	UFUNCTION(Category = Grid)
	void PassValue(FString value);

	UPROPERTY(Category = Grid, EditAnywhere, BlueprintReadOnly)
	class UStaticMeshComponent* Cylinder1;
	
	UPROPERTY(Category = Grid, EditAnywhere, BlueprintReadOnly)
	class UStaticMeshComponent* Cylinder2;

	UPROPERTY(Category = Grid, EditAnywhere, BlueprintReadOnly)
	class UStaticMeshComponent* Cylinder3;

	UPROPERTY(Category = Grid, EditAnywhere, BlueprintReadOnly)
	class UStaticMeshComponent* Block;

	UPROPERTY(Category = Grid, EditAnywhere, BlueprintReadOnly)
	class UStaticMeshComponent* Block2;
	
	
	UPROPERTY(Category = Grid, EditAnywhere, BlueprintReadOnly)
	class UStaticMeshComponent* BlockInfo;

	UPROPERTY(Category = Grid, EditAnywhere, BlueprintReadOnly)
	class UStaticMeshComponent* BlockInfo2;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextQuestion;

	

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextTitle1;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextTitle2;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextAnswer;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextAnswer1;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextAnswer2;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextInfo1;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextInfo2;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextInfo3;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextInfo4;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextInfoFrame;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextInfoArtist1;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UText3DComponent* TextInfoArtist2;

	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartAnimateLine();

	// UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	// void StartRotate();

	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartReset();

	UFUNCTION()
	void voidReset();
	
	UFUNCTION(BlueprintImplementableEvent, Category = Grid)
	void StartZoom();

	UFUNCTION()
	void PassMaterialText(UText3DComponent* value, UMaterial* front, UMaterial* bevel, UMaterial* extrude);

	UFUNCTION()
	void PassMaterial(UStaticMeshComponent* value, UMaterial* material);


	UPROPERTY(Category = Grid, EditAnywhere)
	class ALineSingerName* SingerName;
	
	UPROPERTY(EditAnywhere)
	class UMaterial* OrangeMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* PurpleGlow;

	UPROPERTY(EditAnywhere)
	class UMaterial* GreenGlow;

	UPROPERTY(EditAnywhere)
	class UMaterial* RedGlow;

	UPROPERTY(EditAnywhere)
	class UMaterial* GreenMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* GreenMaterialMed;

	UPROPERTY(EditAnywhere)
	class UMaterial* RedMaterial;

	UPROPERTY(EditAnywhere)
	class UMaterial* RedMaterialMed;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

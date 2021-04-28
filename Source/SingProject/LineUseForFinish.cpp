// Fill out your copyright notice in the Description page of Project Settings.
#include "LineUseForFinish.h"
#include "Engine/EngineTypes.h"

// Sets default values
ALineUseForFinish::ALineUseForFinish()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	TextAnswer = CreateDefaultSubobject<UText3DComponent>(TEXT("TextAnswer"));
	TextAnswer->SetRelativeLocation(FVector(-40.f, -10.f, 230.f));
	TextAnswer->SetRelativeRotation(FRotator(0.f, -90.f, 180.f));
	TextAnswer->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));

	TextAnswer->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextAnswer->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextAnswer->SetExtrude(20.f);
	TextAnswer->SetText(FText::FromString(""));
	TextAnswer->SetKerning(3.f);

	TextAnswer->SetupAttachment(DummyRoot);
	//RootComponent=TextAnswer;
	//TextAnswer->AttachToComponent(RootComponent, FAttachmentTransformRules::SnapToTargetIncludingScale);

	TextQuestion = CreateDefaultSubobject<UText3DComponent>(TEXT("TextQuestion"));
	TextQuestion->SetRelativeLocation(FVector(0.f, 0.f, 230.f));
	TextQuestion->SetRelativeRotation(FRotator(270.f, 0.f, 180.f));
	TextQuestion->SetRelativeScale3D(FVector(5.f, 5.f, 5.f));
	TextQuestion->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextQuestion->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextQuestion->SetExtrude(20.f);
	TextQuestion->SetKerning(3.f);
	TextQuestion->SetText(FText::FromString(""));
	//TextQuestion->AttachToComponent(RootComponent, FAttachmentTransformRules::SnapToTargetIncludingScale);
	TextQuestion->SetupAttachment(DummyRoot);

	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> CubeMesh;
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> PlaneMesh;

		FConstructorStatics() : CubeMesh(TEXT("/Game/Puzzle/Meshes/PuzzleCube.PuzzleCube")),
								PlaneMesh(TEXT("/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	BlockAnswer = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockAnswer0"));
	BlockAnswer->SetStaticMesh(ConstructorStatics.CubeMesh.Get());
	BlockAnswer->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
	BlockAnswer->SetupAttachment(DummyRoot);

	PlaneAnswer = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaneAnswer"));
	// static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneAsset(TEXT("/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane"));

	// if (PlaneAsset.Succeeded())
	// {
	PlaneAnswer->SetStaticMesh(ConstructorStatics.PlaneMesh.Get());
	PlaneAnswer->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
	PlaneAnswer->SetupAttachment(DummyRoot);
	//}
}

void ALineUseForFinish::SetURL(FString _url)
{

	url = _url;
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, url);
}
// Called when the game starts or when spawned
void ALineUseForFinish::SetupAttachmentProp(USceneComponent *ParentRoot)
{

	//RootComponent=ParentRoot;
	//ParentRoot=DummyRoot;
	//DummyRoot->SetupAttachment(ParentRoot);
	//DummyRoot->AttachToComponent(ParentRoot,FAttachmentTransformRules::SnapToTargetIncludingScale);
	DummyRoot->AttachToComponent(ParentRoot, FAttachmentTransformRules::KeepRelativeTransform);
	//this->SetupAttachment(ParentRoot);
	//FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true)
	//  TextQuestion->AttachToComponent(ParentRoot, FAttachmentTransformRules::KeepRelativeTransform);
	//  TextAnswer->AttachToComponent(ParentRoot, FAttachmentTransformRules::KeepRelativeTransform);

	// TextAnswer->AttachToComponent(ParentRoot, FAttachmentTransformRules::KeepRelativeTransform);
	// TextQuestion->AttachToComponent(ParentRoot, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void ALineUseForFinish::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ALineUseForFinish::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALineUseForFinish::SetFloatingStartLine(float top)
{
	floatTop = top;
	FVector current = GetActorLocation();
	current.X = top;
	// FString f=FString::SanitizeFloat(top);
	// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, f);
	//SetActorLocation(current);
}

void ALineUseForFinish::SetFloatScale(float scale)
{
	floatScale = scale;
	// TextQuestion->SetRelativeScale3D(FVector(floatScale,floatScale,floatScale));
	// TextAnswer->SetRelativeScale3D(FVector(floatScale,floatScale,floatScale));
}

float ALineUseForFinish::GetFloatingStartLine()
{
	return floatTop;
}

void ALineUseForFinish::Reset()
{
	// TextQuestion->SetText(FText::FromString(""));
	// TextAnswer->SetText(FText::FromString(""));
	// BlockAnswer->SetRelativeLocation(FVector(0,-90, -8000));
	// PlaneAnswer->SetRelativeLocation(FVector(0,-90, -8000));
}

// void ALineUseForFinish::SetImageVisibility(bool value)
// {

// 	if(value)
// 	{

// 		//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, TEXT("OK"));
// 		BlockAnswer->SetRelativeLocation(FVector(0,-90, 0));
// 		PlaneAnswer->SetRelativeLocation(FVector(0,-90, 0));
// 	}
// 	else
// 	{

// 		BlockAnswer->SetRelativeLocation(FVector(0,-90, -8000));
// 		PlaneAnswer->SetRelativeLocation(FVector(0,-90, -8000));

// 	}
// }

void ALineUseForFinish::SetLyricsLineResult(FString fQuestion, FString fAnswer, UMaterial *pFrontMaterial,
											UMaterial *pBevelMaterial, UMaterial *pExtruedMaterial, float fAnswerLeft)
{
	TextQuestion->SetText(FText::FromString(fQuestion));
	TextAnswer->SetText(FText::FromString(fAnswer));

	TextAnswer->SetBevelMaterial(pFrontMaterial);
	TextAnswer->SetFrontMaterial(pBevelMaterial);
	TextAnswer->SetExtrudeMaterial(pExtruedMaterial);

	FVector txtAnswerVector = TextAnswer->GetRelativeLocation();
	txtAnswerVector.Y = fAnswerLeft;

	// FString f=FString::SanitizeFloat(fAnswerLeft);
	// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, f);

	//loc.Y=-400;

	TextAnswer->SetRelativeLocation(txtAnswerVector);
}

void ALineUseForFinish::SetItemPosition(FVector newPosition)
{
	SetActorLocation(newPosition);
}

void ALineUseForFinish::SetLyricsLineResultImage(FString FQuestion, FString FUrl, bool isRight, UMaterial *answerMaterial)
{

	if (FUrl != "")
	{
		TextQuestion->SetText(FText::FromString(""));
		TextAnswer->SetText(FText::FromString(""));

		BlockAnswer->SetRelativeLocation(FVector(0, -90, 0));
		PlaneAnswer->SetRelativeLocation(FVector(0, -90, 0));
		PlaneAnswer->SetMaterial(0, answerMaterial);

		//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FUrl);
		SetURL(FUrl);
		StartDownload();
	}
	else
	{
		TextQuestion->SetText(FText::FromString(FQuestion));
		// TextAnswer->SetText(FText::FromString(""));

		// BlockAnswer->SetRelativeLocation(FVector(0,-90, -8000));
		// PlaneAnswer->SetRelativeLocation(FVector(0,-90, -8000));

		// BlockAnswer->SetRelativeLocation(FVector(0,-90, -8000));
		// PlaneAnswer->SetRelativeLocation(FVector(0,-90, -8000));
	}
}

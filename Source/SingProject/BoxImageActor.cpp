// Fill out your copyright notice in the Description page of Project Settings.

#include "BoxImageActor.h"

// Sets default values
ABoxImageActor::ABoxImageActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> PlaneMesh;
		//ConstructorHelpers::FObjectFinderOptional<UMaterial> BaseMaterial;
		FConstructorStatics() : PlaneMesh(TEXT("/Game/Puzzle/Meshes/PuzzleCube.PuzzleCube"))
		// ,
		// BaseMaterial(TEXT("/Game/Puzzle/Meshes/BaseMaterial.BaseMaterial"))
		{
		}
	};

	//OwningGrid.GetDummyRoot();//
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy1"));
	RootComponent = DummyRoot;

	DummyRootMeshIn = CreateDefaultSubobject<USceneComponent>(TEXT("DummyRootMeshIn"));
	DummyRootMeshOut = CreateDefaultSubobject<USceneComponent>(TEXT("DummyRootMeshOut"));
	static FConstructorStatics ConstructorStatics;

	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh0"));
	BlockMesh->SetStaticMesh(ConstructorStatics.PlaneMesh.Get());
	//BlockMesh->SetRelativeScale3D(FVector(20.f,20.f,20.f));
	BlockMesh->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
	//BlockMesh->SetMaterial(0, ConstructorStatics.BaseMaterial.Get());
	BlockMesh->SetupAttachment(DummyRootMeshIn);

	BlockOutMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockOutMesh"));
	BlockOutMesh->SetStaticMesh(ConstructorStatics.PlaneMesh.Get());
	BlockOutMesh->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
	BlockOutMesh->SetupAttachment(DummyRootMeshOut);

	PlaneRed = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaneRed"));
	PlaneGreen = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaneGreen"));
	PlaneVideo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaneVideo"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneAsset(TEXT("/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane"));

	if (PlaneAsset.Succeeded())
	{
		PlaneRed->SetStaticMesh(PlaneAsset.Object);
		PlaneRed->SetupAttachment(DummyRootMeshIn);

		PlaneGreen->SetStaticMesh(PlaneAsset.Object);
		PlaneGreen->SetupAttachment(DummyRootMeshIn);

		PlaneVideo->SetStaticMesh(PlaneAsset.Object);
		PlaneVideo->SetupAttachment(DummyRootMeshIn);
	}

	

	DummyRootMeshIn->SetupAttachment(DummyRoot);
	DummyRootMeshOut->SetupAttachment(DummyRoot);

	
	
}

void ABoxImageActor::SetAnswer(bool value)
{
	boolLastAnswer = value;
}

// Called when the game starts or when spawned
void ABoxImageActor::BeginPlay()
{
	Super::BeginPlay();

	// return;
	// 	TArray<AImageActor*> getAllActors;
	// 	FindAllActors(GetWorld(), getAllActors);

	// for(float i = 0; i < getAllActors.Num(); i++)
	// {
	// 	//getAllActors[i]->SetRelativeLocation(FVector(200.f,0.f,0.f));
	// 	getAllActors[i]->SetURL("https://picsum.photos/id/237/200/300");
	// 	//getAllActors[i]->StartDownload();
	// 	//getAllActors[i]->SetRelativeLocationP(FVector(-450.0f, -30.f, 3495.0f));
	// //	getAllActors[i]->PaulStart("http://localhost:8092/image"+ FString::FromInt(i) +".jpg");

	// 	//ff+=250.0f;
	// }
}

void ABoxImageActor::StartRotateImageFinish()
{

	if (boolLastAnswer)
	{
		//PlaneRed->SetRelativeLocation(FVector(-10, -15, -8000));
		PlaneRed->SetVisibility(false);
		PlaneGreen->SetVisibility(true);
		// PlaneGreen->SetRelativeLocation(FVector(-10, -15, 300));	
        
	   // PlaneGreen->SetRelativeLocation(FVector(0,endingPosition.X+50, 550));
	}
	else
	{
		PlaneGreen->SetVisibility(false);
		PlaneRed->SetVisibility(true);
		// PlaneRed->SetRelativeLocation(FVector(-10, -15, 300));
		//PlaneRed->SetRelativeLocation(FVector(0,endingPosition.X+50, 550));
		//PlaneGreen->SetRelativeLocation(FVector(-10, -15, -8000));
	}
}

void ABoxImageActor::HideBorders()
{
	// PlaneRed->SetRelativeLocation(FVector(-10, -15, -8000));
	// PlaneGreen->SetRelativeLocation(FVector(-10, -15, -8000));
}

void ABoxImageActor::StartPlayFinish()
{
	//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::White, url);
	//StartDownloadOut();
	outPosition=FVector(floatImageTop, 6000, 0);
	endingPositionForMovingOut=FVector(floatImageTop, floatImageLeft, 0);
}

// void ABoxImageActor::PositionOutObject()
// {
	
// }

void ABoxImageActor::PassTimelineOut(float time)
{

	// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Value: %f"), time));

	FVector newPosition = OwningGrid->GetSplineLocationOut(time);
	// newPosition.Y=0;
	// newPosition.Z=0;
	DummyRootMeshOut->SetRelativeLocation(newPosition);
}

void ABoxImageActor::PassRotationTimelineOut(float value)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Value: %f"), value));
	BlockOutMesh->SetRelativeRotation(FRotator(value, 0.f, 0.f));
}

void ABoxImageActor::PassTimelineRotateImage(float a)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Value: %f"), a));
	DummyRootMeshIn->SetRelativeRotation(FRotator(0, 0, a));
}

void ABoxImageActor::PassTimeline(float time)
{

	// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Value: %f"), time));

	FVector newPosition = OwningGrid->GetSplineBoxLocation(time);
	// newPosition.Y=0;
	// newPosition.Z=0;
	DummyRootMeshIn->SetRelativeLocation(newPosition);
}

void ABoxImageActor::PassRotationTimeline(float x)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Value: %f"), x));
	DummyRootMeshIn->SetRelativeRotation(FRotator(x, 0.f, 0.f));
}

void ABoxImageActor::TimelineShowImageAnswer(float value)
{
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("Value: %f"), value));
	// DummyRootMeshIn->SetRelativeRotation(FRotator(0.f, 0.f, value));
	DummyRootMeshIn->SetRelativeRotation(FRotator(value, 0 , 180.0f));
}

void ABoxImageActor::SetDuplicateImage(bool hideCurrentImage)
{
	if (hideCurrentImage)
	{
		BlockMesh->SetVisibility(false);
		PlaneRed->SetVisibility(false);
		PlaneGreen->SetVisibility(false);
		PlaneVideo->SetVisibility(false);
	}
	DummyRootMeshOut->SetRelativeLocation(endingPositionForMovingOut);
	BlockOutMesh->SetVisibility(true);
	// BlockOutMesh->SetRelativeScale3D(FVector(5.5f, floatScaleWidth, 5.5f));
	DummyRootMeshIn->SetRelativeScale3D(FVector(floatScaleWidth, floatScaleWidth, floatScaleWidth));
	DummyRootMeshOut->SetRelativeScale3D(FVector(floatScaleWidth, floatScaleWidth, floatScaleWidth));

	StartPlayOut();
	StartPlayRotationOut();

	HideBorders();
}

void ABoxImageActor::SetScaleWidth(float width)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::FromInt(width) );
	floatScaleWidth = width;
	// DummyRootMeshIn->SetRelativeScale3D(FVector(5.5f, floatScaleWidth, 5.5f));
	DummyRootMeshIn->SetRelativeScale3D(FVector(floatScaleWidth, floatScaleWidth, floatScaleWidth));
	DummyRootMeshOut->SetRelativeScale3D(FVector(floatScaleWidth, floatScaleWidth, floatScaleWidth));
	
}


void ABoxImageActor::SetImageLinePosition(int IntImageLine, float FloatImageLeft)
{
	BlockMesh->SetVisibility(true);
	PlaneVideo->SetVisibility(true);
    floatImageTop = IntImageLine;
	floatImageLeft = FloatImageLeft;
	
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::FromInt(FloatImageLeft) );
	
	float floatTopPosition;
	if(IntImageLine==0)
	{
		floatTopPosition=-700;
	}
	else if(IntImageLine==1)
	{
		floatTopPosition=300;
	}
	else
	{
		floatTopPosition=-150;
	}


	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, FString::FromInt(floatTopPosition) );

	DummyRootMeshIn->SetRelativeLocation(FVector(floatTopPosition, floatImageLeft, 0));

    initialPosition=FVector(floatTopPosition, -4000, 0);
	endingPosition=FVector(floatTopPosition, floatImageLeft, 0);
	
	PlaneRed->SetVisibility(false);
	PlaneGreen->SetVisibility(false);
	
}

// // Called every frame
// void ABoxImageActor::MoveToInitialPosition()
// {
// 	DummyRootMeshIn->SetRelativeLocation(initialPosition);
// }


void ABoxImageActor::SetURL(FString _url)
{
	
	BlockMesh->SetVisibility(true);
	url = _url;
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, url);
}



void ABoxImageActor::SetURLVideo(FString _url)
{
	PlaneVideo->SetVisibility(true);
	urlVideo = _url;
//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, urlVideo);
}

// Called every frame
void ABoxImageActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "LineFinish.h"

#include "LineTitleSinger.h"
#include "Text3DComponent.h"
// Sets default values
ALineFinish::ALineFinish()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LineFinishRoot"));
	RootComponent = DummyRoot;



 	
	// TitleSinger = CreateDefaultSubobject<UText3DComponent>(TEXT("TitleSinger"));
	// TitleSinger->SetRelativeLocation(FVector(0.f,0.f,230.f));
	// TitleSinger->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	// TitleSinger->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	// TitleSinger->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	// TitleSinger->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	// TitleSinger->SetExtrude(20.f);
	// TitleSinger->SetKerning(3.f);
	// TitleSinger->SetupAttachment(DummyRoot);

}

// Called when the game starts or when spawned
void ALineFinish::BeginPlay()
{
	Super::BeginPlay();

	//const FVector newFVector = FVector(0.f, 0.f, 0.f);
	float floatLineCreate = -1000;
	for(int index=0; index<=100; ++index)
	{
			ALineUseForFinish* tmpLine = GetWorld()->SpawnActor<ALineUseForFinish>(objSpawn, FVector(floatLineCreate, 0.f, 500.f), FRotator(0,0,0));
			tmpLine->SetupAttachmentProp(RootComponent);
			//tmpLine->SetFloatingStartLine(floatLineCreate);
		//	tmpLine->RegisterComponent();
	//		tmpLine->AttachToComponent(DummyRoot);
		//	tmpLine->AttachToActor(this);
			floatLineCreate=floatLineCreate+380;

			arrLineActors.Add(tmpLine);
	}

	floatLineCreate = -1000;
	for(int index=0; index<=100; ++index)
	{
			arrLineActors[index]->SetFloatingStartLine(floatLineCreate);
			arrLineActors[index]->Reset();
			// arrLineActors[index]->SetImageVisibility(false);
			//arrLineActors[index]->AttachToComponent(ParentRoot,FAttachmentTransformRules::SnapToTargetIncludingScale);
		// arrLineActors[index]->SetupAttachmentProp(DummyRoot);
			floatLineCreate=floatLineCreate+380;
	}

	// ClearLines();


	//TitleSingerUse = GetWorld()->SpawnActor<ALineTitleSinger>(TitleSinger, FVector(floatLineStart, 0.f, 0.f), FRotator(0,0,0));
	
}


void ALineFinish::SetPositionsUsingImages(TArray<bool> arrIfImages)
{
	
	
	// for(int index=0; index<=100; ++index)
	// {
	// 		arrLineActors[index]->Reset();
	// }
	
	float floatLineCreate = -1000;
	int intCount=arrIfImages.Num();
	//bool ok=arrIfImages[0];
	for(int index=0; index<=intCount-1; ++index)
	{
			
			//bool ok=arrIfImages[index];
			
			if(arrIfImages[index]==true)
			{
			// 	FString f=FString::SanitizeFloat(floatLineCreate);
			// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, f);

				floatLineCreate=floatLineCreate+380;
				arrLineActors[index]->SetItemPosition(FVector(floatLineCreate, 0.f, 500.f));	
				floatLineCreate=floatLineCreate+1000;
			}
			else
			{
				arrLineActors[index]->SetItemPosition(FVector(floatLineCreate, 0.f, 500.f));	
				floatLineCreate=floatLineCreate+380;
			}

	}
		
}


// void ALineFinish::SetPaul(FString fPaul)
// {
// //		FString f=FString::SanitizeFloat(fPaul);
// 	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, fPaul);
// }

void ALineFinish::fnSetGuide(FString FQuestion, FString FAnswer, float FAnswerLeft, bool isRight, int intIndex)
{
	// FString f=FString::SanitizeFloat(FAnswerLeft);
	// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, f);
	
	arrLineActors[intIndex]->Reset();

	if(isRight)
	{
		arrLineActors[intIndex]->SetLyricsLineResult(FQuestion, FAnswer, GreenMaterialGlow, GreenMaterial, GreenMaterial, FAnswerLeft);
	}
	else
	{
		arrLineActors[intIndex]->SetLyricsLineResult(FQuestion, FAnswer, RedMaterialGlow, RedMaterial, RedMaterial, FAnswerLeft);
	}
}


void ALineFinish::fnSetGuideImage(FString FQuestion, FString FUrl, bool isRight, int intIndex)
{
	arrLineActors[intIndex]->Reset();
	
	if(FQuestion!="" || FUrl!="")
	arrLineActors[intIndex]->SetLyricsLineResultImage(FQuestion, FUrl, isRight, (isRight?GreenImageMaterial:RedImageMaterial));
}

void ALineFinish::fnSetFinishLine(FString FQuestion, FString FAnswer)
{

	 //FString f=FString::SanitizeFloat(intIndex);
	 //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FSAnswerLeft);
	//FCString::Atof(*TheString)
	//arrLineActors[intIndex]->hoho(FQuestion);


	
}

void ALineFinish::PassTimelineUp(float value)
{
	
	 float floatLineStartTimeline=value*floatLineStart;
    //  FString f=FString::SanitizeFloat(floatLineStartTimeline);
	//  GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, f);
	// for(int index=0; index<=100; ++index)
	// {
	// 	FVector getLocation = arrLineActors[index]->GetActorLocation();
		
	// 	arrLineActors[index]->SetFloatingStrtLine(floatLineStartTimeline);
	// 	arrLineActors[index]->SetActorLocation(FVector(floatLineStartTimeline, 0.f, 500));
	// 	floatLineStartTimeline=floatLineStartTimeline+floatSpacing;
	// }

	SetActorLocation(FVector(floatLineStartTimeline,0,0));
}

void ALineFinish::PassTimelineDepth(float value)
{	 

	//   FString f=FString::SanitizeFloat(value);
	//  GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, f);
	
	 float floatComputeToAnimate=floatDepthSize-(-3000);

	//  float floatLineStartTmp =  floatLineStart;

	// for(int index=0; index<=100; ++index)
	// {
	// 	FVector getLocation = arrLineActors[index]->GetActorLocation();
		
	// 	arrLineActors[index]->SetFloatingStartLine(floatLineStartTmp);
	// 	arrLineActors[index]->SetActorLocation(FVector(floatLineStartTmp, 0.f, 500 + (value*floatComputeToAnimate)));
	// 	floatLineStartTmp=floatLineStartTmp+floatSpacing;
	// }

	SetActorLocation(FVector(floatLineStart,0,floatDepthSize*value));
}



void ALineFinish::SetTopAndSizeAndSpacing(float top, float size, float spacing)
{
	SetActorLocation(FVector(0,0,0));

	floatLineStart=top;
	floatDepthSize=size;
	floatSpacing=spacing;
	float floatLineStartTmp =  top;
	/*for(int index=0; index<=100; ++index)
	{
		// FVector getLocation = arrLineActors[index]->GetActorLocation();
		
		arrLineActors[index]->SetFloatingStartLine(floatLineStartTmp);
		arrLineActors[index]->SetActorLocation(FVector(floatLineStartTmp, 0.f, 500));
		floatLineStartTmp=floatLineStartTmp+spacing;
	}*/
	FVector getLocation = FVector(0,0,0);//GetActorLocation();
	getLocation.Z=size;
	getLocation.X=floatLineStart;
	
	 //FString f=FString::SanitizeFloat(size);
	// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, f);
	SetActorLocation(getLocation);
}



void ALineFinish::SetSize(float Size)
{
	floatDepthSize=Size;
	for(int index=0; index<=100; ++index)
	{
		float getTop = arrLineActors[index]->GetFloatingStartLine();
		arrLineActors[index]->SetActorLocation(FVector(getTop, 0.f, Size));
		//arrLineActors[index]->SetFloatScale(Size);
	}
}




void ALineFinish::HideLines()
{
	// for(int index=0; index<=100; ++index)
	// {
	// 	FVector thisLocation = arrLineActors[index]->GetActorLocation();
	// 	thisLocation.Z=-8000;
	// 	arrLineActors[index]->SetActorLocation(thisLocation);
	// }

	FVector getLocation = GetActorLocation();
	getLocation.Z=-80000;
	SetActorLocation(getLocation);
}

void ALineFinish::ShowLines()
{

	// for(int index=0; index<=100; ++index)
	// {
	// 	arrLineActors[index]->SetImageVisibility(true);
	// }


	FVector getLocation = GetActorLocation();
	getLocation.Z=0;
	getLocation.X=0;
	SetActorLocation(getLocation);
}



// Called every frame
void ALineFinish::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



template<typename T>
void ALineFinish::FindAllActors(UWorld* World, TArray<T*>& Out)
 {
     for (TActorIterator<AActor> It(World, T::StaticClass()); It; ++It)
     {
         T* Actor = Cast<T>(*It);
         if (Actor && !Actor->IsPendingKill())
         {
             Out.Add(Actor);
         }
     }
 }


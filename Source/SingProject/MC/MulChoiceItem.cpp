// Fill out your copyright notice in the Description page of Project Settings.

#include "MulChoiceItem.h"
#include "MulChoiceMain.h"

// Sets default values
AMulChoiceItem::AMulChoiceItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	 DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	 RootComponent = DummyRoot;

	 DummyRootA = CreateDefaultSubobject<USceneComponent>(TEXT("DummyA"));
	 DummyRootB = CreateDefaultSubobject<USceneComponent>(TEXT("DummyB"));

	TextLineChoice1 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextOption1"));
	TextLineChoice1->SetRelativeLocation(FVector(0.f,0.f,230.f));
	TextLineChoice1->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextLineChoice1->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextLineChoice1->SetText(FText::FromString("TextOption1"));
	TextLineChoice1->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextLineChoice1->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextLineChoice1->SetExtrude(20.f);
	TextLineChoice1->SetKerning(3.f);
	TextLineChoice1->SetupAttachment(DummyRootA);



	TextLineChoice1Letter = CreateDefaultSubobject<UText3DComponent>(TEXT("TextLineChoice1Letter"));
	TextLineChoice1Letter->SetRelativeLocation(FVector(0.f,0.f,230.f));
	TextLineChoice1Letter->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextLineChoice1Letter->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextLineChoice1Letter->SetText(FText::FromString("TextLineChoice1Letter"));
	TextLineChoice1Letter->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextLineChoice1Letter->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextLineChoice1Letter->SetExtrude(20.f);
	TextLineChoice1Letter->SetKerning(3.f);
	TextLineChoice1Letter->SetupAttachment(DummyRootA);

	TextLineChoice1Bracket = CreateDefaultSubobject<UText3DComponent>(TEXT("TextOption1Bracket"));
	TextLineChoice1Bracket->SetRelativeLocation(FVector(0.f,0.f,230.f));
	TextLineChoice1Bracket->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextLineChoice1Bracket->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextLineChoice1Bracket->SetText(FText::FromString("[                                                             ]"));
	TextLineChoice1Bracket->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextLineChoice1Bracket->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextLineChoice1Bracket->SetExtrude(20.f);
	TextLineChoice1Bracket->SetKerning(3.f);
	TextLineChoice1Bracket->SetupAttachment(DummyRootA);


	TextLineChoice2 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextOption2"));
	TextLineChoice2->SetRelativeLocation(FVector(300.f,0.f,230.f));
	TextLineChoice2->SetRelativeRotation(FRotator(270.f,0.f,180.f));;//SetRelativeRotation(FRotator(90.f,0.f,0.f));
	TextLineChoice2->SetText(FText::FromString("TextOption2"));
	TextLineChoice2->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextLineChoice2->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextLineChoice2->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextLineChoice2->SetExtrude(20.f);
	TextLineChoice2->SetKerning(3.f);
	TextLineChoice2->SetupAttachment(DummyRootB);

	TextLineChoice2Letter = CreateDefaultSubobject<UText3DComponent>(TEXT("TextLineChoice2Letter"));
	TextLineChoice2Letter->SetRelativeLocation(FVector(300.f,0.f,230.f));
	TextLineChoice2Letter->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextLineChoice2Letter->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextLineChoice2Letter->SetText(FText::FromString("TextLineChoice2Letter"));
	TextLineChoice2Letter->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextLineChoice2Letter->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextLineChoice2Letter->SetExtrude(20.f);
	TextLineChoice2Letter->SetKerning(3.f);
	TextLineChoice2Letter->SetupAttachment(DummyRootB);


	TextLineChoice2Bracket = CreateDefaultSubobject<UText3DComponent>(TEXT("TextOption2Bracket"));
	TextLineChoice2Bracket->SetRelativeLocation(FVector(0.f,0.f,230.f));
	TextLineChoice2Bracket->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextLineChoice2Bracket->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextLineChoice2Bracket->SetText(FText::FromString("[                                                             ]"));
	TextLineChoice2Bracket->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextLineChoice2Bracket->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextLineChoice2Bracket->SetExtrude(20.f);
	TextLineChoice2Bracket->SetKerning(3.f);
	TextLineChoice2Bracket->SetupAttachment(DummyRootB);

	TextUnderline = CreateDefaultSubobject<UText3DComponent>(TEXT("TextUnderline"));
	TextUnderline->SetRelativeLocation(FVector(300.f,0.f,230.f));
	TextUnderline->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextUnderline->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextUnderline->SetText(FText::FromString("________________________"));
	TextUnderline->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextUnderline->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextUnderline->SetExtrude(20.f);
	TextUnderline->SetKerning(3.f);
	TextUnderline->SetupAttachment(DummyRoot);

	BlockQuestion = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockQuestion"));
	BlockQuestion->SetRelativeLocation(FVector(0.f, 0.f, 0.f));


	struct FConstructorStaticsItems
	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> BoxMesh;
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> PlaneShade;
		
		FConstructorStaticsItems()
			: BoxMesh(TEXT("/Game/Meshes/BoxMesh.BoxMesh")), 
			PlaneShade(TEXT("/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane"))
		{
		}
	};
	
	static FConstructorStaticsItems ConstructorStaticsItems;
	
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneAssetBox(TEXT("/Game/Meshes/BoxMesh"));

	// if (PlaneAssetBox.Succeeded())
	// {
	// 	BlockQuestion->SetStaticMesh(PlaneAssetBox.Object);
	// 	BlockQuestion->SetupAttachment(DummyRoot);
	// }

	BlockQuestion->SetStaticMesh(ConstructorStaticsItems.BoxMesh.Get());
	BlockQuestion->SetupAttachment(DummyRoot);





	PlaneShade1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaneShade1"));
	PlaneShade2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaneShade2"));
	
	PlaneShade1->SetStaticMesh(ConstructorStaticsItems.PlaneShade.Get());
	PlaneShade1->SetupAttachment(DummyRootA);

	PlaneShade2->SetStaticMesh(ConstructorStaticsItems.PlaneShade.Get());
	PlaneShade2->SetupAttachment(DummyRootB);

	// static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneAsset(TEXT("/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane"));

	// if (PlaneAsset.Succeeded())
	// {
	// 	PlaneShade1->SetStaticMesh(PlaneAsset.Object);
	// 	PlaneShade1->SetupAttachment(DummyRootA);

	// 	PlaneShade2->SetStaticMesh(PlaneAsset.Object);
	// 	PlaneShade2->SetupAttachment(DummyRootB);
	// }

	
	
	DummyRootA->SetupAttachment(DummyRoot);
	DummyRootB->SetupAttachment(DummyRoot);
}

// Called when the game starts or when spawned
void AMulChoiceItem::BeginPlay()
{
	Super::BeginPlay();
	FVector vectorShade1 = PlaneShade1->GetRelativeLocation();
	vectorShade1.X=-120;
	PlaneShade1->SetRelativeLocation(vectorShade1);
}

// Called every frame
void AMulChoiceItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AMulChoiceItem::RemoveHighlight()
{

		FVector vectorShade1 = PlaneShade1->GetRelativeLocation();
		vectorShade1.Z=-8000;
		PlaneShade1->SetRelativeLocation(vectorShade1);

		FVector vectorShade2 = PlaneShade2->GetRelativeLocation();
		vectorShade2.Z=-8000;
		PlaneShade2->SetRelativeLocation(vectorShade2);


		FVector vector1 = TextLineChoice1Bracket->GetRelativeLocation();
		vector1.Z=-8000;
		TextLineChoice1Bracket->SetRelativeLocation(vector1);

		FVector vector2 = TextLineChoice2Bracket->GetRelativeLocation();
		vector2.Z=-8000;
		TextLineChoice2Bracket->SetRelativeLocation(vector2);


		


}
void AMulChoiceItem::PassTimelineDownToCenter(float value)
{
	//FVector newPosition = OwningGrid->SplineDownToCenterSelection->GetLocationAtTime(value, ESplineCoordinateSpace::World, true);
	//DummyRoot->SetRelativeLocation(newPosition);

	 if(FAnimateType.ToUpper()=="A")
	{
		ResetAll();
		DummyRoot->SetRelativeLocation(FVector(0,0,200));
		FVector vector1 = DummyRootA->GetRelativeLocation();
		vector1.X = 180+value;

		FVector vectorShade1 = PlaneShade1->GetRelativeLocation();
		vectorShade1.Z=-8000;
		
		DummyRootA->SetRelativeLocation(vector1);
		PlaneShade1->SetRelativeLocation(vectorShade1);


		// FVector vectorShade2 = PlaneShade2->GetRelativeLocation();
		// vectorShade2.Z=-8000;
		// PlaneShade2->SetRelativeLocation(vectorShade2);

		DummyRootB->SetRelativeLocation(FVector(0,0,-8000));

		// FVector vector2 = TextLineChoice2Bracket->GetRelativeLocation();
		// vector2.Z=230;
		// TextLineChoice2Bracket->SetRelativeLocation(vector2);
	
		//PlaneShade1->SetMaterial(0,PurpleGlowMaterialPlane);
	
	}
	else{
		//DummyRootB->SetRelativeLocation(FVector(0,0,0));
		//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, FString::SanitizeFloat(value));
		//PlaneShade->SetRelativeLocation(FVector(250,0,0));
	
		//TextLine2->SetVisibility(true);
		DummyRootB->SetRelativeLocation(FVector(900+value,0,0));
	

	
		FVector vectorShade2 = PlaneShade2->GetRelativeLocation();
		vectorShade2.Z=-8000;
		PlaneShade2->SetRelativeLocation(vectorShade2);

		// FVector vectorShade1 = PlaneShade1->GetRelativeLocation();
		// vectorShade1.Z=-8000;
		// PlaneShade1->SetRelativeLocation(vectorShade1);

		// FVector vector1 = TextLineChoice1Bracket->GetRelativeLocation();
		// vector1.Z=230;
		// TextLineChoice1Bracket->SetRelativeLocation(vector1);

		//PlaneShade2->SetMaterial(0,PurpleGlowMaterialPlane);
	}

}

void AMulChoiceItem::SetAnswerAndProcess(FString answer)
{
		RemoveHighlight();
// //
// 		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, answer);
// 		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, FAnimateType);
		if(FAnimateType!=answer && FAnimateType=="A")
		{

			TextLineChoice1->SetBevelMaterial(RedGlowMaterial);
			TextLineChoice1->SetFrontMaterial(RedMaterial);
			TextLineChoice1->SetExtrudeMaterial(RedGlowMaterial);

			TextLineChoice1Letter->SetBevelMaterial(RedGlowMaterial);
			TextLineChoice1Letter->SetFrontMaterial(RedMaterial);
			TextLineChoice1Letter->SetExtrudeMaterial(RedGlowMaterial);
			


			TextLineChoice2->SetBevelMaterial(BaseBevelMaterial);
			TextLineChoice2->SetFrontMaterial(BaseMaterialGlow);
			TextLineChoice2->SetExtrudeMaterial(BaseExtrudeMaterial);

			TextLineChoice2Letter->SetBevelMaterial(BaseBevelMaterial);
			TextLineChoice2Letter->SetFrontMaterial(BaseMaterialGlow);
			TextLineChoice2Letter->SetExtrudeMaterial(BaseExtrudeMaterial);


			FVector vector2 = TextLineChoice2Bracket->GetRelativeLocation();
			vector2.Z=230;
			TextLineChoice2Bracket->SetRelativeLocation(vector2);

			
			// FVector vectorShade2 = PlaneShade2->GetRelativeLocation();
			// vectorShade2.Z=0;
			
			// PlaneShade2->SetMaterial(0, CorrectAnswerBack);
			// PlaneShade2->SetRelativeLocation(vectorShade2);


			// FVector vectorShade1 = PlaneShade1->GetRelativeLocation();
			// vectorShade1.Z=0;
			

			
			// PlaneShade1->SetRelativeLocation(vectorShade1);

			// PlaneShade1->SetMaterial(0, RedGlowMaterialPlane);

			
			

		}
		else if(FAnimateType!=answer && FAnimateType=="B")
		{
			TextLineChoice2->SetBevelMaterial(RedGlowMaterial);
			TextLineChoice2->SetFrontMaterial(RedMaterial);
			TextLineChoice2->SetExtrudeMaterial(RedGlowMaterial);

			TextLineChoice2Letter->SetBevelMaterial(RedGlowMaterial);
			TextLineChoice2Letter->SetFrontMaterial(RedMaterial);
			TextLineChoice2Letter->SetExtrudeMaterial(RedGlowMaterial);


			TextLineChoice1->SetBevelMaterial(BaseBevelMaterial);
			TextLineChoice1->SetFrontMaterial(BaseMaterialGlow);
			TextLineChoice1->SetExtrudeMaterial(BaseExtrudeMaterial);

			TextLineChoice1Letter->SetBevelMaterial(BaseBevelMaterial);
			TextLineChoice1Letter->SetFrontMaterial(BaseMaterialGlow);
			TextLineChoice1Letter->SetExtrudeMaterial(BaseExtrudeMaterial);

			FVector vector1 = TextLineChoice1Bracket->GetRelativeLocation();
			vector1.Z=230;
			TextLineChoice1Bracket->SetRelativeLocation(vector1);

			// FVector vectorShade1 = PlaneShade1->GetRelativeLocation();
			// vectorShade1.Z=0;
			
			// PlaneShade1->SetMaterial(0, CorrectAnswerBack);
			// PlaneShade1->SetRelativeLocation(vectorShade1);

			// FVector vectorShade2 = PlaneShade2->GetRelativeLocation();
			// vectorShade2.Z=0;
			
			// PlaneShade2->SetRelativeLocation(vectorShade2);
			// PlaneShade2->SetMaterial(0, RedGlowMaterialPlane);
		}
		else if(FAnimateType==answer && FAnimateType=="A")
		{

			TextLineChoice1->SetBevelMaterial(GreenGlowMaterial);
			TextLineChoice1->SetFrontMaterial(GreenMaterial);
			TextLineChoice1->SetExtrudeMaterial(GreenGlowMaterial);

			TextLineChoice1Letter->SetBevelMaterial(GreenGlowMaterial);
			TextLineChoice1Letter->SetFrontMaterial(GreenMaterial);
			TextLineChoice1Letter->SetExtrudeMaterial(GreenGlowMaterial);

			
			// FVector vector1 = TextLineChoice1Bracket->GetRelativeLocation();
			// vector1.Z=230;
			// TextLineChoice1Bracket->SetRelativeLocation(vector1);

			
			// TextLineChoice1Bracket->SetBevelMaterial(GreenGlowMaterial);
			// TextLineChoice1Bracket->SetExtrudeMaterial(GreenMaterial);

			// FVector vectorShade1 = PlaneShade1->GetRelativeLocation();
			// vectorShade1.Z=0;
			
			// PlaneShade1->SetRelativeLocation(vectorShade1);
			// PlaneShade1->SetMaterial(0, GreenGlowMaterialPlane);
		}
		else if(FAnimateType==answer && FAnimateType=="B")
		{
			TextLineChoice2->SetBevelMaterial(GreenGlowMaterial);
			TextLineChoice2->SetFrontMaterial(GreenMaterial);
			TextLineChoice2->SetExtrudeMaterial(GreenGlowMaterial);

			TextLineChoice2Letter->SetBevelMaterial(GreenGlowMaterial);
			TextLineChoice2Letter->SetFrontMaterial(GreenMaterial);
			TextLineChoice2Letter->SetExtrudeMaterial(GreenGlowMaterial);

			
			
			// FVector vector2 = TextLineChoice2Bracket->GetRelativeLocation();
			// vector2.Z=230;
			// TextLineChoice2Bracket->SetRelativeLocation(vector2);

			
			// TextLineChoice2Bracket->SetBevelMaterial(GreenGlowMaterial);
			// TextLineChoice2Bracket->SetExtrudeMaterial(GreenMaterial);
			// FVector vectorShade2 = PlaneShade2->GetRelativeLocation();
			// vectorShade2.Z=0;
			
			// PlaneShade2->SetRelativeLocation(vectorShade2);
			// PlaneShade2->SetMaterial(0, GreenGlowMaterialPlane);
		}
}


void AMulChoiceItem::ResetAll()
{
		
		FVector vectorShade1 = PlaneShade1->GetRelativeLocation();
		vectorShade1.Z=-8000;
		PlaneShade1->SetRelativeLocation(vectorShade1);

		FVector vectorShade2 = PlaneShade2->GetRelativeLocation();
		vectorShade2.Z=-8000;
		PlaneShade2->SetRelativeLocation(vectorShade2);


		FVector vector1 = TextLineChoice1Bracket->GetRelativeLocation();
		vector1.Z=-8000;
		TextLineChoice1Bracket->SetRelativeLocation(vector1);

		FVector vector2 = TextLineChoice2Bracket->GetRelativeLocation();
		vector2.Z=-8000;
		TextLineChoice2Bracket->SetRelativeLocation(vector2);


		PlaneShade1->SetMaterial(0,PurpleGlowMaterialPlane);
		PlaneShade2->SetMaterial(0,PurpleGlowMaterialPlane);


		TextLineChoice1->SetBevelMaterial(PurpleMaterial);
		TextLineChoice1->SetFrontMaterial(BaseMaterial);
		TextLineChoice1->SetExtrudeMaterial(PurpleMaterial);

		TextLineChoice1Letter->SetBevelMaterial(PurpleMaterial);
		TextLineChoice1Letter->SetFrontMaterial(BaseMaterial);
		TextLineChoice1Letter->SetExtrudeMaterial(PurpleMaterial);

		TextLineChoice2->SetBevelMaterial(PurpleMaterial);
		TextLineChoice2->SetFrontMaterial(BaseMaterial);
		TextLineChoice2->SetExtrudeMaterial(PurpleMaterial);

		TextLineChoice2Letter->SetBevelMaterial(PurpleMaterial);
		TextLineChoice2Letter->SetFrontMaterial(BaseMaterial);
		TextLineChoice2Letter->SetExtrudeMaterial(PurpleMaterial);


			
		// TextLineChoice2Bracket->SetBevelMaterial(BaseBevelMaterial);
		// TextLineChoice2Bracket->SetExtrudeMaterial(BaseExtrudeMaterial);
			
		// TextLineChoice2Bracket->SetBevelMaterial(BaseBevelMaterial);
		// TextLineChoice2Bracket->SetExtrudeMaterial(BaseExtrudeMaterial);
		
}



void AMulChoiceItem::PassTimelineAnimateBoxQuestion(float value)
{
		FVector newPosition = FVector(-1236.0,-430.0,-750);
		newPosition.Z=value;
		BlockQuestion->SetRelativeLocation(newPosition);
}



void AMulChoiceItem::PassTimelineCenterToTop(float value)
{
		FVector newPosition = OwningGrid->SplineCenterToUpSelection->GetLocationAtTime(value, ESplineCoordinateSpace::World, true);
		DummyRoot->SetRelativeLocation(newPosition);
}

void AMulChoiceItem::SelectedItem(FString strLetter)
{
	FAnimateType=strLetter;
}

void AMulChoiceItem::Highlight()
{
	
		
		// TextLineChoice2->SetBevelMaterial(BlueMaterial);
		// TextLineChoice2->SetFrontMaterial(BaseMaterial);
		// TextLineChoice2->SetExtrudeMaterial(BlueMaterial);

		// TextLineChoice2Letter->SetBevelMaterial(BlueMaterial);
		// TextLineChoice2Letter->SetFrontMaterial(BaseMaterial);
		// TextLineChoice2Letter->SetExtrudeMaterial(BlueMaterial);


	if(FAnimateType=="A")
	{
		// FVector vectorShade1 = PlaneShade1->GetRelativeLocation();
		// vectorShade1.Z=0;
		// PlaneShade1->SetRelativeLocation(vectorShade1);
		// PlaneShade1->SetMaterial(0,YellowGlowMaterialPlane);


		// FVector vectorShade2 = PlaneShade2->GetRelativeLocation();
		// vectorShade2.Z=-8000;
		// PlaneShade2->SetRelativeLocation(vectorShade2);
		

		// TextLineChoice1->SetBevelMaterial(BlueMaterial);
		TextLineChoice1->SetFrontMaterial(BaseBevelMaterial);
		// TextLineChoice1->SetExtrudeMaterial(BlueMaterial);

	//	TextLineChoice1Letter->SetBevelMaterial(BlueMaterial);
		TextLineChoice1Letter->SetFrontMaterial(BaseBevelMaterial);
		//TextLineChoice1Letter->SetExtrudeMaterial(BlueMaterial);

		
	}
	else
	{
		

		
		TextLineChoice2->SetFrontMaterial(BaseBevelMaterial);
		TextLineChoice2Letter->SetFrontMaterial(BaseBevelMaterial);


		// FVector vectorShade2 = PlaneShade2->GetRelativeLocation();
		// vectorShade2.Z=0;
		// PlaneShade2->SetRelativeLocation(vectorShade2);
		// PlaneShade2->SetMaterial(0,YellowGlowMaterialPlane);

		
		// FVector vectorShade1 = PlaneShade1->GetRelativeLocation();
		// vectorShade1.Z=-8000;
		// PlaneShade1->SetRelativeLocation(vectorShade1);
	}
}
 
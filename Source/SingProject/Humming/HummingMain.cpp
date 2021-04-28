// Fill out your copyright notice in the Description page of Project Settings.

#include "HummingMain.h"
#include "../LineSingerName.h"


// Sets default values
AHummingMain::AHummingMain()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	DummyRootInfo = CreateDefaultSubobject<USceneComponent>(TEXT("DummyRootInfo"));
	DummyRootInfo->SetupAttachment(DummyRoot);

	DummyRootRotator = CreateDefaultSubobject<USceneComponent>(TEXT("DummyRootRotator"));
	DummyRootRotator->SetupAttachment(DummyRoot);

	TextQuestion = CreateDefaultSubobject<UText3DComponent>(TEXT("TextQuestion"));
	TextQuestion->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextQuestion->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextQuestion->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextQuestion->SetText(FText::FromString("TextQuestion"));
	TextQuestion->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextQuestion->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextQuestion->SetExtrude(20.f);
	TextQuestion->SetKerning(2.f);
	TextQuestion->SetupAttachment(DummyRootRotator);

	
	TextTitle1 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextTitle1"));
	TextTitle1->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextTitle1->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextTitle1->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextTitle1->SetText(FText::FromString("TextTitle1"));
	TextTitle1->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextTitle1->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextTitle1->SetExtrude(20.f);
	TextTitle1->SetKerning(2.f);
	TextTitle1->SetupAttachment(DummyRootInfo);

	TextTitle2 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextTitle2"));
	TextTitle2->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextTitle2->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextTitle2->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextTitle2->SetText(FText::FromString("TextTitle2"));
	TextTitle2->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextTitle2->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextTitle2->SetExtrude(20.f);
	TextTitle2->SetKerning(2.f);
	TextTitle2->SetupAttachment(DummyRootInfo);

	TextAnswer = CreateDefaultSubobject<UText3DComponent>(TEXT("TextAnswer"));
	TextAnswer->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextAnswer->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextAnswer->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextAnswer->SetText(FText::FromString("TextAnswer"));
	TextAnswer->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextAnswer->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextAnswer->SetExtrude(20.f);
	TextAnswer->SetKerning(2.f);
	TextAnswer->SetupAttachment(DummyRootRotator);


	TextAnswer1 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextAnswer1"));
	TextAnswer1->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextAnswer1->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextAnswer1->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextAnswer1->SetText(FText::FromString("TextAnswer1"));
	TextAnswer1->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextAnswer1->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextAnswer1->SetExtrude(20.f);
	TextAnswer1->SetKerning(2.f);
	TextAnswer1->SetupAttachment(DummyRootRotator);

	TextAnswer2 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextAnswer2"));
	TextAnswer2->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextAnswer2->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextAnswer2->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextAnswer2->SetText(FText::FromString("TextAnswer2"));
	TextAnswer2->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextAnswer2->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextAnswer2->SetExtrude(20.f);
	TextAnswer2->SetKerning(2.f);
	TextAnswer2->SetupAttachment(DummyRootRotator);

	
	TextInfo1 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextInfo1"));
	TextInfo1->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextInfo1->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextInfo1->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextInfo1->SetText(FText::FromString("TextInfo1"));
	TextInfo1->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextInfo1->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextInfo1->SetExtrude(20.f);
	TextInfo1->SetKerning(2.f);
	TextInfo1->SetupAttachment(DummyRootInfo);

	TextInfo2 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextInfo2"));
	TextInfo2->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextInfo2->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextInfo2->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextInfo2->SetText(FText::FromString("TextInfo2"));
	TextInfo2->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextInfo2->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextInfo2->SetExtrude(20.f);
	TextInfo2->SetKerning(2.f);
	TextInfo2->SetupAttachment(DummyRootInfo);


	TextInfo3 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextInfo3"));
	TextInfo3->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextInfo3->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextInfo3->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextInfo3->SetText(FText::FromString("TextInfo3"));
	TextInfo3->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextInfo3->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextInfo3->SetExtrude(20.f);
	TextInfo3->SetKerning(2.f);
	TextInfo3->SetupAttachment(DummyRootInfo);

	TextInfo4 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextInfo4"));
	TextInfo4->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextInfo4->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextInfo4->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextInfo4->SetText(FText::FromString("TextInfo4"));
	TextInfo4->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextInfo4->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextInfo4->SetExtrude(20.f);
	TextInfo4->SetKerning(2.f);
	TextInfo4->SetupAttachment(DummyRootInfo);

	TextInfoFrame = CreateDefaultSubobject<UText3DComponent>(TEXT("TextInfoFrame"));
	TextInfoFrame->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextInfoFrame->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextInfoFrame->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextInfoFrame->SetText(FText::FromString("TextInfoFrame"));
	TextInfoFrame->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextInfoFrame->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextInfoFrame->SetExtrude(20.f);
	TextInfoFrame->SetKerning(2.f);
	TextInfoFrame->SetupAttachment(DummyRootInfo);


	TextInfoArtist1 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextInfoArtist1"));
	TextInfoArtist1->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextInfoArtist1->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextInfoArtist1->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextInfoArtist1->SetText(FText::FromString("TextInfoArtist1"));
	TextInfoArtist1->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextInfoArtist1->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextInfoArtist1->SetExtrude(20.f);
	TextInfoArtist1->SetKerning(2.f);
	TextInfoArtist1->SetupAttachment(DummyRootInfo);



	TextInfoArtist2 = CreateDefaultSubobject<UText3DComponent>(TEXT("TextInfoArtist2"));
	TextInfoArtist2->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextInfoArtist2->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextInfoArtist2->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextInfoArtist2->SetText(FText::FromString("TextInfoArtist2"));
	TextInfoArtist2->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextInfoArtist2->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextInfoArtist2->SetExtrude(20.f);
	TextInfoArtist2->SetKerning(2.f);
	TextInfoArtist2->SetupAttachment(DummyRootInfo);

	


	Cylinder1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cylinder1"));
	Cylinder2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cylinder2"));
	Cylinder3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cylinder3"));
	
	Block = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Block"));
	Block2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Block2"));
	
	BlockInfo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockInfo"));
	BlockInfo2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockInfo2"));

	struct FConstructorStaticsItems
	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> ShapeCylinder;
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> ShapePlane;

		FConstructorStaticsItems():
			 ShapeCylinder(TEXT("/Game/StarterContent/Shapes/Shape_Cylinder")),
			 ShapePlane(TEXT("/Game/StarterContent/Shapes/Shape_Cube"))
		{
		}
	};
	
	static FConstructorStaticsItems ConstructorStaticsItems;
	

	Cylinder1->SetStaticMesh(ConstructorStaticsItems.ShapeCylinder.Get());
	Cylinder1->SetupAttachment(DummyRootRotator);

	Cylinder2->SetStaticMesh(ConstructorStaticsItems.ShapeCylinder.Get());
	Cylinder2->SetupAttachment(DummyRootRotator);

	Cylinder3->SetStaticMesh(ConstructorStaticsItems.ShapeCylinder.Get());
	Cylinder3->SetupAttachment(DummyRootRotator);

	Block->SetStaticMesh(ConstructorStaticsItems.ShapePlane.Get());
	Block->SetupAttachment(DummyRootRotator);

	Block2->SetStaticMesh(ConstructorStaticsItems.ShapePlane.Get());
	Block2->SetupAttachment(DummyRootRotator);
	
	
	BlockInfo->SetStaticMesh(ConstructorStaticsItems.ShapePlane.Get());
	BlockInfo->SetupAttachment(DummyRootInfo);

	BlockInfo2->SetStaticMesh(ConstructorStaticsItems.ShapePlane.Get());
	BlockInfo2->SetupAttachment(DummyRootInfo);

}



void AHummingMain::PassValue(FString value)
{

	TSharedPtr<FJsonObject> JsonObject;
	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(value);
	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Blue, value);
	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{
		FString strEventName = JsonObject->GetStringField("eventName");
		
		if (strEventName == "Select")
		{
			// /*Name*/
			// 	FString strName = Item1->GetStringField("strName");
				
			// 	if(strName!="")
			// 	{
			// 		SingerName->TextSingerName->SetText(FText::FromString(strName));
			// 		SingerName->Blink();	
			// 	}
			// 	else
			// 	{
			// 		SingerName->TextSingerName->SetText(FText::FromString("EVERYBODY SING"));
			// 	}
			// /*End Name*/

			TSharedPtr<FJsonObject> objItem = JsonObject->GetObjectField("value");

			FString title1 = objItem->GetStringField("title1");
			FString title2 = objItem->GetStringField("title2");

			FString artist1 = objItem->GetStringField("artist1");
			FString artist2 = objItem->GetStringField("artist2");

			TextInfo1->SetText(FText::FromString(""));
			TextTitle1->SetText(FText::FromString(""));
			TextTitle2->SetText(FText::FromString(""));
			
			TextInfo2->SetText(FText::FromString(""));
			TextInfoArtist1->SetText(FText::FromString(""));
			TextInfoArtist2->SetText(FText::FromString(""));
			
			TextQuestion->SetText(FText::FromString(""));
			TextAnswer->SetText(FText::FromString(""));

			TextAnswer1->SetText(FText::FromString(""));
			TextAnswer2->SetText(FText::FromString(""));


			if(title2=="")
			{					
				TextInfo1->SetText(FText::FromString(title1));
			}
			else
			{
				TextTitle1->SetText(FText::FromString(title1));
				TextTitle2->SetText(FText::FromString(title1));
			}

			

			if(artist2=="")
			{					
				TextInfo2->SetText(FText::FromString(artist1));
			}
			else
			{
				TextInfoArtist1->SetText(FText::FromString(artist1));
				TextInfoArtist2->SetText(FText::FromString(artist2));
			}
			
			

			FString artistName1 = objItem->GetStringField("artistName1");
			FString artistName2 = objItem->GetStringField("artistName2");


			if(title2=="")
			{					
				TextInfo1->SetText(FText::FromString(title1));
			}
			else
			{
				TextTitle1->SetText(FText::FromString(title1));
				TextTitle2->SetText(FText::FromString(title2));
			}
			
			
			FString answer1 = objItem->GetStringField("answer1");
			FString answer2 = objItem->GetStringField("answer2");
			
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, answer1);

			TextQuestion->SetText(FText::FromString(objItem->GetStringField("question")));
			//TextAnswer->SetText(FText::FromString(objItem->GetStringField("answer")));


			if(answer2=="")
			{					
				TextAnswer->SetText(FText::FromString(answer1));
			}
			else
			{
				TextAnswer1->SetText(FText::FromString(answer1));
				TextAnswer2->SetText(FText::FromString(answer2));
			}
			

			
			// FVector fAnswer = TextAnswer->GetRelativeLocation();
			// FVector fQuestion = TextQuestion->GetRelativeLocation();

			// fAnswer.Z=-6000;
			// fQuestion.Z=500;

			// TextAnswer->SetRelativeLocation(fAnswer);
			// TextQuestion->SetRelativeLocation(fQuestion);

			// FVector fAnswer1 = TextAnswer1->GetRelativeLocation();
			// fAnswer1.Z=-6000;
			// TextAnswer1->SetRelativeLocation(fAnswer1);

			// FVector fAnswer2 = TextAnswer2->GetRelativeLocation();
			// fAnswer2.Z=-6000;
			// TextAnswer2->SetRelativeLocation(fAnswer2);
			
			StartReset();
			StartZoom();
			
			
		}
		else if (strEventName == "reset")
		{
			voidReset();

			PassMaterialText(TextAnswer, PurpleGlow, OrangeMaterial, OrangeMaterial);
			PassMaterialText(TextAnswer1, PurpleGlow, OrangeMaterial, OrangeMaterial);
			PassMaterialText(TextAnswer2, PurpleGlow, OrangeMaterial, OrangeMaterial);
			Block2->SetMaterial(0, PurpleGlow);

			// PassMaterialText(TextAnswer, PurpleGlow, GreenMaterialMed, GreenMaterial);
			// //PassMaterialText(TextQuestion, PurpleGlow, GreenMaterialMed, GreenMaterial);
			
			// PassMaterialText(TextTitle1, PurpleGlow, GreenMaterialMed, GreenMaterial);
			// PassMaterialText(TextTitle2, PurpleGlow, GreenMaterialMed, GreenMaterial);
			// PassMaterialText(TextInfo1, PurpleGlow, GreenMaterialMed, GreenMaterial);
			// PassMaterialText(TextInfo2, PurpleGlow, GreenMaterialMed, GreenMaterial);
			// PassMaterialText(TextInfo3, PurpleGlow, GreenMaterialMed, GreenMaterial);
			// //PassMaterialText(TextInfo4, GreenGlow, GreenMaterialMed, GreenMaterial);

			// PassMaterialText(TextInfoArtist1, PurpleGlow, GreenMaterialMed, GreenMaterial);
			// PassMaterialText(TextInfoArtist2, PurpleGlow, GreenMaterialMed, GreenMaterial);


			//TextInfoFrame->SetBevelMaterial(PurpleGlow);

			// PassMaterial(BlockInfo, PurpleGlow);
			// PassMaterial(BlockInfo2, PurpleGlow);
			
			//DummyRootInfo->SetRelativeLocation(FVector(0,-200,-80000.0));


			StartReset();
		}
		else if (strEventName == "Correct")
		{
			// PassMaterialText(TextAnswer, GreenMaterial, GreenGlow, GreenMaterial);
			
			// PassMaterialText(TextTitle1, GreenMaterial, GreenGlow, GreenMaterial);
			// PassMaterialText(TextTitle2, GreenMaterial, GreenGlow, GreenMaterial);
			// PassMaterialText(TextInfo1, GreenMaterial, GreenGlow, GreenMaterial);
			// PassMaterialText(TextInfo2, GreenMaterial, GreenGlow, GreenMaterial);
			// PassMaterialText(TextInfo3, GreenMaterial, GreenGlow, GreenMaterial);

			// PassMaterialText(TextInfoArtist1, GreenMaterial, GreenGlow, GreenMaterial);
			// PassMaterialText(TextInfoArtist2, GreenMaterial, GreenGlow, GreenMaterial);


			//TextInfoFrame->SetBevelMaterial(GreenGlow);

			// PassMaterial(BlockInfo, GreenGlow);
			// PassMaterial(BlockInfo2, GreenGlow);

			PassMaterialText(TextAnswer, GreenGlow, GreenMaterial, GreenMaterial);
			PassMaterialText(TextAnswer1, GreenGlow, GreenMaterial, GreenMaterial);
			PassMaterialText(TextAnswer2, GreenGlow, GreenMaterial, GreenMaterial);
			Block2->SetMaterial(0, GreenGlow);
			Cylinder2->SetMaterial(0, GreenGlow);

			DummyRootInfo->SetRelativeLocation(FVector(0,-200,1560.0));

			StartAnimateLine();
		}
		else if (strEventName == "Incorrect")
		{
			
			PassMaterialText(TextAnswer, RedGlow, RedMaterialMed, RedMaterial);
			PassMaterialText(TextAnswer1, RedGlow, RedMaterialMed, RedMaterial);
			PassMaterialText(TextAnswer2, RedGlow, RedMaterialMed, RedMaterial);
			Block2->SetMaterial(0, RedGlow);
			Cylinder2->SetMaterial(0, RedGlow);
			// PassMaterialText(TextAnswer, RedGlow, RedMaterialMed, RedMaterial);
			
			// PassMaterialText(TextTitle1, RedGlow, RedMaterialMed, RedMaterial);
			// PassMaterialText(TextTitle2, RedGlow, RedMaterialMed, RedMaterial);
			// PassMaterialText(TextInfo1, RedGlow, RedMaterialMed, RedMaterial);
			// PassMaterialText(TextInfo2, RedGlow, RedMaterialMed, RedMaterial);
			// PassMaterialText(TextInfo3, RedGlow, RedMaterialMed, RedMaterial);
			

			// PassMaterialText(TextInfoArtist1, RedGlow, RedMaterialMed, RedMaterial);
			// PassMaterialText(TextInfoArtist2, RedGlow, RedMaterialMed, RedMaterial);


			// TextInfoFrame->SetBevelMaterial(RedGlow);

			// PassMaterial(BlockInfo, RedGlow);
			// PassMaterial(BlockInfo2, RedGlow);

			DummyRootInfo->SetRelativeLocation(FVector(0,-200,1560.0));

			
			StartAnimateLine();
			
		}
		else if (strEventName == "Humming")
		{
			FString strForce=JsonObject->GetStringField("force");
			if(strForce=="true") //force to load
			UGameplayStatics::OpenLevel(this, "HummingMap", false);
		}
		else if (strEventName == "Jackpot")
		{
			UGameplayStatics::OpenLevel(this, "JackpotMap");
		}
		else if (strEventName == "ImageActor")
		{
			UGameplayStatics::OpenLevel(this, "PuzzleExampleMapLevel2");
		}
		else if (strEventName == "BlankActor")
		{
			UGameplayStatics::OpenLevel(this, "PuzzleExampleMap");
		}
		else if (strEventName == "WordCloud")
		{
			UGameplayStatics::OpenLevel(this, "WordCloudMap");
		}
		else if (strEventName == "MultipleChoice")
		{
			UGameplayStatics::OpenLevel(this, "MultipleChoiceMap");
		}
	}
}

void AHummingMain::voidReset()
{
			TextInfo1->SetText(FText::FromString(""));
			TextTitle1->SetText(FText::FromString(""));
			TextTitle2->SetText(FText::FromString(""));
			
			TextInfo2->SetText(FText::FromString(""));
			TextInfoArtist1->SetText(FText::FromString(""));
			TextInfoArtist2->SetText(FText::FromString(""));
			
			TextQuestion->SetText(FText::FromString(""));
			TextAnswer->SetText(FText::FromString(""));

			// FVector fAnswer = TextAnswer->GetRelativeLocation();
			// FVector fQuestion = TextQuestion->GetRelativeLocation();

			// fAnswer.Z=-6000;
			// fQuestion.Z=-6000;

			// TextAnswer->SetRelativeLocation(fAnswer);
			// TextQuestion->SetRelativeLocation(fQuestion);

			
			// FVector fAnswer1 = TextAnswer1->GetRelativeLocation();
			// fAnswer1.Z=-6000;
			// TextAnswer1->SetRelativeLocation(fAnswer1);

			// FVector fAnswer2 = TextAnswer2->GetRelativeLocation();
			// fAnswer2.Z=-6000;
			// TextAnswer2->SetRelativeLocation(fAnswer2);
			
}

void AHummingMain::PassMaterialText(UText3DComponent* value, UMaterial* front, UMaterial* bevel, UMaterial* extrude)
{
		value->SetFrontMaterial(front);
		value->SetBevelMaterial(bevel);
		value->SetExtrudeMaterial(extrude);
			
}

void AHummingMain::PassMaterial(UStaticMeshComponent* value, UMaterial* material)
{
	value->SetMaterial(0, material);
}
// Called when the game starts or when spawned
void AHummingMain::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHummingMain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


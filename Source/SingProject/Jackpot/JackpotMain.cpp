// Fill out your copyright notice in the Description page of Project Settings.

#include "JackpotMain.h"

// Sets default values
AJackpotMain::AJackpotMain()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	TextAnswerX = CreateDefaultSubobject<UText3DComponent>(TEXT("TextAnswerX"));
	TextAnswerX->SetRelativeLocation(FVector(0.f,0.f,0.f));
	TextAnswerX->SetRelativeRotation(FRotator(270.f,0.f,180.f));
	TextAnswerX->SetRelativeScale3D(FVector(5.f,5.f,5.f));
	TextAnswerX->SetText(FText::FromString("TextAnswerLine2"));
	TextAnswerX->SetHorizontalAlignment(EText3DHorizontalTextAlignment::Center);
	TextAnswerX->SetVerticalAlignment(EText3DVerticalTextAlignment::FirstLine);
	TextAnswerX->SetExtrude(20.f);
	TextAnswerX->SetKerning(2.f);
	TextAnswerX->SetupAttachment(DummyRoot);

	

}

// Called when the game starts or when spawned
void AJackpotMain::BeginPlay()
{
	Super::BeginPlay();
	
	//httpCaller = GetWorld()->SpawnActor<ASingProjectHttp>(FVector(0,0,0), FRotator(0,0,0));
	//httpCaller->jackpotMain=this;
	//->CallingClass="JackpotMain";

	

		if (arrLineActor.Num() == 0)
		{
			arrLineActor.Empty();
			arrLineActor.Add(j1);
			arrLineActor.Add(j2);
			arrLineActor.Add(j3);
			arrLineActor.Add(j4);
			arrLineActor.Add(j5);
			arrLineActor.Add(j6);
			arrLineActor.Add(j7);
			arrLineActor.Add(j8);
			arrLineActor.Add(j9);
			arrLineActor.Add(j10);

			for (int intCount = 0; intCount < 10; ++intCount)
			{
				arrLineActor[intCount]->TextNumber->SetText(FText::FromString(FString::FromInt(intCount + 1)));
				arrLineActor[intCount]->intIndex=intCount;
				arrLineActor[intCount]->OwningGrid = this;
			}

			
			
			
		}
}


void AJackpotMain::PassValue(FString value)
{

	TSharedPtr<FJsonObject> JsonObject;
	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(value);
	
	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{
		FString strEventName = JsonObject->GetStringField("eventName");

		if (strEventName == "SetValues")
		{
			TArray<TSharedPtr<FJsonValue>> objArray = JsonObject->GetArrayField("values");

			for (int32 i = 0; i < objArray.Num(); i++)
			{
				auto obj = objArray[i]->AsObject();

				FString item1 = obj->GetStringField("Item1");
				FString item2 = obj->GetStringField("Item2");
				if (arrLineActor.Num() > 0)
				{
					arrLineActor[i]->TextNumber->SetText(FText::FromString(FString::FromInt(i + 1)));

					arrLineActor[i]->TextAnswerSingleLine->SetText(FText::FromString(""));
					arrLineActor[i]->TextAnswerLine1->SetText(FText::FromString(""));
					arrLineActor[i]->TextAnswerLine2->SetText(FText::FromString(""));
				}
				else
				{
					GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("No Records"));
				}

				if (item2 != "")
				{
					arrLineActor[i]->TextAnswerLine1->SetText(FText::FromString(item1));
					arrLineActor[i]->TextAnswerLine2->SetText(FText::FromString(item2));
				}
				else
				{
					arrLineActor[i]->TextAnswerSingleLine->SetText(FText::FromString(item1));
				}

				//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, item1);
			}
		}
		else if (strEventName == "Intro")
		{
			//int intIndex = JsonObject->GetIntegerField("index");
			arrLineActor[0]->StartIntro();
		}
		else if (strEventName == "Correct")
		{
		
			int intIndex = JsonObject->GetIntegerField("index");
		
			arrLineActor[intIndex]->StartRotate();

			// int intLastNode = JsonObject->GetIntegerField("lastNode");
			// if(intLastNode!=-1)
			// {
			// 	arrLineActor[intLastNode]->StartUnSelect();
			// }

		}
		else if (strEventName == "ResetAll")
		{
		
			for (int intCount = 0; intCount < 10; ++intCount)
			{
				 arrLineActor[intCount]->ResetAll();
			}

		}
		else if (strEventName == "Reset")
		{
			 int intIndex = JsonObject->GetIntegerField("index");
		
			 arrLineActor[intIndex]->StartRotateReset();
			 arrLineActor[intIndex]->StartUnSelect();
			
			// for (int intCount = 0; intCount < 10; ++intCount)
			// {
			// 	 arrLineActor[intCount]->StartRotateReset();
			// 	 
			// }

		}
		else if (strEventName == "Wrong")
		{
			int intIndex = JsonObject->GetIntegerField("index");
			arrLineActor[intIndex]->StartWrong();
			StartWrongMain();

			// int nextNode = JsonObject->GetIntegerField("nextNode");
			// if(nextNode!=-1)
			// {
			// 	arrLineActor[intIndex]->StartUnSelect();
			// 	arrLineActor[nextNode]->StartSelect();
			// }
		}
		else if (strEventName == "Reveal")
		{
			int intIndex = JsonObject->GetIntegerField("index");
			arrLineActor[intIndex]->StartReveal();
		}
		else if (strEventName == "Pass")
		{
			int intIndex = JsonObject->GetIntegerField("index");
			int intLastNode = JsonObject->GetIntegerField("lastNode");
			
			arrLineActor[intIndex]->StartSelect();

			if(intLastNode!=-1)
			{
				arrLineActor[intLastNode]->StartUnSelect();
			}
			// if(intIndex==0)		
			// {
			// 	arrLineActor[9]->StartUnSelect();
			// }
			// else if(intIndex>0)		
			// {
			// 	arrLineActor[intIndex-1]->StartUnSelect();
			// }
				
			 
		}
		else if (strEventName == "Select")
		{
			int intIndex = JsonObject->GetIntegerField("index");
			//int intLastNode = JsonObject->GetIntegerField("lastNode");
			
			arrLineActor[intIndex]->StartSelect();

			// if(intLastNode!=-1)
			// {
			// 	arrLineActor[intLastNode]->StartUnSelect();
			// }
			// if(intIndex==0)		
			// {
			// 	arrLineActor[9]->StartUnSelect();
			// }
			// else if(intIndex>0)		
			// {
			// 	arrLineActor[intIndex-1]->StartUnSelect();
			// }
				
			 
		}
		else if (strEventName == "UnSelect")
		{
			int intIndex = JsonObject->GetIntegerField("index");
			arrLineActor[intIndex]->StartUnSelect();
		}
		else if (strEventName == "Jackpot")
		{
			FString strForce=JsonObject->GetStringField("force");
			if(strForce=="true") //force to load
			UGameplayStatics::OpenLevel(this, "JackpotMap", false);
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
		else if (strEventName == "Humming")
		{
			UGameplayStatics::OpenLevel(this, "HummingMap");
		}
	}

}



void AJackpotMain::IntroFinishMain(int intIndexPass)
{
	if(intIndexPass<9)
	arrLineActor[intIndexPass+1]->StartIntro();
}

// Called every frame
void AJackpotMain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

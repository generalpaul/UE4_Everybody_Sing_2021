// // Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

// #include "SingProjectBlockGrid.h"
// #include "SingProjectBlock.h"
// #include "Components/TextRenderComponent.h"
// #include "Engine/World.h"

// #define LOCTEXT_NAMESPACE "PuzzleBlockGrid"

// ASingProjectBlockGrid::ASingProjectBlockGrid()
// {
// 	// Create dummy root scene component
// 	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
// 	RootComponent = DummyRoot;

// 	// Create static mesh component
// 	ScoreText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ScoreText0"));
// 	ScoreText->SetRelativeLocation(FVector(200.f,0.f,0.f));
// 	ScoreText->SetRelativeRotation(FRotator(90.f,0.f,0.f));
// 	ScoreText->SetText(FText::Format(LOCTEXT("ScoreFmt", "Score: {0}"), FText::AsNumber(0)));
// 	ScoreText->SetupAttachment(DummyRoot);

// 	// Set defaults
// 	Size = 3;
// 	BlockSpacing = 300.f;
// }


// void ASingProjectBlockGrid::BeginPlay()
// {
// 	Super::BeginPlay();

// 	// Number of blocks
// 	const int32 NumBlocks = Size * Size;

// 	// Loop to spawn each block
// 	for(int32 BlockIndex=0; BlockIndex<NumBlocks; BlockIndex++)
// 	{
// 		const float XOffset = (BlockIndex/Size) * BlockSpacing; // Divide by dimension
// 		const float YOffset = (BlockIndex%Size) * BlockSpacing; // Modulo gives remainder

// 		// Make position vector, offset from Grid location
// 		const FVector BlockLocation = FVector(XOffset, YOffset, 0.f) + GetActorLocation();

// 		// Spawn a block
// 		ASingProjectBlock* NewBlock = GetWorld()->SpawnActor<ASingProjectBlock>(BlockLocation, FRotator(0,0,0));

// 		// Tell the block about its owner
// 		if (NewBlock != nullptr)
// 		{
// 			NewBlock->OwningGrid = this;
// 		}
// 	}
// }


// void ASingProjectBlockGrid::AddScore()
// {
// 	// Increment score
// 	Score++;

// 	// Update text
// 	ScoreText->SetText(FText::Format(LOCTEXT("ScoreFmt", "Score: {0}"), FText::AsNumber(Score)));
// }

// #undef LOCTEXT_NAMESPACE


// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SingProjectBlockGrid.h"
#include "SingProjectBlock.h"
#include "Components/TextRenderComponent.h"
#include "Components/TextBlock.h"
#include "Engine/World.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Runtime/Online/HTTP/Public/HttpManager.h"
#include "Runtime/Online/HTTP/Public/HttpModule.h"
#include "Runtime/Online/HTTP/Public/HttpRetrySystem.h"
#include "Containers/UnrealString.h"
#include "LineActor.h"
#include "LineActorAnswer.h"
#include "Text3DComponent.h"

#define LOCTEXT_NAMESPACE "PuzzleBlockGridOK"

ASingProjectBlockGrid::ASingProjectBlockGrid()
{
	// Create dummy root scene component
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	// Set defaults
	Size = 3;
	BlockSpacing = 300.f;


	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UMaterial> BaseMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> BlueMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> BlankMaterial;

		ConstructorHelpers::FObjectFinderOptional<UMaterial> BaseBlurMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> BlurGlowMaterial;

		
		ConstructorHelpers::FObjectFinderOptional<UMaterial> GreenMaterial;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> RedMaterial;
		FConstructorStatics()
			: BaseMaterial(TEXT("/Game/Puzzle/Meshes/BaseMaterial.BaseMaterial"))
			, BlueMaterial(TEXT("/Game/Puzzle/Meshes/BlueMaterial.BlueMaterial"))
			, BlankMaterial(TEXT("/Game/Puzzle/Meshes/BlankMaterial.BlankMaterial"))
			
			
			, GreenMaterial(TEXT("/Game/Puzzle/Meshes/GreenMaterial.GreenMaterial"))
			, RedMaterial(TEXT("/Game/Puzzle/Meshes/RedMaterial.RedMaterial"))
			, BaseBlurMaterial(TEXT("/Game/Puzzle/Meshes/BaseBlurMaterial.BaseBlurMaterial"))
			, BlurGlowMaterial(TEXT("/Game/Puzzle/Meshes/BlurGlowMaterial.BlurGlowMaterial"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	
	BaseMaterial = ConstructorStatics.BaseMaterial.Get();
	BlueMaterial = ConstructorStatics.BlueMaterial.Get();
	GreenMaterial = ConstructorStatics.GreenMaterial.Get();
	RedMaterial = ConstructorStatics.RedMaterial.Get();
	BlankMaterial = ConstructorStatics.BlankMaterial.Get();

	BlurGlowMaterial = ConstructorStatics.BlurGlowMaterial.Get();
	BaseBlurMaterial = ConstructorStatics.BaseBlurMaterial.Get();

}


template<typename T>
void ASingProjectBlockGrid::FindAllActors(UWorld* World, TArray<T*>& Out)
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

void ASingProjectBlockGrid::BeginPlay()
{
	Super::BeginPlay();

	// Number of blocks
	const int32 NumBlocks = Size * Size;

    float floatLineStart = 0.f;
	// Loop to spawn each block
	for(int32 BlockIndex=0; BlockIndex<NumBlocks; BlockIndex++)
	{
		const float XOffset = (BlockIndex/Size) * BlockSpacing; // Divide by dimension
		const float YOffset = (BlockIndex%Size) * BlockSpacing; // Modulo gives remainder

		// Make position vector, offset from Grid location
		const FVector BlockLocation = FVector(XOffset, YOffset, 0.f);// + GetActorLocation();

		const FVector LineLocation = FVector(floatLineStart, 0.f , 0.f);// + GetActorLocation();
		floatLineStart+=300.f;
		// Spawn a block
		//ASingProjectBlock* NewBlock = GetWorld()->SpawnActor<ASingProjectBlock>(BlockLocation, FRotator(0,0,0));

		// ALineActor* haha = GetWorld	()->SpawnActor<ALineActor>(LineLocation,FRotator(0.0f, 0.0f, 0.0f));
		// arrLineActor.Add(haha);

		// Tell the block about its owner
		// if (NewBlock != nullptr)
		// {
		// 	NewBlock->OwningGrid = this;

		// 	haha->OwningGrid = this;
		// }
	}

	//FActorSpawnParameters SpawnInfo;
	
	

	// for(float i = 0; i < 5; i++)
	// {
	
	// 	ALineActor* haha = GetWorld()->SpawnActor<ALineActor>(FVector(200.0f, 0.0f, 0.0f),FRotator(0.0f, 0.0f, 0.0f),SpawnInfo);
	// 	arrLineActor.Add(haha);
	// 	//test[i]->SetRelativeLocationP(FVector(200.0f, ff, 100.0f));
	// 	//ff+=250.0f;
	
	
	// }


    Request = FHttpModule::Get().CreateRequest();

	Request->OnProcessRequestComplete().BindUObject(this, &ASingProjectBlockGrid::OnResponseReceived);
//   //This is the url on which to process the request 
	Request->SetURL("http://localhost:8092"); //https://jsonplaceholder.typicode.com/todos/1
	Request->SetVerb("GET"); Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent"); 
	Request->SetHeader("Content-Type", TEXT("application/json"));
	//Request->ProcessRequest(); 
	
        //not timer loop, one time only
	GetWorldTimerManager().SetTimer(tmr, this, &ASingProjectBlockGrid::RepeatingFunction, 0.1f, true, 0.1f);
	GetWorldTimerManager().SetTimer(tmrUpDown, this, &ASingProjectBlockGrid::RepeatingFunctionUpOrDown, 0.1f, true, 0.1f);



}




void ASingProjectBlockGrid::OnResponseReceived(FHttpRequestPtr RequestP, FHttpResponsePtr Response, bool bWasSuccessful)
{
	 //GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, TEXT("PASSED"));

    boolHasPassed=false;
	//Create a pointer to hold the json serialized data
	TSharedPtr<FJsonObject> JsonObject;

	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());
	//FString ff1= Response->GetContentAsString();
	//FString ff21= ff1.Mid(250,100);
	//GEngine->AddOnScreenDebugMessage(1, 2000.0f, FColor::Green, *ff21);
	//return;

	//float floatLineStartTop = -1500.f;
	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject) &&  JsonObject.IsValid())
	{

			int intId=JsonObject->GetIntegerField("id");
			
			
			if(intId==0)
			{

			}
			else if(intId==1)
			{
				float floatLineStart = -2000.f;
				if(intId==1 && arrLineActor.Num()>0)
				{
					for (int32 i = 0; i < arrLineActor.Num(); i++)
					{
						arrLineActor[i]->SetVerticalTop(floatLineStart);
						floatLineStart+=350.f;
					}	
					return;
				}
					

				//GEngine->AddOnScreenDebugMessage(1, 2000.0f, FColor::Green, TEXT("SET LYRICS"));

				//INTROS
				TArray<TSharedPtr<FJsonValue>> objArray = JsonObject->GetArrayField("intro");

				for (int32 i = 0; i < objArray.Num(); i++)
				{

					const FVector LineLocation = FVector(floatLineStart, 0.f , 0.f);// + GetActorLocation();
					floatLineStart+=350.f;
				
					ALineActor* tmpLine = GetWorld()->SpawnActor<ALineActor>(LineLocation,FRotator(0.0f, 0.0f, 0.0f));
					tmpLine->SetValue(objArray[i]->AsString());
					
					
					tmpLine->SetVerticalTop(floatLineStart);
					
					//haha->Destroy();

					arrLineActor.Add(tmpLine);

				}	


				//floatLineStart
				//BLANKS
				TArray<TSharedPtr<FJsonValue>> objArrayBlanks = JsonObject->GetArrayField("blanks");
			
				
				//FString fff = FString::FromInt(objArrayBlanks.Num());//FString::Printf(TEXT("%s"),FString::FromInt(objArrayBlanks.Num()));
			
			
				for (int32 i = 0; i < objArrayBlanks.Num(); i++)
				{

					// FString name = objArrayBlanks[i]->AsString();
					
					// TSharedPtr<FJsonValue> value = objArrayBlanks[i];
					// FString json = value->AsString();
				 	// FString sdfsdf = json.Mid(1,2);

						
					auto obj = objArrayBlanks[i]->AsObject();
					TSharedPtr<FJsonObject> Item1 = obj->GetObjectField("Item1");
					FString question1 = Item1->GetStringField("question");
					FString answer1 = Item1->GetStringField("answer");
					FString blank1 = Item1->GetStringField("blank");
					float blurleft1 = Item1->GetNumberField("blurleft");
					float blurwidth1 = Item1->GetNumberField("blurwidth");
			

					TSharedPtr<FJsonObject> Item2 = obj->GetObjectField("Item2");
					FString question2 = Item2->GetStringField("question");
					FString answer2 = Item2->GetStringField("answer");
					FString blank2 = Item2->GetStringField("blank");
					float blurleft2 = Item1->GetNumberField("blurleft");
					float blurwidth2 = Item1->GetNumberField("blurwidth");
					//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, serverName1);

					const FVector LineLocation = FVector(0.f, 0.f , 0.f);// + GetActorLocation();
				//	floatLineStart+=350.f;
				
					ALineActorAnswer* tmpLine = GetWorld()->SpawnActor<ALineActorAnswer>(LineLocation,FRotator(0.0f, 0.0f, 0.0f));
					tmpLine->Init(BaseMaterial, GreenMaterial, BlueMaterial, BlankMaterial, RedMaterial, 
					BlurGlowMaterial, BaseBlurMaterial);
					tmpLine->SetValue(question1, answer1, blank1, question2, answer2, blank2, blurleft1, blurleft2, blurwidth1, blurwidth2);
					//tmpLine->SetVerticalTop(floatLineStart);
					tmpLine->hide();
					arrLineActorBlanks.Add(tmpLine);

					//haha->Destroy();

				}	


				
			}
			else if(intId==2)
			{
				//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT("UP1"));
				 intUpOrDown = 1;
			}
			else if(intId==3)
			{
				//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT("DOWN1"));
				 intUpOrDown = 2;
			}
			else if(intId==4)
			{
				if(arrLineActorBlanks.Num()==0) return;

				int idIndex=JsonObject->GetIntegerField("idIndex");
				int trigger=JsonObject->GetIntegerField("trigger");
			
				if(trigger==0)
				{
					if(idIndex>0)
					{
						arrLineActorBlanks[idIndex-1]->hide();
					}

					// FString ff=FString::FromInt(idIndex);
					// GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, ff);
					arrLineActorBlanks[idIndex]->show();
				}
				else if(trigger==1)
				{
					arrLineActorBlanks[idIndex]->right(GreenMaterial, BlueMaterial);
				}
				else if(trigger==2)
				{
					arrLineActorBlanks[idIndex]->wrong(RedMaterial, BlueMaterial);
				}
				

				 //intUpOrDown = 0;
			}
			else if(intId==5) //show final output
			{
				float floatTop=JsonObject->GetNumberField("top");
				float floatLineStart = floatTop;
				for(int i=0; i<=arrLineActorBlanks.Num()-1;++i)
				{
					arrLineActorBlanks[i]->SetVerticalTopFinal(floatLineStart, BlankMaterial, RedMaterial, BlueMaterial);
					if(!arrLineActorBlanks[i]->fStrHasTwoLines())
					    floatLineStart+=350;
					else
					    floatLineStart+=650;
				}	
			}
			else if(intId==6) //hide all
			{
				for(int i=0; i<=arrLineActorBlanks.Num()-1;++i)
				{
					arrLineActorBlanks[i]->hide();
				}	

				for(int i=0; i<=arrLineActor.Num()-1;++i)
				{
					arrLineActor[i]->hide();
				}	
			}
			else if(intId==7) //scroll up or down
			{
				float floatScroll =JsonObject->GetNumberField("scroll");
				for(int i=0; i<=arrLineActor.Num()-1;++i)
				{
					arrLineActor[i]->setScroll(floatScroll);
				}	
			}
			else if(intId==8) // reset
			{
				for(int i=0; i<=arrLineActor.Num()-1;++i)
				{
					arrLineActor[i]->Destroy();
				}	

				arrLineActor.Empty();

				for(int i=0; i<=arrLineActorBlanks.Num()-1;++i)
				{
					arrLineActorBlanks[i]->Destroy();
					//arrLineActorBlanks.Pop(true);
				}	
				
				arrLineActorBlanks.Empty();
			}
			// else if(intId==2)
			// {
			// 	for(int i=0; i<=arrLineActor.Num();++i)
			// 	{
			// 		arrLineActor[i]->Destroy();
			// 	}
			// }

			
	}




}




void ASingProjectBlockGrid::RepeatingFunctionUpOrDown()
{
	//FString::FromInt(arrLineActor.Num())
	//GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT(arrLineActor.Num()));
	    
		if(intUpOrDown==1)
		{
			if(arrLineActor.Num()>0)
			{
				for(int i=0; i<=arrLineActor.Num()-1;++i)
				{
					arrLineActor[i]->MoveUp(10.f);
				}	

				for(int i=0; i<=arrLineActorBlanks.Num()-1;++i)
				{
					arrLineActorBlanks[i]->MoveUp(10.f);
					// arrLineActorBlanksAnswer[i]->MoveUp(10.f);
					// arrLineActorBlanksUnderscore[i]->MoveUp(10.f);

				}	
			}
			
			// else
			// 	GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT("NO1"));
			
			//intUpOrDown=100;
		}
		else if(intUpOrDown==2)
		{
			if(arrLineActor.Num()>0)
			{
				for(int i=0; i<=arrLineActor.Num()-1;++i)
				{
					arrLineActor[i]->MoveDown(10.f);
				}	
				for(int i=0; i<=arrLineActorBlanks.Num()-1;++i)
				{
					arrLineActorBlanks[i]->MoveDown(10.f);
					// arrLineActorBlanksAnswer[i]->MoveDown(10.f);
					// arrLineActorBlanksUnderscore[i]->MoveDown(10.f);

				}	

			}
			// else
			// {
			// 	GEngine->AddOnScreenDebugMessage(2, 2000.0f, FColor::Green, TEXT("NO2"));
			// }

			//intUpOrDown=100;
		}

		
}
void ASingProjectBlockGrid::RepeatingFunction()
{
	//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Blue, TEXT("LOOP"));

    if(boolHasPassed)
	{
	//	GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::White, TEXT("PASOK"));
	}
	else
	{
	//	GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::White, TEXT("FALSE"));
	}
	

	if(!boolHasPassed)
	{
		boolHasPassed=true;
		Request->ProcessRequest(); 
		return;
	}
    
	
	// if(!hasConnection)
	// {
	// 	GEngine->AddOnScreenDebugMessage(1, 600.0f, FColor::Green, TEXT("NO CONNECTION"));
	// }


}


void ASingProjectBlockGrid::AddScore()
{
	// Increment score
	Score++;
Score++;
	// Update text
	ScoreText->SetText(FText::Format(LOCTEXT("ScoreFmt", "Score: {0}"), FText::AsNumber(Score)));
}

#undef LOCTEXT_NAMESPACE

// Fill out your copyright notice in the Description page of Project Settings.


#include "WordCloudContainer.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AWordCloudContainer::AWordCloudContainer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;
}

// Called when the game starts or when spawned
void AWordCloudContainer::BeginPlay()
{
	Super::BeginPlay();
	
		if (arrWordCloudItems.Num() == 0)
		{
			arrWordCloudItems.Empty();
			arrWordCloudItems.Add(i1);
			arrWordCloudItems.Add(i2);
			arrWordCloudItems.Add(i3);
			arrWordCloudItems.Add(i4);
			arrWordCloudItems.Add(i5);
			arrWordCloudItems.Add(i6);
			arrWordCloudItems.Add(i7);
			arrWordCloudItems.Add(i8);

			arrIsDisabled.Add(false);
			arrIsDisabled.Add(false);
			arrIsDisabled.Add(false);
			arrIsDisabled.Add(false);
			arrIsDisabled.Add(false);
			arrIsDisabled.Add(false);
			arrIsDisabled.Add(false);
			arrIsDisabled.Add(false);

			arrIsHidden.Add(false);
			arrIsHidden.Add(false);
			arrIsHidden.Add(false);
			arrIsHidden.Add(false);
			arrIsHidden.Add(false);
			arrIsHidden.Add(false);
			arrIsHidden.Add(false);
			arrIsHidden.Add(false);

			for (int intCount = 0; intCount < 8; ++intCount)
			{
				//arrWordCloudItems[intCount]->WWord->SetText(FText::FromString(" "));
				//arrWordCloudItems[intCount]->WUnderline->SetText(FText::FromString(" "));
				// arrWordCloudItems[intCount]->WWord->SetRelativeLocation(FVector(0,0,8000));
				// arrWordCloudItems[intCount]->WUnderline->SetRelativeLocation(FVector(0,0,8000));
				arrWordCloudItems[intCount]->intIndex=intCount;
				arrWordCloudItems[intCount]->OwningGrid = this;

				arrWordCloudItems[intCount]->SetupAttachmentWordProp(DummyRoot);
				arrTopFrom.Add(0);
				arrLeftFrom.Add(0);

				arrTopTo.Add(0);
				arrLeftTo.Add(0);
			}

			DummyRoot->SetRelativeLocation(FVector(0,0,8000));


		   // FOnTimelineEventStatic TimelineFinishedCallback;

			TimelineCallback.BindUFunction(this, FName("ControlZoom"));
			//TimelineFinishedCallback.BindUFunction(this, FName{ TEXT("ZoomFinish") });
			ZoomTimeline.AddInterpFloat(ZoomCurve, TimelineCallback);
			//ZoomTimeline.SetTimelineFinishedFunc(TimelineFinishedCallback);


			
		    //FOnTimelineEventStatic TimelineFinishedCallbackShow;

			ShowTimeline.BindUFunction(this, FName("ControlZoomShow"));
			//TimelineFinishedCallbackShow.BindUFunction(this, FName{ TEXT("ZoomFinishShow") });
			ZoomTimelineShow.AddInterpFloat(ZoomCurveShow, ShowTimeline);
			//ZoomTimelineShow.SetTimelineFinishedFunc(TimelineFinishedCallbackShow);
			
			//ZoomTimeline.SetLooping(true);
		}
	
}

void AWordCloudContainer::ControlZoomShow(float Value)
{
	FVector newLocation = FMath::Lerp(FVector(0,0,0),FVector(0,0,8000), Value);
	this->SetActorRelativeLocation(newLocation);								
}

void AWordCloudContainer::ControlZoom(float Value)
{
	for (int32 i = 0; i < 8; i++)
	{
		//
		if(!arrIsDisabled[i] && !arrIsHidden[i])	
		{
			FVector newLocation = FMath::Lerp(FVector(arrTopTo[i]*-1,arrLeftTo[i]*-1,0),FVector(arrTopFrom[i]*-1,arrLeftFrom[i]*-1,0), Value);
			arrWordCloudItems[i]->WWord->SetRelativeLocation(newLocation);
		}
	}
	
}



// Called every frame
void AWordCloudContainer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ZoomTimeline.TickTimeline(DeltaTime);
	ZoomTimelineShow.TickTimeline(DeltaTime);
}




void AWordCloudContainer::ShowAnswer(FString answer)
{
		for (int32 i = 0; i < 8; i++)
		{
			if(!arrIsDisabled[i] && !arrIsHidden[i])	
			if(answer=="true")
			{
				arrWordCloudItems[i]->WWord->SetBevelMaterial(BevelGreenMaterial);
				arrWordCloudItems[i]->WWord->SetFrontMaterial(FrontGreenMaterial);
				arrWordCloudItems[i]->WWord->SetExtrudeMaterial(ExtrudeGreenMaterial);
			}
			else
			{
				arrWordCloudItems[i]->WWord->SetBevelMaterial(BevelRedMaterial);
				arrWordCloudItems[i]->WWord->SetFrontMaterial(FrontRedMaterial);
				arrWordCloudItems[i]->WWord->SetExtrudeMaterial(ExtrudeRedMaterial);
			}

		}

		ZoomTimeline.PlayFromStart();
}


void AWordCloudContainer::ShowAnswerUnderline(FString answer)
{
		for (int32 i = 0; i < 8; i++)
		{
			if(!arrIsDisabled[i] && !arrIsHidden[i])	
			if(answer=="true")
			{
				arrWordCloudItems[i]->WUnderline->SetBevelMaterial(BevelGreenMaterial);
				arrWordCloudItems[i]->WUnderline->SetFrontMaterial(FrontGreenMaterial);
				arrWordCloudItems[i]->WUnderline->SetExtrudeMaterial(ExtrudeGreenMaterial);

				arrWordCloudItems[i]->WWord->SetBevelMaterial(BevelGreenMaterial);
				arrWordCloudItems[i]->WWord->SetFrontMaterial(FrontGreenMaterial);
				arrWordCloudItems[i]->WWord->SetExtrudeMaterial(ExtrudeGreenMaterial);
			}
			else
			{
				arrWordCloudItems[i]->WUnderline->SetBevelMaterial(BevelRedMaterial);
				arrWordCloudItems[i]->WUnderline->SetFrontMaterial(FrontRedMaterial);
				arrWordCloudItems[i]->WUnderline->SetExtrudeMaterial(ExtrudeRedMaterial);

				arrWordCloudItems[i]->WWord->SetBevelMaterial(BevelRedMaterial);
				arrWordCloudItems[i]->WWord->SetFrontMaterial(FrontRedMaterial);
				arrWordCloudItems[i]->WWord->SetExtrudeMaterial(ExtrudeRedMaterial);
			}

		}
		
}



// Called every frame
void AWordCloudContainer::setValues(FString values, FString type)
{
	//TSharedPtr<FJsonObject> values = values->GetObjectField("lst");
	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(values);
	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{
		
		
			TArray<TSharedPtr<FJsonValue>> objArray = JsonObject->GetArrayField("lst");

			for (int32 i = 0; i < objArray.Num(); i++)
			{
				//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Red, TEXT("PASSED"));
				auto obj = objArray[i]->AsObject();
				FString question = obj->GetStringField("strWord");

				double dblWordLeft;
				double dblWordTop;
				
				arrLeftFrom[i] = obj->GetNumberField("dblWordLeftStart");
				arrTopFrom[i] = obj->GetNumberField("dblWordTopStart");
				arrLeftTo[i] = obj->GetNumberField("dblWordLeftEnd");
				arrTopTo[i] = obj->GetNumberField("dblWordTopEnd");

				if(type=="ShowWords" || type=="ShowWordsStart")
				{
					dblWordLeft = obj->GetNumberField("dblWordLeftStart");
 					dblWordTop = obj->GetNumberField("dblWordTopStart");

					arrWordCloudItems[i]->WWord->SetText(FText::FromString(question));
					arrWordCloudItems[i]->WUnderline->SetText(FText::FromString(" "));

					
				}
				else
				{
					dblWordLeft = obj->GetNumberField("dblWordLeftEnd");
 					dblWordTop = obj->GetNumberField("dblWordTopEnd");

					double dblUnderlineLeft = obj->GetNumberField("dblUnderlineLeft");
				    double dblUnderlineTop = obj->GetNumberField("dblUnderlineTop");

					FString strUnderline = obj->GetStringField("strUnderline");
					arrWordCloudItems[i]->WUnderline->SetText(FText::FromString(strUnderline));

					arrWordCloudItems[i]->WUnderline->SetRelativeLocation(FVector(dblUnderlineTop*-1,dblUnderlineLeft*-1,0));
				}

				arrIsHidden[i]=obj->GetBoolField("isHidden");
				arrIsDisabled[i]=obj->GetBoolField("isDisabled");

								
				arrWordCloudItems[i]->WWord->SetBevelMaterial(BevelDefaultMaterial);
				arrWordCloudItems[i]->WWord->SetFrontMaterial(FrontDefaultMaterial);
				arrWordCloudItems[i]->WWord->SetExtrudeMaterial(ExtrudeDefaultMaterial);

				arrWordCloudItems[i]->WUnderline->SetBevelMaterial(BevelDefaultMaterial);
				arrWordCloudItems[i]->WUnderline->SetFrontMaterial(FrontDefaultMaterial);
				arrWordCloudItems[i]->WUnderline->SetExtrudeMaterial(ExtrudeDefaultMaterial);
				
				arrWordCloudItems[i]->WWord->SetText(FText::FromString(question));

				if(type=="ShowWordsOut")
				{
					arrWordCloudItems[i]->WWord->SetRelativeLocation(FVector(dblWordTop*-1,dblWordLeft*-1,-8000));
				}
				else
				{
					arrWordCloudItems[i]->WWord->SetRelativeLocation(FVector(dblWordTop*-1,dblWordLeft*-1,0));
				}
				
				

				//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, dblWordLeftStart);
				//  FString answer = obj->GetStringField("Item2");
				//  float answerLeft = obj->GetNumberField("Item3");
				//  FString isCorrect = obj->GetStringField("Item4");
			}

		//	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, type);

			if(type=="ShowWordsStart")// && !ReadyStateZoomShow
			{
					//ReadyStateZoomShow = true;		
						for (int32 i = 0; i < 8; i++)
						{
							//!arrIsDisabled[i] && 
							if(!arrIsHidden[i])	
							{
								//FVector newLocation = FMath::Lerp(FVector(arrTopFrom[i]*-1,arrLeftFrom[i]*-1,0),FVector(arrTopFrom[i]*-1,arrLeftFrom[i]*-1,8000), Value);
								arrWordCloudItems[i]->WWord->SetRelativeLocation(FVector(arrTopFrom[i]*-1,arrLeftFrom[i]*-1,0));
							}
						}
						

					ZoomTimelineShow.PlayFromStart();
				
			}
		

	}

	
}

void AWordCloudContainer::ResetAll()
{
	for (int32 i = 0; i < 8; i++)
	{
		arrWordCloudItems[i]->WWord->SetText(FText::FromString(" "));
		arrWordCloudItems[i]->WUnderline->SetText(FText::FromString(" "));
	}

}

void AWordCloudContainer::ShowWordsEnd()
{
		for (int32 i = 0; i < 8; i++)
		{
				FVector init =  arrWordCloudItems[i]->WWord->GetRelativeLocation();
				init.Z = 0;
				arrWordCloudItems[i]->WWord->SetRelativeLocation(init);
				
		}
}
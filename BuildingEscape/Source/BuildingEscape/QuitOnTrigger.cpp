// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Controller.h"
#include "Kismet/KismetSystemLibrary.h"
#include "QuitOnTrigger.h"

// Sets default values for this component's properties
UQuitOnTrigger::UQuitOnTrigger()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UQuitOnTrigger::BeginPlay()
{
	Super::BeginPlay();
	PlayerActor = GetWorld()->GetFirstPlayerController()->GetPawn();

	// ...
}

// Called every frame
void UQuitOnTrigger::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	TArray<AActor *> OverlappingActors;

	TriggerBox->GetOverlappingActors(OverlappingActors);

	for (AActor *actor : OverlappingActors)
	{
		if (actor == PlayerActor)
		{
			GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");
		}
	}

	// ...
}

// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/Actor.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "OpenDoor.h"

#define OUT

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();
	InitialYaw = GetOwner()->GetActorRotation().Yaw; //picth = y, z = yaw, x = roll
	InitialZ = GetOwner()->GetActorLocation().Z;
	OpenAngle += InitialYaw;
	if (!PressurePlate)
	{
		UE_LOG(LogTemp, Error, TEXT("%s does not have a pressure plate object set!"), *GetOwner()->GetName());
	}
}

// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (TotalMassofActors() >= MassToOpen)
	{
		OpenDoor(DeltaTime);
		if (!OpenDoorSound)
		{
			PlaySound();
			OpenDoorSound = true;
			CloseDoorSound = false;
		}
		DoorLastOpened = GetWorld()->GetTimeSeconds();
	}

	else
	{
		if (GetWorld()->GetTimeSeconds() >= DoorLastOpened + DoorCloseDelay)
		{
			if (!CloseDoorSound)
			{
				PlaySound();
				CloseDoorSound = true;
				OpenDoorSound = false;
			}
			CloseDoor(DeltaTime);
		}
	}
}

void UOpenDoor::PlaySound()
{
	UAudioComponent *Audio = GetOwner()->FindComponentByClass<UAudioComponent>();
	if (!Audio)
	{
		UE_LOG(LogTemp, Error, TEXT("No audio component on %s"), *(GetOwner()->GetName()));
		return;
	}
	Audio->Play();
}

void UOpenDoor::OpenDoor(float DeltaTime)
{
	if (useRotation)
	{
		FRotator CurrentRotation = GetOwner()->GetActorRotation(); //picth = y, z = yaw, x = roll

		CurrentYaw = CurrentRotation.Yaw;

		CurrentRotation.Yaw = FMath::FInterpTo(CurrentYaw, OpenAngle, DeltaTime, OpenSpeed);

		GetOwner()->SetActorRotation(CurrentRotation); // ...

		return;
	}

	FVector CurrentLocation = GetOwner()->GetActorLocation();

	CurrentZ = CurrentLocation.Z;

	CurrentLocation.Z = FMath::FInterpTo(CurrentZ, FinalZ, DeltaTime, OpenSpeed);

	GetOwner()->SetActorLocation(CurrentLocation);
}

void UOpenDoor::CloseDoor(float DeltaTime)
{
	if (useRotation)
	{
		FRotator CurrentRotation = GetOwner()->GetActorRotation(); //picth = y, z = yaw, x = roll

		CurrentYaw = CurrentRotation.Yaw;

		CurrentRotation.Yaw = FMath::FInterpConstantTo(CurrentYaw, InitialYaw, DeltaTime, CloseDegreesPerSecond);

		GetOwner()->SetActorRotation(CurrentRotation); // ...

		return;
	}
	FVector CurrentLocation = GetOwner()->GetActorLocation();

	CurrentZ = CurrentLocation.Z;

	CurrentLocation.Z = FMath::FInterpConstantTo(CurrentZ, InitialZ, DeltaTime, CloseDegreesPerSecond);

	GetOwner()->SetActorLocation(CurrentLocation);
}

float UOpenDoor::TotalMassofActors() const
{
	float TotalMass = 0.0f;
	TArray<AActor *> OverlappingActors;
	if (!PressurePlate)
	{
		return 0.0f;
	}
	PressurePlate->GetOverlappingActors(OUT OverlappingActors);

	for (AActor *Actor : OverlappingActors)
	{
		UE_LOG(LogTemp, Warning, TEXT("Actor %s is on the plate"), *(Actor->GetName()));
		UE_LOG(LogTemp, Warning, TEXT("Mass on plate is %f"), Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass());
		TotalMass += Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}

	return TotalMass;
}

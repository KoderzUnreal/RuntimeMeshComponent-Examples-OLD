// Copyright 2016-2019 Chris Conway (Koderz). All Rights Reserved.


#include "BasicCubeProviderRMC.h"
#include "Providers/RuntimeMeshProviderBox.h"
#include "Materials/Material.h"

// Sets default values
ABasicCubeProviderRMC::ABasicCubeProviderRMC()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABasicCubeProviderRMC::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABasicCubeProviderRMC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABasicCubeProviderRMC::GenerateMeshes_Implementation()
{
	URuntimeMeshProviderBox* CubeProvider = NewObject<URuntimeMeshProviderBox>(this);
	CubeProvider->BoxRadius = FVector(100, 100, 100);
	CubeProvider->Material = UMaterial::GetDefaultMaterial(MD_Surface);

	GetRuntimeMeshComponent()->GetOrCreateRuntimeMesh()->Initialize(CubeProvider);
}


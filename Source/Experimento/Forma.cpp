#include "Forma.h"

AForma::AForma()
{
	PrimaryActorTick.bCanEverTick = false;
	MeshForma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshForma"));
	RootComponent = MeshForma;
}

void AForma::BeginPlay()
{
	Super::BeginPlay();
	
}

void AForma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


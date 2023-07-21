#include "Prisma.h"

APrisma::APrisma()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));
	MeshForma->SetStaticMesh(Mesh.Object);
	MaterialForma = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/StarterContent/Materials/M_CobbleStone_Rough.M_CobbleStone_Rough'"));
	MeshForma->SetMaterial(0, MaterialForma);
}

void APrisma::BeginPlay()
{
	Super::BeginPlay();
	Locacion = FVector(-500.0f, 100.0f, -30.0f);
	Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	Escala = FVector(1.0f, 1.0f, 1.0f);
	MeshForma->SetWorldScale3D(Escala);
	MeshForma->SetRelativeLocation(Locacion);
	MeshForma->SetRelativeRotation(Rotacion);
}

void APrisma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APrisma::HacerAlgo()
{
	auto Scale = this->GetActorScale3D();
	Scale += FVector(1.0f, 1.0f, 1.0f);
	this->SetActorScale3D(Scale);
}

#include "Esfera.h"

AEsfera::AEsfera()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	MeshForma->SetStaticMesh(Mesh.Object);
	MaterialForma = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel'"));
	MeshForma->SetMaterial(0, MaterialForma);
}

void AEsfera::BeginPlay()
{
	Super::BeginPlay();
	Locacion = FVector(-500.0f, -100.0f, -30.0f);
	Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	Escala = FVector(0.5f, 0.5f, 0.5f);
	MeshForma->SetWorldScale3D(Escala);
	MeshForma->SetRelativeLocation(Locacion);
	MeshForma->SetRelativeRotation(Rotacion);
}

void AEsfera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEsfera::HacerAlgo()
{
	auto Location = this->GetActorLocation();
	Location += FVector(30.0f, 50.0f, 30.0f);
	this->SetActorRelativeLocation(Location);
}

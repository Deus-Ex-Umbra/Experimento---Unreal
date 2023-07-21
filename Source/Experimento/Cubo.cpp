#include "Cubo.h"

ACubo::ACubo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MeshForma->SetStaticMesh(Mesh.Object);
	MaterialForma = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/StarterContent/Materials/M_Water_Ocean.M_Water_Ocean'"));
	MeshForma->SetMaterial(0, MaterialForma);
}

void ACubo::BeginPlay()
{
	Super::BeginPlay();
	Locacion = FVector(-500.0f, 0.0f, -30.0f);
	Rotacion = FRotator(0.0f, 0.0f, 0.0f);
	Escala = FVector(0.5f, 0.5f, 0.5f);
	MeshForma->SetWorldScale3D(Escala);
	MeshForma->SetRelativeLocation(Locacion);
	MeshForma->SetRelativeRotation(Rotacion);
}

void ACubo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACubo::HacerAlgo()
{
	auto Rotation = this->GetActorRotation();
	Rotation += FRotator(50.0f, 25.0f, 45.0f);
	this->SetActorRotation(Rotation);
}
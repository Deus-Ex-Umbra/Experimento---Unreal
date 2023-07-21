#include "ExperimentoGameModeBase.h"
#include "Forma.h"
#include "Esfera.h"
#include "Cubo.h"
#include "Prisma.h"

AExperimentoGameModeBase::AExperimentoGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	tiempocontrol = 0.0f;
	tiempo = 3.0f;
	Formas = TArray<AForma*>();
	contador = 0;
}

void AExperimentoGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	Esfera = GetWorld()->SpawnActor<AEsfera>(FVector(0.0f, 0.0f, 0.0f), FRotator::ZeroRotator);
	Cubo = GetWorld()->SpawnActor<ACubo>(FVector(0.0f, 0.0f, 0.0f), FRotator::ZeroRotator);
	Prisma = GetWorld()->SpawnActor<APrisma>(FVector(0.0f, 0.0f, 0.0f), FRotator::ZeroRotator);
	Formas.Add(Esfera);
	Formas.Add(Cubo);
	Formas.Add(Prisma);
}

void AExperimentoGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	tiempocontrol += DeltaTime;
	if (tiempocontrol >= tiempo) {
		tiempocontrol = 0.0f;
		Formas[contador]->HacerAlgo();
		contador++;
		if (contador >= Formas.Num()) {
			contador = 0;
		}
	}
}


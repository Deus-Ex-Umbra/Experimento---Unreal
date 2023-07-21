#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Components/TextRenderComponent.h"
#include "ExperimentoGameModeBase.generated.h"

UCLASS()
class EXPERIMENTO_API AExperimentoGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AExperimentoGameModeBase();
	virtual void Tick(float DeltaTime) override;
private:
	virtual void BeginPlay() override;
	class AEsfera* Esfera;
	class ACubo* Cubo;
	class APrisma* Prisma;
	TArray<class AForma*> Formas;
	float tiempocontrol;
	float tiempo;
	int contador;
};

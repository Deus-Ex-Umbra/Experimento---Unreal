#pragma once

#include "CoreMinimal.h"
#include "Forma.h"
#include "Esfera.generated.h"

UCLASS()
class EXPERIMENTO_API AEsfera : public AForma
{
	GENERATED_BODY()
public:
	AEsfera();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void HacerAlgo() override;
};

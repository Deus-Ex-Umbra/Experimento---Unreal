#pragma once

#include "CoreMinimal.h"
#include "Forma.h"
#include "Cubo.generated.h"

UCLASS()
class EXPERIMENTO_API ACubo : public AForma
{
	GENERATED_BODY()
public:
	ACubo();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void HacerAlgo() override;
};

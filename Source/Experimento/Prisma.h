#pragma once

#include "CoreMinimal.h"
#include "Forma.h"
#include "Prisma.generated.h"

UCLASS()
class EXPERIMENTO_API APrisma : public AForma
{
	GENERATED_BODY()
public:
	APrisma();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void HacerAlgo() override;
};

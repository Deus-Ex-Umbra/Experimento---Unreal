#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Forma.generated.h"

UCLASS(Abstract)
class EXPERIMENTO_API AForma : public AActor
{
	GENERATED_BODY()
public:	
	AForma();
protected:
	UPROPERTY()
		UStaticMeshComponent* MeshForma;
	UPROPERTY()
		UMaterial* MaterialForma;
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	FVector Locacion;
	FRotator Rotacion;
	FVector Escala;
	virtual void HacerAlgo() PURE_VIRTUAL(AForma::HacerAlgo, );
};
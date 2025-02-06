#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatingPlatform.generated.h"

UCLASS()
class SPARTA2_API ARotatingPlatform : public AActor
{
    GENERATED_BODY()

public:
    // ������: �⺻ �� ����
    ARotatingPlatform();

protected:
    // ���� ���� �� ȣ��
    virtual void BeginPlay() override;

public:
    // �� ������ ȣ�� (DeltaTime: ������ �������� ���� ���)
    virtual void Tick(float DeltaTime) override;

    // **Static Mesh Component**: �����Ϳ��� ���̰� ���� �����ϵ���!
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* PlatformMesh;

    // ȸ�� �ӵ� (�ʴ� �� �� ȸ������)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
    float RotationSpeed;
};

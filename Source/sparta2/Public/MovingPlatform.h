#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class SPARTA2_API AMovingPlatform : public AActor
{
    GENERATED_BODY()

public:
    // ������: �⺻ �� ����
    AMovingPlatform();

protected:
    // ���� ���� �� ȣ��
    virtual void BeginPlay() override;

public:
    // �� ������ ȣ�� (DeltaTime: ������ �������� ���� ���)
    virtual void Tick(float DeltaTime) override;

    // Static Mesh Component
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* PlatformMesh;

    // �̵� �ӵ� (����/��)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
    float MoveSpeed;

    // �ִ� �̵� ���� (���� ��ġ�κ����� �Ÿ�)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
    float MaxRange;

    // �̵� ���� (��: X�� ����)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
    FVector MoveDirection;

private:
    // �ʱ� ���� ��ġ ����
    FVector StartLocation;
    // ���� �̵� ���� ���� (������/������)
    bool bMovingForward;
};
